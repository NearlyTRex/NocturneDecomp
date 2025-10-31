// Name: core_crossbow.cpp_FUN_00448c70
// Address: 00448c70
// Address Range: [[00448c70, 00448d21]]
// Convention: __cdecl
// Signature: CCrossbow * core_crossbow.cpp_FUN_00448c70(CCrossbow * this_ptr)
// Cross-references:
//   core_crossbow.cpp_FUN_00448c30 (00448c30) at 00448c4a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_crossbow_kfm_00619b79
//   CDemonActor_vtable PTR_core_weapon.cpp_ActorModelSomething_FUN_0065c394
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   core_flame.cpp_CFlame_ctor_FUN_004c9aa0
//   core_weapon.cpp_CWeapon_ctor_FUN_005ede70

#include "nocturne.h"

CCrossbow * __cdecl core_crossbow_cpp_FUN_00448c70(CCrossbow *this_ptr)

{
  CFlame *pCVar1;
  CWeapon *pCVar2;
  CFlame *pCVar3;
  
  pCVar2 = core_weapon_cpp_CWeapon_ctor_FUN_005ede70(&this_ptr->base_weapon);
  pCVar3 = core_flame_cpp_CFlame_ctor_FUN_004c9aa0((CFlame *)(pCVar2[1].base_actor.actor_name + 4));
  pCVar3[-2].base_actor.field22_0x120 = (int)&PTR_core_weapon_cpp_ActorModelSomething_FUN_0065c394;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            ((CKeyFramedModelInstance *)&pCVar3[-2].base_actor.field23_0x124,"crossbow.kfm"
            );
  pCVar3[-1].base_actor.location.position.z = 0.0;
  pCVar3[-0xffffffff00000001].field12_0x290[0x10] = '\0';
  pCVar3[-0xffffffff00000001].field12_0x290[0x11] = '\0';
  pCVar3[-0xffffffff00000001].field12_0x290[0x12] = '\0';
  pCVar3[-0xffffffff00000001].field12_0x290[0x13] = '\0';
  (pCVar3->flame_size).x = 0.45;
  (pCVar3->flame_size).y = 0.85;
  (pCVar3->flame_size).z = 0.45;
  pCVar3[-0xffffffff00000001].base_actor.actor_name[0] = '\0';
  pCVar3[-0xffffffff00000001].base_actor.actor_name[1] = '\0';
  pCVar3[-0xffffffff00000001].base_actor.actor_name[2] = '\0';
  pCVar3[-0xffffffff00000001].base_actor.actor_name[3] = '\0';
  pCVar1 = pCVar3 + -1;
  (pCVar1->base_actor).actor_name[4] = '\0';
  (pCVar1->base_actor).actor_name[5] = '\0';
  (pCVar1->base_actor).actor_name[6] = '\0';
  (pCVar1->base_actor).actor_name[7] = '\0';
  pCVar1 = pCVar3 + -1;
  (pCVar1->base_actor).actor_name[8] = '\x01';
  (pCVar1->base_actor).actor_name[9] = '\0';
  (pCVar1->base_actor).actor_name[10] = '\0';
  (pCVar1->base_actor).actor_name[0xb] = '\0';
  pCVar1 = pCVar3 + -1;
  (pCVar1->base_actor).actor_name[0xc] = '\0';
  (pCVar1->base_actor).actor_name[0xd] = '\0';
  (pCVar1->base_actor).actor_name[0xe] = '\0';
  (pCVar1->base_actor).actor_name[0xf] = '\0';
  pCVar1 = pCVar3 + -1;
  (pCVar1->base_actor).actor_name[0x10] = '\0';
  (pCVar1->base_actor).actor_name[0x11] = '\0';
  (pCVar1->base_actor).actor_name[0x12] = 'H';
  (pCVar1->base_actor).actor_name[0x13] = 'B';
  pCVar1 = pCVar3 + -1;
  (pCVar1->base_actor).actor_name[0x14] = '\0';
  (pCVar1->base_actor).actor_name[0x15] = '\0';
  (pCVar1->base_actor).actor_name[0x16] = '\0';
  (pCVar1->base_actor).actor_name[0x17] = '\0';
  return (CCrossbow *)(pCVar3[-3].field7_0x1b8 + 0xb8);
}


// Assembly code:
// 00448c70: PUSH EBX
//   Label: core_crossbow.cpp_FUN_00448c70
// 00448c71: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00448c75: PUSH EBX
// 00448c76: CALL core_weapon.cpp_CWeapon_ctor_FUN_005ede70
//   XREF to: 005ede70 (UNCONDITIONAL_CALL)
// 00448c7b: ADD ESP,0x4
// 00448c7e: ADD EAX,0x57c
// 00448c83: PUSH EAX
// 00448c84: CALL core_flame.cpp_CFlame_ctor_FUN_004c9aa0
//   XREF to: 004c9aa0 (UNCONDITIONAL_CALL)
// 00448c89: ADD ESP,0x4
// 00448c8c: LEA EBX,[EAX + 0xfffffa84]
// 00448c92: PUSH 0x619b79
//   XREF to: 00619b79 (DATA)
// 00448c97: LEA EAX,[EBX + 0x158]
// 00448c9d: PUSH EAX
// 00448c9e: MOV dword ptr [EBX + 0x154],0x65c394
//   XREF to: 0065c394 (DATA)
// 00448ca8: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 00448cad: MOV dword ptr [EBX + 0x300],0x0
// 00448cb7: MOV dword ptr [EBX + 0x578],0x0
// 00448cc1: MOV dword ptr [EBX + 0x6d4],0x3ee66666
// 00448ccb: MOV dword ptr [EBX + 0x6d8],0x3f59999a
// 00448cd5: MOV dword ptr [EBX + 0x6dc],0x3ee66666
// 00448cdf: MOV dword ptr [EBX + 0x2d8],0x0
// 00448ce9: MOV dword ptr [EBX + 0x2dc],0x0
// 00448cf3: MOV dword ptr [EBX + 0x2e0],0x1
// 00448cfd: MOV dword ptr [EBX + 0x2e4],0x0
// 00448d07: ADD ESP,0x8
// 00448d0a: MOV dword ptr [EBX + 0x2e8],0x42480000
// 00448d14: MOV EAX,EBX
// 00448d16: MOV dword ptr [EBX + 0x2ec],0x0
// 00448d20: POP EBX
// 00448d21: RET
