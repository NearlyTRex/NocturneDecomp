#pragma once

// Function prototypes for wincore/wddvmem.cpp
// Generated from Ghidra function signatures

// Original: wincore_wddvmem.cpp_initTextureCache_FUN_005dd760
// Address: 00403790
CTextureCache * initTextureCache(void);

// Original: wincore_wddvmem.cpp_freeTextureCache_FUN_005dd7a0
// Address: 004037a0
void freeTextureCache(void);

// Original: wincore_wddvmem.cpp_initializeColorMasks_FUN_004f3ff0
// Address: 004f3ff0
ulonglong initializeColorMasks(void);

// Original: wincore_wddvmem.cpp_populateColorTable_FUN_004f4140
// Address: 004f4140
ulonglong populateColorTable(void);

// Original: wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004f41c0
// Address: 004f41c0
void convertPaletteToDirectColor(void);

// Original: wincore_wddvmem.cpp_cleanupDirectDrawSurfaces_FUN_005ec920
// Address: 005ec920
void cleanupDirectDrawSurfaces(void);

// Original: wincore_wddvmem.cpp_reinitializeDirectDraw_FUN_005ec980
// Address: 005ec980
int reinitializeDirectDraw(void);

// Original: wincore_wddvmem.cpp_shutdownDirectDraw_FUN_005eca30
// Address: 005eca30
int shutdownDirectDraw(void);

// Original: wincore_wddvmem.cpp_allocateRenderBuffers_FUN_005ecac0
// Address: 005ecac0
void allocateRenderBuffers(void);

// Original: wincore_wddvmem.cpp_freeRenderBuffers_FUN_005ecba0
// Address: 005ecba0
void freeRenderBuffers(void);

// Original: wincore_wddvmem.cpp_initializeGraphicsSystem_FUN_005ecc10
// Address: 005ecc10
int initializeGraphicsSystem(void);

// Original: wincore_wddvmem.cpp_cleanupGraphicsSystem_FUN_005ecd90
// Address: 005ecd90
void cleanupGraphicsSystem(void);

// Original: wincore_wddvmem.cpp_initializeScanlinePointers_FUN_005ece60
// Address: 005ece60
void initializeScanlinePointers(void);

// Original: wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0
// Address: 005ecef0
int setScreenResolution(int width, int height, int bits_per_pixel);

// Original: wincore_wddvmem.cpp_resetGraphicsSystem_FUN_005ed2a0
// Address: 005ed2a0
void resetGraphicsSystem(void);

// Original: wincore_wddvmem.cpp_reinitializeGraphicsSystem_FUN_005ed4b0
// Address: 005ed4b0
void reinitializeGraphicsSystem(void);

// Original: wincore_wddvmem.cpp_openScreenDevice_FUN_005ed580
// Address: 005ed580
void openScreenDevice(void);

// Original: wincore_wddvmem.cpp_closeScreenDevice_FUN_005ed630
// Address: 005ed630
void closeScreenDevice(void);

// Original: wincore_wddvmem.cpp_findMostSignificantBit_FUN_005ed710
// Address: 005ed710
int findMostSignificantBit(uint value);

// Original: wincore_wddvmem.cpp_analyzePixelFormat_FUN_005ed730
// Address: 005ed730
void analyzePixelFormat(void);

// Original: wincore_wddvmem.cpp_setupColorPalette_FUN_005ed8f0
// Address: 005ed8f0
void setupColorPalette(void);

// Original: wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
// Address: 005eda20
void swapBuffers(void);

// Original: wincore_wddvmem.cpp_restoreVideoAndMinimizeWindow_FUN_005edc50
// Address: 005edc50
void restoreVideoAndMinimizeWindow(void);

// Original: wincore_wddvmem.cpp_videoRestore_FUN_005edc80
// Address: 005edc80
void videoRestore(void);

// Original: wincore_wddvmem.cpp_stubFunction_FUN_005edd80
// Address: 005edd80
void stubFunction(void);

// Original: wincore_wddvmem.cpp_freeLibrary_FUN_005ede00
// Address: 005ede00
BOOL freeLibrary(HMODULE hLibModule);

// Original: wincore_wddvmem.cpp_loadLibrary_FUN_005ede10
// Address: 005ede10
HMODULE loadLibrary(LPCSTR lpLibFileName);

// Original: wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
// Address: 005ede20
FARPROC getProcAddress(HMODULE hModule, LPCSTR lpProcName);
