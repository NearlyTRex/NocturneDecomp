// Name: engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
// Address: 0048c640
// Address Range: [[0048c640, 0048c644]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720(void)
// Cross-references:
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 (00408b40) at 00408b47 [UNCONDITIONAL_CALL]
//   core_anvil.cpp_CAnvil_FUN_00411ec0 (00411ec0) at 00411f3d [UNCONDITIONAL_CALL]
//   core_baron.cpp_CBaron_renderTransparent_FUN_00413ae0 (00413ae0) at 00413bcf [UNCONDITIONAL_CALL]
//   core_battery.cpp_FUN_00417f80 (00417f80) at 00417fd7 [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_CBodyPart_renderBackground_FUN_00419610 (00419610) at 004196c2 [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_CBodyPart_renderOpaque_FUN_004194b0 (004194b0) at 0041959f [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_FUN_00421e00 (00421e00) at 00421eb7 [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_FUN_00421ef0 (00421ef0) at 00421fc9 [UNCONDITIONAL_CALL]
//   core_bugs.cpp_FUN_004251b0 (004251b0) at 004252f3 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042a420 (0042a420) at 0042a507 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_BoneAndClothEditor_FUN_0043c880 (0043c880) at 0043cc6f [UNCONDITIONAL_CALL]
//   core_cloth.cpp_FUN_0043b7e0 (0043b7e0) at 0043b967 [UNCONDITIONAL_CALL]
//   core_course.cpp_FUN_00443bc0 (00443bc0) at 00443f27 [UNCONDITIONAL_CALL]
//   core_crate.cpp_FUN_00448880 (00448880) at 004488d7 [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452180 (00452180) at 00452703 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_renderCoronaGeometry_FUN_004736c0 (004736c0) at 004739c8 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_renderExternalVolumetricShafts_FUN_004758d0 (004758d0) at 00475f88 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_renderLightBloomQuad_FUN_00473a20 (00473a20) at 00473f51 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_renderLightGlowSprites_FUN_00473f90 (00473f90) at 004746df [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_renderRadialVolumetricScattering_FUN_00475210 (00475210) at 00475874 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_renderVolumetricLightShaft_FUN_00474ad0 (00474ad0) at 004751e4 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_renderConeLightGeometry_FUN_004760d0 (004760d0) at 004765b4 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 (0047cbc0) at 0047cded [UNCONDITIONAL_CALL]
//   core_filmreel.cpp_FUN_004be810 (004be810) at 004be867 [UNCONDITIONAL_CALL]
//   core_filmreel.cpp_FUN_004bed00 (004bed00) at 004bedb6 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CBulletHole_render_FUN_004bfac0 (004bfac0) at 004bfd28 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CBulletTrail_render_FUN_004c21f0 (004c21f0) at 004c23fc [UNCONDITIONAL_CALL]
//   core_fire.cpp_CExplosion_render_FUN_004c3b10 (004c3b10) at 004c3e7e [UNCONDITIONAL_CALL]
//   core_fire.cpp_CFireball_render_FUN_004c0e70 (004c0e70) at 004c0f69 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CGlassParticle_render_FUN_004c1ef0 (004c1ef0) at 004c20dc [UNCONDITIONAL_CALL]
//   core_fire.cpp_CGunFlame_render_FUN_004c50b0 (004c50b0) at 004c55eb [UNCONDITIONAL_CALL]
//   core_fire.cpp_CLaserBeam_render_FUN_004c25c0 (004c25c0) at 004c2d47 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CLightningBolt_render_FUN_004c5720 (004c5720) at 004c5a43 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CPopcorn_render_FUN_004c64c0 (004c64c0) at 004c6815 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CRainDrop_render_FUN_004c6830 (004c6830) at 004c6bbf [UNCONDITIONAL_CALL]
//   core_fire.cpp_CRock_render_FUN_004c1870 (004c1870) at 004c18f0 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CShell_render_FUN_004c6200 (004c6200) at 004c62ec [UNCONDITIONAL_CALL]
//   core_fire.cpp_CSmokeParticle_render_FUN_004bf4c0 (004bf4c0) at 004bf7de [UNCONDITIONAL_CALL]
//   core_fire.cpp_CSpark_render_FUN_004c0420 (004c0420) at 004c0574 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CStake_render_FUN_004c0140 (004c0140) at 004c01ce [UNCONDITIONAL_CALL]
//   core_fire.cpp_CToss_render_FUN_004c4160 (004c4160) at 004c41bb [UNCONDITIONAL_CALL]
//   core_fire.cpp_CTrail_render_FUN_004c5e90 (004c5e90) at 004c6145 [UNCONDITIONAL_CALL]
//   core_flame.cpp_FUN_004ca110 (004ca110) at 004ca622 [UNCONDITIONAL_CALL]
//   core_flamecan.cpp_FUN_004cb4c0 (004cb4c0) at 004cb51d [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d6140 (004d6140) at 004d6194 [UNCONDITIONAL_CALL]
//   core_gasmask.cpp_CGasMask_FUN_004e5da0 (004e5da0) at 004e5df7 [UNCONDITIONAL_CALL]
//   core_gore.cpp_FUN_004ebac0 (004ebac0) at 004ebe58 [UNCONDITIONAL_CALL]
//   core_gore.cpp_FUN_004ec500 (004ec500) at 004ecabd [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_renderItemModel_FUN_004fee00 (004fee00) at 004ff17f [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_00509bf0 (00509bf0) at 00509c4b [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_00509c60 (00509c60) at 00509d0e [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_00509d50 (00509d50) at 0050a1b4 [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_0050a1f0 (0050a1f0) at 0050a27d [UNCONDITIONAL_CALL]
//   core_mimic.cpp_CMimic_FUN_005205f0 (005205f0) at 005207fa [UNCONDITIONAL_CALL]
//   core_moon.cpp_CMoon_render_FUN_00529ed0 (00529ed0) at 0052a0c6 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_buildMirrorList_FUN_00570b70 (00570b70) at 00570c32 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00581aa0 (00581aa0) at 00581db4 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00583170 (00583170) at 0058362f [UNCONDITIONAL_CALL]
//   core_setedit.cpp_Something2MemoryConstructorMaybe_FUN_0057fd00 (0057fd00) at 0057fefe [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 (005968b0) at 00597547 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_renderSkeleton_FUN_0059b640 (0059b640) at 0059b7d4 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c3150 (005c3150) at 005c34f7 [UNCONDITIONAL_CALL]
//   core_trap.cpp_CTrap_FUN_005de920 (005de920) at 005de999 [UNCONDITIONAL_CALL]
//   core_trash.cpp_CTrash_FUN_005df550 (005df550) at 005df5ef [UNCONDITIONAL_CALL]
//   core_turret.cpp_CTurret_FUN_005e2320 (005e2320) at 005e2409 [UNCONDITIONAL_CALL]
//   core_vehicle.cpp_CVehicle_FUN_005e88c0 (005e88c0) at 005e8a0d [UNCONDITIONAL_CALL]
//   core_vessel.cpp_CCryptVessel_FUN_005e9750 (005e9750) at 005e97af [UNCONDITIONAL_CALL]
//   core_vessel.cpp_FUN_005e98b0 (005e98b0) at 005e99da [UNCONDITIONAL_CALL]
//   core_weather.cpp_CWeather_FUN_005ef190 (005ef190) at 005ef5ec [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720(void)

{
  engine_matrix_c_pop_FUN_0050d720();
  return;
}


// Assembly code:
// 0048c640: JMP 0x0050d720
//   Label: engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0050d720 (UNCONDITIONAL_JUMP)
