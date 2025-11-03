// Name: core_weapon.cpp_CWeapon_FUN_005ee490
// Address: 005ee490
// Address Range: [[005ee490, 005ee49a]]
// Convention: __cdecl
// Signature: int core_weapon.cpp_CWeapon_FUN_005ee490(CWeapon * this_ptr)

#include "nocturne.h"

int __cdecl core_weapon_cpp_CWeapon_FUN_005ee490(CWeapon *this_ptr)

{
  int iVar1;
  
  iVar1._0_1_ = this_ptr->carried_by_actor;
  iVar1._1_1_ = this_ptr->field9_0x305[0];
  iVar1._2_1_ = this_ptr->field9_0x305[1];
  iVar1._3_1_ = this_ptr->field9_0x305[2];
  return iVar1;
}


// Assembly code:
// 005ee490: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_weapon.cpp_CWeapon_FUN_005ee490
//   XREF to: Stack[0x4] (READ)
// 005ee494: MOV EAX,dword ptr [EAX + 0x304]
// 005ee49a: RET
