// Name: core_weapon.cpp_CWeapon_FUN_005ee710
// Address: 005ee710
// Address Range: [[005ee710, 005ee726]]
// Convention: __cdecl
// Signature: int core_weapon.cpp_CWeapon_FUN_005ee710(CWeapon * this_ptr)

#include "nocturne.h"

int __cdecl core_weapon_cpp_CWeapon_FUN_005ee710(CWeapon *this_ptr)

{
  return (uint)((*(uint *)(this_ptr->field7_0x2f4 + 0xc) & 0x7fffffff) == 0);
}


// Assembly code:
// 005ee710: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_weapon.cpp_CWeapon_FUN_005ee710
//   XREF to: Stack[0x4] (READ)
// 005ee714: TEST dword ptr [EAX + 0x300],0x7fffffff
// 005ee71e: SETZ AL
// 005ee721: AND EAX,0xff
// 005ee726: RET
