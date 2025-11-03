// Name: core_lightgun.cpp_FUN_00505900
// Address: 00505900
// Address Range: [[00505900, 005059b5]]
// Convention: __cdecl
// Signature: CLightGun * core_lightgun.cpp_FUN_00505900(CLightGun * this_ptr)
// Cross-references:
//   core_lightgun.cpp_FUN_005058c0 (005058c0) at 005058da [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_cre_kfm_00631455
//   undefined4 DAT_00660a3c
//   undefined4 DAT_00660a40
//   CDemonActor_vtable PTR_core_weapon.cpp_ActorModelSomething_FUN_00660a64
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   core_weapon.cpp_CWeapon_ctor_FUN_005ede70

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CLightGun * __cdecl core_lightgun_cpp_FUN_00505900(CLightGun *this_ptr)

{
  undefined4 uVar1;
  undefined4 uVar2;
  CLightGun *pCVar3;
  
  pCVar3 = (CLightGun *)core_weapon_cpp_CWeapon_ctor_FUN_005ede70(&this_ptr->base_weapon);
  (pCVar3->base_weapon).base_actor.vtable = &PTR_core_weapon_cpp_ActorModelSomething_FUN_00660a64;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (&(pCVar3->base_weapon).model,"cre.kfm");
  pCVar3->field1_0x578[4] = '\0';
  pCVar3->field1_0x578[5] = '\0';
  pCVar3->field1_0x578[6] = '\0';
  pCVar3->field1_0x578[7] = '\0';
  pCVar3->field1_0x578[0] = '\0';
  pCVar3->field1_0x578[1] = '\0';
  pCVar3->field1_0x578[2] = '\0';
  pCVar3->field1_0x578[3] = '\0';
  (pCVar3->base_weapon).field3_0x2d8[0] = '\0';
  (pCVar3->base_weapon).field3_0x2d8[1] = '\0';
  (pCVar3->base_weapon).field3_0x2d8[2] = '\0';
  (pCVar3->base_weapon).field3_0x2d8[3] = '\0';
  (pCVar3->base_weapon).field3_0x2d8[4] = '\0';
  (pCVar3->base_weapon).field3_0x2d8[5] = '\0';
  (pCVar3->base_weapon).field3_0x2d8[6] = '\0';
  (pCVar3->base_weapon).field3_0x2d8[7] = '\0';
  (pCVar3->base_weapon).field3_0x2d8[8] = '\x02';
  (pCVar3->base_weapon).field3_0x2d8[9] = '\0';
  (pCVar3->base_weapon).field3_0x2d8[10] = '\0';
  (pCVar3->base_weapon).field3_0x2d8[0xb] = '\0';
  (pCVar3->base_weapon).field3_0x2d8[0xc] = '\0';
  (pCVar3->base_weapon).field3_0x2d8[0xd] = '\0';
  (pCVar3->base_weapon).field3_0x2d8[0xe] = '\0';
  (pCVar3->base_weapon).field3_0x2d8[0xf] = '\0';
  (pCVar3->base_weapon).bolt_velocity = 32.0;
  (pCVar3->base_weapon).fire_cooldown = 1.4013e-45;
  uVar1 = _DAT_00660a3c;
  (pCVar3->base_weapon).can_attach_light = 0;
  uVar2 = DAT_00660a40;
  pCVar3->field1_0x578[0x10] = '\0';
  pCVar3->field1_0x578[0x11] = '\0';
  pCVar3->field1_0x578[0x12] = '\0';
  pCVar3->field1_0x578[0x13] = '\0';
  pCVar3->field1_0x578[0xc] = '\0';
  pCVar3->field1_0x578[0xd] = '\0';
  pCVar3->field1_0x578[0xe] = -0x80;
  pCVar3->field1_0x578[0xf] = '?';
  *(undefined4 *)((pCVar3->base_weapon).field9_0x305 + 0x25f) = uVar1;
  *(undefined4 *)(pCVar3->field1_0x578 + 8) = uVar2;
  return pCVar3;
}


// Assembly code:
// 00505900: PUSH EBX
//   Label: core_lightgun.cpp_FUN_00505900
// 00505901: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00505905: PUSH EDX
// 00505906: CALL core_weapon.cpp_CWeapon_ctor_FUN_005ede70
//   XREF to: 005ede70 (UNCONDITIONAL_CALL)
// 0050590b: ADD ESP,0x4
// 0050590e: PUSH 0x631455
//   XREF to: 00631455 (DATA)
// 00505913: MOV EBX,EAX
// 00505915: ADD EAX,0x158
// 0050591a: PUSH EAX
// 0050591b: MOV dword ptr [EAX + -0x4],0x660a64
//   XREF to: 00660a64 (DATA)
// 00505922: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 00505927: MOV dword ptr [EBX + 0x57c],0x0
// 00505931: MOV dword ptr [EBX + 0x578],0x0
// 0050593b: MOV dword ptr [EBX + 0x2d8],0x0
// 00505945: MOV dword ptr [EBX + 0x2dc],0x0
// 0050594f: MOV dword ptr [EBX + 0x2e0],0x2
// 00505959: MOV dword ptr [EBX + 0x2e4],0x0
// 00505963: MOV dword ptr [EBX + 0x2e8],0x42000000
// 0050596d: MOV dword ptr [EBX + 0x2ec],0x1
// 00505977: FLD float ptr [0x00660a3c]
//   XREF to: 00660a3c (READ)
// 0050597d: MOV dword ptr [EBX + 0x2f0],0x0
// 00505987: FLD float ptr [0x00660a40]
//   XREF to: 00660a40 (READ)
// 0050598d: MOV dword ptr [EBX + 0x588],0x0
// 00505997: ADD ESP,0x8
// 0050599a: MOV dword ptr [EBX + 0x584],0x3f800000
// 005059a4: MOV EAX,EBX
// 005059a6: FXCH
// 005059a8: FSTP float ptr [EBX + 0x564]
// 005059ae: FSTP float ptr [EBX + 0x580]
// 005059b4: POP EBX
// 005059b5: RET
