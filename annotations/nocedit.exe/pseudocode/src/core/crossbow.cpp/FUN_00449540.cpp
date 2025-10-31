// Name: core_crossbow.cpp_FUN_00449540
// Address: 00449540
// Address Range: [[00449540, 00449568]]
// Convention: unknown
// Signature: undefined core_crossbow.cpp_FUN_00449540()
// Cross-references:
//   core_crossbow.cpp_FUN_00448e00 (00448e00) at 00448e45 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_00619ba2
//   undefined4 DAT_00619baa
//   undefined4 DAT_00619bb2

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_weapon_crossbow.cpp_FUN_00449540(undefined4 param_1) */

float core_crossbow_cpp_FUN_00449540(void)

{
  int in_stack_00000004;
  
  return ((float)_DAT_00619ba2 - *(float *)(in_stack_00000004 + 0x300)) * (float)_DAT_00619baa *
         (float)_DAT_00619bb2;
}


// Assembly code:
// 00449540: SUB ESP,0x4
//   Label: core_crossbow.cpp_FUN_00449540
// 00449543: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00449547: FLD float ptr [EAX + 0x300]
// 0044954d: FSUBR double ptr [0x00619ba2]
//   XREF to: 00619ba2 (READ)
// 00449553: FMUL double ptr [0x00619baa]
//   XREF to: 00619baa (READ)
// 00449559: FMUL double ptr [0x00619bb2]
//   XREF to: 00619bb2 (READ)
// 0044955f: FSTP float ptr [ESP]
//   XREF to: Stack[-0x4] (DATA)
// 00449562: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x4] (DATA)
// 00449565: ADD ESP,0x4
// 00449568: RET
