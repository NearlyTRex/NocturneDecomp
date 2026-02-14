#pragma once

// Function prototypes for crt/signal.cpp
// Generated from Ghidra function signatures

// Original: crt_signal.c_setSignalHandler_FUN_0060ce60
// Address: 0060ce60
SIGNAL_HANDLER_TYPE __watcallStack setSignalHandler(int signal_number,SIGNAL_HANDLER_TYPE new_handler_type);

// Original: crt_signal.c_getSignalHandler_FUN_0060ceb4
// Address: 0060ceb4
SIGNAL_HANDLER_TYPE __watcallStack getSignalHandler(int signal_number);

// Original: crt_signal.c_consoleCtrlHandler_FUN_0060cf20
// Address: 0060cf20
BOOL __stdcall consoleCtrlHandler(DWORD dwCtrlType);

// Original: crt_signal.c_registerConsoleHandler_FUN_0060cfb8
// Address: 0060cfb8
BOOL __watcallRegister registerConsoleHandler(void);

// Original: crt_signal.c_unregisterConsoleHandler_FUN_0060cfe4
// Address: 0060cfe4
bool unregisterConsoleHandler(void);

// Original: crt_signal.c_raiseFPE_FUN_0060d028
// Address: 0060d028
int __cdecl raiseFPE(int fpe_code);

// Original: crt_signal.c_processSignal_FUN_0060d128
// Address: 0060d128
int __watcallStack processSignal(int signal_number);
