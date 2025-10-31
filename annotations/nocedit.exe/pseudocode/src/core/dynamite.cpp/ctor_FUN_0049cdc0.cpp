// Name: core_dynamite.cpp_ctor_FUN_0049cdc0
// Address: 0049cdc0
// Address Range: [[0049cdc0, 0049ce69]]
// Convention: __cdecl
// Signature: CDynamite * core_dynamite.cpp_ctor_FUN_0049cdc0(CDynamite * this_ptr)
// Cross-references:
//   core_dynamite.cpp_FUN_0049cd80 (0049cd80) at 0049cd9a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_dynamitestick_kfm_00622e81
//   CDemonActor_vtable PTR_core_weapon.cpp_ActorModelSomething_FUN_0065d314
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   core_weapon.cpp_CWeapon_ctor_FUN_005ede70

#include "nocturne.h"

CDynamite * __cdecl core_dynamite_cpp_ctor_FUN_0049cdc0(CDynamite *this_ptr)

{
  CDynamite *pCVar1;
  
  pCVar1 = (CDynamite *)core_weapon_cpp_CWeapon_ctor_FUN_005ede70(&this_ptr->base_weapon);
  (pCVar1->base_weapon).base_actor.metadata.vtable =
       &PTR_core_weapon_cpp_ActorModelSomething_FUN_0065d314;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            ((CKeyFramedModelInstance *)&(pCVar1->base_weapon).model_instance,
             "dynamitestick.kfm");
  (pCVar1->base_weapon).field8_0x305[0x25f] = '\0';
  (pCVar1->base_weapon).field8_0x305[0x260] = '\0';
  (pCVar1->base_weapon).field8_0x305[0x261] = -0x80;
  (pCVar1->base_weapon).field8_0x305[0x262] = '?';
  pCVar1->field1_0x578[0xc] = '\0';
  pCVar1->field1_0x578[0xd] = '\0';
  pCVar1->field1_0x578[0xe] = '\0';
  pCVar1->field1_0x578[0xf] = '\0';
  *(undefined4 *)(pCVar1->field1_0x578 + 8) = *(undefined4 *)(pCVar1->field1_0x578 + 0xc);
  *(undefined4 *)(pCVar1->field1_0x578 + 4) = *(undefined4 *)(pCVar1->field1_0x578 + 8);
  pCVar1->field1_0x578[0] = '\0';
  pCVar1->field1_0x578[1] = '\0';
  pCVar1->field1_0x578[2] = -0x80;
  pCVar1->field1_0x578[3] = -0x41;
  (pCVar1->base_weapon).field4_0x2d8[0] = '\0';
  (pCVar1->base_weapon).field4_0x2d8[1] = '\0';
  (pCVar1->base_weapon).field4_0x2d8[2] = '\0';
  (pCVar1->base_weapon).field4_0x2d8[3] = '\0';
  (pCVar1->base_weapon).field4_0x2d8[4] = '\0';
  (pCVar1->base_weapon).field4_0x2d8[5] = '\0';
  (pCVar1->base_weapon).field4_0x2d8[6] = '\0';
  (pCVar1->base_weapon).field4_0x2d8[7] = '\0';
  (pCVar1->base_weapon).field4_0x2d8[8] = '\x03';
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
  pCVar1->field1_0x578[0x10] = '\0';
  pCVar1->field1_0x578[0x11] = '\0';
  pCVar1->field1_0x578[0x12] = '\0';
  pCVar1->field1_0x578[0x13] = '\0';
  return pCVar1;
}


// Assembly code:
// 0049cdc0: PUSH EBX
//   Label: core_dynamite.cpp_ctor_FUN_0049cdc0
// 0049cdc1: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0049cdc5: PUSH EDX
// 0049cdc6: CALL core_weapon.cpp_CWeapon_ctor_FUN_005ede70
//   XREF to: 005ede70 (UNCONDITIONAL_CALL)
// 0049cdcb: ADD ESP,0x4
// 0049cdce: PUSH 0x622e81
//   XREF to: 00622e81 (DATA)
// 0049cdd3: MOV EBX,EAX
// 0049cdd5: ADD EAX,0x158
// 0049cdda: PUSH EAX
// 0049cddb: MOV dword ptr [EAX + -0x4],0x65d314
//   XREF to: 0065d314 (DATA)
// 0049cde2: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 0049cde7: LEA EAX,[EBX + 0x57c]
// 0049cded: MOV dword ptr [EBX + 0x564],0x3f800000
// 0049cdf7: MOV dword ptr [EAX + 0x8],0x0
// 0049cdfe: MOV EDX,dword ptr [EAX + 0x8]
// 0049ce01: MOV dword ptr [EAX + 0x4],EDX
// 0049ce04: MOV EDX,dword ptr [EAX + 0x4]
// 0049ce07: MOV dword ptr [EAX],EDX
// 0049ce09: MOV dword ptr [EBX + 0x578],0xbf800000
// 0049ce13: MOV dword ptr [EBX + 0x2d8],0x0
// 0049ce1d: MOV dword ptr [EBX + 0x2dc],0x0
// 0049ce27: MOV dword ptr [EBX + 0x2e0],0x3
// 0049ce31: MOV dword ptr [EBX + 0x2e4],0x0
// 0049ce3b: MOV dword ptr [EBX + 0x2e8],0x43480000
// 0049ce45: MOV dword ptr [EBX + 0x2ec],0x0
// 0049ce4f: ADD ESP,0x8
// 0049ce52: MOV dword ptr [EBX + 0x2f0],0x0
// 0049ce5c: MOV EAX,EBX
// 0049ce5e: MOV dword ptr [EBX + 0x588],0x0
// 0049ce68: POP EBX
// 0049ce69: RET
