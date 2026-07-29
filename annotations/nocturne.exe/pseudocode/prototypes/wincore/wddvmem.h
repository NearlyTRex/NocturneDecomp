#pragma once

// Function prototypes for wincore/wddvmem.cpp
// Generated from Ghidra function signatures

// Original: wincore_wddvmem.cpp_initializeColorMasks_FUN_004b6220
// Address: 004b6220
void __cdecl initializeColorMasks(void);

// Original: wincore_wddvmem.cpp_populateColorTable_FUN_004b6370
// Address: 004b6370
void __cdecl populateColorTable(void);

// Original: wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004b63f0
// Address: 004b63f0
void __cdecl convertPaletteToDirectColor(void);

// Original: wincore_wddvmem.cpp_reinitializeDirectDraw_FUN_005528e0
// Address: 005528e0
int __cdecl reinitializeDirectDraw(void);

// Original: wincore_wddvmem.cpp_shutdownDirectDraw_FUN_00552990
// Address: 00552990
int __cdecl shutdownDirectDraw(void);

// Original: wincore_wddvmem.cpp_FUN_00552a20
// Address: 00552a20
void FUN_00552a20(void);

// Original: wincore_wddvmem.cpp_FUN_00552af0
// Address: 00552af0
void FUN_00552af0(void);

// Original: wincore_wddvmem.cpp_FUN_00552b40
// Address: 00552b40
int __cdecl FUN_00552b40(int width,int height);

// Original: wincore_wddvmem.cpp_FUN_00552cb0
// Address: 00552cb0
void __cdecl FUN_00552cb0(void);

// Original: wincore_wddvmem.cpp_initializeScanlinePointers_FUN_00552d70
// Address: 00552d70
void __cdecl initializeScanlinePointers(void);

// Original: wincore_wddvmem.cpp_setScreenResolution_FUN_00552e00
// Address: 00552e00
int __cdecl setScreenResolution(int width,int height,int bits_per_pixel);

// Original: wincore_wddvmem.cpp_resetGraphicsSystem_FUN_00553190
// Address: 00553190
void __cdecl resetGraphicsSystem(void);

// Original: wincore_wddvmem.cpp_reinitializeGraphicsSystem_FUN_005533a0
// Address: 005533a0
void __cdecl reinitializeGraphicsSystem(void);

// Original: wincore_wddvmem.cpp_openScreenDevice_FUN_00553470
// Address: 00553470
void __cdecl openScreenDevice(void);

// Original: wincore_wddvmem.cpp_closeScreenDevice_FUN_00553520
// Address: 00553520
void __cdecl closeScreenDevice(void);

// Original: wincore_wddvmem.cpp_findMostSignificantBit_FUN_00553600
// Address: 00553600
int __cdecl findMostSignificantBit(uint value);

// Original: wincore_wddvmem.cpp_analyzePixelFormat_FUN_00553620
// Address: 00553620
void __cdecl analyzePixelFormat(void);

// Original: wincore_wddvmem.cpp_setupColorPalette_FUN_005537e0
// Address: 005537e0
void __cdecl setupColorPalette(void);

// Original: wincore_wddvmem.cpp_swapBuffers_FUN_00553910
// Address: 00553910
void __cdecl swapBuffers(void);

// Original: wincore_wddvmem.cpp_restoreVideoAndMinimizeWindow_FUN_00553b70
// Address: 00553b70
void __cdecl restoreVideoAndMinimizeWindow(void);

// Original: wincore_wddvmem.cpp_FUN_00553ba0
// Address: 00553ba0
void __cdecl FUN_00553ba0(void);

// Original: wincore_wddvmem.cpp_FUN_00553ca0
// Address: 00553ca0
void __cdecl FUN_00553ca0(void);

// Original: wincore_wddvmem.cpp_freeLibrary_FUN_00553d20
// Address: 00553d20
void freeLibrary(HMODULE param_1);

// Original: wincore_wddvmem.cpp_FUN_00553d30
// Address: 00553d30
HMODULE __cdecl FUN_00553d30(LPCSTR lpLibFileName);

// Original: wincore_wddvmem.cpp_getProcAddress_FUN_00553d40
// Address: 00553d40
FARPROC __cdecl getProcAddress(HMODULE hModule,LPCSTR lpProcName);
