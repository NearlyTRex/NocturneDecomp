// Name: core_shotgun.cpp_CShotgun_ctor_FUN_00587ee0
// Address: 00587ee0
// Address Range: [[00587ee0, 00587f69]]
// Convention: __cdecl
// Signature: CShotgun * core_shotgun.cpp_CShotgun_ctor_FUN_00587ee0(CShotgun * this_ptr)
// Cross-references:
//   core_shotgun.cpp_FUN_00587ea0 (00587ea0) at 00587eba [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shotgun_kfm_00649afc
//   undefined4 DAT_00662a7c
//   CDemonActor_vtable PTR_core_weapon.cpp_ActorModelSomething_FUN_00662a84
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   core_weapon.cpp_CWeapon_ctor_FUN_005ede70

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CShotgun * __cdecl core_shotgun_cpp_CShotgun_ctor_FUN_00587ee0(CShotgun *this_ptr)

{
  undefined4 uVar1;
  CShotgun *pCVar2;
  
  pCVar2 = (CShotgun *)core_weapon_cpp_CWeapon_ctor_FUN_005ede70(&this_ptr->base_weapon);
  (pCVar2->base_weapon).base_actor.metadata.vtable =
       &PTR_core_weapon_cpp_ActorModelSomething_FUN_00662a84;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            ((CKeyFramedModelInstance *)&(pCVar2->base_weapon).model_instance,"shotgun.kfm"
            );
  pCVar2->field1_0x578[0] = '\0';
  pCVar2->field1_0x578[1] = '\0';
  pCVar2->field1_0x578[2] = ' ';
  pCVar2->field1_0x578[3] = 'A';
  (pCVar2->base_weapon).field4_0x2d8[0] = '\x01';
  (pCVar2->base_weapon).field4_0x2d8[1] = '\0';
  (pCVar2->base_weapon).field4_0x2d8[2] = '\0';
  (pCVar2->base_weapon).field4_0x2d8[3] = '\0';
  (pCVar2->base_weapon).field4_0x2d8[4] = '\x02';
  (pCVar2->base_weapon).field4_0x2d8[5] = '\0';
  (pCVar2->base_weapon).field4_0x2d8[6] = '\0';
  (pCVar2->base_weapon).field4_0x2d8[7] = '\0';
  (pCVar2->base_weapon).field4_0x2d8[8] = '\x01';
  (pCVar2->base_weapon).field4_0x2d8[9] = '\0';
  (pCVar2->base_weapon).field4_0x2d8[10] = '\0';
  (pCVar2->base_weapon).field4_0x2d8[0xb] = '\0';
  (pCVar2->base_weapon).field4_0x2d8[0xc] = '\x01';
  (pCVar2->base_weapon).field4_0x2d8[0xd] = '\0';
  (pCVar2->base_weapon).field4_0x2d8[0xe] = '\0';
  (pCVar2->base_weapon).field4_0x2d8[0xf] = '\0';
  (pCVar2->base_weapon).field4_0x2d8[0x10] = '\0';
  uVar1 = _DAT_00662a7c;
  (pCVar2->base_weapon).field4_0x2d8[0x11] = '\0';
  (pCVar2->base_weapon).field4_0x2d8[0x12] = 'p';
  (pCVar2->base_weapon).field4_0x2d8[0x13] = 'A';
  (pCVar2->base_weapon).field4_0x2d8[0x14] = '\0';
  (pCVar2->base_weapon).field4_0x2d8[0x15] = '\0';
  (pCVar2->base_weapon).field4_0x2d8[0x16] = '\0';
  (pCVar2->base_weapon).field4_0x2d8[0x17] = '\0';
  pCVar2->field1_0x578[4] = '\0';
  pCVar2->field1_0x578[5] = '\0';
  pCVar2->field1_0x578[6] = '\0';
  pCVar2->field1_0x578[7] = '\0';
  *(undefined4 *)((pCVar2->base_weapon).field8_0x305 + 0x25f) = uVar1;
  return pCVar2;
}


// Assembly code:
// 00587ee0: PUSH EBX
//   Label: core_shotgun.cpp_CShotgun_ctor_FUN_00587ee0
// 00587ee1: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00587ee5: PUSH EDX
// 00587ee6: CALL core_weapon.cpp_CWeapon_ctor_FUN_005ede70
//   XREF to: 005ede70 (UNCONDITIONAL_CALL)
// 00587eeb: ADD ESP,0x4
// 00587eee: PUSH 0x649afc
//   XREF to: 00649afc (DATA)
// 00587ef3: MOV EBX,EAX
// 00587ef5: ADD EAX,0x158
// 00587efa: PUSH EAX
// 00587efb: MOV dword ptr [EAX + -0x4],0x662a84
//   XREF to: 00662a84 (DATA)
// 00587f02: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 00587f07: MOV dword ptr [EBX + 0x578],0x41200000
// 00587f11: MOV dword ptr [EBX + 0x2d8],0x1
// 00587f1b: MOV dword ptr [EBX + 0x2dc],0x2
// 00587f25: MOV dword ptr [EBX + 0x2e0],0x1
// 00587f2f: MOV dword ptr [EBX + 0x2e4],0x1
// 00587f39: MOV dword ptr [EBX + 0x2e8],0x41700000
// 00587f43: FLD float ptr [0x00662a7c]
//   XREF to: 00662a7c (READ)
// 00587f49: MOV dword ptr [EBX + 0x2ec],0x0
// 00587f53: ADD ESP,0x8
// 00587f56: MOV dword ptr [EBX + 0x57c],0x0
// 00587f60: MOV EAX,EBX
// 00587f62: FSTP float ptr [EBX + 0x564]
// 00587f68: POP EBX
// 00587f69: RET
