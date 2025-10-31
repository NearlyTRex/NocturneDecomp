// Name: core_baron.cpp_CBaronWeapon_ctor_FUN_00413d40
// Address: 00413d40
// Address Range: [[00413d40, 00413d93]]
// Convention: __cdecl
// Signature: CBaronWeapon * core_baron.cpp_CBaronWeapon_ctor_FUN_00413d40(CBaronWeapon * this_ptr)
// Cross-references:
//   core_baron.cpp_constructor_FUN_00413d00 (00413d00) at 00413d1d [UNCONDITIONAL_CALL]
// Globals:
//   CDemonActor_vtable g_CBaronWeaponVTable
// Function calls:
//   core_weapon.cpp_CWeapon_ctor_FUN_005ede70

#include "nocturne.h"

CBaronWeapon * __cdecl core_baron_cpp_CBaronWeapon_ctor_FUN_00413d40(CBaronWeapon *this_ptr)

{
  CBaronWeapon *pCVar1;
  
  pCVar1 = (CBaronWeapon *)core_weapon_cpp_CWeapon_ctor_FUN_005ede70(&this_ptr->base_weapon);
  (pCVar1->base_weapon).base_actor.metadata.vtable = &g_CBaronWeaponVTable;
  (pCVar1->base_weapon).field4_0x2d8[8] = '\b';
  (pCVar1->base_weapon).field4_0x2d8[9] = '\0';
  (pCVar1->base_weapon).field4_0x2d8[10] = '\0';
  (pCVar1->base_weapon).field4_0x2d8[0xb] = '\0';
  (pCVar1->base_weapon).field4_0x2d8[0xc] = '\0';
  (pCVar1->base_weapon).field4_0x2d8[0xd] = '\0';
  (pCVar1->base_weapon).field4_0x2d8[0xe] = '\0';
  (pCVar1->base_weapon).field4_0x2d8[0xf] = '\0';
  (pCVar1->base_weapon).field4_0x2d8[0x10] = '\0';
  (pCVar1->base_weapon).field4_0x2d8[0x11] = '\0';
  (pCVar1->base_weapon).field4_0x2d8[0x12] = 'H';
  (pCVar1->base_weapon).field4_0x2d8[0x13] = 'C';
  (pCVar1->base_weapon).field4_0x2d8[0x14] = '\0';
  (pCVar1->base_weapon).field4_0x2d8[0x15] = '\0';
  (pCVar1->base_weapon).field4_0x2d8[0x16] = '\0';
  (pCVar1->base_weapon).field4_0x2d8[0x17] = '\0';
  (pCVar1->base_weapon).can_attach_light = 0;
  pCVar1->field1_0x578 = 0;
  return pCVar1;
}


// Assembly code:
// 00413d40: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_baron.cpp_CBaronWeapon_ctor_FUN_00413d40
//   XREF to: Stack[0x4] (READ)
// 00413d44: PUSH EDX
// 00413d45: CALL core_weapon.cpp_CWeapon_ctor_FUN_005ede70
//   XREF to: 005ede70 (UNCONDITIONAL_CALL)
// 00413d4a: MOV dword ptr [EAX + 0x154],0x65a1e4
//   XREF to: 0065a1e4 (DATA)
// 00413d54: MOV dword ptr [EAX + 0x2e0],0x8
// 00413d5e: MOV dword ptr [EAX + 0x2e4],0x0
// 00413d68: MOV dword ptr [EAX + 0x2e8],0x43480000
// 00413d72: MOV dword ptr [EAX + 0x2ec],0x0
// 00413d7c: MOV dword ptr [EAX + 0x2f0],0x0
// 00413d86: ADD ESP,0x4
// 00413d89: MOV dword ptr [EAX + 0x578],0x0
// 00413d93: RET
