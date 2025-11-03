// Name: core_actor.cpp_randomChance_FUN_0040cd10
// Address: 0040cd10
// Address Range: [[0040cd10, 0040cd61]]
// Convention: __cdecl
// Signature: int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
// Cross-references:
//   core_batcreat.cpp_CBatCreature_process_FUN_00415470 (00415470) at 0041586b [UNCONDITIONAL_CALL]
//   core_batcreat.cpp_FUN_00415dd0 (00415dd0) at 00415e7a [UNCONDITIONAL_CALL]
//   core_batman.cpp_CBatman_process_FUN_00416870 (00416870) at 00417011 [UNCONDITIONAL_CALL]
//   core_batman.cpp_FUN_004167f0 (004167f0) at 004167f5 [UNCONDITIONAL_CALL]
//   core_batman.cpp_FUN_00417660 (00417660) at 00417945 [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_FUN_0041b1b0 (0041b1b0) at 0041b1b5 [UNCONDITIONAL_CALL]
//   core_bride.cpp_FUN_00423a30 (00423a30) at 00423db7 [UNCONDITIONAL_CALL]
//   core_bride.cpp_FUN_00424600 (00424600) at 0042469f [UNCONDITIONAL_CALL]
//   core_bride.cpp_FUN_00424830 (00424830) at 004249cb [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042b670 (0042b670) at 0042b6bd [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042b760 (0042b760) at 0042b77f [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042b810 (0042b810) at 0042b82f [UNCONDITIONAL_CALL]
//   core_cow.cpp_FUN_004448c0 (004448c0) at 00444946 [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_00484410 (00484410) at 00484974 [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_00486070 (00486070) at 0048615e [UNCONDITIONAL_CALL]
//   core_dynamite.cpp_FUN_0049cfb0 (0049cfb0) at 0049d00f [UNCONDITIONAL_CALL]
//   core_event.cpp_CEventList_FUN_004ae140 (004ae140) at 004b00ea [UNCONDITIONAL_CALL]
//   core_fire.cpp_CExplosion_FUN_004c3970 (004c3970) at 004c39c8 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CFireEffect_FUN_004c76a0 (004c76a0) at 004c78e1 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CGunFlame_process_FUN_004c4f60 (004c4f60) at 004c5027 [UNCONDITIONAL_CALL]
//   core_gargoyle.cpp_CGargoyle_unk4_FUN_004e5530 (004e5530) at 004e55ca [UNCONDITIONAL_CALL]
//   core_gargoyle.cpp_CGargoyle_unk6_FUN_004e4a00 (004e4a00) at 004e4fe9 [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_CGhoul_FUN_004e6600 (004e6600) at 004e7bdb [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_FUN_004e8520 (004e8520) at 004e85ca [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_FUN_004e87e0 (004e87e0) at 004e8a80 [UNCONDITIONAL_CALL]
//   core_glass.cpp_CGlass_createShatterParticles_FUN_004ea1c0 (004ea1c0) at 004ea229 [UNCONDITIONAL_CALL]
//   core_haystack.cpp_FUN_004f1970 (004f1970) at 004f1a70 [UNCONDITIONAL_CALL]
//   core_hostage.cpp_RelatedToRescuedTownsfolk_FUN_004f4bd0 (004f4bd0) at 004f4ff4 [UNCONDITIONAL_CALL]
//   core_imp.cpp_FUN_004f9c30 (004f9c30) at 004fa34c [UNCONDITIONAL_CALL]
//   core_imp.cpp_FUN_004fab60 (004fab60) at 004fac0a [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_buildActiveSetActorList_FUN_00524120 (00524120) at 0052419a [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00525840 (00525840) at 00525f77 [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00527380 (00527380) at 00527468 [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00527740 (00527740) at 005277d5 [UNCONDITIONAL_CALL]
//   core_sentinel.cpp_FUN_00568030 (00568030) at 00568900 [UNCONDITIONAL_CALL]
//   core_smiley.cpp_FUN_005a32a0 (005a32a0) at 005a3369 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c48b0 (005c48b0) at 005c4bc9 [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_AnotherVoicuSummonWavCall_FUN_005e7390 (005e7390) at 005e73ec [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_process_FUN_005e5970 (005e5970) at 005e5bd5 [UNCONDITIONAL_CALL]
//   core_vehicle.cpp_CVehicle_process_FUN_005e7e80 (005e7e80) at 005e848c [UNCONDITIONAL_CALL]
//   core_weather.cpp_CWeather_SomethingWithLightingThunder_FUN_005eeaf0 (005eeaf0) at 005eedad [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_CWerewolf_process_FUN_005efde0 (005efde0) at 005f08fa [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_FUN_005fc220 (005fc220) at 005fc2ca [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_process_FUN_005f9470 (005f9470) at 005f9d4c [UNCONDITIONAL_CALL]
// Globals:
//   int INT_00614308 = 0x38000100
//   int INT_0061430c = 0x33800001
//   CGame* g_CGamePtr = 02d81a9c
//   CGame g_CGameInstance
//   undefined4 DAT_02d81cd8
// Function calls:
//   core_actor.cpp_generateRandomValue_FUN_0040cba0
//   crt_stdlib.c_rand_FUN_005feb5c

#include "nocturne.h"

int __cdecl core_actor_cpp_randomChance_FUN_0040cd10(float probability_threshold)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  float in_stack_00000008;
  
  if (g_CGamePtr->is_processing == 0) {
    iVar3 = crt_stdlib_c_rand_FUN_005feb5c();
    fVar1 = (float)iVar3 * (float)INT_00614308;
  }
  else {
    uVar2 = core_actor_cpp_generateRandomValue_FUN_0040cba0();
    fVar1 = (float)(int)uVar2 * (float)INT_0061430c;
  }
  return (uint)(fVar1 < in_stack_00000008);
}


// Assembly code:
// 0040cd10: SUB ESP,0x8
//   Label: core_actor.cpp_randomChance_FUN_0040cd10
// 0040cd13: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 0040cd18: CMP dword ptr [EAX + 0x23c],0x0
//   XREF to: 02d81cd8 (READ)
// 0040cd1f: JZ 0x0040cd4d
//   XREF to: 0040cd4d (CONDITIONAL_JUMP)
// 0040cd21: CALL core_actor.cpp_generateRandomValue_FUN_0040cba0
//   XREF to: 0040cba0 (UNCONDITIONAL_CALL)
// 0040cd26: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x4] (WRITE)
// 0040cd2a: FILD dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x4] (READ)
// 0040cd2e: FMUL float ptr [0x0061430c]
//   XREF to: 0061430c (READ)
// 0040cd34: FSTP float ptr [ESP]
//   Label: LAB_0040cd34
//   XREF to: Stack[-0x8] (DATA)
// 0040cd37: FLD float ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 0040cd3a: FCOMP float ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0040cd3e: FNSTSW AX
// 0040cd40: SAHF
// 0040cd41: SETC AL
// 0040cd44: AND EAX,0xff
// 0040cd49: ADD ESP,0x8
// 0040cd4c: RET
// 0040cd4d: CALL crt_stdlib.c_rand_FUN_005feb5c
//   Label: LAB_0040cd4d
//   XREF to: 005feb5c (UNCONDITIONAL_CALL)
// 0040cd52: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x4] (WRITE)
// 0040cd56: FILD dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x4] (READ)
// 0040cd5a: FMUL float ptr [0x00614308]
//   XREF to: 00614308 (READ)
// 0040cd60: JMP 0x0040cd34
//   XREF to: 0040cd34 (UNCONDITIONAL_JUMP)
