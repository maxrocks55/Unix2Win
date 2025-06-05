#ifdef _WIN32
#include <windows.h>

// Sleep for the given number of seconds
void sleep(unsigned int seconds) {
    Sleep(seconds * 1000);
}

// Sleep for the given number of microseconds
void usleep(unsigned int microseconds) {
    DWORD ms = microseconds / 1000;
    if (ms == 0 && microseconds > 0) ms = 1;
    Sleep(ms);
}

// Create a directory (mode parameter ignored on Windows)
int mkdir(const char* path, int mode) {
    (void)mode; // Ignored on Windows
    BOOL result = CreateDirectory(path, NULL);
    if (result == 0) {
        return -1;  // Failure
    }
    return 0;  // Success
}

#else
#include <unistd.h>  // Unix sleep/usleep
#include <sys/stat.h> // Unix mkdir
#endif
