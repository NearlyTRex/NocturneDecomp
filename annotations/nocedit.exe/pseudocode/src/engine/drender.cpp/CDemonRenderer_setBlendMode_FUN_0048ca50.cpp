// Name: engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
// Address: 0048ca50
// Address Range: [[0048ca50, 0048ca5d]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer * this_ptr, int blend_mode)
// Cross-references:
//   core_baron.cpp_CBaron_renderTransparent_FUN_00413ae0 (00413ae0) at 00413c0d [UNCONDITIONAL_CALL]
//   core_batman.cpp_CBatman_renderOpaque_FUN_004173b0 (004173b0) at 004174e2 [UNCONDITIONAL_CALL]
//   core_chain.cpp_FUN_004308f0 (004308f0) at 004309e9 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042af60 (0042af60) at 0042b0ce [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_renderLightBloomQuad_FUN_00473a20 (00473a20) at 00473ee6 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_renderLightGlowSprites_FUN_00473f90 (00473f90) at 0047428e [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_renderRadialVolumetricScattering_FUN_00475210 (00475210) at 00475288 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_renderVolumetricLightShaft_FUN_00474ad0 (00474ad0) at 00474da9 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_renderConeLightGeometry_FUN_004760d0 (004760d0) at 00476144 [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_CDraculaBride_renderOpaque_FUN_00485be0 (00485be0) at 00485d21 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CExplosion_render_FUN_004c3b10 (004c3b10) at 004c3e45 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CGlassParticle_render_FUN_004c1ef0 (004c1ef0) at 004c20bb [UNCONDITIONAL_CALL]
//   core_fire.cpp_CGunFlame_render_FUN_004c50b0 (004c50b0) at 004c55b6 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CLaserBeam_render_FUN_004c25c0 (004c25c0) at 004c289c [UNCONDITIONAL_CALL]
//   core_fire.cpp_CLightningBolt_render_FUN_004c5720 (004c5720) at 004c585e [UNCONDITIONAL_CALL]
//   core_fire.cpp_CPopcorn_render_FUN_004c64c0 (004c64c0) at 004c67a6 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CRainDrop_render_FUN_004c6830 (004c6830) at 004c6b50 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CSpark_render_FUN_004c0420 (004c0420) at 004c0540 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CTrail_render_FUN_004c5e90 (004c5e90) at 004c5f13 [UNCONDITIONAL_CALL]
//   core_flame.cpp_FUN_004ca110 (004ca110) at 004ca5ba [UNCONDITIONAL_CALL]
//   core_level.cpp_CLevelLoader_update_FUN_00504160 (00504160) at 0050456a [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_00509d50 (00509d50) at 0050a172 [UNCONDITIONAL_CALL]
//   core_marquee.cpp_FUN_0050c050 (0050c050) at 0050c157 [UNCONDITIONAL_CALL]
//   core_menu.cpp_FUN_0050fe70 (0050fe70) at 0050ffd8 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_00570040 (00570040) at 0057028c [UNCONDITIONAL_CALL]
//   core_set.cpp_FUN_005702b0 (005702b0) at 005706a1 [UNCONDITIONAL_CALL]
//   core_setutil.cpp_C3DSLight_renderVolumetricSphere_FUN_00587b50 (00587b50) at 00587d2d [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_CSvetlana_FUN_005d9bc0 (005d9bc0) at 005d9c7c [UNCONDITIONAL_CALL]
//   core_vessel.cpp_FUN_005e98b0 (005e98b0) at 005e99a4 [UNCONDITIONAL_CALL]
//   core_wateract.cpp_CWaterActor_FUN_005eb280 (005eb280) at 005eb2f3 [UNCONDITIONAL_CALL]
//   core_weather.cpp_CWeather_FUN_005ef190 (005ef190) at 005ef2cc [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_FUN_005f1230 (005f1230) at 005f17e7 [UNCONDITIONAL_CALL]
// Function calls:
//   engine_3d.c_setBlendMode_FUN_00406dd0

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer *this_ptr,int blend_mode)

{
  engine_3d_c_setBlendMode_FUN_00406dd0(blend_mode);
  return;
}


// Assembly code:
// 0048ca50: MOV EDX,dword ptr [ESP + 0x8]
//   Label: engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   XREF to: Stack[0x8] (READ)
// 0048ca54: PUSH EDX
// 0048ca55: CALL engine_3d.c_setBlendMode_FUN_00406dd0
//   XREF to: 00406dd0 (UNCONDITIONAL_CALL)
// 0048ca5a: ADD ESP,0x4
// 0048ca5d: RET
