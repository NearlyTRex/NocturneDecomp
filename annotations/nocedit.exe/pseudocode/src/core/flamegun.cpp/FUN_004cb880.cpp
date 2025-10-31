// Name: core_flamegun.cpp_FUN_004cb880
// Address: 004cb880
// Address Range: [[004cb880, 004cb91d]]
// Convention: __cdecl
// Signature: CFlameThrower * core_flamegun.cpp_FUN_004cb880(CFlameThrower * this_ptr)
// Cross-references:
//   core_flamegun.cpp_FUN_004cb840 (004cb840) at 004cb85a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_flamegun_kfm_0062a38e
//   undefined4 DAT_0065e26c
//   CDemonActor_vtable PTR_core_weapon.cpp_ActorModelSomething_FUN_0065e284
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   core_weapon.cpp_CWeapon_ctor_FUN_005ede70

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CFlameThrower * __cdecl core_flamegun_cpp_FUN_004cb880(CFlameThrower *this_ptr)

{
  undefined4 uVar1;
  CFlameThrower *pCVar2;
  
  pCVar2 = (CFlameThrower *)core_weapon_cpp_CWeapon_ctor_FUN_005ede70(&this_ptr->base_weapon);
  (pCVar2->base_weapon).base_actor.metadata.vtable =
       &PTR_core_weapon_cpp_ActorModelSomething_FUN_0065e284;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            ((CKeyFramedModelInstance *)&(pCVar2->base_weapon).model_instance,
             "flamegun.kfm");
  pCVar2->field1_0x578[4] = '\0';
  pCVar2->field1_0x578[5] = '\0';
  pCVar2->field1_0x578[6] = '\0';
  pCVar2->field1_0x578[7] = '\0';
  pCVar2->field1_0x578[0] = '\0';
  pCVar2->field1_0x578[1] = '\0';
  pCVar2->field1_0x578[2] = '\0';
  pCVar2->field1_0x578[3] = '\0';
  (pCVar2->base_weapon).field4_0x2d8[0] = '\0';
  (pCVar2->base_weapon).field4_0x2d8[1] = '\0';
  (pCVar2->base_weapon).field4_0x2d8[2] = '\0';
  (pCVar2->base_weapon).field4_0x2d8[3] = '\0';
  (pCVar2->base_weapon).field4_0x2d8[4] = '\0';
  (pCVar2->base_weapon).field4_0x2d8[5] = '\0';
  (pCVar2->base_weapon).field4_0x2d8[6] = '\0';
  (pCVar2->base_weapon).field4_0x2d8[7] = '\0';
  (pCVar2->base_weapon).field4_0x2d8[8] = '\x02';
  (pCVar2->base_weapon).field4_0x2d8[9] = '\0';
  (pCVar2->base_weapon).field4_0x2d8[10] = '\0';
  (pCVar2->base_weapon).field4_0x2d8[0xb] = '\0';
  (pCVar2->base_weapon).field4_0x2d8[0xc] = '\0';
  (pCVar2->base_weapon).field4_0x2d8[0xd] = '\0';
  (pCVar2->base_weapon).field4_0x2d8[0xe] = '\0';
  (pCVar2->base_weapon).field4_0x2d8[0xf] = '\0';
  (pCVar2->base_weapon).field4_0x2d8[0x10] = '\0';
  (pCVar2->base_weapon).field4_0x2d8[0x11] = '\0';
  (pCVar2->base_weapon).field4_0x2d8[0x12] = 'p';
  (pCVar2->base_weapon).field4_0x2d8[0x13] = 'A';
  (pCVar2->base_weapon).field4_0x2d8[0x14] = '\x01';
  uVar1 = _DAT_0065e26c;
  (pCVar2->base_weapon).field4_0x2d8[0x15] = '\0';
  (pCVar2->base_weapon).field4_0x2d8[0x16] = '\0';
  (pCVar2->base_weapon).field4_0x2d8[0x17] = '\0';
  pCVar2->field1_0x578[0xc] = '\0';
  pCVar2->field1_0x578[0xd] = '\0';
  pCVar2->field1_0x578[0xe] = '\0';
  pCVar2->field1_0x578[0xf] = '\0';
  pCVar2->field1_0x578[8] = '\0';
  pCVar2->field1_0x578[9] = '\0';
  pCVar2->field1_0x578[10] = '\0';
  pCVar2->field1_0x578[0xb] = '\0';
  *(undefined4 *)((pCVar2->base_weapon).field8_0x305 + 0x25f) = uVar1;
  return pCVar2;
}


// Assembly code:
// 004cb880: PUSH EBX
//   Label: core_flamegun.cpp_FUN_004cb880
// 004cb881: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004cb885: PUSH EDX
// 004cb886: CALL core_weapon.cpp_CWeapon_ctor_FUN_005ede70
//   XREF to: 005ede70 (UNCONDITIONAL_CALL)
// 004cb88b: ADD ESP,0x4
// 004cb88e: PUSH 0x62a38e
//   XREF to: 0062a38e (DATA)
// 004cb893: MOV EBX,EAX
// 004cb895: ADD EAX,0x158
// 004cb89a: PUSH EAX
// 004cb89b: MOV dword ptr [EAX + -0x4],0x65e284
//   XREF to: 0065e284 (DATA)
// 004cb8a2: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 004cb8a7: MOV dword ptr [EBX + 0x57c],0x0
// 004cb8b1: MOV dword ptr [EBX + 0x578],0x0
// 004cb8bb: MOV dword ptr [EBX + 0x2d8],0x0
// 004cb8c5: MOV dword ptr [EBX + 0x2dc],0x0
// 004cb8cf: MOV dword ptr [EBX + 0x2e0],0x2
// 004cb8d9: MOV dword ptr [EBX + 0x2e4],0x0
// 004cb8e3: MOV dword ptr [EBX + 0x2e8],0x41700000
// 004cb8ed: MOV dword ptr [EBX + 0x2ec],0x1
// 004cb8f7: FLD float ptr [0x0065e26c]
//   XREF to: 0065e26c (READ)
// 004cb8fd: MOV dword ptr [EBX + 0x584],0x0
// 004cb907: ADD ESP,0x8
// 004cb90a: MOV dword ptr [EBX + 0x580],0x0
// 004cb914: MOV EAX,EBX
// 004cb916: FSTP float ptr [EBX + 0x564]
// 004cb91c: POP EBX
// 004cb91d: RET
