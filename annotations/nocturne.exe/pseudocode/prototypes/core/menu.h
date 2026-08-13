#pragma once

// Function prototypes for core/menu.cpp
// Generated from Ghidra function signatures

// Original: core_menu.cpp_staticInit_FUN_004cf1f0
// Address: 004cf1f0
void __cdecl staticInit(void);

// Original: core_menu.cpp_renderAudioSpectrumBar_FUN_004cf2b0
// Address: 004cf2b0
void __cdecl renderAudioSpectrumBar(int x_center,int y_top,int height_half);

// Original: core_menu.cpp_renderMenuAndGetChoice_FUN_004cf440
// Address: 004cf440
int __cdecl renderMenuAndGetChoice(char **menu_text_array,int menu_count,int *selected_index_ptr,int y_position,char *title);

// Original: core_menu.cpp_showJoystickCalibrationScreen_FUN_004cf810
// Address: 004cf810
void __cdecl showJoystickCalibrationScreen(char *instruction_text,char *message_text);

// Original: core_menu.cpp_calibrateGamepad_FUN_004cf8d0
// Address: 004cf8d0
int __cdecl calibrateGamepad(void);

// Original: core_menu.cpp_adjustMouseSensitivity_FUN_004cfbc0
// Address: 004cfbc0
void __cdecl adjustMouseSensitivity(int *sensitivity_value_ptr,char *window_title);

// Original: core_menu.cpp_showCalibrationTestPattern_FUN_004cfe50
// Address: 004cfe50
void __cdecl showCalibrationTestPattern(char *message_text);

// Original: core_menu.cpp_showCalibrationTest_FUN_004cffa0
// Address: 004cffa0
void __cdecl showCalibrationTest(void);

// Original: core_menu.cpp_configureGraphicsOptions_FUN_004d0080
// Address: 004d0080
void __cdecl configureGraphicsOptions(void);

// Original: core_menu.cpp_configureCustomKeys_FUN_004d0d20
// Address: 004d0d20
void __cdecl configureCustomKeys(void);

// Original: core_menu.cpp_renderAudioSpectrumBarByBounds_FUN_004d1290
// Address: 004d1290
void __cdecl renderAudioSpectrumBarByBounds(int x_center,int y_bottom,int y_top);

// Original: core_menu.cpp_configureSoundOptions_FUN_004d12e0
// Address: 004d12e0
void __cdecl configureSoundOptions(void);

// Original: core_menu.cpp_showOptionsScreen_FUN_004d21c0
// Address: 004d21c0
void __cdecl showOptionsScreen(int initialize_systems);

// Original: core_menu.cpp_FUN_004d23d0
// Address: 004d23d0
int __cdecl FUN_004d23d0(void);

// Original: core_menu.cpp_addCustomKeyBinding_FUN_004d2880
// Address: 004d2880
void __cdecl addCustomKeyBinding(int *key_code_ptr,char *key_name);

// Original: core_menu.cpp_getKeyDisplayName_FUN_004d2900
// Address: 004d2900
char * __cdecl getKeyDisplayName(EInputCodeType key_code);

// Original: core_menu.cpp_isKeyCodeValidForMode_FUN_004d2b40
// Address: 004d2b40
int __cdecl isKeyCodeValidForMode(EInputCodeType *key_code_ptr,char *description);

// Original: core_menu.cpp_getSinglePressedKey_FUN_004d2c80
// Address: 004d2c80
int __cdecl getSinglePressedKey(void);

// Original: core_menu.cpp_configureCustomKeyBindings_FUN_004d2d00
// Address: 004d2d00
void __cdecl configureCustomKeyBindings(void);

// Original: core_menu.cpp_CAlphaBitmap_arrdtor_FUN_004d4370
// Address: 004d4370
CAlphaBitmap * __cdecl CAlphaBitmap::arrdtor(CAlphaBitmap *this_ptr,uint flags);
