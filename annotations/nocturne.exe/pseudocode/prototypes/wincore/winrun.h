#pragma once

// Function prototypes for wincore/winrun.cpp
// Generated from Ghidra function signatures

// Original: wincore_winrun.cpp_calibrateCPUSpeed_FUN_005587f0
// Address: 005587f0
void __cdecl calibrateCPUSpeed(void);

// Original: wincore_winrun.cpp_endPeriod_FUN_00558a20
// Address: 00558a20
void __watcallRegister endPeriod(void);

// Original: wincore_winrun.cpp_getTime_FUN_00558a30
// Address: 00558a30
int __cdecl getTime(void);

// Original: wincore_winrun.cpp_clearKeypresses_FUN_00558ae0
// Address: 00558ae0
void __cdecl clearKeypresses(void);

// Original: wincore_winrun.cpp_getNextKeypress_FUN_00558b00
// Address: 00558b00
int __cdecl getNextKeypress(void);

// Original: wincore_winrun.cpp_wasKeyPressed_FUN_00558b70
// Address: 00558b70
int __cdecl wasKeyPressed(void);

// Original: wincore_winrun.cpp_enqueueInput_FUN_00558ba0
// Address: 00558ba0
void __cdecl enqueueInput(int input_value);

// Original: wincore_winrun.cpp_FUN_00558be0
// Address: 00558be0
void FUN_00558be0(void);

// Original: wincore_winrun.cpp_plotClippedPixel_FUN_00558c00
// Address: 00558c00
void __cdecl plotClippedPixel(int x_coord,int y_coord);

// Original: wincore_winrun.cpp_FUN_00558c40
// Address: 00558c40
void FUN_00558c40(void);

// Original: wincore_winrun.cpp_clearMouseClicks_FUN_00558d50
// Address: 00558d50
void __cdecl clearMouseClicks(void);

// Original: wincore_winrun.cpp_setCursorPosition_FUN_00558d60
// Address: 00558d60
void __cdecl setCursorPosition(int x,int y);

// Original: wincore_winrun.cpp_FUN_00558d90
// Address: 00558d90
LRESULT __stdcall FUN_00558d90(HWND hWnd,UINT message,WPARAM wParam,LPARAM lParam);

// Original: wincore_winrun.cpp_processWindowMessages_FUN_005591c0
// Address: 005591c0
void __cdecl processWindowMessages(void);

// Original: wincore_winrun.cpp_FUN_00559260
// Address: 00559260
int __stdcall FUN_00559260(HINSTANCE hInstance,HINSTANCE hPrevInstance,LPSTR lpCmdLine,int nCmdShow);

// Original: wincore_winrun.cpp_FUN_00559500
// Address: 00559500
void __cdecl FUN_00559500(char *message);

// Original: wincore_winrun.cpp_getKeyName_FUN_00559560
// Address: 00559560
char * __cdecl getKeyName(EInputCodeType keycode);

// Original: wincore_winrun.cpp_createMutex_FUN_00559bc0
// Address: 00559bc0
HANDLE __cdecl createMutex(void);

// Original: wincore_winrun.cpp_waitForMutex_FUN_00559bd0
// Address: 00559bd0
int __cdecl waitForMutex(HANDLE mutex_handle);

// Original: wincore_winrun.cpp_waitForMutexTimeout_FUN_00559bf0
// Address: 00559bf0
int __cdecl waitForMutexTimeout(HANDLE mutex_handle,double timeout_seconds);

// Original: wincore_winrun.cpp_releaseMutex_FUN_00559c30
// Address: 00559c30
void __cdecl releaseMutex(HANDLE mutex_handle);

// Original: wincore_winrun.cpp_createThread_FUN_00559c50
// Address: 00559c50
HANDLE __cdecl createThread(LPTHREAD_START_ROUTINE thread_func,LPVOID thread_param);

// Original: wincore_winrun.cpp_setThreadPriority_FUN_00559c80
// Address: 00559c80
int __cdecl setThreadPriority(HANDLE hThread,int priority_level);

// Original: wincore_winrun.cpp_sleep_FUN_00559cc0
// Address: 00559cc0
void __cdecl sleep(double seconds);

// Original: wincore_winrun.cpp_getRegistryStringValue_FUN_00559d20
// Address: 00559d20
void __cdecl getRegistryStringValue(char *key_path,char *value_name,char *output_buffer,uint *buffer_size);

// Original: wincore_winrun.cpp_setRegistryStringValue_FUN_00559da0
// Address: 00559da0
void __cdecl setRegistryStringValue(char *key_path,char *value_name,char *value_data);

// Original: wincore_winrun.cpp_initJoystick_FUN_00559e20
// Address: 00559e20
void __cdecl initJoystick(void);

// Original: wincore_winrun.cpp_FUN_00559e90
// Address: 00559e90
void __cdecl FUN_00559e90(void);

// Original: wincore_winrun.cpp_getJoystickState_FUN_00559eb0
// Address: 00559eb0
void __cdecl getJoystickState(void);
