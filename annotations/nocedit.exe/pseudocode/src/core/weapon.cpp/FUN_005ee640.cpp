// Name: core_weapon.cpp_FUN_005ee640
// Address: 005ee640
// Address Range: [[005ee640, 005ee64e]]
// Convention: unknown
// Signature: undefined core_weapon.cpp_FUN_005ee640()
// Cross-references:
//   core_baron.cpp_CBaronWeapon_setWeaponState_FUN_00413e90 (00413e90) at 00413e9d [UNCONDITIONAL_CALL]
//   core_melee.cpp_FUN_0050ecd0 (0050ecd0) at 0050ece4 [UNCONDITIONAL_CALL]
//   core_tommygun.cpp_FUN_005de5a0 (005de5a0) at 005de5be [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: undefined1 actors_weapon_weapon.cpp_FUN_005ee640(undefined4 param_1, undefined4
   param_2) */

void core_weapon_cpp_FUN_005ee640(void)

{
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  
  *(undefined4 *)(in_stack_00000004 + 0x2d4) = in_stack_00000008;
  return;
}


// Assembly code:
// 005ee640: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_weapon.cpp_FUN_005ee640
//   XREF to: Stack[0x4] (READ)
// 005ee644: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005ee648: MOV dword ptr [EDX + 0x2d4],EAX
// 005ee64e: RET
