// Name: core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
// Address: 00408ec0
// Address Range: [[00408ec0, 00408f05]]
// Convention: __cdecl
// Signature: CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
// Cross-references:
//   core_actor.cpp_CDemonActor_processFootstepAtOffset_FUN_0040c8f0 (0040c8f0) at 0040c903 [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a210 (0040a210) at 0040a28d [UNCONDITIONAL_CALL]
//   core_baron.cpp_CBaron_process_FUN_00412e80 (00412e80) at 0041327a [UNCONDITIONAL_CALL]
//   core_baron.cpp_FUN_004136b0 (004136b0) at 00413984 [UNCONDITIONAL_CALL]
//   core_batcreat.cpp_CBatCreature_process_FUN_00415470 (00415470) at 0041570d [UNCONDITIONAL_CALL]
//   core_batcreat.cpp_FUN_00416030 (00416030) at 00416093 [UNCONDITIONAL_CALL]
//   core_batman.cpp_CBatman_process_FUN_00416870 (00416870) at 00416e28 [UNCONDITIONAL_CALL]
//   core_batman.cpp_FUN_004179a0 (004179a0) at 00417a03 [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_FUN_00419e10 (00419e10) at 00419e81 [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_FUN_0041a050 (0041a050) at 0041a3a8 [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_FUN_0041a630 (0041a630) at 0041a93b [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_FUN_0041ae50 (0041ae50) at 0041aea0 [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_FUN_0041b070 (0041b070) at 0041b14d [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_FUN_0041b770 (0041b770) at 0041b80b [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_FUN_0041bf90 (0041bf90) at 0041c68c [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_FUN_0041cc40 (0041cc40) at 0041ce75 [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_FUN_004218d0 (004218d0) at 0042197a [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_FUN_00422590 (00422590) at 00422614 [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_FUN_00422a50 (00422a50) at 00422b95 [UNCONDITIONAL_CALL]
//   core_bride.cpp_FUN_00423a30 (00423a30) at 00423bfb [UNCONDITIONAL_CALL]
//   core_bride.cpp_FUN_00424830 (00424830) at 00424881 [UNCONDITIONAL_CALL]
//   core_chain.cpp_FUN_0042fcc0 (0042fcc0) at 0042fd09 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042a520 (0042a520) at 0042a763 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042a830 (0042a830) at 0042aa58 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042b670 (0042b670) at 0042b70b [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042b760 (0042b760) at 0042b7ad [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042b810 (0042b810) at 0042b85f [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042b930 (0042b930) at 0042b994 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042b9e0 (0042b9e0) at 0042bae1 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042c010 (0042c010) at 0042c049 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042c180 (0042c180) at 0042c383 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042c3c0 (0042c3c0) at 0042c485 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042ea40 (0042ea40) at 0042eb21 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042f3e0 (0042f3e0) at 0042f684 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_findSomethingToLookAt_FUN_0042d5a0 (0042d5a0) at 0042d690 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0 (004286e0) at 00428c2e [UNCONDITIONAL_CALL]
//   core_cow.cpp_FUN_00444310 (00444310) at 00444613 [UNCONDITIONAL_CALL]
//   core_crossbow.cpp_CCrossbow_FUN_00448f20 (00448f20) at 00448f54 [UNCONDITIONAL_CALL]
//   core_crossbow.cpp_CCrossbow_process_FUN_00448d30 (00448d30) at 00448d61 [UNCONDITIONAL_CALL]
//   core_dog.cpp_CZombieDog_process_FUN_0047f140 (0047f140) at 0047f45e [UNCONDITIONAL_CALL]
//   core_door.cpp_CDoor_reposition_FUN_0047fd20 (0047fd20) at 0047fdfd [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_00484410 (00484410) at 00484ce0 [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_004858f0 (004858f0) at 004859e1 [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_00486070 (00486070) at 004860bb [UNCONDITIONAL_CALL]
//   core_drone.cpp_FUN_0048ec70 (0048ec70) at 0048f00a [UNCONDITIONAL_CALL]
//   core_dynamite.cpp_FUN_0049cfb0 (0049cfb0) at 0049d0c8 [UNCONDITIONAL_CALL]
//   core_elephant.cpp_FUN_004a7070 (004a7070) at 004a70ca [UNCONDITIONAL_CALL]
//   core_elephant.cpp_FUN_004a7160 (004a7160) at 004a7194 [UNCONDITIONAL_CALL]
//   core_elephant.cpp_FUN_004a79f0 (004a79f0) at 004a7a33 [UNCONDITIONAL_CALL]
//   core_emitter.cpp_FUN_004a8fe0 (004a8fe0) at 004a92e9 [UNCONDITIONAL_CALL]
//   core_enemy.cpp_FUN_004a9a50 (004a9a50) at 004a9a85 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CBulletHole_process_FUN_004bfa00 (004bfa00) at 004bfa1e [UNCONDITIONAL_CALL]
//   core_flamegun.cpp_FUN_004cb920 (004cb920) at 004cb955 [UNCONDITIONAL_CALL]
//   core_frankgen.cpp_LoadModel_FUN_004d2190 (004d2190) at 004d2247 [UNCONDITIONAL_CALL]
//   core_frankgen.cpp_PlaySounds_FUN_004d1a40 (004d1a40) at 004d1bc7 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d2ea0 (004d2ea0) at 004d3160 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d4890 (004d4890) at 004d4917 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d5c60 (004d5c60) at 004d5ef4 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d6260 (004d6260) at 004d6485 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d6540 (004d6540) at 004d685f [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d6f80 (004d6f80) at 004d6fe3 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_PickupSomething_FUN_004d5870 (004d5870) at 004d58c6 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_beginFadeIn_FUN_004e0920 (004e0920) at 004e083f [UNCONDITIONAL_CALL]
//   core_gargoyle.cpp_CGargoyle_unk3_FUN_004e57d0 (004e57d0) at 004e57eb [UNCONDITIONAL_CALL]
//   core_gargoyle.cpp_CGargoyle_unk6_FUN_004e4a00 (004e4a00) at 004e4dc8 [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_CGhoul_FUN_004e6600 (004e6600) at 004e713e [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_FUN_004e82d0 (004e82d0) at 004e846a [UNCONDITIONAL_CALL]
//   core_gun.cpp_FUN_004f0350 (004f0350) at 004f0384 [UNCONDITIONAL_CALL]
//   core_haystack.cpp_FUN_004f1ab0 (004f1ab0) at 004f1adf [UNCONDITIONAL_CALL]
//   core_hero.cpp_FUN_004f2af0 (004f2af0) at 004f2b83 [UNCONDITIONAL_CALL]
//   core_hero.cpp_FUN_004f2c40 (004f2c40) at 004f2c6d [UNCONDITIONAL_CALL]
//   core_hero.cpp_FUN_004f3120 (004f3120) at 004f3250 [UNCONDITIONAL_CALL]
//   core_hero.cpp_FUN_004f33b0 (004f33b0) at 004f3520 [UNCONDITIONAL_CALL]
//   core_hostage.cpp_RelatedToRescuedTownsfolk_FUN_004f4bd0 (004f4bd0) at 004f4d9c [UNCONDITIONAL_CALL]
//   core_hotdemon.cpp_FUN_004f6f20 (004f6f20) at 004f71b7 [UNCONDITIONAL_CALL]
//   core_hotdemon.cpp_FUN_004f7720 (004f7720) at 004f77df [UNCONDITIONAL_CALL]
//   core_icepick.cpp_FUN_004f8970 (004f8970) at 004f89ba [UNCONDITIONAL_CALL]
//   core_icepick.cpp_FUN_004f9490 (004f9490) at 004f94bd [UNCONDITIONAL_CALL]
//   core_imp.cpp_FUN_004f9c30 (004f9c30) at 004f9d8d [UNCONDITIONAL_CALL]
//   core_imp.cpp_FUN_004fae00 (004fae00) at 004fae42 [UNCONDITIONAL_CALL]
//   core_larva.cpp_FUN_00503080 (00503080) at 00503539 [UNCONDITIONAL_CALL]
//   core_larva.cpp_FUN_00503a20 (00503a20) at 00503afb [UNCONDITIONAL_CALL]
//   core_lever.cpp_FUN_00504dd0 (00504dd0) at 00504e6e [UNCONDITIONAL_CALL]
//   core_lightgun.cpp_FUN_00505ac0 (00505ac0) at 00505ae3 [UNCONDITIONAL_CALL]
//   core_lightgun.cpp_FUN_00505b70 (00505b70) at 00505bf2 [UNCONDITIONAL_CALL]
//   core_lightgun.cpp_FUN_00505c70 (00505c70) at 00506042 [UNCONDITIONAL_CALL]
//   core_lightgun.cpp_FUN_005066b0 (005066b0) at 0050670d [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_00509b20 (00509b20) at 00509bc2 [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_0050a610 (0050a610) at 0050a65a [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_0050a8d0 (0050a8d0) at 0050a9a8 [UNCONDITIONAL_CALL]
//   core_marquee.cpp_FUN_0050c050 (0050c050) at 0050c1e0 [UNCONDITIONAL_CALL]
//   core_melee.cpp_FUN_0050ec10 (0050ec10) at 0050ec94 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_FUN_0051fcc0 (0051fcc0) at 0051fd0a [UNCONDITIONAL_CALL]
//   core_mobster.cpp_CMobster_aimTommyGun_FUN_005267a0 (005267a0) at 00526875 [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00525110 (00525110) at 005251ab [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00525650 (00525650) at 005256b9 [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00525720 (00525720) at 0052578a [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00525840 (00525840) at 00525e42 [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00526d90 (00526d90) at 00526ff3 [UNCONDITIONAL_CALL]
//   core_npc.cpp_CNPC_process_FUN_005448b0 (005448b0) at 0054496f [UNCONDITIONAL_CALL]
//   core_pendulum.cpp_FUN_00549b90 (00549b90) at 00549ca1 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054cc30 (0054cc30) at 0054d486 [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_00558720 (00558720) at 00558b09 [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_00558cf0 (00558cf0) at 00558f15 [UNCONDITIONAL_CALL]
//   core_sentinel.cpp_FUN_00568030 (00568030) at 00568559 [UNCONDITIONAL_CALL]
//   core_sentinel.cpp_FUN_00568b70 (00568b70) at 00568c36 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056c990 (0056c990) at 0056ca0e [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056fbd0 (0056fbd0) at 0056fe19 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 (0056ae50) at 0056b24b [UNCONDITIONAL_CALL]
//   core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0 (005716b0) at 00571a57 [UNCONDITIONAL_CALL]
//   core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0 (005751d0) at 005754c9 [UNCONDITIONAL_CALL]
//   core_shotgun.cpp_FUN_00587f70 (00587f70) at 00587fca [UNCONDITIONAL_CALL]
//   core_shotgun.cpp_FUN_00588060 (00588060) at 00588091 [UNCONDITIONAL_CALL]
//   core_shotgun.cpp_FUN_005888f0 (005888f0) at 00588933 [UNCONDITIONAL_CALL]
//   core_smiley.cpp_FUN_005a2800 (005a2800) at 005a2c3c [UNCONDITIONAL_CALL]
//   core_smiley.cpp_FUN_005a3160 (005a3160) at 005a31dc [UNCONDITIONAL_CALL]
//   core_spike.cpp_FUN_005b8950 (005b8950) at 005b8cf0 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bb960 (005bb960) at 005bcfe0 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bdd20 (005bdd20) at 005bdddb [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c1680 (005c1680) at 005c17e0 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c1fe0 (005c1fe0) at 005c21c3 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c2400 (005c2400) at 005c2788 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c3960 (005c3960) at 005c3c2b [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c4c20 (005c4c20) at 005c4f69 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_aimLeftPistol_FUN_005c4370 (005c4370) at 005c43d9 [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_AttackWithParentBone_FUN_005d9a10 (005d9a10) at 005d9a8c [UNCONDITIONAL_CALL]
//   core_tentacle.cpp_CTentacle_process_FUN_005db050 (005db050) at 005db239 [UNCONDITIONAL_CALL]
//   core_tommygun.cpp_FUN_005ddb30 (005ddb30) at 005ddb98 [UNCONDITIONAL_CALL]
//   core_trigger.cpp_CTrigger_containsActor_FUN_005e0cd0 (005e0cd0) at 005e0d55 [UNCONDITIONAL_CALL]
//   core_trigger.cpp_CTrigger_process_FUN_005dfac0 (005dfac0) at 005dfd04 [UNCONDITIONAL_CALL]
//   core_turret.cpp_CTurret_ctor_FUN_005e20f0 (005e20f0) at 005e21ed [UNCONDITIONAL_CALL]
//   core_turret.cpp_FUN_005e2d50 (005e2d50) at 005e2dc1 [UNCONDITIONAL_CALL]
//   core_turret.cpp_FUN_005e3750 (005e3750) at 005e3781 [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_FUN_005e7030 (005e7030) at 005e70f1 [UNCONDITIONAL_CALL]
//   core_vehicle.cpp_CVehicle_FUN_005e88c0 (005e88c0) at 005e8aac [UNCONDITIONAL_CALL]
//   core_waypoint.cpp_CWaypoint_FUN_005ebf70 (005ebf70) at 005ec1d2 [UNCONDITIONAL_CALL]
//   core_weapon.cpp_CWeapon_FUN_005ee4a0 (005ee4a0) at 005ee4c4 [UNCONDITIONAL_CALL]
//   core_weapon.cpp_CWeapon_FUN_005ee830 (005ee830) at 005ee87b [UNCONDITIONAL_CALL]
//   core_weapon.cpp_FUN_005ee740 (005ee740) at 005ee7c7 [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_CWerewolf_process_FUN_005efde0 (005efde0) at 005efed0 [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_FUN_005f1ac0 (005f1ac0) at 005f1c23 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_FUN_005fbe70 (005fbe70) at 005fbeef [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_FUN_005fc120 (005fc120) at 005fc1d5 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_PickupSomethingPossibly_FUN_005fb530 (005fb530) at 005fb7d5 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_process_FUN_005f9470 (005f9470) at 005f9b8d [UNCONDITIONAL_CALL]
//   core_zombie.cpp_FUN_005f8da0 (005f8da0) at 005f8e3b [UNCONDITIONAL_CALL]
// Function calls:
//   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0

#include "nocturne.h"

CVector3f * __cdecl
core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
          (CDemonActor *this_ptr,CVector3f *output_world_point,CVector3f *input_local_point)

{
  CVector3f *pCVar1;
  BADSPACEBASE *in_ESP;
  CVector3f local_10;
  
  pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                     (&this_ptr->orient_matrix,&local_10,input_local_point);
  output_world_point->x = pCVar1->x + output_world_point[2].z;
  output_world_point->y = pCVar1->y + output_world_point[3].x;
  output_world_point->z = pCVar1->z + output_world_point[3].y;
  return output_world_point;
}


// Assembly code:
// 00408ec0: PUSH EBX
//   Label: core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
// 00408ec1: SUB ESP,0xc
// 00408ec4: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00408ec8: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00408ecc: PUSH EDX
// 00408ecd: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x10] (DATA)
// 00408ed1: PUSH EAX
// 00408ed2: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 00408ed6: ADD EAX,0x3c
// 00408ed9: PUSH EAX
// 00408eda: CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   XREF to: 00471fd0 (UNCONDITIONAL_CALL)
// 00408edf: ADD ESP,0xc
// 00408ee2: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00408ee6: FLD float ptr [EAX]
// 00408ee8: FADD float ptr [EDX + 0x20]
// 00408eeb: FSTP float ptr [EBX]
// 00408eed: FLD float ptr [EAX + 0x4]
// 00408ef0: FADD float ptr [EDX + 0x24]
// 00408ef3: FSTP float ptr [EBX + 0x4]
// 00408ef6: FLD float ptr [EAX + 0x8]
// 00408ef9: FADD float ptr [EDX + 0x28]
// 00408efc: MOV EAX,EBX
// 00408efe: FSTP float ptr [EBX + 0x8]
// 00408f01: ADD ESP,0xc
// 00408f04: POP EBX
// 00408f05: RET
