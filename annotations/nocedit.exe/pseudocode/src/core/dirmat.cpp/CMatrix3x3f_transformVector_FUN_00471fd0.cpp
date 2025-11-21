// Name: core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
// Address: 00471fd0
// Address Range: [[00471fd0, 00472024]]
// Convention: __cdecl
// Signature: CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
// Cross-references:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 (00408ec0) at 00408eda [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80 (00408e80) at 00408e93 [UNCONDITIONAL_CALL]
//   core_box.cpp_CBox_loadFromFile_FUN_0041fe90 (0041fe90) at 0041ffe9 [UNCONDITIONAL_CALL]
//   core_box.cpp_CBox_processPhysics_FUN_0041e350 (0041e350) at 0041e5a6 [UNCONDITIONAL_CALL]
//   core_box.cpp_CBox_updateTransform_FUN_0041e0e0 (0041e0e0) at 0041e26c [UNCONDITIONAL_CALL]
//   core_bugs.cpp_FUN_00425cc0 (00425cc0) at 00425e80 [UNCONDITIONAL_CALL]
//   core_bugs.cpp_FUN_00425fe0 (00425fe0) at 00426316 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042ede0 (0042ede0) at 0042f26a [UNCONDITIONAL_CALL]
//   core_cloth.cpp_FUN_0043a420 (0043a420) at 0043a9d3 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_FUN_0043abb0 (0043abb0) at 0043ae36 [UNCONDITIONAL_CALL]
//   core_curtain.cpp_FUN_00449e40 (00449e40) at 00449e92 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_renderExternalVolumetricShafts_FUN_004758d0 (004758d0) at 004759fd [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_renderLightGlowSprites_FUN_00473f90 (00473f90) at 0047422d [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_renderVolumetricLightShaft_FUN_00474ad0 (00474ad0) at 00474d5c [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_intersectRay_FUN_004781d0 (004781d0) at 00478626 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_populateCollisionList_FUN_00478950 (00478950) at 00478a8a [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 (0047cbc0) at 0047cd2c [UNCONDITIONAL_CALL]
//   core_door.cpp_CDoor_reposition_FUN_0047fd20 (0047fd20) at 0047fedc [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_voxelGridSweepTest2_FUN_00499f10 (00499f10) at 0049a0c5 [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_voxelGridSweepTest_FUN_00499c20 (00499c20) at 00499dd5 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CFireEffect_createStake_FUN_004c7bb0 (004c7bb0) at 004c7c06 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CStake_spawn_FUN_004bfe90 (004bfe90) at 004bfee0 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CToss_process_FUN_004c4000 (004c4000) at 004c40cd [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d2ea0 (004d2ea0) at 004d4115 [UNCONDITIONAL_CALL]
//   core_glass.cpp_CGlass_shatter_FUN_004eaef0 (004eaef0) at 004eaf71 [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_00509330 (00509330) at 00509602 [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_00509b20 (00509b20) at 00509b96 [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_0050a8d0 (0050a8d0) at 0050aa01 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 0053a1cd [UNCONDITIONAL_CALL]
//   core_pendulum.cpp_FUN_005495c0 (005495c0) at 00549879 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056d4a0 (0056d4a0) at 0056d883 [UNCONDITIONAL_CALL]
//   core_setcolid.cpp_CDemonSet_testOBBCylinderCollision_FUN_00573140 (00573140) at 00573195 [UNCONDITIONAL_CALL]
//   core_setdir.cpp_FUN_005763a0 (005763a0) at 00576474 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00581aa0 (00581aa0) at 00581c05 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00583170 (00583170) at 0058332b [UNCONDITIONAL_CALL]
//   core_simbox.cpp_CSimBox_process_FUN_00588f20 (00588f20) at 00588fbe [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_shatter_FUN_0059cec0 (0059cec0) at 0059cf9d [UNCONDITIONAL_CALL]
//   core_sound.cpp_updateListeners_FUN_005b1870 (005b1870) at 005b19e4 [UNCONDITIONAL_CALL]
//   core_stairs.cpp_FUN_005b9a20 (005b9a20) at 005b9aa1 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005be520 (005be520) at 005bee29 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c3960 (005c3960) at 005c3cac [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c51c0 (005c51c0) at 005c5216 [UNCONDITIONAL_CALL]
//   core_wateract.cpp_FUN_005eafa0 (005eafa0) at 005eafe7 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_005151e0 (005151e0) at 005157a9 [UNCONDITIONAL_CALL]

#include "nocturne.h"

CVector3f * __cdecl
core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
          (CMatrix3x3f *this_ptr,CVector3f *output,CVector3f *input)

{
  output->x = input->z * this_ptr->m[0].z +
              input->x * this_ptr->m[0].x + input->y * this_ptr->m[0].y;
  output->y = input->z * this_ptr->m[1].z +
              input->x * this_ptr->m[1].x + input->y * this_ptr->m[1].y;
  output->z = input->z * this_ptr->m[2].z +
              input->x * this_ptr->m[2].x + input->y * this_ptr->m[2].y;
  return output;
}


// Assembly code:
// 00471fd0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   XREF to: Stack[0x4] (READ)
// 00471fd4: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00471fd8: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 00471fdc: FLD float ptr [EDX + 0x4]
// 00471fdf: FMUL float ptr [EAX + 0x4]
// 00471fe2: FLD float ptr [EDX]
// 00471fe4: FMUL float ptr [EAX]
// 00471fe6: FADDP
// 00471fe8: FLD float ptr [EDX + 0x8]
// 00471feb: FMUL float ptr [EAX + 0x8]
// 00471fee: FADDP
// 00471ff0: FSTP float ptr [ECX]
// 00471ff2: FLD float ptr [EDX + 0x4]
// 00471ff5: FMUL float ptr [EAX + 0x10]
// 00471ff8: FLD float ptr [EDX]
// 00471ffa: FMUL float ptr [EAX + 0xc]
// 00471ffd: FADDP
// 00471fff: FLD float ptr [EDX + 0x8]
// 00472002: FMUL float ptr [EAX + 0x14]
// 00472005: FADDP
// 00472007: FSTP float ptr [ECX + 0x4]
// 0047200a: FLD float ptr [EDX + 0x4]
// 0047200d: FMUL float ptr [EAX + 0x1c]
// 00472010: FLD float ptr [EDX]
// 00472012: FMUL float ptr [EAX + 0x18]
// 00472015: FADDP
// 00472017: FLD float ptr [EDX + 0x8]
// 0047201a: FMUL float ptr [EAX + 0x20]
// 0047201d: FADDP
// 0047201f: MOV EAX,ECX
// 00472021: FSTP float ptr [ECX + 0x8]
// 00472024: RET
