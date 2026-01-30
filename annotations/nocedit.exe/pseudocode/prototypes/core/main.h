#pragma once

// Function prototypes for core/main.cpp
// Generated from Ghidra function signatures

// Original: core_main.c_staticInit_FUN_00506e80
// Address: 00506e80
void __cdecl staticInit(void);

// Original: core_main.c_displayErrorAndQuit_FUN_00506f10
// Address: 00506f10
void __cdecl displayErrorAndQuit(char *format,...);

// Original: core_main.c_showLicenseAgreement_FUN_005070f0
// Address: 005070f0
int __cdecl showLicenseAgreement(void);

// Original: core_main.c_showDeveloperToolsMenu_FUN_005073a0
// Address: 005073a0
void __cdecl showDeveloperToolsMenu(void);

// Original: core_main.c_enterMainGameMenu_FUN_00512f40
// Address: 00507a50
int __cdecl enterMainGameMenu(void);

// Original: core_main.c_initializeGameSystems_FUN_00507a60
// Address: 00507a60
void __cdecl initializeGameSystems(void);

// Original: core_main.c_drawCenteredText_FUN_00508250
// Address: 00508250
void __cdecl drawCenteredText(char *text,int y_pos,int color);

// Original: core_main.c_waitWithSkip_FUN_005082a0
// Address: 005082a0
void __cdecl waitWithSkip(int duration_ms);

// Original: core_main.c_showPromoScreen_FUN_00508340
// Address: 00508340
void __cdecl showPromoScreen(void);

// Original: core_main.c_finalizeGameSystems_FUN_00508570
// Address: 00508570
void __cdecl finalizeGameSystems(void);
