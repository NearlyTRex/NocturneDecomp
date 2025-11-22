// Name: engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
// Address: 0048ca60
// Address Range: [[0048ca60, 0048ca6d]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(CDemonRenderer * this_ptr, int render_alpha)
// Cross-references:
//   core_baron.cpp_CBaron_renderTransparent_FUN_00413ae0 (00413ae0) at 00413c21 [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_CBodyPart_renderTransparent_FUN_00419740 (00419740) at 0041979b [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_FUN_0041d1b0 (0041d1b0) at 0041d222 [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_FUN_00421ef0 (00421ef0) at 00421f6e [UNCONDITIONAL_CALL]
//   core_bugs.cpp_FUN_004251b0 (004251b0) at 004252c3 [UNCONDITIONAL_CALL]
//   core_chain.cpp_FUN_004308f0 (004308f0) at 004309d7 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_00429b40 (00429b40) at 0042a285 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042af60 (0042af60) at 0042af8d [UNCONDITIONAL_CALL]
//   core_cloth.cpp_FUN_0043bae0 (0043bae0) at 0043bb28 [UNCONDITIONAL_CALL]
//   core_curtain.cpp_FUN_0044b060 (0044b060) at 0044b0da [UNCONDITIONAL_CALL]
//   core_dest.cpp_CDestActor_renderTransparent_FUN_0046fb70 (0046fb70) at 0046fc85 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CBulletHole_initRender_FUN_004bfa40 (004bfa40) at 004bfab4 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CCrater_render_FUN_004c4620 (004c4620) at 004c4851 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CGlassParticle_render_FUN_004c1ef0 (004c1ef0) at 004c2038 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CLaserBeam_render_FUN_004c25c0 (004c25c0) at 004c3081 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CLightningBolt_render_FUN_004c5720 (004c5720) at 004c584d [UNCONDITIONAL_CALL]
//   core_fire.cpp_CSmokeParticle_render_FUN_004bf4c0 (004bf4c0) at 004bf7bb [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_processFrame_FUN_004da100 (004da100) at 004da3b6 [UNCONDITIONAL_CALL]
//   core_glass.cpp_CGlass_renderBrokenGlass_FUN_004e9ca0 (004e9ca0) at 004e9de2 [UNCONDITIONAL_CALL]
//   core_glass.cpp_CGlass_renderOpaque_FUN_004e9930 (004e9930) at 004e9a48 [UNCONDITIONAL_CALL]
//   core_glass.cpp_CGlass_renderTransparent_FUN_004e9af0 (004e9af0) at 004e9bf7 [UNCONDITIONAL_CALL]
//   core_gore.cpp_FUN_004ebac0 (004ebac0) at 004ebe36 [UNCONDITIONAL_CALL]
//   core_gore.cpp_FUN_004ec470 (004ec470) at 004ec4e9 [UNCONDITIONAL_CALL]
//   core_gore.cpp_FUN_004ecc40 (004ecc40) at 004eccd3 [UNCONDITIONAL_CALL]
//   core_gore.cpp_FUN_004ed3c0 (004ed3c0) at 004ed449 [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_renderItemModel_FUN_004fee00 (004fee00) at 004ff140 [UNCONDITIONAL_CALL]
//   core_inv.cpp_drawItemIconBackground_FUN_005001e0 (005001e0) at 00500207 [UNCONDITIONAL_CALL]
//   core_inv.cpp_drawWeaponIconBackground_FUN_00500050 (00500050) at 00500077 [UNCONDITIONAL_CALL]
//   core_marquee.cpp_FUN_0050c050 (0050c050) at 0050c092 [UNCONDITIONAL_CALL]
//   core_menu.cpp_renderAudioSpectrumBar_FUN_0050fe70 (0050fe70) at 0050ff68 [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052b160 (0052b160) at 0052b1ce [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056aca0 (0056aca0) at 0056ad59 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056cd60 (0056cd60) at 0056ce4d [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_00570040 (00570040) at 0057027b [UNCONDITIONAL_CALL]
//   core_set.cpp_FUN_005702b0 (005702b0) at 00570690 [UNCONDITIONAL_CALL]
//   core_setutil.cpp_C3DSLight_renderVolumetricSphere_FUN_00587b50 (00587b50) at 00587d15 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 (005968b0) at 00597320 [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_CSvetlana_FUN_005d9bc0 (005d9bc0) at 005d9c8f [UNCONDITIONAL_CALL]
//   core_vessel.cpp_FUN_005e98b0 (005e98b0) at 005e9943 [UNCONDITIONAL_CALL]
//   core_water.cpp_CWater_render_FUN_005ea320 (005ea320) at 005ea753 [UNCONDITIONAL_CALL]
//   core_wateract.cpp_CWaterActor_FUN_005eb280 (005eb280) at 005eb2e2 [UNCONDITIONAL_CALL]
//   core_weather.cpp_CWeather_FUN_005ef190 (005ef190) at 005ef2e7 [UNCONDITIONAL_CALL]
// Function calls:
//   engine_3d.c_setRenderAlpha_FUN_00406d80

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
          (CDemonRenderer *this_ptr,int render_alpha)

{
  engine_3d_c_setRenderAlpha_FUN_00406d80(render_alpha);
  return;
}


// Assembly code:
// 0048ca60: MOV EDX,dword ptr [ESP + 0x8]
//   Label: engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   XREF to: Stack[0x8] (READ)
// 0048ca64: PUSH EDX
// 0048ca65: CALL engine_3d.c_setRenderAlpha_FUN_00406d80
//   XREF to: 00406d80 (UNCONDITIONAL_CALL)
// 0048ca6a: ADD ESP,0x4
// 0048ca6d: RET
