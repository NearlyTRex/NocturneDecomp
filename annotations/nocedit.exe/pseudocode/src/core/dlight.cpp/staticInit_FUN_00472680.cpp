// Name: core_dlight.cpp_staticInit_FUN_00472680
// Address: 00472680
// Address Range: [[00472680, 00472694]]
// Convention: __cdecl
// Signature: void core_dlight.cpp_staticInit_FUN_00472680(void)
// Globals:
//   undefined4 DAT_026a72d8
//   undefined4 DAT_026a72dc
//   undefined4 DAT_026a72e0

#include "nocturne.h"

void __cdecl core_dlight_cpp_staticInit_FUN_00472680(void)

{
  DAT_026a72dc = 0;
  DAT_026a72e0 = 0;
  DAT_026a72d8 = 0;
  return;
}


// Assembly code:
// 00472680: XOR EDX,EDX
//   Label: core_dlight.cpp_staticInit_FUN_00472680
// 00472682: MOV dword ptr [0x026a72dc],EDX
//   XREF to: 026a72dc (WRITE)
// 00472688: MOV dword ptr [0x026a72e0],EDX
//   XREF to: 026a72e0 (WRITE)
// 0047268e: MOV dword ptr [0x026a72d8],EDX
//   XREF to: 026a72d8 (WRITE)
// 00472694: RET
