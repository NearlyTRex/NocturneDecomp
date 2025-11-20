// Name: core_actor.cpp_getRandomFloat_FUN_0040cc10
// Address: 0040cc10
// Address Range: [[0040cc10, 0040cc6f]]
// Convention: __cdecl
// Signature: float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
// Cross-references:
//   core_baron.cpp_CBaron_process_FUN_00412e80 (00412e80) at 0041313f [UNCONDITIONAL_CALL]
//   core_bat.cpp_CBat_process_FUN_00414a00 (00414a00) at 00414bca [UNCONDITIONAL_CALL]
//   core_batcreat.cpp_CBatCreature_process_FUN_00415470 (00415470) at 00415752 [UNCONDITIONAL_CALL]
//   core_batman.cpp_CBatman_process_FUN_00416870 (00416870) at 00416f4e [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_CBodyPart_fillAttackDamageInfo_FUN_0041b210 (0041b210) at 0041b23b [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_CBodyPart_process_FUN_00419be0 (00419be0) at 00419db5 [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_CreateBodyPart_FUN_00418e10 (00418e10) at 00418f30 [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_FUN_0041a050 (0041a050) at 0041a5a6 [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_FUN_0041ae50 (0041ae50) at 0041af6a [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_CBoneGuy_FUN_0041d680 (0041d680) at 0041d72b [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_CBoneGuy_ctor_FUN_0041bbc0 (0041bbc0) at 0041bced [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_FUN_0041bf90 (0041bf90) at 0041c59c [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_FUN_0041cc40 (0041cc40) at 0041cccd [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_CBoxActor_process_FUN_004219e0 (004219e0) at 00421c02 [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_FUN_00422a50 (00422a50) at 00422af6 [UNCONDITIONAL_CALL]
//   core_bride.cpp_FUN_00423810 (00423810) at 00423a00 [UNCONDITIONAL_CALL]
//   core_bride.cpp_FUN_00423a30 (00423a30) at 00423aca [UNCONDITIONAL_CALL]
//   core_bugs.cpp_FUN_00424e50 (00424e50) at 00424fdb [UNCONDITIONAL_CALL]
//   core_bugs.cpp_FUN_00426420 (00426420) at 004264f7 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042b190 (0042b190) at 0042b2e4 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042b9e0 (0042b9e0) at 0042bb44 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042e050 (0042e050) at 0042e1f0 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_findSomethingToLookAt_FUN_0042d5a0 (0042d5a0) at 0042d9fd [UNCONDITIONAL_CALL]
//   core_cow.cpp_FUN_00444310 (00444310) at 004445bf [UNCONDITIONAL_CALL]
//   core_crossbow.cpp_CCrossbow_FUN_00449570 (00449570) at 0044957d [UNCONDITIONAL_CALL]
//   core_dog.cpp_CZombieDog_process_FUN_0047f140 (0047f140) at 0047f40c [UNCONDITIONAL_CALL]
//   core_door.cpp_CDoor_reposition_FUN_0047fd20 (0047fd20) at 00480015 [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_DraculaBrideModels_FUN_004840b0 (004840b0) at 004842ee [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_00484410 (00484410) at 00484d5f [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_004858f0 (004858f0) at 00485a3d [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_00486430 (00486430) at 00486447 [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_004864c0 (004864c0) at 004864db [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_004869a0 (004869a0) at 00486b00 [UNCONDITIONAL_CALL]
//   core_drip.cpp_FUN_0048e0e0 (0048e0e0) at 0048e126 [UNCONDITIONAL_CALL]
//   core_drip.cpp_FUN_0048e2a0 (0048e2a0) at 0048e47a [UNCONDITIONAL_CALL]
//   core_drone.cpp_FUN_0048ec70 (0048ec70) at 0048f299 [UNCONDITIONAL_CALL]
//   core_dynamite.cpp_FUN_0049cee0 (0049cee0) at 0049ceed [UNCONDITIONAL_CALL]
//   core_elephant.cpp_FUN_004a7160 (004a7160) at 004a71fb [UNCONDITIONAL_CALL]
//   core_elephant.cpp_FUN_004a78a0 (004a78a0) at 004a78d0 [UNCONDITIONAL_CALL]
//   core_elephant.cpp_FUN_004a79b0 (004a79b0) at 004a79d6 [UNCONDITIONAL_CALL]
//   core_emitter.cpp_FUN_004a7e80 (004a7e80) at 004a7ef2 [UNCONDITIONAL_CALL]
//   core_emitter.cpp_FUN_004a8070 (004a8070) at 004a8314 [UNCONDITIONAL_CALL]
//   core_emitter.cpp_FUN_004a8d20 (004a8d20) at 004a8d45 [UNCONDITIONAL_CALL]
//   core_enemy.cpp_CEnemy_FUN_004a9b00 (004a9b00) at 004a9c22 [UNCONDITIONAL_CALL]
//   core_enemy.cpp_CEnemy_ctor_FUN_004a9500 (004a9500) at 004a9529 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CCrater_FUN_004c4200 (004c4200) at 004c4283 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CExplosion_FUN_004c3970 (004c3970) at 004c39e7 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CGlassParticle_init_FUN_004c1c00 (004c1c00) at 004c1cde [UNCONDITIONAL_CALL]
//   core_fire.cpp_CGunFlame_FUN_004c4db0 (004c4db0) at 004c4de2 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CLaserBeam_render_FUN_004c25c0 (004c25c0) at 004c3806 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CMuzzleFlash_render_FUN_004c1a30 (004c1a30) at 004c1a75 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CShell_onCollision_FUN_004c6380 (004c6380) at 004c63bd [UNCONDITIONAL_CALL]
//   core_fire.cpp_CSmokeParticle_init_FUN_004bf2f0 (004bf2f0) at 004bf33a [UNCONDITIONAL_CALL]
//   core_fire.cpp_CSmokeParticle_process_FUN_004bf390 (004bf390) at 004bf3e5 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CStake_spawn_FUN_004bfe90 (004bfe90) at 004c00b0 [UNCONDITIONAL_CALL]
//   core_fire.cpp_FUN_004c6170 (004c6170) at 004c61b8 [UNCONDITIONAL_CALL]
//   core_flame.cpp_CFlame_ctor_FUN_004c9aa0 (004c9aa0) at 004c9ae2 [UNCONDITIONAL_CALL]
//   core_flame.cpp_FUN_004c9c00 (004c9c00) at 004c9f16 [UNCONDITIONAL_CALL]
//   core_flame.cpp_FUN_004ca110 (004ca110) at 004ca707 [UNCONDITIONAL_CALL]
//   core_flamecan.cpp_FUN_004cad90 (004cad90) at 004cadf8 [UNCONDITIONAL_CALL]
//   core_flamegun.cpp_FUN_004cbad1 (004cbad1) at 004cbadb [UNCONDITIONAL_CALL]
//   core_flies.cpp_FUN_004cc760 (004cc760) at 004cc7ea [UNCONDITIONAL_CALL]
//   core_flies.cpp_FUN_004cc820 (004cc820) at 004cc83c [UNCONDITIONAL_CALL]
//   core_frankgen.cpp_PlaySounds_FUN_004d1a40 (004d1a40) at 004d1b4f [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_CGabriella_FUN_004d6b30 (004d6b30) at 004d6beb [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d4890 (004d4890) at 004d4b0c [UNCONDITIONAL_CALL]
//   core_gargoyle.cpp_CGargoyle_unk6_FUN_004e4a00 (004e4a00) at 004e4d76 [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_CGhoul_FUN_004e6600 (004e6600) at 004e71bc [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_CGhoul_findDarkWayPoint_FUN_004e63d0 (004e63d0) at 004e640f [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_FUN_004e6030 (004e6030) at 004e6067 [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_FUN_004e87e0 (004e87e0) at 004e8969 [UNCONDITIONAL_CALL]
//   core_gore.cpp_FUN_004edbb0 (004edbb0) at 004edce0 [UNCONDITIONAL_CALL]
//   core_gun.cpp_FUN_004f0350 (004f0350) at 004f05ee [UNCONDITIONAL_CALL]
//   core_gun.cpp_FUN_004f0b20 (004f0b20) at 004f0b2d [UNCONDITIONAL_CALL]
//   core_hostage.cpp_RelatedToRescuedTownsfolk_FUN_004f4bd0 (004f4bd0) at 004f4d16 [UNCONDITIONAL_CALL]
//   core_hotdemon.cpp_FUN_004f6f20 (004f6f20) at 004f71fb [UNCONDITIONAL_CALL]
//   core_icepick.cpp_FUN_004f9490 (004f9490) at 004f9504 [UNCONDITIONAL_CALL]
//   core_imp.cpp_FUN_004f9910 (004f9910) at 004f9bec [UNCONDITIONAL_CALL]
//   core_imp.cpp_FUN_004f9c30 (004f9c30) at 004f9e6e [UNCONDITIONAL_CALL]
//   core_larva.cpp_FUN_00503020 (00503020) at 0050305b [UNCONDITIONAL_CALL]
//   core_larva.cpp_FUN_00503080 (00503080) at 00503349 [UNCONDITIONAL_CALL]
//   core_lightgun.cpp_FUN_00506670 (00506670) at 00506696 [UNCONDITIONAL_CALL]
//   core_melee.cpp_FUN_0050ea70 (0050ea70) at 0050ea83 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_FUN_0051fcc0 (0051fcc0) at 005201ff [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00525840 (00525840) at 00525dce [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00526d90 (00526d90) at 00526e97 [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_005271c0 (005271c0) at 005271e6 [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00527380 (00527380) at 005273e9 [UNCONDITIONAL_CALL]
//   core_moon.cpp_CMoon_init_FUN_00529ae0 (00529ae0) at 00529b2d [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_005379e0 (005379e0) at 00537cfb [UNCONDITIONAL_CALL]
//   core_particle.cpp_CParticle_setup_FUN_00545680 (00545680) at 005456e7 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055c9e2 [UNCONDITIONAL_CALL]
//   core_sentinel.cpp_FUN_00568030 (00568030) at 0056859f [UNCONDITIONAL_CALL]
//   core_shotgun.cpp_CShotgun_FUN_005887a0 (005887a0) at 005887df [UNCONDITIONAL_CALL]
//   core_shotgun.cpp_FUN_00588060 (00588060) at 005880f8 [UNCONDITIONAL_CALL]
//   core_shotgun.cpp_FUN_005888b0 (005888b0) at 005888d6 [UNCONDITIONAL_CALL]
//   core_shovel.cpp_FUN_00588c40 (00588c40) at 00588c4d [UNCONDITIONAL_CALL]
//   core_smiley.cpp_FUN_005a2800 (005a2800) at 005a2bde [UNCONDITIONAL_CALL]
//   core_sound.cpp_CSound_FUN_005b2fd0 (005b2fd0) at 005b37d9 [UNCONDITIONAL_CALL]
//   core_sound.cpp_processTrainSounds_FUN_005b2770 (005b2770) at 005b2c3b [UNCONDITIONAL_CALL]
//   core_spike.cpp_FUN_005b8410 (005b8410) at 005b866e [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bdd20 (005bdd20) at 005be18d [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bfb60 (005bfb60) at 005bfe18 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c48b0 (005c48b0) at 005c4b4d [UNCONDITIONAL_CALL]
//   core_succubus.cpp_CSuccubus_process_FUN_005c6e90 (005c6e90) at 005c754e [UNCONDITIONAL_CALL]
//   core_tentacle.cpp_CTentacle_process_FUN_005db050 (005db050) at 005db3d4 [UNCONDITIONAL_CALL]
//   core_tommygun.cpp_CTommyGun_process_FUN_005de360 (005de360) at 005de39f [UNCONDITIONAL_CALL]
//   core_tommygun.cpp_FUN_005ddb30 (005ddb30) at 005ddde9 [UNCONDITIONAL_CALL]
//   core_tommygun.cpp_FUN_005de330 (005de330) at 005de33d [UNCONDITIONAL_CALL]
//   core_trash.cpp_CTrash_process_FUN_005decf0 (005decf0) at 005ded25 [UNCONDITIONAL_CALL]
//   core_trash.cpp_FUN_005decc0 (005decc0) at 005deccd [UNCONDITIONAL_CALL]
//   core_turret.cpp_CTurret_process_FUN_005e2430 (005e2430) at 005e254c [UNCONDITIONAL_CALL]
//   core_turret.cpp_FUN_005e3560 (005e3560) at 005e360c [UNCONDITIONAL_CALL]
//   core_turret.cpp_FUN_005e36f0 (005e36f0) at 005e36fd [UNCONDITIONAL_CALL]
//   core_tvbat.cpp_CTVBat_FUN_005e4050 (005e4050) at 005e409a [UNCONDITIONAL_CALL]
//   core_tvbat.cpp_CTVBat_ctor_FUN_005e3ef0 (005e3ef0) at 005e3f3d [UNCONDITIONAL_CALL]
//   core_tvbat.cpp_CTVBat_process_FUN_005e4210 (005e4210) at 005e4d42 [UNCONDITIONAL_CALL]
//   core_tvbat.cpp_FUN_005e3ec0 (005e3ec0) at 005e3ecd [UNCONDITIONAL_CALL]
//   core_weather.cpp_CWeather_AnotherLightningThunderThing_FUN_005eeeb0 (005eeeb0) at 005eeecb [UNCONDITIONAL_CALL]
//   core_weather.cpp_CWeather_FUN_005ef8c0 (005ef8c0) at 005ef8e4 [UNCONDITIONAL_CALL]
//   core_weather.cpp_CWeather_FUN_005ef940 (005ef940) at 005ef997 [UNCONDITIONAL_CALL]
//   core_weather.cpp_CWeather_SomethingWithLightingThunder_FUN_005eeaf0 (005eeaf0) at 005eec52 [UNCONDITIONAL_CALL]
//   core_weather.cpp_CWeather_SomethingWithThunder_FUN_005ef140 (005ef140) at 005ef152 [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_CWerewolf_FUN_005efcc0 (005efcc0) at 005efd6d [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_CWerewolf_process_FUN_005efde0 (005efde0) at 005efee2 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_FUN_005f9140 (005f9140) at 005f93ad [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_PickupSomethingPossibly_FUN_005fb530 (005fb530) at 005fb5c3 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_ctor_FUN_005f8fe0 (005f8fe0) at 005f9081 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_process_FUN_005f9470 (005f9470) at 005f9834 [UNCONDITIONAL_CALL]
// Globals:
//   float g_RandToFloatMultiplier = 0.00003051851
//   int g_RandToFloatFixedMultiplier = 0x33800001
//   CGame* g_CGamePtr = 02d81a9c
//   CGame g_CGameInstance
//   undefined4 DAT_02d81cd8
// Function calls:
//   core_actor.cpp_generateRandomValue_FUN_0040cba0
//   crt_stdlib.c_rand_FUN_005feb5c

#include "nocturne.h"

float __cdecl core_actor_cpp_getRandomFloat_FUN_0040cc10(float min_value,float max_value)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  float local_8;
  
  if (g_CGamePtr->is_processing == 0) {
    iVar3 = crt_stdlib_c_rand_FUN_005feb5c();
    fVar1 = (float)iVar3 * g_RandToFloatMultiplier;
  }
  else {
    uVar2 = core_actor_cpp_generateRandomValue_FUN_0040cba0();
    fVar1 = (float)(int)uVar2 * (float)g_RandToFloatFixedMultiplier;
  }
  return fVar1 * local_8 + max_value;
}


// Assembly code:
// 0040cc10: SUB ESP,0x10
//   Label: core_actor.cpp_getRandomFloat_FUN_0040cc10
// 0040cc13: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0040cc17: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 0040cc1c: FSUB float ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0040cc20: MOV EDX,dword ptr [EAX + 0x23c]
//   XREF to: 02d81cd8 (READ)
// 0040cc26: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0xc] (WRITE)
// 0040cc2a: TEST EDX,EDX
// 0040cc2c: JZ 0x0040cc5b
//   XREF to: 0040cc5b (CONDITIONAL_JUMP)
// 0040cc2e: CALL core_actor.cpp_generateRandomValue_FUN_0040cba0
//   XREF to: 0040cba0 (UNCONDITIONAL_CALL)
// 0040cc33: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x4] (WRITE)
// 0040cc37: FILD dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x4] (READ)
// 0040cc3b: FMUL float ptr [0x006142f4]
//   XREF to: 006142f4 (READ)
// 0040cc41: FSTP float ptr [ESP + 0x8]
//   Label: LAB_0040cc41
//   XREF to: Stack[-0x8] (WRITE)
// 0040cc45: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x8] (READ)
// 0040cc49: FMUL float ptr [ESP + 0x4]
//   XREF to: Stack[-0xc] (READ)
// 0040cc4d: FADD float ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0040cc51: FSTP float ptr [ESP]
//   XREF to: Stack[-0x10] (DATA)
// 0040cc54: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x10] (DATA)
// 0040cc57: ADD ESP,0x10
// 0040cc5a: RET
// 0040cc5b: CALL crt_stdlib.c_rand_FUN_005feb5c
//   Label: LAB_0040cc5b
//   XREF to: 005feb5c (UNCONDITIONAL_CALL)
// 0040cc60: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x4] (WRITE)
// 0040cc64: FILD dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x4] (READ)
// 0040cc68: FMUL float ptr [0x006142f0]
//   XREF to: 006142f0 (READ)
// 0040cc6e: JMP 0x0040cc41
//   XREF to: 0040cc41 (UNCONDITIONAL_JUMP)
