// Name: core_weapon.cpp_CWeapon_FUN_005ee3e0
// Address: 005ee3e0
// Address Range: [[005ee3e0, 005ee3ee]]
// Convention: __cdecl
// Signature: void core_weapon.cpp_CWeapon_FUN_005ee3e0(CWeapon * this_ptr)

#include "nocturne.h"

void __cdecl core_weapon_cpp_CWeapon_FUN_005ee3e0(CWeapon *this_ptr)

{
  undefined1 uStack00000008;
  undefined1 uStack00000009;
  undefined1 uStack0000000a;
  undefined1 uStack0000000b;
  
  this_ptr->carried_by_actor = uStack00000008;
  this_ptr->field9_0x305[0] = uStack00000009;
  this_ptr->field9_0x305[1] = uStack0000000a;
  this_ptr->field9_0x305[2] = uStack0000000b;
  return;
}


// Assembly code:
// 005ee3e0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_weapon.cpp_CWeapon_FUN_005ee3e0
//   XREF to: Stack[0x4] (READ)
// 005ee3e4: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005ee3e8: MOV dword ptr [EDX + 0x304],EAX
// 005ee3ee: RET
