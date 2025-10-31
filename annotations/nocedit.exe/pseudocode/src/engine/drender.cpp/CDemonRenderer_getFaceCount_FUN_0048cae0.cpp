// Name: engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
// Address: 0048cae0
// Address Range: [[0048cae0, 0048cae7]]
// Convention: __cdecl
// Signature: int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
// Cross-references:
//   core_barrier.cpp_CBarrier_FUN_00414240 (00414240) at 00414263 [UNCONDITIONAL_CALL]
//   core_batman.cpp_CBatman_FUN_004173b0 (004173b0) at 0041746e [UNCONDITIONAL_CALL]
//   core_biggs.cpp_FUN_004189b0 (004189b0) at 00418a76 [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_FUN_00419340 (00419340) at 004193c1 [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_FUN_004194b0 (004194b0) at 004195f3 [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_FUN_00419610 (00419610) at 00419726 [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_FUN_0041d180 (0041d180) at 0041d187 [UNCONDITIONAL_CALL]
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 (004204f0) at 00420513 [UNCONDITIONAL_CALL]
//   core_box.cpp_CBoundingBox3D_render_FUN_004210b0 (004210b0) at 004211ac [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_FUN_00421e00 (00421e00) at 00421e32 [UNCONDITIONAL_CALL]
//   core_bugs.cpp_FUN_004251b0 (004251b0) at 004251cf [UNCONDITIONAL_CALL]
//   core_chain.cpp_FUN_004308f0 (004308f0) at 00430900 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_00429aa0 (00429aa0) at 00429ab7 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_00429b40 (00429b40) at 00429b56 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042a2c0 (0042a2c0) at 0042a33d [UNCONDITIONAL_CALL]
//   core_cloth.cpp_FUN_0043bae0 (0043bae0) at 0043bb37 [UNCONDITIONAL_CALL]
//   core_conveyor.cpp_FUN_00441f60 (00441f60) at 00441f83 [UNCONDITIONAL_CALL]
//   core_curtain.cpp_FUN_0044b060 (0044b060) at 0044b0a8 [UNCONDITIONAL_CALL]
//   core_dest.cpp_CDestActor_renderTransparent_FUN_0046fb70 (0046fb70) at 0046fb95 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_renderConeLightGeometry_FUN_004760d0 (004760d0) at 004760ed [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_submitToRenderer_FUN_00477980 (00477980) at 004779d1 [UNCONDITIONAL_CALL]
//   core_door.cpp_CDoor_renderOpaque_FUN_004807d0 (004807d0) at 00480881 [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_00485be0 (00485be0) at 00485c25 [UNCONDITIONAL_CALL]
//   core_elephant.cpp_FUN_004a79f0 (004a79f0) at 004a7a05 [UNCONDITIONAL_CALL]
//   core_emitter.cpp_FUN_004a8860 (004a8860) at 004a89e5 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CFireEffect_render_FUN_004c7180 (004c7180) at 004c7237 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CShell_render_FUN_004c6200 (004c6200) at 004c6274 [UNCONDITIONAL_CALL]
//   core_flame.cpp_FUN_004ca110 (004ca110) at 004ca147 [UNCONDITIONAL_CALL]
//   core_flame.cpp_FUN_004caa80 (004caa80) at 004caaaa [UNCONDITIONAL_CALL]
//   core_flies.cpp_FUN_004cc300 (004cc300) at 004cc316 [UNCONDITIONAL_CALL]
//   core_glass.cpp_CGlass_FUN_004e9930 (004e9930) at 004e9972 [UNCONDITIONAL_CALL]
//   core_glass.cpp_CGlass_FUN_004e9af0 (004e9af0) at 004e9b23 [UNCONDITIONAL_CALL]
//   core_glass.cpp_CGlass_FUN_004e9ca0 (004e9ca0) at 004e9ce4 [UNCONDITIONAL_CALL]
//   core_gore.cpp_CGore_FUN_004ed7b0 (004ed7b0) at 004ed7d0 [UNCONDITIONAL_CALL]
//   core_hero.cpp_CHeroPlaceholder_FUN_004f3c90 (004f3c90) at 004f3cb1 [UNCONDITIONAL_CALL]
//   core_hostage.cpp_FUN_004f4b40 (004f4b40) at 004f4b55 [UNCONDITIONAL_CALL]
//   core_ladder.cpp_FUN_00502620 (00502620) at 0050267b [UNCONDITIONAL_CALL]
//   core_lightgun.cpp_FUN_005066b0 (005066b0) at 005066c9 [UNCONDITIONAL_CALL]
//   core_litecone.cpp_FUN_00506c20 (00506c20) at 00506c3f [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_005090d0 (005090d0) at 005091ab [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_00509d50 (00509d50) at 00509dab [UNCONDITIONAL_CALL]
//   core_marquee.cpp_FUN_0050be50 (0050be50) at 0050be5f [UNCONDITIONAL_CALL]
//   core_mimic.cpp_FUN_005205f0 (005205f0) at 0052081b [UNCONDITIONAL_CALL]
//   core_moloch.cpp_FUN_00529750 (00529750) at 0052981c [UNCONDITIONAL_CALL]
//   core_motion.cpp_CMotionController_FUN_0052e700 (0052e700) at 0052e72d [UNCONDITIONAL_CALL]
//   core_path.cpp_FUN_00547fc0 (00547fc0) at 00547fd3 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054d720 (0054d720) at 0054d822 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054d9b0 (0054d9b0) at 0054d9c0 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_00570870 (00570870) at 00570890 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0 (0056eac0) at 0056eb0a [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770 (00570770) at 00570845 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190 (0056a190) at 0056a242 [UNCONDITIONAL_CALL]
//   core_set.cpp_FUN_00570700 (00570700) at 00570720 [UNCONDITIONAL_CALL]
//   core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0 (005751d0) at 00575267 [UNCONDITIONAL_CALL]
//   core_setdir.cpp_CZThumb_saveZBufferTable_FUN_00574910 (00574910) at 005749ba [UNCONDITIONAL_CALL]
//   core_shotgun.cpp_FUN_005888f0 (005888f0) at 00588905 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_FUN_0059abf0 (0059abf0) at 0059ac06 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_FUN_0059ce40 (0059ce40) at 0059ce50 [UNCONDITIONAL_CALL]
//   core_stairs.cpp_FUN_005b9c10 (005b9c10) at 005b9c33 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c3150 (005c3150) at 005c351e [UNCONDITIONAL_CALL]
//   core_succubus.cpp_CSuccubus_FUN_005c7590 (005c7590) at 005c7636 [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_CSvetlana_FUN_005d9bc0 (005d9bc0) at 005d9c05 [UNCONDITIONAL_CALL]
//   core_teleport.cpp_CTeleportDest_FUN_005da7d0 (005da7d0) at 005da7e7 [UNCONDITIONAL_CALL]
//   core_teleport.cpp_CTeleport_FUN_005dae10 (005dae10) at 005dae25 [UNCONDITIONAL_CALL]
//   core_trigger.cpp_CTrigger_FUN_005e00d0 (005e00d0) at 005e00fa [UNCONDITIONAL_CALL]
//   core_tvbat.cpp_CTVBat_FUN_005e4d80 (005e4d80) at 005e4e02 [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_FUN_005e6da0 (005e6da0) at 005e6e50 [UNCONDITIONAL_CALL]
//   core_vehicle.cpp_CVehicle_FUN_005e88c0 (005e88c0) at 005e8916 [UNCONDITIONAL_CALL]
//   core_wateract.cpp_CWaterActor_FUN_005eb280 (005eb280) at 005eb290 [UNCONDITIONAL_CALL]
//   core_waypoint.cpp_CWaypoint_FUN_005ebf70 (005ebf70) at 005ebfa0 [UNCONDITIONAL_CALL]
//   core_weapon.cpp_CWeapon_FUN_005ee030 (005ee030) at 005ee08e [UNCONDITIONAL_CALL]
//   core_weapon.cpp_FUN_005ee830 (005ee830) at 005ee84c [UNCONDITIONAL_CALL]

#include "nocturne.h"

int __cdecl engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer *this_ptr)

{
  return this_ptr->face_count;
}


// Assembly code:
// 0048cae0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: Stack[0x4] (READ)
// 0048cae4: MOV EAX,dword ptr [EAX + 0x4]
// 0048cae7: RET
