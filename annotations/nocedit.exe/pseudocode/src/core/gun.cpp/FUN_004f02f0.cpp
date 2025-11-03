// Name: core_gun.cpp_FUN_004f02f0
// Address: 004f02f0
// Address Range: [[004f02f0, 004f034f]]
// Convention: __cdecl
// Signature: CGun * core_gun.cpp_FUN_004f02f0(CGun * this_ptr)
// Cross-references:
//   core_gun.cpp_FUN_004f02b0 (004f02b0) at 004f02ca [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_gat_kfm_0062e798
//   CDemonActor_vtable PTR_core_weapon.cpp_ActorModelSomething_FUN_005edff0_0065f2a4
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   core_weapon.cpp_CWeapon_ctor_FUN_005ede70

#include "nocturne.h"

CGun * __cdecl core_gun_cpp_FUN_004f02f0(CGun *this_ptr)

{
  CWeapon *pCVar1;
  
  pCVar1 = core_weapon_cpp_CWeapon_ctor_FUN_005ede70(&this_ptr->base_weapon);
  (pCVar1->base_actor).vtable = &PTR_core_weapon_cpp_ActorModelSomething_FUN_005edff0_0065f2a4;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (&pCVar1->model,"gat.kfm");
  pCVar1->field3_0x2d8[0] = '\0';
  pCVar1->field3_0x2d8[1] = '\0';
  pCVar1->field3_0x2d8[2] = '\0';
  pCVar1->field3_0x2d8[3] = '\0';
  pCVar1->field3_0x2d8[4] = '\x01';
  pCVar1->field3_0x2d8[5] = '\0';
  pCVar1->field3_0x2d8[6] = '\0';
  pCVar1->field3_0x2d8[7] = '\0';
  pCVar1->field3_0x2d8[0xc] = '\x01';
  pCVar1->field3_0x2d8[0xd] = '\0';
  pCVar1->field3_0x2d8[0xe] = '\0';
  pCVar1->field3_0x2d8[0xf] = '\0';
  pCVar1->bolt_velocity = 50.0;
  pCVar1->fire_cooldown = 0.0;
  return (CGun *)pCVar1;
}


// Assembly code:
// 004f02f0: PUSH EBX
//   Label: core_gun.cpp_FUN_004f02f0
// 004f02f1: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004f02f5: PUSH EDX
// 004f02f6: CALL core_weapon.cpp_CWeapon_ctor_FUN_005ede70
//   XREF to: 005ede70 (UNCONDITIONAL_CALL)
// 004f02fb: ADD ESP,0x4
// 004f02fe: PUSH 0x62e798
//   XREF to: 0062e798 (DATA)
// 004f0303: MOV EBX,EAX
// 004f0305: ADD EAX,0x158
// 004f030a: PUSH EAX
// 004f030b: MOV dword ptr [EAX + -0x4],0x65f2a4
//   XREF to: 0065f2a4 (DATA)
// 004f0312: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 004f0317: MOV dword ptr [EBX + 0x2d8],0x0
// 004f0321: MOV dword ptr [EBX + 0x2dc],0x1
// 004f032b: MOV dword ptr [EBX + 0x2e4],0x1
// 004f0335: ADD ESP,0x8
// 004f0338: MOV dword ptr [EBX + 0x2e8],0x42480000
// 004f0342: MOV EAX,EBX
// 004f0344: MOV dword ptr [EBX + 0x2ec],0x0
// 004f034e: POP EBX
// 004f034f: RET
