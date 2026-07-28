#pragma once

// Function prototypes for crt/signal.cpp
// Generated from Ghidra function signatures

// Original: crt_signal.c_setSignalHandler_FUN_00571510
// Address: 00571510
SIGNAL_HANDLER_TYPE __watcallStack setSignalHandler(int signal_number,SIGNAL_HANDLER_TYPE new_handler_type);

// Original: crt_signal.c_getSignalHandler_FUN_00571564
// Address: 00571564
SIGNAL_HANDLER_TYPE __watcallStack getSignalHandler(int signal_number);

// Original: crt_signal.c_consoleCtrlHandler_FUN_005715d0
// Address: 005715d0
BOOL __stdcall consoleCtrlHandler(DWORD dwCtrlType);

// Original: crt_signal.c_registerConsoleHandler_FUN_00571668
// Address: 00571668
BOOL __watcallRegister registerConsoleHandler(void);

// Original: crt_signal.c_unregisterConsoleHandler_FUN_00571694
// Address: 00571694
bool unregisterConsoleHandler(void);

// Original: crt_signal.c_raiseFPE_FUN_005716d8
// Address: 005716d8
int __cdecl raiseFPE(int fpe_code);

// Original: crt_signal.c_processSignal_FUN_005717d8
// Address: 005717d8
int __watcallStack processSignal(int signal_number);
