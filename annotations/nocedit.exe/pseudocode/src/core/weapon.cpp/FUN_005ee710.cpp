// Name: core_weapon.cpp_FUN_005ee710
// Address: 005ee710
// Address Range: [[005ee710, 005ee726]]
// Convention: unknown
// Signature: undefined core_weapon.cpp_FUN_005ee710()

#include "nocturne.h"

/* Signature: undefined1 actors_weapon_weapon.cpp_FUN_005ee710(undefined4 param_1) */

bool core_weapon_cpp_FUN_005ee710(void)

{
  int in_stack_00000004;
  
  return (*(uint *)(in_stack_00000004 + 0x300) & 0x7fffffff) == 0;
}


// Assembly code:
// 005ee710: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_weapon.cpp_FUN_005ee710
//   XREF to: Stack[0x4] (READ)
// 005ee714: TEST dword ptr [EAX + 0x300],0x7fffffff
// 005ee71e: SETZ AL
// 005ee721: AND EAX,0xff
// 005ee726: RET
