#pragma once

// Function prototypes for core/menu.cpp
// Generated from Ghidra function signatures

// Original: core_menu.cpp_staticInit_FUN_0050fdb0
// Address: 0050fdb0
void __cdecl staticInit(void);

// Original: core_menu.cpp_cleanupMenuTransition_FUN_0050fe60
// Address: 0050fe60
void __cdecl cleanupMenuTransition(void);

// Original: core_menu.cpp_renderAudioSpectrumBar_FUN_0050fe70
// Address: 0050fe70
void __cdecl renderAudioSpectrumBar(int x_center,int y_top,int height_half);

// Original: core_menu.cpp_renderMenuAndGetChoice_FUN_00510000
// Address: 00510000
int __cdecl renderMenuAndGetChoice(char **menu_text_array,int menu_count,int *selected_index_ptr,int y_position,char *title);

// Original: core_menu.cpp_showJoystickCalibrationScreen_FUN_00510410
// Address: 00510410
void __cdecl showJoystickCalibrationScreen(char *instruction_text,char *message_text);

// Original: core_menu.cpp_calibrateGamepad_FUN_005104d0
// Address: 005104d0
int __cdecl calibrateGamepad(void);

// Original: core_menu.cpp_adjustMouseSensitivity_FUN_005107c0
// Address: 005107c0
void __cdecl adjustMouseSensitivity(int *sensitivity_value_ptr,char *window_title);

// Original: core_menu.cpp_showCalibrationTestPattern_FUN_00510a50
// Address: 00510a50
void __cdecl showCalibrationTestPattern(char *message_text);

// Original: core_menu.cpp_showCalibrationTest_FUN_00510ba0
// Address: 00510ba0
void __cdecl showCalibrationTest(void);

// Original: core_menu.cpp_configureGraphicsOptions_FUN_00510c80
// Address: 00510c80
void __cdecl configureGraphicsOptions(void);

// Original: core_menu.cpp_checkAndCalibrateGamepad_FUN_00511840
// Address: 00511840
int __cdecl checkAndCalibrateGamepad(void);

// Original: core_menu.cpp_configureCustomKeys_FUN_00511890
// Address: 00511890
void __cdecl configureCustomKeys(void);

// Original: core_menu.cpp_renderAudioSpectrumBarByBounds_FUN_00511e00
// Address: 00511e00
void __cdecl renderAudioSpectrumBarByBounds(int x_center,int y_bottom,int y_top);

// Original: core_menu.cpp_configureSoundOptions_FUN_00511e50
// Address: 00511e50
void __cdecl configureSoundOptions(void);

// Original: core_menu.cpp_showOptionsScreen_FUN_00512d30
// Address: 00512d30
void __cdecl showOptionsScreen(int initialize_systems);

// Original: core_menu.cpp_showMainGameMenu_FUN_00512f40
// Address: 00512f40
int __cdecl showMainGameMenu(void);

// Original: core_menu.cpp_addCustomKeyBinding_FUN_00513460
// Address: 00513460
void __cdecl addCustomKeyBinding(int *key_code_ptr,char *key_name);

// Original: core_menu.cpp_getKeyDisplayName_FUN_005134e0
// Address: 005134e0
char * __cdecl getKeyDisplayName(EInputCodeType key_code);

// Original: core_menu.cpp_isKeyCodeValidForMode_FUN_00513720
// Address: 00513720
int __cdecl isKeyCodeValidForMode(EInputCodeType *key_code_ptr,char *description);

// Original: core_menu.cpp_getSinglePressedKey_FUN_00513860
// Address: 00513860
int __cdecl getSinglePressedKey(void);

// Original: core_menu.cpp_configureCustomKeyBindings_FUN_005138e0
// Address: 005138e0
void __cdecl configureCustomKeyBindings(void);

// Original: core_menu.cpp_CAlphaBitmap_arrdtor8_FUN_00514f50
// Address: 00514f50
CAlphaBitmap * __cdecl CAlphaBitmap::arrdtor8(CAlphaBitmap *this_ptr,uint flags);
