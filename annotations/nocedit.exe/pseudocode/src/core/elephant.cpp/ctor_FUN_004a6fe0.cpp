// Name: core_elephant.cpp_ctor_FUN_004a6fe0
// Address: 004a6fe0
// Address Range: [[004a6fe0, 004a7069]]
// Convention: __cdecl
// Signature: CElephantGun * core_elephant.cpp_ctor_FUN_004a6fe0(CElephantGun * this_ptr)
// Cross-references:
//   core_elephant.cpp_FUN_004a6fa0 (004a6fa0) at 004a6fba [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_elephantgun_kfm_00623fc4
//   undefined4 DAT_0065d52c
//   CDemonActor_vtable PTR_core_weapon.cpp_ActorModelSomething_FUN_0065d534
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   core_weapon.cpp_CWeapon_ctor_FUN_005ede70

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CElephantGun * __cdecl core_elephant_cpp_ctor_FUN_004a6fe0(CElephantGun *this_ptr)

{
  undefined4 uVar1;
  CElephantGun *pCVar2;
  
  pCVar2 = (CElephantGun *)core_weapon_cpp_CWeapon_ctor_FUN_005ede70(&this_ptr->base_weapon);
  (pCVar2->base_weapon).base_actor.vtable = &PTR_core_weapon_cpp_ActorModelSomething_FUN_0065d534;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (&(pCVar2->base_weapon).model,"elephantgun.kfm");
  pCVar2->field1_0x578[0] = '\0';
  pCVar2->field1_0x578[1] = '\0';
  pCVar2->field1_0x578[2] = ' ';
  pCVar2->field1_0x578[3] = 'A';
  (pCVar2->base_weapon).field3_0x2d8[0] = '\x01';
  (pCVar2->base_weapon).field3_0x2d8[1] = '\0';
  (pCVar2->base_weapon).field3_0x2d8[2] = '\0';
  (pCVar2->base_weapon).field3_0x2d8[3] = '\0';
  (pCVar2->base_weapon).field3_0x2d8[4] = '\x02';
  (pCVar2->base_weapon).field3_0x2d8[5] = '\0';
  (pCVar2->base_weapon).field3_0x2d8[6] = '\0';
  (pCVar2->base_weapon).field3_0x2d8[7] = '\0';
  (pCVar2->base_weapon).field3_0x2d8[8] = '\x01';
  (pCVar2->base_weapon).field3_0x2d8[9] = '\0';
  (pCVar2->base_weapon).field3_0x2d8[10] = '\0';
  (pCVar2->base_weapon).field3_0x2d8[0xb] = '\0';
  (pCVar2->base_weapon).field3_0x2d8[0xc] = '\x01';
  (pCVar2->base_weapon).field3_0x2d8[0xd] = '\0';
  (pCVar2->base_weapon).field3_0x2d8[0xe] = '\0';
  (pCVar2->base_weapon).field3_0x2d8[0xf] = '\0';
  (pCVar2->base_weapon).bolt_velocity = 15.0;
  uVar1 = _DAT_0065d52c;
  (pCVar2->base_weapon).fire_cooldown = 0.0;
  pCVar2->field1_0x578[4] = '\0';
  pCVar2->field1_0x578[5] = '\0';
  pCVar2->field1_0x578[6] = '\0';
  pCVar2->field1_0x578[7] = '\0';
  *(undefined4 *)((pCVar2->base_weapon).field9_0x305 + 0x25f) = uVar1;
  return pCVar2;
}


// Assembly code:
// 004a6fe0: PUSH EBX
//   Label: core_elephant.cpp_ctor_FUN_004a6fe0
// 004a6fe1: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004a6fe5: PUSH EDX
// 004a6fe6: CALL core_weapon.cpp_CWeapon_ctor_FUN_005ede70
//   XREF to: 005ede70 (UNCONDITIONAL_CALL)
// 004a6feb: ADD ESP,0x4
// 004a6fee: PUSH 0x623fc4
//   XREF to: 00623fc4 (DATA)
// 004a6ff3: MOV EBX,EAX
// 004a6ff5: ADD EAX,0x158
// 004a6ffa: PUSH EAX
// 004a6ffb: MOV dword ptr [EAX + -0x4],0x65d534
//   XREF to: 0065d534 (DATA)
// 004a7002: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 004a7007: MOV dword ptr [EBX + 0x578],0x41200000
// 004a7011: MOV dword ptr [EBX + 0x2d8],0x1
// 004a701b: MOV dword ptr [EBX + 0x2dc],0x2
// 004a7025: MOV dword ptr [EBX + 0x2e0],0x1
// 004a702f: MOV dword ptr [EBX + 0x2e4],0x1
// 004a7039: MOV dword ptr [EBX + 0x2e8],0x41700000
// 004a7043: FLD float ptr [0x0065d52c]
//   XREF to: 0065d52c (READ)
// 004a7049: MOV dword ptr [EBX + 0x2ec],0x0
// 004a7053: ADD ESP,0x8
// 004a7056: MOV dword ptr [EBX + 0x57c],0x0
// 004a7060: MOV EAX,EBX
// 004a7062: FSTP float ptr [EBX + 0x564]
// 004a7068: POP EBX
// 004a7069: RET
