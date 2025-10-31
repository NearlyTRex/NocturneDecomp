// Name: core_weapon.cpp_FUN_005ee6e0
// Address: 005ee6e0
// Address Range: [[005ee6e0, 005ee703]]
// Convention: unknown
// Signature: undefined core_weapon.cpp_FUN_005ee6e0()
// Cross-references:
//   core_crossbow.cpp_FUN_00448f20 (00448f20) at 00448f5d [UNCONDITIONAL_CALL]
//   core_dynamite.cpp_FUN_0049ce70 (0049ce70) at 0049ce76 [UNCONDITIONAL_CALL]
//   core_elephant.cpp_FUN_004a7160 (004a7160) at 004a719d [UNCONDITIONAL_CALL]
//   core_gun.cpp_FUN_004f0350 (004f0350) at 004f038d [UNCONDITIONAL_CALL]
//   core_shotgun.cpp_FUN_00588060 (00588060) at 0058809a [UNCONDITIONAL_CALL]
//   core_tommygun.cpp_FUN_005ddb30 (005ddb30) at 005ddba1 [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: undefined1 actors_weapon_weapon.cpp_FUN_005ee6e0(undefined4 param_1) */

undefined4 core_weapon_cpp_FUN_005ee6e0(void)

{
  int in_stack_00000004;
  
  if (0 < *(int *)(in_stack_00000004 + 0x568)) {
    *(int *)(in_stack_00000004 + 0x568) = *(int *)(in_stack_00000004 + 0x568) + -1;
    return 1;
  }
  return 0;
}


// Assembly code:
// 005ee6e0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_weapon.cpp_FUN_005ee6e0
//   XREF to: Stack[0x4] (READ)
// 005ee6e4: MOV ECX,dword ptr [EDX + 0x568]
// 005ee6ea: TEST ECX,ECX
// 005ee6ec: JLE 0x005ee330
//   XREF to: 005ee330 (CONDITIONAL_JUMP)
// 005ee6f2: PUSH EBX
// 005ee6f3: MOV EAX,0x1
// 005ee6f8: MOV EBX,ECX
// 005ee6fa: SUB EBX,EAX
// 005ee6fc: MOV dword ptr [EDX + 0x568],EBX
// 005ee702: POP EBX
// 005ee703: RET
