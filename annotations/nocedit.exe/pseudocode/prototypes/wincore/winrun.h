#pragma once

// Function prototypes for wincore/winrun.cpp
// Generated from Ghidra function signatures

// Original: wincore_winrun.cpp_calibrateCPUSpeed_FUN_005f2b80
// Address: 005f2b80
void calibrateCPUSpeed(void);

// Original: wincore_winrun.cpp_endPeriod_FUN_005f2db0
// Address: 005f2db0
void endPeriod(void);

// Original: wincore_winrun.cpp_getTime_FUN_005f2dc0
// Address: 005f2dc0
int getTime(void);

// Original: wincore_winrun.cpp_clearKeypresses_FUN_005f2e70
// Address: 005f2e70
void clearKeypresses(void);

// Original: wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
// Address: 005f2e90
int getNextKeypress(void);

// Original: wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00
// Address: 005f2f00
int wasKeyPressed(void);

// Original: wincore_winrun.cpp_getValue_FUN_005f2f20
// Address: 005f2f20
char getValue(void);

// Original: wincore_winrun.cpp_enqueueInput_FUN_005f2f30
// Address: 005f2f30
void enqueueInput(int input_value);

// Original: wincore_winrun.cpp_setValue_FUN_005f2f70
// Address: 005f2f70
void setValue(int val);

// Original: wincore_winrun.cpp_doNothing_FUN_005f2f80
// Address: 005f2f80
void doNothing(void);

// Original: wincore_winrun.cpp_plotClippedPixel_FUN_005f2f90
// Address: 005f2f90
void plotClippedPixel(int x_coord, int y_coord);

// Original: wincore_winrun.cpp_drawCrosshair_FUN_005f2fd0
// Address: 005f2fd0
void drawCrosshair(void);

// Original: wincore_winrun.cpp_clearMouseClicks_FUN_005f30c0
// Address: 005f30c0
void clearMouseClicks(void);

// Original: wincore_winrun.cpp_setCursorPosition_FUN_005f30d0
// Address: 005f30d0
void setCursorPosition(int x, int y);

// Original: wincore_winrun.cpp_addWindowsMessageHook_FUN_005f3100
// Address: 005f3100
undefined addWindowsMessageHook();

// Original: wincore_winrun.cpp_mainWindowProc_FUN_005f3150
// Address: 005f3150
LRESULT mainWindowProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);

// Original: wincore_winrun.cpp_processWindowMessages_FUN_005f35e0
// Address: 005f35e0
void processWindowMessages(void);

// Original: wincore_winrun.cpp_winMain_FUN_005f3680
// Address: 005f3680
int winMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow1, int nCmdShow2);

// Original: wincore_winrun.cpp_displayMessageBoxAndQuit_FUN_005f3920
// Address: 005f3920
void displayMessageBoxAndQuit(char * message);

// Original: wincore_winrun.cpp_getKeyName_FUN_005f3980
// Address: 005f3980
char * getKeyName(int keycode);

// Original: wincore_winrun.cpp_createMutex_FUN_005f3fe0
// Address: 005f3fe0
HANDLE createMutex(void);

// Original: wincore_winrun.cpp_waitForMutex_FUN_005f3ff0
// Address: 005f3ff0
int waitForMutex(HANDLE mutex_handle);

// Original: wincore_winrun.cpp_waitForMutexTimeout_FUN_005f4010
// Address: 005f4010
int waitForMutexTimeout(HANDLE mutex_handle, double timeout_seconds);

// Original: wincore_winrun.cpp_releaseMutex_FUN_005f4050
// Address: 005f4050
void releaseMutex(HANDLE mutex_handle);

// Original: wincore_winrun.cpp_createThread_FUN_005f4070
// Address: 005f4070
HANDLE createThread(LPTHREAD_START_ROUTINE thread_func, LPVOID thread_param);

// Original: wincore_winrun.cpp_setThreadPriority_FUN_005f40a0
// Address: 005f40a0
void setThreadPriority(HANDLE hThread, int priority_level);

// Original: wincore_winrun.cpp_sleep_FUN_005f40e0
// Address: 005f40e0
void sleep(double seconds);

// Original: wincore_winrun.cpp_getComputerAndUserName_FUN_005f4140
// Address: 005f4140
void getComputerAndUserName(char * buffer);

// Original: wincore_winrun.cpp_getRegistryStringValue_FUN_005f4210
// Address: 005f4210
void getRegistryStringValue(char * key_path, char * value_name, char * output_buffer, uint * buffer_size);

// Original: wincore_winrun.cpp_setRegistryStringValue_FUN_005f4290
// Address: 005f4290
void setRegistryStringValue(char * key_path, char * value_name, char * value_data);

// Original: wincore_winrun.cpp_initJoystick_FUN_005f4310
// Address: 005f4310
void initJoystick(void);

// Original: wincore_winrun.cpp_doNothing_FUN_005f4380
// Address: 005f4380
void doNothing(void);

// Original: wincore_winrun.cpp_getJoystickState_FUN_005f43a0
// Address: 005f43a0
void getJoystickState(void);
