#pragma once

// Structure: CConsole
// Ghidra size: 0xfbc (4028 bytes)
typedef struct CConsole {
    int fileLoggingEnabled; // 0x0
    char consoleBuffer[4000]; // 0x4
    int currentColumn; // 0xfa4
    int currentRow; // 0xfa8
    int consoleWidth; // 0xfac
    int consoleHeight; // 0xfb0
    int screenX; // 0xfb4
    int screenY; // 0xfb8
} CConsole;

