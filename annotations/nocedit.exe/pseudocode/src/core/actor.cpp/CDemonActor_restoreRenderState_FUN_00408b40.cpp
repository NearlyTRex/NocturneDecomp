// Name: core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
// Address: 00408b40
// Address Range: [[00408b40, 00408b4b]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
// Cross-references:
//   core_actor.cpp_FUN_0040dec0 (0040dec0) at 0040e116 [UNCONDITIONAL_CALL]
//   core_actor.cpp_renderActorBoundingBox_FUN_0040d940 (0040d940) at 0040dea8 [UNCONDITIONAL_CALL]
//   core_ammo.cpp_CAmmo_renderOpaque_FUN_00410e80 (00410e80) at 00410eb2 [UNCONDITIONAL_CALL]
//   core_ammobox.cpp_CAmmoBox_FUN_00411820 (00411820) at 00411856 [UNCONDITIONAL_CALL]
//   core_backgnd.cpp_CBackgroundActor_FUN_00412860 (00412860) at 004128b9 [UNCONDITIONAL_CALL]
//   core_backgnd.cpp_CBackgroundActor_FUN_004128d0 (004128d0) at 00412929 [UNCONDITIONAL_CALL]
//   core_baron.cpp_CBaron_FUN_00413ae0 (00413ae0) at 00413c88 [UNCONDITIONAL_CALL]
//   core_barrier.cpp_CBarrier_FUN_00414240 (00414240) at 0041429a [UNCONDITIONAL_CALL]
//   core_bat.cpp_CBat_FUN_00414bf0 (00414bf0) at 00414c22 [UNCONDITIONAL_CALL]
//   core_batman.cpp_CBatman_FUN_004173b0 (004173b0) at 00417498 [UNCONDITIONAL_CALL]
//   core_biggs.cpp_FUN_004189b0 (004189b0) at 00418aa0 [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_FUN_00419740 (00419740) at 004197b2 [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_FUN_0041d1b0 (0041d1b0) at 0041d253 [UNCONDITIONAL_CALL]
//   core_bugs.cpp_FUN_004251b0 (004251b0) at 0042532c [UNCONDITIONAL_CALL]
//   core_chain.cpp_FUN_004308f0 (004308f0) at 00430958 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042a2c0 (0042a2c0) at 0042a367 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042a390 (0042a390) at 0042a3d6 [UNCONDITIONAL_CALL]
//   core_conveyor.cpp_FUN_00441f60 (00441f60) at 00441fb4 [UNCONDITIONAL_CALL]
//   core_crossbow.cpp_FUN_00448e00 (00448e00) at 00448e6b [UNCONDITIONAL_CALL]
//   core_curtain.cpp_FUN_0044b060 (0044b060) at 0044b321 [UNCONDITIONAL_CALL]
//   core_dest.cpp_CDestActor_renderTransparent_FUN_0046fb70 (0046fb70) at 0046fca5 [UNCONDITIONAL_CALL]
//   core_door.cpp_CDoor_renderBackground_FUN_004809e0 (004809e0) at 00480a41 [UNCONDITIONAL_CALL]
//   core_door.cpp_CDoor_renderOpaque_FUN_004807d0 (004807d0) at 004809a2 [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_00485be0 (00485be0) at 00485cc8 [UNCONDITIONAL_CALL]
//   core_drip.cpp_FUN_0048e6c0 (0048e6c0) at 0048e72a [UNCONDITIONAL_CALL]
//   core_emitter.cpp_FUN_004a8a80 (004a8a80) at 004a8abd [UNCONDITIONAL_CALL]
//   core_filmreel.cpp_FUN_004bed00 (004bed00) at 004bed33 [UNCONDITIONAL_CALL]
//   core_fire.cpp_FUN_004bfac0 (004bfac0) at 004bfde0 [UNCONDITIONAL_CALL]
//   core_flame.cpp_FUN_004ca110 (004ca110) at 004ca65e [UNCONDITIONAL_CALL]
//   core_flame.cpp_FUN_004caa80 (004caa80) at 004caaef [UNCONDITIONAL_CALL]
//   core_flies.cpp_FUN_004cc300 (004cc300) at 004cc5bc [UNCONDITIONAL_CALL]
//   core_frankgen.cpp_FUN_004d1f70 (004d1f70) at 004d1fcf [UNCONDITIONAL_CALL]
//   core_glass.cpp_CGlass_FUN_004e9930 (004e9930) at 004e9ad1 [UNCONDITIONAL_CALL]
//   core_glass.cpp_CGlass_FUN_004e9af0 (004e9af0) at 004e9c81 [UNCONDITIONAL_CALL]
//   core_glass.cpp_CGlass_FUN_004e9ca0 (004e9ca0) at 004e9e6a [UNCONDITIONAL_CALL]
//   core_glass.cpp_FUN_004e9e90 (004e9e90) at 004e9fe1 [UNCONDITIONAL_CALL]
//   core_grave.cpp_FUN_004ee680 (004ee680) at 004ee6f5 [UNCONDITIONAL_CALL]
//   core_grave.cpp_FUN_004ee710 (004ee710) at 004ee779 [UNCONDITIONAL_CALL]
//   core_health.cpp_FUN_004f1e60 (004f1e60) at 004f1e92 [UNCONDITIONAL_CALL]
//   core_hero.cpp_CHeroPlaceholder_FUN_004f3c90 (004f3c90) at 004f3ce8 [UNCONDITIONAL_CALL]
//   core_keyactor.cpp_FUN_005017c0 (005017c0) at 005017f2 [UNCONDITIONAL_CALL]
//   core_ladder.cpp_FUN_00502620 (00502620) at 0050288a [UNCONDITIONAL_CALL]
//   core_lever.cpp_FUN_00504cf0 (00504cf0) at 00504d26 [UNCONDITIONAL_CALL]
//   core_litecone.cpp_FUN_00506c20 (00506c20) at 00506c76 [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_005090d0 (005090d0) at 00509102 [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_0050b180 (0050b180) at 0050b1c0 [UNCONDITIONAL_CALL]
//   core_marquee.cpp_FUN_0050be50 (0050be50) at 0050bea1 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_FUN_005205f0 (005205f0) at 00520667 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_FUN_005208b0 (005208b0) at 00520921 [UNCONDITIONAL_CALL]
//   core_moloch.cpp_FUN_00529750 (00529750) at 00529846 [UNCONDITIONAL_CALL]
//   core_passngr.cpp_FUN_005460c0 (005460c0) at 00546129 [UNCONDITIONAL_CALL]
//   core_pendulum.cpp_FUN_0054a2f0 (0054a2f0) at 0054a322 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054d720 (0054d720) at 0054d803 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054d9b0 (0054d9b0) at 0054db29 [UNCONDITIONAL_CALL]
//   core_setdir.cpp_CZThumb_calculateActorVisibility_FUN_00574ba0 (00574ba0) at 00574c97 [UNCONDITIONAL_CALL]
//   core_simbox.cpp_CSimBox_FUN_005890f0 (005890f0) at 00589122 [UNCONDITIONAL_CALL]
//   core_spike.cpp_FUN_005b8730 (005b8730) at 005b8762 [UNCONDITIONAL_CALL]
//   core_stairs.cpp_FUN_005b9c10 (005b9c10) at 005ba46d [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c3150 (005c3150) at 005c3500 [UNCONDITIONAL_CALL]
//   core_succubus.cpp_CSuccubus_FUN_005c7590 (005c7590) at 005c7660 [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_CSvetlana_FUN_005d9bc0 (005d9bc0) at 005d9d13 [UNCONDITIONAL_CALL]
//   core_trash.cpp_CTrash_FUN_005df550 (005df550) at 005df583 [UNCONDITIONAL_CALL]
//   core_trigger.cpp_CTrigger_FUN_005e00d0 (005e00d0) at 005e0575 [UNCONDITIONAL_CALL]
//   core_turret.cpp_CTurret_FUN_005e2320 (005e2320) at 005e237d [UNCONDITIONAL_CALL]
//   core_tvbat.cpp_CTVBat_FUN_005e4d80 (005e4d80) at 005e4de3 [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_FUN_005e6da0 (005e6da0) at 005e6e6d [UNCONDITIONAL_CALL]
//   core_vehicle.cpp_CVehicle_FUN_005e88c0 (005e88c0) at 005e8965 [UNCONDITIONAL_CALL]
//   core_wateract.cpp_CWaterActor_FUN_005eb280 (005eb280) at 005eb463 [UNCONDITIONAL_CALL]
//   core_waypoint.cpp_CWaypoint_FUN_005ebf70 (005ebf70) at 005ec0a5 [UNCONDITIONAL_CALL]
//   core_weapon.cpp_CWeapon_FUN_005ee030 (005ee030) at 005ee075 [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_CWerewolf_FUN_005f1820 (005f1820) at 005f1920 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor *this_ptr)

{
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return;
}


// Assembly code:
// 00408b40: MOV EDX,dword ptr [0x006703ec]
//   Label: core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 006703ec (READ)
// 00408b46: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 00408b47: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
