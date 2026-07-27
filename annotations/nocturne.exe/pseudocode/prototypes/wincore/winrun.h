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
undefined4 __cdecl clearKeypresses(void);

// Original: wincore_winrun.cpp_getNextKeypress_FUN_00558b00
// Address: 00558b00
undefined1 __cdecl getNextKeypress(void);

// Original: wincore_winrun.cpp_wasKeyPressed_FUN_00558b70
// Address: 00558b70
bool __cdecl wasKeyPressed(void);

// Original: wincore_winrun.cpp_enqueueInput_FUN_00558ba0
// Address: 00558ba0
void __cdecl enqueueInput(undefined4 param_1);

// Original: wincore_winrun.cpp_FUN_00558be0
// Address: 00558be0
void FUN_00558be0(void);

// Original: wincore_winrun.cpp_FUN_00558c00
// Address: 00558c00
void FUN_00558c00(void);

// Original: wincore_winrun.cpp_FUN_00558c40
// Address: 00558c40
void FUN_00558c40(void);

// Original: wincore_winrun.cpp_clearMouseClicks_FUN_00558d50
// Address: 00558d50
void __cdecl clearMouseClicks(void);

// Original: wincore_winrun.cpp_setCursorPosition_FUN_00558d60
// Address: 00558d60
void setCursorPosition(int param_1,int param_2);

// Original: wincore_winrun.cpp_FUN_00558d90
// Address: 00558d90
LRESULT FUN_00558d90(HWND param_1,uint param_2,HWND param_3,uint param_4);

// Original: wincore_winrun.cpp_processWindowMessages_FUN_005591c0
// Address: 005591c0
void __cdecl processWindowMessages(void);

// Original: wincore_winrun.cpp_FUN_00559260
// Address: 00559260
undefined4 FUN_00559260(HMODULE param_1,undefined4 param_2,undefined4 param_3,int param_4);

// Original: wincore_winrun.cpp_FUN_00559500
// Address: 00559500
void FUN_00559500(undefined4 param_1);

// Original: wincore_winrun.cpp_getKeyName_FUN_00559560
// Address: 00559560
char * __cdecl getKeyName(uint param_1);

// Original: wincore_winrun.cpp_createMutex_FUN_00559bc0
// Address: 00559bc0
void __cdecl createMutex(void);

// Original: wincore_winrun.cpp_waitForMutex_FUN_00559bd0
// Address: 00559bd0
bool __cdecl waitForMutex(HANDLE param_1);

// Original: wincore_winrun.cpp_waitForMutexTimeout_FUN_00559bf0
// Address: 00559bf0
bool __cdecl waitForMutexTimeout(HANDLE param_1,double param_2);

// Original: wincore_winrun.cpp_releaseMutex_FUN_00559c30
// Address: 00559c30
void __cdecl releaseMutex(HANDLE param_1);

// Original: wincore_winrun.cpp_createThread_FUN_00559c50
// Address: 00559c50
void __cdecl createThread(LPTHREAD_START_ROUTINE param_1,LPVOID param_2);

// Original: wincore_winrun.cpp_setThreadPriority_FUN_00559c80
// Address: 00559c80
void __cdecl setThreadPriority(HANDLE param_1,uint param_2);

// Original: wincore_winrun.cpp_sleep_FUN_00559cc0
// Address: 00559cc0
void __cdecl sleep(double param_1);

// Original: wincore_winrun.cpp_FUN_00559d20
// Address: 00559d20
void FUN_00559d20(void);

// Original: wincore_winrun.cpp_setRegistryStringValue_FUN_00559da0
// Address: 00559da0
void __cdecl setRegistryStringValue(LPCSTR param_1,LPCSTR param_2,BYTE *param_3);

// Original: wincore_winrun.cpp_initJoystick_FUN_00559e20
// Address: 00559e20
MMRESULT __cdecl initJoystick(void);

// Original: wincore_winrun.cpp_FUN_00559e90
// Address: 00559e90
void FUN_00559e90(void);

// Original: wincore_winrun.cpp_getJoystickState_FUN_00559eb0
// Address: 00559eb0
void __cdecl getJoystickState(void);
