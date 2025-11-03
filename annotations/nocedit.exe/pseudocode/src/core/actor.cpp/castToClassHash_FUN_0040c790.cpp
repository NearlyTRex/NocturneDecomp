// Name: core_actor.cpp_castToClassHash_FUN_0040c790
// Address: 0040c790
// Address Range: [[0040c790, 0040c7b2]]
// Convention: __cdecl
// Signature: CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
// Cross-references:
//   core_actor.cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0 (00408db0) at 00408e35 [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a210 (0040a210) at 0040a7c2 [UNCONDITIONAL_CALL]
//   core_ammo.cpp_FUN_00411200 (00411200) at 00411212 [UNCONDITIONAL_CALL]
//   core_ammo.cpp_FUN_004112b0 (004112b0) at 004112bc [UNCONDITIONAL_CALL]
//   core_ammobox.cpp_FUN_00411a30 (00411a30) at 00411a42 [UNCONDITIONAL_CALL]
//   core_ammobox.cpp_FUN_00411ab0 (00411ab0) at 00411abc [UNCONDITIONAL_CALL]
//   core_baron.cpp_FUN_00413470 (00413470) at 004134a1 [UNCONDITIONAL_CALL]
//   core_baron.cpp_FUN_004135e0 (004135e0) at 00413667 [UNCONDITIONAL_CALL]
//   core_baron.cpp_FUN_00413f20 (00413f20) at 00413f5f [UNCONDITIONAL_CALL]
//   core_batman.cpp_CBatman_process_FUN_00416870 (00416870) at 004170f6 [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_CLightActor_FUN_00423380 (00423380) at 00423398 [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_CLightActor_FUN_00423400 (00423400) at 0042340d [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_CLightActor_FUN_00423440 (00423440) at 00423458 [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_FUN_00423310 (00423310) at 0042331e [UNCONDITIONAL_CALL]
//   core_bugs.cpp_FUN_00425fe0 (00425fe0) at 0042606c [UNCONDITIONAL_CALL]
//   core_bugs.cpp_FUN_00427400 (00427400) at 0042742b [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042ca70 (0042ca70) at 0042ccd7 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042f340 (0042f340) at 0042f35b [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042f3e0 (0042f3e0) at 0042f3fb [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_findSomethingToLookAt_FUN_0042d5a0 (0042d5a0) at 0042d827 [UNCONDITIONAL_CALL]
//   core_crossbow.cpp_CCrossbow_FUN_00448f20 (00448f20) at 00449240 [UNCONDITIONAL_CALL]
//   core_dest.cpp_CDestActor_renderTransparent_FUN_0046fb70 (0046fb70) at 0046fc47 [UNCONDITIONAL_CALL]
//   core_door.cpp_FUN_00481250 (00481250) at 00481262 [UNCONDITIONAL_CALL]
//   core_door.cpp_FUN_004812b0 (004812b0) at 004812bd [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_00484410 (00484410) at 00485622 [UNCONDITIONAL_CALL]
//   core_drip.cpp_FUN_0048e830 (0048e830) at 0048e842 [UNCONDITIONAL_CALL]
//   core_drip.cpp_FUN_0048e8d0 (0048e8d0) at 0048e8dd [UNCONDITIONAL_CALL]
//   core_enemy.cpp_FUN_004a9f10 (004a9f10) at 004a9f6a [UNCONDITIONAL_CALL]
//   core_event.cpp_CEventList_FUN_004aacc0 (004aacc0) at 004ab333 [UNCONDITIONAL_CALL]
//   core_filmreel.cpp_CFilmProjector_load_FUN_004beb40 (004beb40) at 004bec1e [UNCONDITIONAL_CALL]
//   core_fire.cpp_CFireEffect_FUN_004c8230 (004c8230) at 004c84bd [UNCONDITIONAL_CALL]
//   core_fire.cpp_CGunFlame_initProcess_FUN_004c4b00 (004c4b00) at 004c4bc8 [UNCONDITIONAL_CALL]
//   core_flame.cpp_FUN_004caa80 (004caa80) at 004cab94 [UNCONDITIONAL_CALL]
//   core_flies.cpp_FUN_004cca50 (004cca50) at 004cca85 [UNCONDITIONAL_CALL]
//   core_frankgen.cpp_CFrankenstienMachine_findLeader_FUN_004d2330 (004d2330) at 004d2354 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_CarryLights_FUN_004d7120 (004d7120) at 004d7188 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d2ea0 (004d2ea0) at 004d328c [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d4890 (004d4890) at 004d494c [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d4c90 (004d4c90) at 004d4ca6 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d5c10 (004d5c10) at 004d5c29 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d5c60 (004d5c60) at 004d5cc9 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d6140 (004d6140) at 004d61ca [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d6260 (004d6260) at 004d627d [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_loadSaveGame_FUN_004e12b0 (004e12b0) at 004e19a7 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0 (004ddaf0) at 004e04e1 [UNCONDITIONAL_CALL]
//   core_game.cpp_giveHeroWeapon_FUN_004dd870 (004dd870) at 004dd8a9 [UNCONDITIONAL_CALL]
//   core_gun.cpp_FUN_004f0350 (004f0350) at 004f073b [UNCONDITIONAL_CALL]
//   core_hero.cpp_CHeroPlaceholder_createHero_FUN_004f3d80 (004f3d80) at 004f3daf [UNCONDITIONAL_CALL]
//   core_hero.cpp_CHero_FUN_004f2a30 (004f2a30) at 004f2a5a [UNCONDITIONAL_CALL]
//   core_hero.cpp_FUN_004f2d70 (004f2d70) at 004f2dca [UNCONDITIONAL_CALL]
//   core_hero.cpp_FUN_004f2f50 (004f2f50) at 004f2fb3 [UNCONDITIONAL_CALL]
//   core_hero.cpp_FUN_004f3120 (004f3120) at 004f31c9 [UNCONDITIONAL_CALL]
//   core_hero.cpp_FUN_004f3350 (004f3350) at 004f336c [UNCONDITIONAL_CALL]
//   core_hero.cpp_FUN_004f35b0 (004f35b0) at 004f3634 [UNCONDITIONAL_CALL]
//   core_hero.cpp_FUN_004f3960 (004f3960) at 004f39e1 [UNCONDITIONAL_CALL]
//   core_hiram.cpp_FUN_004f4550 (004f4550) at 004f462f [UNCONDITIONAL_CALL]
//   core_hostage.cpp_RelatedToRescuedTownsfolk_FUN_004f4bd0 (004f4bd0) at 004f4dc4 [UNCONDITIONAL_CALL]
//   core_icepick.cpp_FUN_004f80b0 (004f80b0) at 004f8315 [UNCONDITIONAL_CALL]
//   core_icepick.cpp_FUN_004f8970 (004f8970) at 004f8a0d [UNCONDITIONAL_CALL]
//   core_imp.cpp_FUN_004f9c30 (004f9c30) at 004fa2eb [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_addItem_FUN_004fd600 (004fd600) at 004fe641 [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_autoUseHealthItem_FUN_00501570 (00501570) at 005015d0 [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_calculateTotalBatteryCharge_FUN_004ffda0 (004ffda0) at 004ffdce [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_checkHasMatchingKey_FUN_005013d0 (005013d0) at 005013fd [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_cycleWeaponOfSameClass_FUN_004fed10 (004fed10) at 004fed62 [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_load_FUN_004ff400 (004ff400) at 004ff6f0 [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_removeMatchingKeys_FUN_005014a0 (005014a0) at 005014c1 [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_renderAllItems_FUN_00500690 (00500690) at 00500ae6 [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_renderItemModel_FUN_004fee00 (004fee00) at 004ff08b [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_selectWeapon_FUN_004feb10 (004feb10) at 004feb70 [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_select_FUN_004ff800 (004ff800) at 004ffa81 [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_updateInventory_FUN_004ffad0 (004ffad0) at 004ffb01 [UNCONDITIONAL_CALL]
//   core_inv.cpp_clampWeaponAmmoCount_FUN_004fd5d0 (004fd5d0) at 004fd5dc [UNCONDITIONAL_CALL]
//   core_inv.cpp_getItemModel_FUN_004fcda0 (004fcda0) at 004fce72 [UNCONDITIONAL_CALL]
//   core_lever.cpp_FUN_00504920 (00504920) at 005049e7 [UNCONDITIONAL_CALL]
//   core_lever.cpp_FUN_00504b20 (00504b20) at 00504c5f [UNCONDITIONAL_CALL]
//   core_lever.cpp_FUN_00505100 (00505100) at 00505112 [UNCONDITIONAL_CALL]
//   core_lever.cpp_FUN_00505160 (00505160) at 0050516d [UNCONDITIONAL_CALL]
//   core_lever.cpp_FUN_005051a0 (005051a0) at 005051b2 [UNCONDITIONAL_CALL]
//   core_lever.cpp_FUN_00505210 (00505210) at 0050521c [UNCONDITIONAL_CALL]
//   core_lightgun.cpp_FUN_00505c70 (00505c70) at 00506178 [UNCONDITIONAL_CALL]
//   core_melee.cpp_FUN_0050eb50 (0050eb50) at 0050eb62 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_CMimic_setup_FUN_0051f3e0 (0051f3e0) at 0051f5ea [UNCONDITIONAL_CALL]
//   core_mimic.cpp_FUN_00520500 (00520500) at 00520542 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_FUN_005205f0 (005205f0) at 00520724 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_FUN_00524e00 (00524e00) at 00524e1a [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_createOneHero_FUN_00524920 (00524920) at 00524982 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_readMissionFile_FUN_00522eb0 (00522eb0) at 005232ac [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_writeFile_FUN_00523600 (00523600) at 0052388a [UNCONDITIONAL_CALL]
//   core_mission.cpp_FUN_00524c20 (00524c20) at 00524c6d [UNCONDITIONAL_CALL]
//   core_mobster.cpp_CMobster_aimTommyGun_FUN_005267a0 (005267a0) at 005268ae [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00525840 (00525840) at 00525cdf [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00526b20 (00526b20) at 00526c49 [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00527740 (00527740) at 005277c4 [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_005279f0 (005279f0) at 00527b11 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_DuplicateActorCheckMaybe_FUN_0053bd80 (0053bd80) at 0053bf52 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_005379e0 (005379e0) at 00537a63 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053d3b0 (0053d3b0) at 0053d40d [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 00539e84 [UNCONDITIONAL_CALL]
//   core_pendulum.cpp_FUN_0054a180 (0054a180) at 0054a292 [UNCONDITIONAL_CALL]
//   core_pendulum.cpp_FUN_0054a5a0 (0054a5a0) at 0054a5ad [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054e400 (0054e400) at 0054e412 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054e480 (0054e480) at 0054e48c [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054e4e0 (0054e4e0) at 0054e4f2 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054e530 (0054e530) at 0054e548 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054e700 (0054e700) at 0054e712 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054e760 (0054e760) at 0054e76d [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_00557d20 (00557d20) at 00557d72 [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_00558cf0 (00558cf0) at 00558d0d [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055c226 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056b810 (0056b810) at 0056bae2 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056c1a0 (0056c1a0) at 0056c614 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_00570fc0 (00570fc0) at 0057110d [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_buildMirrorList_FUN_00570b70 (00570b70) at 00570ba5 [UNCONDITIONAL_CALL]
//   core_setcolid.cpp_CDemonSet_FUN_00574580 (00574580) at 005745c3 [UNCONDITIONAL_CALL]
//   core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0 (005716b0) at 00571976 [UNCONDITIONAL_CALL]
//   core_simbox.cpp_FUN_00589270 (00589270) at 00589282 [UNCONDITIONAL_CALL]
//   core_simbox.cpp_FUN_005892d0 (005892d0) at 005892dd [UNCONDITIONAL_CALL]
//   core_stone.cpp_FUN_005bad70 (005bad70) at 005bad84 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bb960 (005bb960) at 005bc421 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bdd20 (005bdd20) at 005be136 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c07b0 (005c07b0) at 005c0fcc [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c1f00 (005c1f00) at 005c1f28 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c1fe0 (005c1fe0) at 005c20a1 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c2400 (005c2400) at 005c24c1 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c2850 (005c2850) at 005c2f45 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c3960 (005c3960) at 005c3cf8 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c48b0 (005c48b0) at 005c4bb8 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c5270 (005c5270) at 005c5581 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c6590 (005c6590) at 005c65c4 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_FUN_005baf20 (005baf20) at 005baf48 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_FUN_005bb010 (005bb010) at 005bb024 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_FUN_005be430 (005be430) at 005be446 [UNCONDITIONAL_CALL]
//   core_tommygun.cpp_FUN_005ddb30 (005ddb30) at 005ddf3b [UNCONDITIONAL_CALL]
//   core_trap.cpp_CTrap_process_FUN_005de770 (005de770) at 005de808 [UNCONDITIONAL_CALL]
//   core_trigger.cpp_CTrigger_containsActor_FUN_005e0cd0 (005e0cd0) at 005e0e62 [UNCONDITIONAL_CALL]
//   core_turret.cpp_FUN_005e3750 (005e3750) at 005e38cf [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_AnotherVoicuSummonWavCall_FUN_005e7390 (005e7390) at 005e73d0 [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_process_FUN_005e5970 (005e5970) at 005e6731 [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_FUN_005e7030 (005e7030) at 005e71ca [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_VoicuSummonWavFile2_FUN_005e7410 (005e7410) at 005e744d [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_VoicuSummonWavFile_FUN_005e7320 (005e7320) at 005e735d [UNCONDITIONAL_CALL]
//   core_vehicle.cpp_CVehicle_process_FUN_005e7e80 (005e7e80) at 005e85b8 [UNCONDITIONAL_CALL]
//   core_waypoint.cpp_CWayPoint_FUN_005ec610 (005ec610) at 005ec61c [UNCONDITIONAL_CALL]
//   core_waypoint.cpp_CWaypoint_FUN_005ebf70 (005ebf70) at 005ebfbc [UNCONDITIONAL_CALL]
//   core_weapon.cpp_CWeapon_FUN_005ee4a0 (005ee4a0) at 005ee57b [UNCONDITIONAL_CALL]
//   core_weapon.cpp_CWeapon_FUN_005ee830 (005ee830) at 005ee922 [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_CWerewolf_process_FUN_005efde0 (005efde0) at 005f08d6 [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_FUN_005f2010 (005f2010) at 005f2022 [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_FUN_005f2070 (005f2070) at 005f207d [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_process_FUN_005f9470 (005f9470) at 005fb08c [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_isOfClassHash_FUN_0040c760

#include "nocturne.h"

CDemonActor * __cdecl
core_actor_cpp_castToClassHash_FUN_0040c790(CDemonActor *actor_ptr,uint class_name_hash)

{
  CDemonActor *pCVar1;
  
  if (actor_ptr == (CDemonActor *)0x0) {
    pCVar1 = (CDemonActor *)0x0;
  }
  else {
    pCVar1 = (CDemonActor *)core_actor_cpp_isOfClassHash_FUN_0040c760(actor_ptr,class_name_hash);
    if (pCVar1 != (CDemonActor *)0x0) {
      return actor_ptr;
    }
  }
  return pCVar1;
}


// Assembly code:
// 0040c790: PUSH EBX
//   Label: core_actor.cpp_castToClassHash_FUN_0040c790
// 0040c791: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0040c795: TEST EBX,EBX
// 0040c797: JNZ 0x0040c79d
//   XREF to: 0040c79d (CONDITIONAL_JUMP)
// 0040c799: XOR EAX,EAX
// 0040c79b: POP EBX
//   Label: LAB_0040c79b
// 0040c79c: RET
// 0040c79d: MOV EDX,dword ptr [ESP + 0xc]
//   Label: LAB_0040c79d
//   XREF to: Stack[0x8] (READ)
// 0040c7a1: PUSH EDX
// 0040c7a2: PUSH EBX
// 0040c7a3: CALL core_actor.cpp_isOfClassHash_FUN_0040c760
//   XREF to: 0040c760 (UNCONDITIONAL_CALL)
// 0040c7a8: ADD ESP,0x8
// 0040c7ab: TEST EAX,EAX
// 0040c7ad: JZ 0x0040c79b
//   XREF to: 0040c79b (CONDITIONAL_JUMP)
// 0040c7af: MOV EAX,EBX
// 0040c7b1: POP EBX
// 0040c7b2: RET
