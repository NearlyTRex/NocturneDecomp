// Name: core_flamegun.cpp_FUN_004cbbc0
// Address: 004cbbc0
// Address Range: [[004cbbc0, 004cbc3f]]
// Convention: __cdecl
// Signature: CFlashlight * core_flamegun.cpp_FUN_004cbbc0(CFlashlight * this_ptr)
// Cross-references:
//   core_flashlit.cpp_FUN_004cbb80 (004cbb80) at 004cbb9a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_flashlit_kfm_0062a3c9
//   undefined4 DAT_0065e3cc
//   CDemonActor_vtable PTR_core_weapon.cpp_ActorModelSomething_FUN_0065e3d4
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   core_weapon.cpp_CWeapon_ctor_FUN_005ede70

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CFlashlight * __cdecl core_flamegun_cpp_FUN_004cbbc0(CFlashlight *this_ptr)

{
  undefined4 uVar1;
  CWeapon *pCVar2;
  
  pCVar2 = core_weapon_cpp_CWeapon_ctor_FUN_005ede70(&this_ptr->base_weapon);
  (pCVar2->base_actor).metadata.vtable = &PTR_core_weapon_cpp_ActorModelSomething_FUN_0065e3d4;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            ((CKeyFramedModelInstance *)&pCVar2->model_instance,"flashlit.kfm");
  pCVar2->field4_0x2d8[0] = '\0';
  pCVar2->field4_0x2d8[1] = '\0';
  pCVar2->field4_0x2d8[2] = '\0';
  pCVar2->field4_0x2d8[3] = '\0';
  pCVar2->field4_0x2d8[4] = '\0';
  pCVar2->field4_0x2d8[5] = '\0';
  pCVar2->field4_0x2d8[6] = '\0';
  pCVar2->field4_0x2d8[7] = '\0';
  pCVar2->field4_0x2d8[8] = '\x05';
  pCVar2->field4_0x2d8[9] = '\0';
  pCVar2->field4_0x2d8[10] = '\0';
  pCVar2->field4_0x2d8[0xb] = '\0';
  pCVar2->field4_0x2d8[0xc] = '\0';
  pCVar2->field4_0x2d8[0xd] = '\0';
  pCVar2->field4_0x2d8[0xe] = '\0';
  pCVar2->field4_0x2d8[0xf] = '\0';
  pCVar2->field4_0x2d8[0x10] = '\0';
  uVar1 = _DAT_0065e3cc;
  pCVar2->field4_0x2d8[0x11] = '\0';
  pCVar2->field4_0x2d8[0x12] = '\0';
  pCVar2->field4_0x2d8[0x13] = '\0';
  pCVar2->field4_0x2d8[0x14] = '\0';
  pCVar2->field4_0x2d8[0x15] = '\0';
  pCVar2->field4_0x2d8[0x16] = '\0';
  pCVar2->field4_0x2d8[0x17] = '\0';
  pCVar2->ammo_count = 0;
  *(undefined4 *)(pCVar2->field8_0x305 + 0x25f) = uVar1;
  return (CFlashlight *)pCVar2;
}


// Assembly code:
// 004cbbc0: PUSH EBX
//   Label: core_flamegun.cpp_FUN_004cbbc0
// 004cbbc1: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004cbbc5: PUSH EDX
// 004cbbc6: CALL core_weapon.cpp_CWeapon_ctor_FUN_005ede70
//   XREF to: 005ede70 (UNCONDITIONAL_CALL)
// 004cbbcb: ADD ESP,0x4
// 004cbbce: PUSH 0x62a3c9
//   XREF to: 0062a3c9 (DATA)
// 004cbbd3: MOV EBX,EAX
// 004cbbd5: ADD EAX,0x158
// 004cbbda: PUSH EAX
// 004cbbdb: MOV dword ptr [EAX + -0x4],0x65e3d4
//   XREF to: 0065e3d4 (DATA)
// 004cbbe2: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 004cbbe7: MOV dword ptr [EBX + 0x2d8],0x0
// 004cbbf1: MOV dword ptr [EBX + 0x2dc],0x0
// 004cbbfb: MOV dword ptr [EBX + 0x2e0],0x5
// 004cbc05: MOV dword ptr [EBX + 0x2e4],0x0
// 004cbc0f: MOV dword ptr [EBX + 0x2e8],0x0
// 004cbc19: FLD float ptr [0x0065e3cc]
//   XREF to: 0065e3cc (READ)
// 004cbc1f: MOV dword ptr [EBX + 0x2ec],0x0
// 004cbc29: ADD ESP,0x8
// 004cbc2c: MOV dword ptr [EBX + 0x568],0x0
// 004cbc36: MOV EAX,EBX
// 004cbc38: FSTP float ptr [EBX + 0x564]
// 004cbc3e: POP EBX
// 004cbc3f: RET
