// Name: core_weapon.cpp_CWeapon_ctor_FUN_005ede70
// Address: 005ede70
// Address Range: [[005ede70, 005edf7f]]
// Convention: __cdecl
// Signature: CWeapon * core_weapon.cpp_CWeapon_ctor_FUN_005ede70(CWeapon * this_ptr)
// Cross-references:
//   core_baron.cpp_CBaronWeapon_ctor_FUN_00413d40 (00413d40) at 00413d45 [UNCONDITIONAL_CALL]
//   core_crossbow.cpp_FUN_00448c70 (00448c70) at 00448c76 [UNCONDITIONAL_CALL]
//   core_dynamite.cpp_ctor_FUN_0049cdc0 (0049cdc0) at 0049cdc6 [UNCONDITIONAL_CALL]
//   core_elephant.cpp_ctor_FUN_004a6fe0 (004a6fe0) at 004a6fe6 [UNCONDITIONAL_CALL]
//   core_flamegun.cpp_FUN_004cb880 (004cb880) at 004cb886 [UNCONDITIONAL_CALL]
//   core_flamegun.cpp_FUN_004cbbc0 (004cbbc0) at 004cbbc6 [UNCONDITIONAL_CALL]
//   core_gun.cpp_FUN_004f02f0 (004f02f0) at 004f02f6 [UNCONDITIONAL_CALL]
//   core_lightgun.cpp_FUN_00505900 (00505900) at 00505906 [UNCONDITIONAL_CALL]
//   core_melee.cpp_FUN_0050e7d0 (0050e7d0) at 0050e7d8 [UNCONDITIONAL_CALL]
//   core_shotgun.cpp_CShotgun_ctor_FUN_00587ee0 (00587ee0) at 00587ee6 [UNCONDITIONAL_CALL]
//   core_shovel.cpp_CShovel_ctor_FUN_00588ba0 (00588ba0) at 00588ba6 [UNCONDITIONAL_CALL]
//   core_tommygun.cpp_CTommyGun_ctor_FUN_005dda90 (005dda90) at 005dda96 [UNCONDITIONAL_CALL]
//   core_turret.cpp_CTurret_ctor_FUN_005e20f0 (005e20f0) at 005e20fb [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_gat_kfm_00657ab1
//   CDemonActor_vtable g_CWeaponVTable
// Function calls:
//   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   core_box.cpp_CBox_ctor_FUN_0041dc50
//   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0

#include "nocturne.h"

CWeapon * __cdecl core_weapon_cpp_CWeapon_ctor_FUN_005ede70(CWeapon *this_ptr)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *pCVar2;
  CBox *pCVar3;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base_actor);
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                     ((CKeyFramedModelInstance *)(pCVar1 + 1));
  pCVar3 = core_box_cpp_CBox_ctor_FUN_0041dc50((CBox *)(pCVar2[1].part_visibility_flags + 0xd));
  pCVar3[-1].extents.x = (float)&g_CWeaponVTable;
  pCVar3[1].position.y = 5.0;
  pCVar3[-1].scrape_points[7].raytrace_normal.z = 0.0;
  pCVar3[-1].scrape_points[7].local_position.y = 0.0;
  pCVar3[-1].is_valid = 0;
  pCVar3[1].position.z = 2.8026e-44;
  pCVar3[1].orientation.x = 0.0;
  pCVar3[-1].linear_velocity_local.y = 1.4013e-45;
  pCVar3[-1].scrape_points[7].local_position.z = 0.0;
  pCVar3[-1].scrape_points[7].transformed_position.x = 0.0;
  pCVar3[-1].scrape_points[7].transformed_position.y = 0.0;
  pCVar3[-1].scrape_points[7].transformed_position.z = 0.0;
  pCVar3[-1].scrape_points[7].previous_position.x = 200.0;
  pCVar3[-1].scrape_points[7].previous_position.y = 0.0;
  pCVar3[-1].scrape_points[7].previous_position.z = 1.4013e-45;
  pCVar3[-1].scrape_points[7].raytrace_intersection = 3.57331e-43;
  pCVar3[-1].scrape_points[7].raytrace_normal.x = 0.0;
  pCVar3[-1].scrape_points[7].raytrace_normal.y = 0.0;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            ((CKeyFramedModelInstance *)&pCVar3[-1].extents.y,"gat.kfm");
  pCVar3[1].orientation.y = 0.0;
  pCVar3[1].orientation.z = 0.0;
  return (CWeapon *)&pCVar3[-2].scrape_points[4].raytrace_intersection;
}


// Assembly code:
// 005ede70: PUSH EBX
//   Label: core_weapon.cpp_CWeapon_ctor_FUN_005ede70
// 005ede71: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005ede75: PUSH EBX
// 005ede76: CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   XREF to: 004088b0 (UNCONDITIONAL_CALL)
// 005ede7b: ADD ESP,0x4
// 005ede7e: ADD EAX,0x158
// 005ede83: PUSH EAX
// 005ede84: CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
// 005ede89: ADD ESP,0x4
// 005ede8c: ADD EAX,0x1b0
// 005ede91: PUSH EAX
// 005ede92: CALL core_box.cpp_CBox_ctor_FUN_0041dc50
//   XREF to: 0041dc50 (UNCONDITIONAL_CALL)
// 005ede97: LEA EBX,[EAX + 0xfffffcf8]
// 005ede9d: MOV dword ptr [EBX + 0x154],0x6655b4
//   XREF to: 006655b4 (DATA)
// 005edea7: MOV dword ptr [EBX + 0x564],0x40a00000
// 005edeb1: MOV dword ptr [EBX + 0x300],0x0
// 005edebb: MOV dword ptr [EBX + 0x2d4],0x0
// 005edec5: MOV dword ptr [EBX + 0x304],0x0
// 005edecf: MOV dword ptr [EBX + 0x568],0x14
// 005eded9: MOV dword ptr [EBX + 0x56c],0x0
// 005edee3: MOV dword ptr [EBX + 0x100],0x1
// 005edeed: MOV dword ptr [EBX + 0x2d8],0x0
// 005edef7: MOV dword ptr [EBX + 0x2dc],0x0
// 005edf01: MOV dword ptr [EBX + 0x2e0],0x0
// 005edf0b: MOV dword ptr [EBX + 0x2e4],0x0
// 005edf15: MOV dword ptr [EBX + 0x2e8],0x43480000
// 005edf1f: MOV dword ptr [EBX + 0x2ec],0x0
// 005edf29: ADD ESP,0x4
// 005edf2c: MOV dword ptr [EBX + 0x2f0],0x1
// 005edf36: PUSH 0x657ab1
//   XREF to: 00657ab1 (DATA)
// 005edf3b: MOV dword ptr [EBX + 0x2f4],0xff
// 005edf45: LEA EAX,[EBX + 0x158]
// 005edf4b: MOV dword ptr [EBX + 0x2f8],0x0
// 005edf55: PUSH EAX
// 005edf56: MOV dword ptr [EBX + 0x2fc],0x0
// 005edf60: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 005edf65: ADD ESP,0x8
// 005edf68: MOV dword ptr [EBX + 0x570],0x0
// 005edf72: MOV EAX,EBX
// 005edf74: MOV dword ptr [EBX + 0x574],0x0
// 005edf7e: POP EBX
// 005edf7f: RET
