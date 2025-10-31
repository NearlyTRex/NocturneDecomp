// Name: core_ammo.cpp_CAmmo_FUN_004111b0
// Address: 004111b0
// Address Range: [[004111b0, 004111be]]
// Convention: unknown
// Signature: undefined core_ammo.cpp_CAmmo_FUN_004111b0()
// Cross-references:
//   core_ammobox.cpp_AllocateMemoryMaybe_FUN_00411700 (00411700) at 004117aa [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: undefined1 actors_other_ammo.cpp_CAmmo_FUN_004111b0(undefined4 param_1, undefined4
   param_2) */

void core_ammo_cpp_CAmmo_FUN_004111b0(void)

{
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  
  *(undefined4 *)(in_stack_00000004 + 0x314) = in_stack_00000008;
  return;
}


// Assembly code:
// 004111b0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_ammo.cpp_CAmmo_FUN_004111b0
//   XREF to: Stack[0x4] (READ)
// 004111b4: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 004111b8: MOV dword ptr [EDX + 0x314],EAX
// 004111be: RET
