#pragma once

// Function prototypes for support/trisock.cpp
// Generated from Ghidra function signatures

// Original: support_trisock.cpp_staticInit_FUN_00548aa0
// Address: 00548aa0
void __cdecl staticInit(void);

// Original: support_trisock.cpp_copyIPAddress_FUN_00548ae0
// Address: 00548ae0
undefined4 * copyIPAddress(undefined4 *param_1,undefined4 *param_2);

// Original: support_trisock.cpp_parseIPAddress_FUN_00548af0
// Address: 00548af0
undefined4 __cdecl parseIPAddress(undefined4 param_1,undefined4 param_2);

// Original: support_trisock.cpp_FUN_00548b40
// Address: 00548b40
undefined4 FUN_00548b40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);

// Original: support_trisock.cpp_formatIPAddress_FUN_00548bb0
// Address: 00548bb0
void __cdecl formatIPAddress(undefined1 *param_1,undefined4 param_2);

// Original: support_trisock.cpp_parseIPComponents_FUN_00548bf0
// Address: 00548bf0
undefined4 __cdecl parseIPComponents(undefined4 param_1,undefined4 param_2);

// Original: support_trisock.cpp_buildIPAddress_FUN_00548c60
// Address: 00548c60
undefined4 __cdecl buildIPAddress(undefined1 *param_1,int param_2,int param_3,int param_4,int param_5);

// Original: support_trisock.cpp_FUN_00548cd0
// Address: 00548cd0
void FUN_00548cd0(void);

// Original: support_trisock.cpp_getIPAddress_FUN_00548d20
// Address: 00548d20
undefined4 __cdecl getIPAddress(undefined4 *param_1);

// Original: support_trisock.cpp_createNetworkAddr_FUN_00548d30
// Address: 00548d30
void __cdecl createNetworkAddr(undefined4 *param_1,undefined4 *param_2,undefined2 param_3);

// Original: support_trisock.cpp_convertSockAddr_FUN_00548d50
// Address: 00548d50
undefined4 * convertSockAddr(undefined4 *param_1,short *param_2);

// Original: support_trisock.cpp_buildSockaddrIn_FUN_00548dc0
// Address: 00548dc0
void buildSockaddrIn(int param_1);

// Original: support_trisock.cpp_FUN_00548e20
// Address: 00548e20
void FUN_00548e20(void);

// Original: support_trisock.cpp_FUN_00548e70
// Address: 00548e70
undefined4 FUN_00548e70(void);

// Original: support_trisock.cpp_FUN_00548ea0
// Address: 00548ea0
undefined4 FUN_00548ea0(void);

// Original: support_trisock.cpp_invalidateSocket_FUN_00548ed0
// Address: 00548ed0
void __cdecl invalidateSocket(undefined4 *param_1);

// Original: support_trisock.cpp_bindSocketWrapper_FUN_00548ee0
// Address: 00548ee0
undefined4 __cdecl bindSocketWrapper(undefined4 param_1);

// Original: support_trisock.cpp_FUN_00548f00
// Address: 00548f00
bool FUN_00548f00(void);

// Original: support_trisock.cpp_createUDPSocket_FUN_00548f30
// Address: 00548f30
bool __cdecl createUDPSocket(int *param_1);

// Original: support_trisock.cpp_isSocketValid_FUN_00548f60
// Address: 00548f60
bool __cdecl isSocketValid(int *param_1);

// Original: support_trisock.cpp_bindSocket_FUN_00548f70
// Address: 00548f70
bool __cdecl bindSocket(undefined4 param_1,ushort param_2);

// Original: support_trisock.cpp_FUN_00548fc0
// Address: 00548fc0
bool FUN_00548fc0(void);

// Original: support_trisock.cpp_receiveSocketData_FUN_00549010
// Address: 00549010
int __cdecl receiveSocketData(undefined4 *param_1,undefined4 param_2,undefined1 *param_3,undefined4 *param_4);

// Original: support_trisock.cpp_performSocketOperation_FUN_00549090
// Address: 00549090
undefined4 __cdecl performSocketOperation(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4);

// Original: support_trisock.cpp_bindAndInvalidateSocket_FUN_00549110
// Address: 00549110
bool __cdecl bindAndInvalidateSocket(undefined4 *param_1);

// Original: support_trisock.cpp_FUN_00549150
// Address: 00549150
bool FUN_00549150(void);

// Original: support_trisock.cpp_FUN_00549170
// Address: 00549170
undefined4 FUN_00549170(void);

// Original: support_trisock.cpp_getSocketName_FUN_005491e0
// Address: 005491e0
undefined4 __cdecl getSocketName(undefined4 *param_1);

// Original: support_trisock.cpp_setSocketBlocking_FUN_00549240
// Address: 00549240
bool __cdecl setSocketBlocking(undefined4 *param_1,int param_2);

// Original: support_trisock.cpp_startupWinsock_FUN_00549280
// Address: 00549280
void __cdecl startupWinsock(void);
