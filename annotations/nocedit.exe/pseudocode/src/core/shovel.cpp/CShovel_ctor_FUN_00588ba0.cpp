// Name: core_shovel.cpp_CShovel_ctor_FUN_00588ba0
// Address: 00588ba0
// Address Range: [[00588ba0, 00588c1d]]
// Convention: __cdecl
// Signature: CShovel * core_shovel.cpp_CShovel_ctor_FUN_00588ba0(CShovel * this_ptr)
// Cross-references:
//   core_shovel.cpp_FUN_00588b60 (00588b60) at 00588b7a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shoveit_kfm_00649b9a
//   CDemonActor_vtable PTR_core_weapon.cpp_ActorModelSomething_FUN_00662bd4
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   core_weapon.cpp_CWeapon_ctor_FUN_005ede70

#include "nocturne.h"

CShovel * __cdecl core_shovel_cpp_CShovel_ctor_FUN_00588ba0(CShovel *this_ptr)

{
  CWeapon *pCVar1;
  
  pCVar1 = core_weapon_cpp_CWeapon_ctor_FUN_005ede70(&this_ptr->base_weapon);
  (pCVar1->base_actor).vtable = &PTR_core_weapon_cpp_ActorModelSomething_FUN_00662bd4;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (&pCVar1->model,"shoveit.kfm");
  pCVar1->field3_0x2d8[8] = '\a';
  pCVar1->field3_0x2d8[9] = '\0';
  pCVar1->field3_0x2d8[10] = '\0';
  pCVar1->field3_0x2d8[0xb] = '\0';
  pCVar1->ammo_type = -1;
  pCVar1->ammo_count = 0;
  pCVar1->field3_0x2d8[0] = '\0';
  pCVar1->field3_0x2d8[1] = '\0';
  pCVar1->field3_0x2d8[2] = '\0';
  pCVar1->field3_0x2d8[3] = '\0';
  pCVar1->field3_0x2d8[4] = '\0';
  pCVar1->field3_0x2d8[5] = '\0';
  pCVar1->field3_0x2d8[6] = '\0';
  pCVar1->field3_0x2d8[7] = '\0';
  pCVar1->field3_0x2d8[0xc] = '\0';
  pCVar1->field3_0x2d8[0xd] = '\0';
  pCVar1->field3_0x2d8[0xe] = '\0';
  pCVar1->field3_0x2d8[0xf] = '\0';
  pCVar1->bolt_velocity = 5.0;
  pCVar1->fire_cooldown = 0.0;
  return (CShovel *)pCVar1;
}


// Assembly code:
// 00588ba0: PUSH EBX
//   Label: core_shovel.cpp_CShovel_ctor_FUN_00588ba0
// 00588ba1: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00588ba5: PUSH EDX
// 00588ba6: CALL core_weapon.cpp_CWeapon_ctor_FUN_005ede70
//   XREF to: 005ede70 (UNCONDITIONAL_CALL)
// 00588bab: ADD ESP,0x4
// 00588bae: PUSH 0x649b9a
//   XREF to: 00649b9a (DATA)
// 00588bb3: MOV EBX,EAX
// 00588bb5: ADD EAX,0x158
// 00588bba: PUSH EAX
// 00588bbb: MOV dword ptr [EAX + -0x4],0x662bd4
//   XREF to: 00662bd4 (DATA)
// 00588bc2: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 00588bc7: MOV dword ptr [EBX + 0x2e0],0x7
// 00588bd1: MOV dword ptr [EBX + 0x56c],0xffffffff
// 00588bdb: MOV dword ptr [EBX + 0x568],0x0
// 00588be5: MOV dword ptr [EBX + 0x2d8],0x0
// 00588bef: MOV dword ptr [EBX + 0x2dc],0x0
// 00588bf9: MOV dword ptr [EBX + 0x2e4],0x0
// 00588c03: ADD ESP,0x8
// 00588c06: MOV dword ptr [EBX + 0x2e8],0x40a00000
// 00588c10: MOV EAX,EBX
// 00588c12: MOV dword ptr [EBX + 0x2ec],0x0
// 00588c1c: POP EBX
// 00588c1d: RET
