#pragma once

// Function prototypes for wincore/winrun.cpp
// Generated from Ghidra function signatures

// Original: wincore_winrun.cpp_calibrateCPUSpeed_FUN_005f2b80
// Address: 005f2b80
void __cdecl calibrateCPUSpeed(void);

// Original: wincore_winrun.cpp_endPeriod_FUN_005f2db0
// Address: 005f2db0
void __watcallRegister endPeriod(void);

// Original: wincore_winrun.cpp_getTime_FUN_005f2dc0
// Address: 005f2dc0
int __cdecl getTime(void);

// Original: wincore_winrun.cpp_clearKeypresses_FUN_005f2e70
// Address: 005f2e70
void __cdecl clearKeypresses(void);

// Original: wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
// Address: 005f2e90
int __cdecl getNextKeypress(void);

// Original: wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00
// Address: 005f2f00
int __cdecl wasKeyPressed(void);

// Original: wincore_winrun.cpp_getValue_FUN_005f2f20
// Address: 005f2f20
char __cdecl getValue(void);

// Original: wincore_winrun.cpp_enqueueInput_FUN_005f2f30
// Address: 005f2f30
void __cdecl enqueueInput(int input_value);

// Original: wincore_winrun.cpp_setValue_FUN_005f2f70
// Address: 005f2f70
void __cdecl setValue(int val);

// Original: wincore_winrun.cpp_doNothing_FUN_005f2f80
// Address: 005f2f80
void __cdecl doNothing(void);

// Original: wincore_winrun.cpp_plotClippedPixel_FUN_005f2f90
// Address: 005f2f90
void __cdecl plotClippedPixel(int x_coord,int y_coord);

// Original: wincore_winrun.cpp_drawCrosshair_FUN_005f2fd0
// Address: 005f2fd0
void __cdecl drawCrosshair(void);

// Original: wincore_winrun.cpp_clearMouseClicks_FUN_005f30c0
// Address: 005f30c0
void __cdecl clearMouseClicks(void);

// Original: wincore_winrun.cpp_setCursorPosition_FUN_005f30d0
// Address: 005f30d0
void __cdecl setCursorPosition(int x,int y);

// Original: wincore_winrun.cpp_addWindowsMessageHook_FUN_005f3100
// Address: 005f3100
void __cdecl addWindowsMessageHook(SMessageHandler message_handler);

// Original: wincore_winrun.cpp_mainWindowProc_FUN_005f3150
// Address: 005f3150
LRESULT __stdcall mainWindowProc(HWND hWnd,UINT message,WPARAM wParam,LPARAM lParam);

// Original: wincore_winrun.cpp_processWindowMessages_FUN_005f35e0
// Address: 005f35e0
void __cdecl processWindowMessages(void);

// Original: wincore_winrun.cpp_winMain_FUN_005f3680
// Address: 005f3680
int __stdcall winMain(HINSTANCE hInstance,HINSTANCE hPrevInstance,LPSTR lpCmdLine,int nCmdShow1,int nCmdShow2);

// Original: wincore_winrun.cpp_displayMessageBoxAndQuit_FUN_005f3920
// Address: 005f3920
void __cdecl displayMessageBoxAndQuit(char *message);

// Original: wincore_winrun.cpp_getKeyName_FUN_005f3980
// Address: 005f3980
char * __cdecl getKeyName(EInputCodeType keycode);

// Original: wincore_winrun.cpp_createMutex_FUN_005f3fe0
// Address: 005f3fe0
HANDLE __cdecl createMutex(void);

// Original: wincore_winrun.cpp_waitForMutex_FUN_005f3ff0
// Address: 005f3ff0
int __cdecl waitForMutex(HANDLE mutex_handle);

// Original: wincore_winrun.cpp_waitForMutexTimeout_FUN_005f4010
// Address: 005f4010
int __cdecl waitForMutexTimeout(HANDLE mutex_handle,double timeout_seconds);

// Original: wincore_winrun.cpp_releaseMutex_FUN_005f4050
// Address: 005f4050
void __cdecl releaseMutex(HANDLE mutex_handle);

// Original: wincore_winrun.cpp_createThread_FUN_005f4070
// Address: 005f4070
HANDLE __cdecl createThread(LPTHREAD_START_ROUTINE thread_func,LPVOID thread_param);

// Original: wincore_winrun.cpp_setThreadPriority_FUN_005f40a0
// Address: 005f40a0
int __cdecl setThreadPriority(HANDLE hThread,int priority_level);

// Original: wincore_winrun.cpp_sleep_FUN_005f40e0
// Address: 005f40e0
void __cdecl sleep(double seconds);

// Original: wincore_winrun.cpp_getComputerAndUserName_FUN_005f4140
// Address: 005f4140
void __cdecl getComputerAndUserName(char *buffer);

// Original: wincore_winrun.cpp_getRegistryStringValue_FUN_005f4210
// Address: 005f4210
void __cdecl getRegistryStringValue(char *key_path,char *value_name,char *output_buffer,uint *buffer_size);

// Original: wincore_winrun.cpp_setRegistryStringValue_FUN_005f4290
// Address: 005f4290
void __cdecl setRegistryStringValue(char *key_path,char *value_name,char *value_data);

// Original: wincore_winrun.cpp_initJoystick_FUN_005f4310
// Address: 005f4310
void __cdecl initJoystick(void);

// Original: wincore_winrun.cpp_doNothing_FUN_005f4380
// Address: 005f4380
void __cdecl doNothing(void);

// Original: wincore_winrun.cpp_getJoystickState_FUN_005f43a0
// Address: 005f43a0
void __cdecl getJoystickState(void);
