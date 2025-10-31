// Name: core_baron.cpp_FUN_CBaronWeapon_00413de0
// Address: 00413de0
// Address Range: [[00413de0, 00413ded]]
// Convention: __cdecl
// Signature: void core_baron.cpp_FUN_CBaronWeapon_00413de0(CBaronWeapon * this_ptr)
// Function calls:
//   core_weapon.cpp_CWeapon_FUN_005ee030

#include "nocturne.h"

void __cdecl core_baron_cpp_FUN_CBaronWeapon_00413de0(CBaronWeapon *this_ptr)

{
  core_weapon_cpp_CWeapon_FUN_005ee030(&this_ptr->base_weapon);
  return;
}


// Assembly code:
// 00413de0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_baron.cpp_FUN_CBaronWeapon_00413de0
//   XREF to: Stack[0x4] (READ)
// 00413de4: PUSH EDX
// 00413de5: CALL core_weapon.cpp_CWeapon_FUN_005ee030
//   XREF to: 005ee030 (UNCONDITIONAL_CALL)
// 00413dea: ADD ESP,0x4
// 00413ded: RET
