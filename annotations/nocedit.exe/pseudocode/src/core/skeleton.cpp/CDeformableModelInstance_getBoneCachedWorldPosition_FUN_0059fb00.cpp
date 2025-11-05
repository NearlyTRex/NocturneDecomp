// Name: core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
// Address: 0059fb00
// Address Range: [[0059fb00, 0059fb36]]
// Convention: __cdecl
// Signature: CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
// Cross-references:
//   core_batcreat.cpp_CBatCreature_FUN_00416240 (00416240) at 00416264 [UNCONDITIONAL_CALL]
//   core_batcreat.cpp_FUN_00416030 (00416030) at 00416084 [UNCONDITIONAL_CALL]
//   core_batman.cpp_CBatman_FUN_00417bb0 (00417bb0) at 00417c06 [UNCONDITIONAL_CALL]
//   core_batman.cpp_CBatman_process_FUN_00416870 (00416870) at 00416b79 [UNCONDITIONAL_CALL]
//   core_batman.cpp_FUN_004179a0 (004179a0) at 004179f4 [UNCONDITIONAL_CALL]
//   core_beast.cpp_FUN_004183b0 (004183b0) at 004183c9 [UNCONDITIONAL_CALL]
//   core_biggs.cpp_FUN_00418c10 (00418c10) at 00418c29 [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_FUN_0041d550 (0041d550) at 0041d583 [UNCONDITIONAL_CALL]
//   core_bride.cpp_FUN_00424830 (00424830) at 00424873 [UNCONDITIONAL_CALL]
//   core_bride.cpp_FUN_00424a10 (00424a10) at 00424a45 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042b760 (0042b760) at 0042b79e [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042b810 (0042b810) at 0042b84e [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_findSomethingToLookAt_FUN_0042d5a0 (0042d5a0) at 0042d9a9 [UNCONDITIONAL_CALL]
//   core_colonel.cpp_FUN_0043fa00 (0043fa00) at 0043fbd1 [UNCONDITIONAL_CALL]
//   core_cow.cpp_FUN_00444c00 (00444c00) at 00444c1f [UNCONDITIONAL_CALL]
//   core_dog.cpp_CZombieDog_getTargetPoints_FUN_0047f8d0 (0047f8d0) at 0047f8ef [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_00484410 (00484410) at 00484cd2 [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_00486070 (00486070) at 004860ac [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_00486360 (00486360) at 004863c8 [UNCONDITIONAL_CALL]
//   core_drone.cpp_FUN_0048f4d0 (0048f4d0) at 0048f4e9 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d2ea0 (004d2ea0) at 004d3816 [UNCONDITIONAL_CALL]
//   core_gargoyle.cpp_CGargoyle_FUN_004e5930 (004e5930) at 004e5a29 [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_FUN_004e82d0 (004e82d0) at 004e8340 [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_FUN_004e8bc0 (004e8bc0) at 004e8d40 [UNCONDITIONAL_CALL]
//   core_haystack.cpp_FUN_004f0e40 (004f0e40) at 004f1011 [UNCONDITIONAL_CALL]
//   core_haystack.cpp_FUN_004f1ab0 (004f1ab0) at 004f1acc [UNCONDITIONAL_CALL]
//   core_hostage.cpp_RelatedToRescuedTownsfolk_FUN_004f4bd0 (004f4bd0) at 004f5363 [UNCONDITIONAL_CALL]
//   core_hotdemon.cpp_FUN_004f78f0 (004f78f0) at 004f7946 [UNCONDITIONAL_CALL]
//   core_icepick.cpp_FUN_004f80b0 (004f80b0) at 004f82b5 [UNCONDITIONAL_CALL]
//   core_icepick.cpp_FUN_004f9490 (004f9490) at 004f94ac [UNCONDITIONAL_CALL]
//   core_imp.cpp_FUN_004faf40 (004faf40) at 004fb026 [UNCONDITIONAL_CALL]
//   core_larva.cpp_FUN_00503c00 (00503c00) at 00503c19 [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_005278d0 (005278d0) at 00527926 [UNCONDITIONAL_CALL]
//   core_moloch.cpp_CMoloch_process_FUN_00528d20 (00528d20) at 00528f4b [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_005571f0 (005571f0) at 005573c8 [UNCONDITIONAL_CALL]
//   core_sentinel.cpp_FUN_00568dd0 (00568dd0) at 00568e26 [UNCONDITIONAL_CALL]
//   core_smiley.cpp_FUN_005a3690 (005a3690) at 005a36c9 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bb960 (005bb960) at 005bc883 [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_AttackWithParentBone_FUN_005d9a10 (005d9a10) at 005d9a7d [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_CSvetlana_process_FUN_005d8ba0 (005d8ba0) at 005d8de4 [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_CWerewolf_FUN_005f1df0 (005f1df0) at 005f1e0f [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_FUN_005fc120 (005fc120) at 005fc166 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_FUN_005fc720 (005fc720) at 005fc8a0 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_process_FUN_005f9470 (005f9470) at 005f9563 [UNCONDITIONAL_CALL]

#include "nocturne.h"

CVector3f * __cdecl
core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
          (CDeformableModelInstance *this_ptr,CVector3f *out_position,int bone_index)

{
  out_position->x = (this_ptr->bone_transform).bone_world_matrices[bone_index].m[0].z;
  out_position->y = (this_ptr->bone_transform).bone_world_matrices[bone_index].m[1].z;
  out_position->z = (this_ptr->bone_transform).bone_world_matrices[bone_index].m[2].z;
  return out_position;
}


// Assembly code:
// 0059fb00: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
//   XREF to: Stack[0x8] (READ)
// 0059fb04: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 0059fb08: LEA EAX,[ECX*0x4 + 0x0]
// 0059fb0f: SUB EAX,ECX
// 0059fb11: MOV ECX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 0059fb15: SHL EAX,0x4
// 0059fb18: ADD EAX,ECX
// 0059fb1a: MOV ECX,dword ptr [EAX + 0xe8c]
// 0059fb20: MOV dword ptr [EDX],ECX
// 0059fb22: MOV ECX,dword ptr [EAX + 0xe9c]
// 0059fb28: MOV dword ptr [EDX + 0x4],ECX
// 0059fb2b: MOV ECX,dword ptr [EAX + 0xeac]
// 0059fb31: MOV dword ptr [EDX + 0x8],ECX
// 0059fb34: MOV EAX,EDX
// 0059fb36: RET
