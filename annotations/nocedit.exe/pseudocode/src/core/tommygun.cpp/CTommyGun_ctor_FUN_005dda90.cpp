// Name: core_tommygun.cpp_CTommyGun_ctor_FUN_005dda90
// Address: 005dda90
// Address Range: [[005dda90, 005ddb23]]
// Convention: __cdecl
// Signature: int core_tommygun.cpp_CTommyGun_ctor_FUN_005dda90(CTommyGun * this_ptr)
// Cross-references:
//   core_tommygun.cpp_FUN_005dda50 (005dda50) at 005dda6a [UNCONDITIONAL_CALL]
//   core_vehicle.cpp_CVehicle_process_FUN_005e7e80 (005e7e80) at 005e8453 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_tommygun_kfm_006554a0
//   undefined4 DAT_0066466c
//   CDemonActor_vtable g_CTommyGunVTable
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   core_weapon.cpp_CWeapon_ctor_FUN_005ede70

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_tommygun_cpp_CTommyGun_ctor_FUN_005dda90(CTommyGun *this_ptr)

{
  CWeapon *pCVar1;
  undefined4 uVar2;
  CWeapon *pCVar3;
  
  pCVar3 = core_weapon_cpp_CWeapon_ctor_FUN_005ede70(&this_ptr->base_weapon);
  (pCVar3->base_actor).metadata.vtable = &g_CTommyGunVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            ((CKeyFramedModelInstance *)&pCVar3->model_instance,"tommygun.kfm");
  pCVar3->field4_0x2d8[0] = '\0';
  pCVar3->field4_0x2d8[1] = '\0';
  pCVar3->field4_0x2d8[2] = '\0';
  pCVar3->field4_0x2d8[3] = '\0';
  pCVar3->field4_0x2d8[4] = '\0';
  pCVar3->field4_0x2d8[5] = '\0';
  pCVar3->field4_0x2d8[6] = '\0';
  pCVar3->field4_0x2d8[7] = '\0';
  pCVar3->field4_0x2d8[8] = '\x04';
  pCVar3->field4_0x2d8[9] = '\0';
  pCVar3->field4_0x2d8[10] = '\0';
  pCVar3->field4_0x2d8[0xb] = '\0';
  pCVar3->field4_0x2d8[0xc] = '\x01';
  pCVar3->field4_0x2d8[0xd] = '\0';
  pCVar3->field4_0x2d8[0xe] = '\0';
  pCVar3->field4_0x2d8[0xf] = '\0';
  pCVar3->field4_0x2d8[0x10] = '\0';
  pCVar3->field4_0x2d8[0x11] = '\0';
  pCVar3->field4_0x2d8[0x12] = -0x38;
  pCVar3->field4_0x2d8[0x13] = 'B';
  pCVar3->field4_0x2d8[0x14] = '\x01';
  pCVar3->field4_0x2d8[0x15] = '\0';
  pCVar3->field4_0x2d8[0x16] = '\0';
  pCVar3->field4_0x2d8[0x17] = '\0';
  pCVar1 = pCVar3 + 1;
  (pCVar1->base_actor).actor_name[4] = '\0';
  uVar2 = _DAT_0066466c;
  (pCVar1->base_actor).actor_name[5] = '\0';
  (pCVar1->base_actor).actor_name[6] = '\0';
  (pCVar1->base_actor).actor_name[7] = '\0';
  pCVar1 = pCVar3 + 1;
  (pCVar1->base_actor).actor_name[8] = '\0';
  (pCVar1->base_actor).actor_name[9] = '\0';
  (pCVar1->base_actor).actor_name[10] = '\0';
  (pCVar1->base_actor).actor_name[0xb] = '\0';
  pCVar3[1].base_actor.actor_name[0] = '\0';
  pCVar3[1].base_actor.actor_name[1] = '\0';
  pCVar3[1].base_actor.actor_name[2] = '\0';
  pCVar3[1].base_actor.actor_name[3] = '\0';
  *(undefined4 *)(pCVar3->field8_0x305 + 0x25f) = uVar2;
  return (int)pCVar3;
}


// Assembly code:
// 005dda90: PUSH EBX
//   Label: core_tommygun.cpp_CTommyGun_ctor_FUN_005dda90
// 005dda91: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005dda95: PUSH EDX
// 005dda96: CALL core_weapon.cpp_CWeapon_ctor_FUN_005ede70
//   XREF to: 005ede70 (UNCONDITIONAL_CALL)
// 005dda9b: ADD ESP,0x4
// 005dda9e: PUSH 0x6554a0
//   XREF to: 006554a0 (DATA)
// 005ddaa3: MOV EBX,EAX
// 005ddaa5: ADD EAX,0x158
// 005ddaaa: PUSH EAX
// 005ddaab: MOV dword ptr [EAX + -0x4],0x664674
//   XREF to: 00664674 (DATA)
// 005ddab2: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 005ddab7: MOV dword ptr [EBX + 0x2d8],0x0
// 005ddac1: MOV dword ptr [EBX + 0x2dc],0x0
// 005ddacb: MOV dword ptr [EBX + 0x2e0],0x4
// 005ddad5: MOV dword ptr [EBX + 0x2e4],0x1
// 005ddadf: MOV dword ptr [EBX + 0x2e8],0x42c80000
// 005ddae9: MOV dword ptr [EBX + 0x2ec],0x1
// 005ddaf3: MOV dword ptr [EBX + 0x57c],0x0
// 005ddafd: FLD float ptr [0x0066466c]
//   XREF to: 0066466c (READ)
// 005ddb03: MOV dword ptr [EBX + 0x580],0x0
// 005ddb0d: ADD ESP,0x8
// 005ddb10: MOV dword ptr [EBX + 0x578],0x0
// 005ddb1a: MOV EAX,EBX
// 005ddb1c: FSTP float ptr [EBX + 0x564]
// 005ddb22: POP EBX
// 005ddb23: RET
