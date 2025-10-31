// Name: support_trisock.cpp_staticInit_FUN_005e16b0
// Address: 005e16b0
// Address Range: [[005e16b0, 005e16e6]]
// Convention: __cdecl
// Signature: void support_trisock.cpp_staticInit_FUN_005e16b0(void)
// Globals:
//   uchar[4] g_BroadcastIP
//   uchar[4] g_AnyAddressIP
// Function calls:
//   support_trisock.cpp_buildIPAddressOrDie_FUN_005e1750

#include "nocturne.h"

void __cdecl support_trisock_cpp_staticInit_FUN_005e16b0(void)

{
  support_trisock_cpp_buildIPAddressOrDie_FUN_005e1750(g_BroadcastIP,0xff,0xff,0xff,0xff);
  support_trisock_cpp_buildIPAddressOrDie_FUN_005e1750(g_AnyAddressIP,0,0,0,0);
  return;
}


// Assembly code:
// 005e16b0: PUSH 0xff
//   Label: support_trisock.cpp_staticInit_FUN_005e16b0
// 005e16b5: PUSH 0xff
// 005e16ba: PUSH 0xff
// 005e16bf: PUSH 0xff
// 005e16c4: PUSH 0x3f87494
//   XREF to: 03f87494 (DATA)
// 005e16c9: CALL support_trisock.cpp_buildIPAddressOrDie_FUN_005e1750
//   XREF to: 005e1750 (UNCONDITIONAL_CALL)
// 005e16ce: ADD ESP,0x14
// 005e16d1: PUSH 0x0
// 005e16d3: PUSH 0x0
// 005e16d5: PUSH 0x0
// 005e16d7: PUSH 0x0
// 005e16d9: PUSH 0x3f87498
//   XREF to: 03f87498 (DATA)
// 005e16de: CALL support_trisock.cpp_buildIPAddressOrDie_FUN_005e1750
//   XREF to: 005e1750 (UNCONDITIONAL_CALL)
// 005e16e3: ADD ESP,0x14
// 005e16e6: RET
