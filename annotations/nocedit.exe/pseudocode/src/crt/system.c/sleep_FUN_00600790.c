// Name: crt_system.c_sleep_FUN_00600790
// Address: 00600790
// Address Range: [[00600790, 0060079c]]
// Convention: __cdecl
// Signature: void crt_system.c_sleep_FUN_00600790(DWORD milliseconds)
// Cross-references:
//   shape_design.c_cramTextureList_FUN_0046bb80 (0046bb80) at 0046d1e1 [UNCONDITIONAL_CALL]
// Globals:
//   Sleep* Sleep = 00212228
// Function calls:
//   Sleep

#include "nocturne.h"

void __cdecl crt_system_c_sleep_FUN_00600790(DWORD milliseconds)

{
  (*Sleep)(milliseconds);
  return;
}


// Assembly code:
// 00600790: MOV EDX,dword ptr [ESP + 0x4]
//   Label: crt_system.c_sleep_FUN_00600790
//   XREF to: Stack[0x4] (READ)
// 00600794: PUSH EDX
// 00600795: CALL dword ptr CS:[0x611644]
//   XREF to: EXTERNAL:0000009c (COMPUTED_CALL)
//   XREF to: 00611644 (READ)
// 0060079c: RET
