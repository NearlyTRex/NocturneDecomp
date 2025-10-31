// Name: core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
// Address: 00408b00
// Address Range: [[00408b00, 00408b30]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
// Cross-references:
//   core_actor.cpp_FUN_0040dec0 (0040dec0) at 0040dee6 [UNCONDITIONAL_CALL]
//   core_actor.cpp_renderActorBoundingBox_FUN_0040d940 (0040d940) at 0040d952 [UNCONDITIONAL_CALL]
//   core_ammo.cpp_CAmmo_renderOpaque_FUN_00410e80 (00410e80) at 00410e8a [UNCONDITIONAL_CALL]
//   core_ammobox.cpp_CAmmoBox_FUN_00411820 (00411820) at 0041182d [UNCONDITIONAL_CALL]
//   core_backgnd.cpp_CBackgroundActor_FUN_00412860 (00412860) at 00412880 [UNCONDITIONAL_CALL]
//   core_backgnd.cpp_CBackgroundActor_FUN_004128d0 (004128d0) at 004128ec [UNCONDITIONAL_CALL]
//   core_baron.cpp_CBaron_FUN_00413ae0 (00413ae0) at 00413bd8 [UNCONDITIONAL_CALL]
//   core_barrier.cpp_CBarrier_FUN_00414240 (00414240) at 00414272 [UNCONDITIONAL_CALL]
//   core_bat.cpp_CBat_FUN_00414bf0 (00414bf0) at 00414bfa [UNCONDITIONAL_CALL]
//   core_batman.cpp_CBatman_FUN_004173b0 (004173b0) at 00417418 [UNCONDITIONAL_CALL]
//   core_biggs.cpp_FUN_004189b0 (004189b0) at 004189cd [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_FUN_004194b0 (004194b0) at 004194f9 [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_FUN_00419610 (00419610) at 0041966e [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_FUN_00419740 (00419740) at 00419786 [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_FUN_0041d1b0 (0041d1b0) at 0041d1cc [UNCONDITIONAL_CALL]
//   core_bugs.cpp_FUN_004251b0 (004251b0) at 004251e1 [UNCONDITIONAL_CALL]
//   core_chain.cpp_FUN_004308f0 (004308f0) at 00430920 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042a2c0 (0042a2c0) at 0042a2f0 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042a390 (0042a390) at 0042a3a7 [UNCONDITIONAL_CALL]
//   core_conveyor.cpp_FUN_00441f60 (00441f60) at 00441f90 [UNCONDITIONAL_CALL]
//   core_crossbow.cpp_FUN_00448e00 (00448e00) at 00448e0a [UNCONDITIONAL_CALL]
//   core_curtain.cpp_FUN_0044b060 (0044b060) at 0044b06a [UNCONDITIONAL_CALL]
//   core_dest.cpp_CDestActor_renderTransparent_FUN_0046fb70 (0046fb70) at 0046fbac [UNCONDITIONAL_CALL]
//   core_door.cpp_CDoor_renderBackground_FUN_004809e0 (004809e0) at 00480a08 [UNCONDITIONAL_CALL]
//   core_door.cpp_CDoor_renderOpaque_FUN_004807d0 (004807d0) at 0048096d [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_00485be0 (00485be0) at 00485c48 [UNCONDITIONAL_CALL]
//   core_drip.cpp_FUN_0048e6c0 (0048e6c0) at 0048e6d4 [UNCONDITIONAL_CALL]
//   core_emitter.cpp_FUN_004a8a80 (004a8a80) at 004a8a95 [UNCONDITIONAL_CALL]
//   core_filmreel.cpp_FUN_004bed00 (004bed00) at 004bed0b [UNCONDITIONAL_CALL]
//   core_fire.cpp_FUN_004bfac0 (004bfac0) at 004bfada [UNCONDITIONAL_CALL]
//   core_flame.cpp_FUN_004ca110 (004ca110) at 004ca175 [UNCONDITIONAL_CALL]
//   core_flame.cpp_FUN_004caa80 (004caa80) at 004caac7 [UNCONDITIONAL_CALL]
//   core_flies.cpp_FUN_004cc300 (004cc300) at 004cc339 [UNCONDITIONAL_CALL]
//   core_frankgen.cpp_FUN_004d1f70 (004d1f70) at 004d1fa5 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d6140 (004d6140) at 004d6174 [UNCONDITIONAL_CALL]
//   core_glass.cpp_CGlass_FUN_004e9930 (004e9930) at 004e9980 [UNCONDITIONAL_CALL]
//   core_glass.cpp_CGlass_FUN_004e9af0 (004e9af0) at 004e9b32 [UNCONDITIONAL_CALL]
//   core_glass.cpp_CGlass_FUN_004e9ca0 (004e9ca0) at 004e9ca9 [UNCONDITIONAL_CALL]
//   core_glass.cpp_FUN_004e9e90 (004e9e90) at 004e9ec6 [UNCONDITIONAL_CALL]
//   core_grave.cpp_FUN_004ee680 (004ee680) at 004ee6b4 [UNCONDITIONAL_CALL]
//   core_grave.cpp_FUN_004ee710 (004ee710) at 004ee73c [UNCONDITIONAL_CALL]
//   core_health.cpp_FUN_004f1e60 (004f1e60) at 004f1e6a [UNCONDITIONAL_CALL]
//   core_hero.cpp_CHeroPlaceholder_FUN_004f3c90 (004f3c90) at 004f3cc0 [UNCONDITIONAL_CALL]
//   core_keyactor.cpp_FUN_005017c0 (005017c0) at 005017ca [UNCONDITIONAL_CALL]
//   core_ladder.cpp_FUN_00502620 (00502620) at 00502630 [UNCONDITIONAL_CALL]
//   core_lever.cpp_FUN_00504cf0 (00504cf0) at 00504cfd [UNCONDITIONAL_CALL]
//   core_litecone.cpp_FUN_00506c20 (00506c20) at 00506c4e [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_005090d0 (005090d0) at 005090da [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_0050b180 (0050b180) at 0050b186 [UNCONDITIONAL_CALL]
//   core_marquee.cpp_FUN_0050be50 (0050be50) at 0050be79 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_FUN_005205f0 (005205f0) at 00520619 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_FUN_005208b0 (005208b0) at 005208d3 [UNCONDITIONAL_CALL]
//   core_moloch.cpp_FUN_00529750 (00529750) at 0052977f [UNCONDITIONAL_CALL]
//   core_passngr.cpp_FUN_005460c0 (005460c0) at 005460ea [UNCONDITIONAL_CALL]
//   core_pendulum.cpp_FUN_0054a2f0 (0054a2f0) at 0054a2fa [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054d720 (0054d720) at 0054d79d [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054d9b0 (0054d9b0) at 0054da64 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_buildMirrorList_FUN_00570b70 (00570b70) at 00570bc5 [UNCONDITIONAL_CALL]
//   core_simbox.cpp_CSimBox_FUN_005890f0 (005890f0) at 005890fa [UNCONDITIONAL_CALL]
//   core_spike.cpp_FUN_005b8730 (005b8730) at 005b873a [UNCONDITIONAL_CALL]
//   core_stairs.cpp_FUN_005b9c10 (005b9c10) at 005b9c4a [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c3150 (005c3150) at 005c340f [UNCONDITIONAL_CALL]
//   core_succubus.cpp_CSuccubus_FUN_005c7590 (005c7590) at 005c75c2 [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_CSvetlana_FUN_005d9bc0 (005d9bc0) at 005d9ce8 [UNCONDITIONAL_CALL]
//   core_trash.cpp_CTrash_FUN_005df550 (005df550) at 005df55b [UNCONDITIONAL_CALL]
//   core_trigger.cpp_CTrigger_FUN_005e00d0 (005e00d0) at 005e010a [UNCONDITIONAL_CALL]
//   core_turret.cpp_CTurret_FUN_005e2320 (005e2320) at 005e232b [UNCONDITIONAL_CALL]
//   core_tvbat.cpp_CTVBat_FUN_005e4d80 (005e4d80) at 005e4da2 [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_FUN_005e6da0 (005e6da0) at 005e6dbd [UNCONDITIONAL_CALL]
//   core_vehicle.cpp_CVehicle_FUN_005e88c0 (005e88c0) at 005e88cc [UNCONDITIONAL_CALL]
//   core_wateract.cpp_CWaterActor_FUN_005eb280 (005eb280) at 005eb2a5 [UNCONDITIONAL_CALL]
//   core_waypoint.cpp_CWaypoint_FUN_005ebf70 (005ebf70) at 005ebfdb [UNCONDITIONAL_CALL]
//   core_weapon.cpp_CWeapon_FUN_005ee030 (005ee030) at 005ee03a [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_CWerewolf_FUN_005f1820 (005f1820) at 005f187b [UNCONDITIONAL_CALL]
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor *actor)

{
  int in_stack_00000008;
  
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,&(actor->location).position);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,(CVector3i *)(in_stack_00000008 + 0x30),(CVector3i *)0x0);
  return;
}


// Assembly code:
// 00408b00: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: Stack[0x4] (READ)
// 00408b04: ADD EAX,0x20
// 00408b07: PUSH EAX
// 00408b08: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00408b0e: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 00408b0f: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 00408b14: ADD ESP,0x8
// 00408b17: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 00408b1b: PUSH 0x0
// 00408b1d: ADD EAX,0x30
// 00408b20: PUSH EAX
// 00408b21: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00408b27: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 00408b28: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 00408b2d: ADD ESP,0xc
// 00408b30: RET
