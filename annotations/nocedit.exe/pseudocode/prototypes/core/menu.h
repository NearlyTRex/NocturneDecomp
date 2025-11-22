#pragma once

// Function prototypes for core/menu.cpp
// Generated from Ghidra function signatures

// Original: core_menu.cpp_staticInit_FUN_0050fdb0
// Address: 0050fdb0
void staticInit(void);

// Original: core_menu.cpp_cleanupMenuTransition_FUN_0050fe60
// Address: 0050fe60
void cleanupMenuTransition(void);

// Original: core_menu.cpp_renderAudioSpectrumBar_FUN_0050fe70
// Address: 0050fe70
void renderAudioSpectrumBar(int x_center, int y_top, int height_half);

// Original: core_menu.cpp_renderMenuAndGetChoice_FUN_00510000
// Address: 00510000
int renderMenuAndGetChoice(char * * menu_text_array, int menu_count, int * selected_index_ptr, int y_position, int spacing_flag);

// Original: core_menu.cpp_showJoystickCalibrationScreen_FUN_00510410
// Address: 00510410
void showJoystickCalibrationScreen(char * instruction_text, char * message_text);

// Original: core_menu.cpp_calibrateGamepad_FUN_005104d0
// Address: 005104d0
int calibrateGamepad(void);

// Original: core_menu.cpp_adjustMouseSensitivity_FUN_005107c0
// Address: 005107c0
void adjustMouseSensitivity(int * sensitivity_value_ptr, char * window_title);

// Original: core_menu.cpp_showCalibrationTestPattern_FUN_00510a50
// Address: 00510a50
void showCalibrationTestPattern(char * message_text);

// Original: core_menu.cpp_showCalibrationTest_FUN_00510ba0
// Address: 00510ba0
void showCalibrationTest(void);

// Original: core_menu.cpp_configureGraphicsOptions_FUN_00510c80
// Address: 00510c80
void configureGraphicsOptions(void);

// Original: core_menu.cpp_checkAndCalibrateGamepad_FUN_00511840
// Address: 00511840
int checkAndCalibrateGamepad(void);

// Original: core_menu.cpp_configureCustomKeys_FUN_00511890
// Address: 00511890
void configureCustomKeys(void);

// Original: core_menu.cpp_renderAudioSpectrumBarByBounds_FUN_00511e00
// Address: 00511e00
void renderAudioSpectrumBarByBounds(int x_center, int y_bottom, int y_top);

// Original: core_menu.cpp_configureSoundOptions_FUN_00511e50
// Address: 00511e50
void configureSoundOptions(void);

// Original: core_menu.cpp_showOptionsScreen_FUN_00512d30
// Address: 00512d30
void showOptionsScreen(int initialize_systems);

// Original: core_menu.cpp_showMainGameMenu_FUN_00512f40
// Address: 00512f40
int showMainGameMenu(void);

// Original: core_menu.cpp_addCustomKeyBinding_FUN_00513460
// Address: 00513460
void addCustomKeyBinding(int * key_code_ptr, char * key_name);

// Original: core_menu.cpp_getKeyDisplayName_FUN_005134e0
// Address: 005134e0
char * getKeyDisplayName(int key_code);

// Original: core_menu.cpp_isKeyCodeValidForMode_FUN_00513720
// Address: 00513720
int isKeyCodeValidForMode(int * key_code_ptr, char * description);

// Original: core_menu.cpp_getSinglePressedKey_FUN_00513860
// Address: 00513860
int getSinglePressedKey(void);

// Original: core_menu.cpp_configureCustomKeyBindings_FUN_005138e0
// Address: 005138e0
void configureCustomKeyBindings(void);

// Original: core_menu.cpp_freeBitmaps_FUN_00514f50
// Address: 00514f50
void freeBitmaps(CAlphaBitmap * * array);
