// Name: engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
// Address: 0048c450
// Address Range: [[0048c450, 0048c492]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
// Cross-references:
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 (00408b00) at 00408b0f [UNCONDITIONAL_CALL]
//   core_anvil.cpp_CAnvil_FUN_00411ec0 (00411ec0) at 00411ee5 [UNCONDITIONAL_CALL]
//   core_baron.cpp_CBaron_renderTransparent_FUN_00413ae0 (00413ae0) at 00413b87 [UNCONDITIONAL_CALL]
//   core_battery.cpp_FUN_00417f80 (00417f80) at 00417f94 [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_FUN_00421e00 (00421e00) at 00421e5b [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_FUN_00421ef0 (00421ef0) at 00421f28 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_BoneAndClothEditor_FUN_0043c880 (0043c880) at 0043cab0 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_LockVerticesMaybe_FUN_0043d590 (0043d590) at 0043d70a [UNCONDITIONAL_CALL]
//   core_course.cpp_FUN_00443760 (00443760) at 0044394a [UNCONDITIONAL_CALL]
//   core_course.cpp_FUN_00443bc0 (00443bc0) at 00443d30 [UNCONDITIONAL_CALL]
//   core_crate.cpp_FUN_00448880 (00448880) at 00448894 [UNCONDITIONAL_CALL]
//   core_dcube.cpp_CDemonCube_rotateVertices_FUN_00457650 (00457650) at 00457665 [UNCONDITIONAL_CALL]
//   core_dglobe.cpp_CDemonGlobe_renderCoronaTextured_FUN_004715e0 (004715e0) at 004715fa [UNCONDITIONAL_CALL]
//   core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_00471400 (00471400) at 00471414 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_renderCoronaGeometry_FUN_004736c0 (004736c0) at 004736dd [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_renderExternalVolumetricShafts_FUN_004758d0 (004758d0) at 00475aed [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_renderLightBloomQuad_FUN_00473a20 (00473a20) at 00473a4d [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_renderLightGlowSprites_FUN_00473f90 (00473f90) at 004743bb [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_renderRadialVolumetricScattering_FUN_00475210 (00475210) at 0047523d [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_renderVolumetricLightShaft_FUN_00474ad0 (00474ad0) at 00474ea6 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_renderConeLightGeometry_FUN_004760d0 (004760d0) at 0047610b [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 (0047cbc0) at 0047cda3 [UNCONDITIONAL_CALL]
//   core_dskybox.cpp_renderSkyDome_FUN_004901f0 (004901f0) at 00490332 [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500 (00497500) at 00497ac8 [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_renderPVSCubes_FUN_004990f0 (004990f0) at 0049912d [UNCONDITIONAL_CALL]
//   core_filmreel.cpp_FUN_004be810 (004be810) at 004be824 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CBulletHole_render_FUN_004bfac0 (004bfac0) at 004bfd40 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CBulletTrail_render_FUN_004c21f0 (004c21f0) at 004c23a5 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CCrater_render_FUN_004c4620 (004c4620) at 004c4641 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CExplosion_render_FUN_004c3b10 (004c3b10) at 004c3b76 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CFireball_render_FUN_004c0e70 (004c0e70) at 004c0eb2 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CGlassParticle_render_FUN_004c1ef0 (004c1ef0) at 004c1f03 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CGunFlame_render_FUN_004c50b0 (004c50b0) at 004c5116 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CLaserBeam_render_FUN_004c25c0 (004c25c0) at 004c29ce [UNCONDITIONAL_CALL]
//   core_fire.cpp_CLightningBolt_render_FUN_004c5720 (004c5720) at 004c587c [UNCONDITIONAL_CALL]
//   core_fire.cpp_CMuzzleFlash_render_FUN_004c1a30 (004c1a30) at 004c1a51 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CPopcorn_render_FUN_004c64c0 (004c64c0) at 004c6535 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CRainDrop_render_FUN_004c6830 (004c6830) at 004c68a5 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CRock_render_FUN_004c1870 (004c1870) at 004c1881 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CShell_render_FUN_004c6200 (004c6200) at 004c62ba [UNCONDITIONAL_CALL]
//   core_fire.cpp_CSmokeParticle_render_FUN_004bf4c0 (004bf4c0) at 004bf58d [UNCONDITIONAL_CALL]
//   core_fire.cpp_CSpark_render_FUN_004c0420 (004c0420) at 004c090d [UNCONDITIONAL_CALL]
//   core_fire.cpp_CStake_render_FUN_004c0140 (004c0140) at 004c0155 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CToss_render_FUN_004c4160 (004c4160) at 004c4184 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CTrail_render_FUN_004c5e90 (004c5e90) at 004c5f23 [UNCONDITIONAL_CALL]
//   core_flamecan.cpp_FUN_004cb4c0 (004cb4c0) at 004cb4d4 [UNCONDITIONAL_CALL]
//   core_gasmask.cpp_CGasMask_FUN_004e5da0 (004e5da0) at 004e5db4 [UNCONDITIONAL_CALL]
//   core_gore.cpp_FUN_004ebac0 (004ebac0) at 004ebb2d [UNCONDITIONAL_CALL]
//   core_gore.cpp_FUN_004ec500 (004ec500) at 004ec55a [UNCONDITIONAL_CALL]
//   core_gore.cpp_FUN_004ecce0 (004ecce0) at 004ecd2f [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_renderItemModel_FUN_004fee00 (004fee00) at 004ff00f [UNCONDITIONAL_CALL]
//   core_level.cpp_CLevelLoader_update_FUN_00504160 (00504160) at 0050422e [UNCONDITIONAL_CALL]
//   core_moon.cpp_CMoon_FUN_00529ed0 (00529ed0) at 00529f5b [UNCONDITIONAL_CALL]
//   core_moon.cpp_FUN_0052a2c0 (0052a2c0) at 0052a32b [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052bcb0 (0052bcb0) at 0052c261 [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052ca90 (0052ca90) at 0052cb27 [UNCONDITIONAL_CALL]
//   core_path.cpp_FUN_00547fc0 (00547fc0) at 00548021 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190 (0056a190) at 0056a28c [UNCONDITIONAL_CALL]
//   core_setdir.cpp_CZThumb_calculateActorVisibility_FUN_00574ba0 (00574ba0) at 00574bd5 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00581aa0 (00581aa0) at 00581d03 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00583170 (00583170) at 00583491 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_Something2MemoryConstructorMaybe_FUN_0057fd00 (0057fd00) at 0057fecc [UNCONDITIONAL_CALL]
//   core_setedit.cpp_SomethingMemoryConstructorMaybe_FUN_00580310 (00580310) at 00580492 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_UserInputCreate_FUN_0057d660 (0057d660) at 0057dd30 [UNCONDITIONAL_CALL]
//   core_setutil.cpp_C3DSLight_isVisible_FUN_00587df0 (00587df0) at 00587e51 [UNCONDITIONAL_CALL]
//   core_setutil.cpp_C3DSLight_renderVolumetricSphere_FUN_00587b50 (00587b50) at 00587b7c [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModelInstance_FUN_005968b0 (005968b0) at 00596c44 [UNCONDITIONAL_CALL]
//   core_trap.cpp_CTrap_FUN_005de920 (005de920) at 005de936 [UNCONDITIONAL_CALL]
//   core_turret.cpp_CTurret_FUN_005e2320 (005e2320) at 005e23b8 [UNCONDITIONAL_CALL]
//   core_tvbat.cpp_CTVBat_FUN_005e4d80 (005e4d80) at 005e4e2f [UNCONDITIONAL_CALL]
//   core_vessel.cpp_CCryptVessel_FUN_005e9750 (005e9750) at 005e976a [UNCONDITIONAL_CALL]
//   core_vessel.cpp_FUN_005e98b0 (005e98b0) at 005e98e1 [UNCONDITIONAL_CALL]
//   core_water.cpp_CWater_calculateVisibleTiles_FUN_005e9e70 (005e9e70) at 005ea088 [UNCONDITIONAL_CALL]
//   core_water.cpp_CWater_render_FUN_005ea320 (005ea320) at 005ea492 [UNCONDITIONAL_CALL]
//   core_weather.cpp_CWeather_FUN_005ef190 (005ef190) at 005ef353 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051d520 (0051d520) at 0051d5b3 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051d990 (0051d990) at 0051dcbe [UNCONDITIONAL_CALL]
// Globals:
//   double g_WorldToCameraScale = 256
// Function calls:
//   crt_math.c_round_FUN_005fe6b0
//   engine_3d.c_processCameraRelativePoint_FUN_004037e0

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
          (CDemonRenderer *this_ptr,CVector3f *world_position)

{
  undefined4 in_EDX;
  BADSPACEBASE *in_ESP;
  double dVar1;
  
  dVar1 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(in_EDX,world_position));
  dVar1 = crt_math_c_round_FUN_005fe6b0(dVar1);
  dVar1 = crt_math_c_round_FUN_005fe6b0
                    ((double)CONCAT44((int)((ulonglong)dVar1 >> 0x20),&stack0xfffffff8));
  engine_3d_c_processCameraRelativePoint_FUN_004037e0(SUB84(dVar1,0));
  return;
}


// Assembly code:
// 0048c450: SUB ESP,0x10
//   Label: engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
// 0048c453: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0048c457: FLD double ptr [0x00622015]
//   XREF to: 00622015 (READ)
// 0048c45d: FLD float ptr [EAX]
// 0048c45f: FMUL ST1
// 0048c461: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0048c466: FISTP dword ptr [ESP + 0x4]
//   XREF to: Stack[-0xc] (WRITE)
// 0048c46a: FLD float ptr [EAX + 0x4]
// 0048c46d: FMUL ST1
// 0048c46f: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0048c474: FISTP dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x8] (WRITE)
// 0048c478: FMUL float ptr [EAX + 0x8]
// 0048c47b: MOV EAX,ESP
// 0048c47d: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0048c482: PUSH EAX
// 0048c483: FISTP dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x4] (WRITE)
// 0048c487: CALL engine_3d.c_processCameraRelativePoint_FUN_004037e0
//   XREF to: 004037e0 (UNCONDITIONAL_CALL)
// 0048c48c: ADD ESP,0x4
// 0048c48f: ADD ESP,0x10
// 0048c492: RET
