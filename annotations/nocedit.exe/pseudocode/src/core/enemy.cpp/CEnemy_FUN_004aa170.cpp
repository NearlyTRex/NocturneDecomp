// Name: core_enemy.cpp_CEnemy_FUN_004aa170
// Address: 004aa170
// Address Range: [[004aa170, 004aa24f]]
// Convention: __cdecl
// Signature: int core_enemy.cpp_CEnemy_FUN_004aa170(CEnemy * this_ptr)
// Cross-references:
//   core_armour.cpp_CArmour_SnagRelatedMultiple_FUN_00412470 (00412470) at 0041247d [UNCONDITIONAL_CALL]
//   core_batcreat.cpp_CBatCreature_FUN_004162b0 (004162b0) at 004162bc [UNCONDITIONAL_CALL]
//   core_batman.cpp_CBatman_FUN_00417cd0 (00417cd0) at 00417cdd [UNCONDITIONAL_CALL]
//   core_beast.cpp_FUN_00418420 (00418420) at 0041842c [UNCONDITIONAL_CALL]
//   core_biggs.cpp_snag_FUN_00418c80 (00418c80) at 00418c8d [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_SnagRelated_ModelStateDeath_FUN_0041d990 (0041d990) at 0041d99d [UNCONDITIONAL_CALL]
//   core_bride.cpp_FUN_00424b10 (00424b10) at 00424b1b [UNCONDITIONAL_CALL]
//   core_bugs.cpp_CBugs_FUN_004277e0 (004277e0) at 004277f0 [UNCONDITIONAL_CALL]
//   core_cow.cpp_FUN_00444c50 (00444c50) at 00444c5c [UNCONDITIONAL_CALL]
//   core_dog.cpp_CZombieDog_getPropertyList_FUN_0047f920 (0047f920) at 0047f92c [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_00486c90 (00486c90) at 00486c9d [UNCONDITIONAL_CALL]
//   core_drone.cpp_FUN_0048f520 (0048f520) at 0048f52c [UNCONDITIONAL_CALL]
//   core_gargoyle.cpp_CGargoyle_getPropertyList_FUN_004e5af0 (004e5af0) at 004e5afd [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_FUN_004e8dc0 (004e8dc0) at 004e8dcd [UNCONDITIONAL_CALL]
//   core_hotdemon.cpp_FUN_004f79d0 (004f79d0) at 004f79dc [UNCONDITIONAL_CALL]
//   core_imp.cpp_FUN_004fb110 (004fb110) at 004fb11c [UNCONDITIONAL_CALL]
//   core_larva.cpp_FUN_00503c50 (00503c50) at 00503c5c [UNCONDITIONAL_CALL]
//   core_mimic.cpp_FUN_00520d10 (00520d10) at 00520d1c [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00527b70 (00527b70) at 00527b7d [UNCONDITIONAL_CALL]
//   core_sentinel.cpp_FUN_00568f10 (00568f10) at 00568f1c [UNCONDITIONAL_CALL]
//   core_smiley.cpp_FUN_005a3810 (005a3810) at 005a381c [UNCONDITIONAL_CALL]
//   core_succubus.cpp_CSuccubus_FUN_005c77b0 (005c77b0) at 005c77bc [UNCONDITIONAL_CALL]
//   core_tentacle.cpp_CTentacle_FUN_005dbc60 (005dbc60) at 005dbc6d [UNCONDITIONAL_CALL]
//   core_tvbat.cpp_CTVBat_FUN_005e51a0 (005e51a0) at 005e51ac [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_FUN_005e7650 (005e7650) at 005e765c [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_CWerewolf_FUN_005f20d0 (005f20d0) at 005f20dd [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_FUN_005fca80 (005fca80) at 005fca8d [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Speed_006243e2
//   TerminatedCString s_Randomize_me_006243e8
//   TerminatedCString s_Size_scale_006243f5
//   TerminatedCString s_hitPoints_00624400
//   TerminatedCString s_patrolNamePattern_0062440a
//   TerminatedCString s_Guard_distance_0062441c
//   TerminatedCString s_Victim_height_0062442b
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e160
//   core_actor.cpp_CActorPropertyList_FUN_0040e1a0
//   core_actor.cpp_CActorPropertyList_FUN_0040e290
//   core_actor.cpp_CActorPropertyList_FUN_0040e330
//   core_charactr.cpp_CCharacter_FUN_0042f730

#include "nocturne.h"

int __cdecl core_enemy_cpp_CEnemy_FUN_004aa170(CEnemy *this_ptr)

{
  int extraout_EAX;
  int extraout_EAX_00;
  CActorPropertyList *in_stack_00000008;
  float *pfStack0000000c;
  undefined4 uStack00000010;
  
  core_charactr_cpp_CCharacter_FUN_0042f730(&this_ptr->base_character);
  core_actor_cpp_CActorPropertyList_FUN_0040e1a0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  *(undefined4 *)(extraout_EAX + 0x58) = 1;
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e290(in_stack_00000008);
  pfStack0000000c = (float *)0x0;
  core_actor_cpp_CActorPropertyList_FUN_0040e1a0(in_stack_00000008);
  uStack00000010 = 0;
  pfStack0000000c = &this_ptr->victim_height;
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  return extraout_EAX_00;
}


// Assembly code:
// 004aa170: PUSH EBX
//   Label: core_enemy.cpp_CEnemy_FUN_004aa170
// 004aa171: PUSH ESI
// 004aa172: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004aa176: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004aa17a: PUSH EBX
// 004aa17b: PUSH ESI
// 004aa17c: CALL core_charactr.cpp_CCharacter_FUN_0042f730
//   XREF to: 0042f730 (UNCONDITIONAL_CALL)
// 004aa181: ADD ESP,0x8
// 004aa184: PUSH 0x0
// 004aa186: PUSH 0x41a00000
// 004aa18b: LEA EAX,[ESI + 0xbe24]
// 004aa191: PUSH 0x3dcccccd
// 004aa196: PUSH EAX
// 004aa197: PUSH 0x6243e2
//   XREF to: 006243e2 (DATA)
// 004aa19c: PUSH EBX
// 004aa19d: CALL core_actor.cpp_CActorPropertyList_FUN_0040e1a0
//   XREF to: 0040e1a0 (UNCONDITIONAL_CALL)
// 004aa1a2: ADD ESP,0x18
// 004aa1a5: LEA EAX,[ESI + 0xbe2c]
// 004aa1ab: PUSH EAX
// 004aa1ac: PUSH 0x6243e8
//   XREF to: 006243e8 (DATA)
// 004aa1b1: PUSH EBX
// 004aa1b2: CALL core_actor.cpp_CActorPropertyList_FUN_0040e330
//   XREF to: 0040e330 (UNCONDITIONAL_CALL)
// 004aa1b7: ADD ESP,0xc
// 004aa1ba: PUSH 0x0
// 004aa1bc: LEA EAX,[ESI + 0x261c]
// 004aa1c2: PUSH EAX
// 004aa1c3: PUSH 0x6243f5
//   XREF to: 006243f5 (DATA)
// 004aa1c8: PUSH EBX
// 004aa1c9: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 004aa1ce: ADD ESP,0x10
// 004aa1d1: PUSH 0x0
// 004aa1d3: MOV dword ptr [EAX + 0x58],0x1
// 004aa1da: LEA EAX,[ESI + 0x243c]
// 004aa1e0: PUSH EAX
// 004aa1e1: PUSH 0x624400
//   XREF to: 00624400 (DATA)
// 004aa1e6: PUSH EBX
// 004aa1e7: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 004aa1ec: ADD ESP,0x10
// 004aa1ef: PUSH 0x0
// 004aa1f1: PUSH 0x64
// 004aa1f3: LEA EAX,[ESI + 0xbe48]
// 004aa1f9: PUSH EAX
// 004aa1fa: PUSH 0x62440a
//   XREF to: 0062440a (DATA)
// 004aa1ff: PUSH EBX
// 004aa200: CALL core_actor.cpp_CActorPropertyList_FUN_0040e290
//   XREF to: 0040e290 (UNCONDITIONAL_CALL)
// 004aa205: ADD ESP,0x14
// 004aa208: PUSH 0x0
// 004aa20a: PUSH 0x43c80000
// 004aa20f: LEA EAX,[ESI + 0xbe34]
// 004aa215: PUSH 0x3f800000
// 004aa21a: PUSH EAX
// 004aa21b: PUSH 0x62441c
//   XREF to: 0062441c (DATA)
// 004aa220: PUSH EBX
// 004aa221: CALL core_actor.cpp_CActorPropertyList_FUN_0040e1a0
//   XREF to: 0040e1a0 (UNCONDITIONAL_CALL)
// 004aa226: ADD ESP,0x18
// 004aa229: PUSH 0x0
// 004aa22b: ADD ESI,0xbeb0
// 004aa231: PUSH ESI
// 004aa232: PUSH 0x62442b
//   XREF to: 0062442b (DATA)
// 004aa237: PUSH EBX
// 004aa238: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 004aa23d: ADD ESP,0x10
// 004aa240: POP ESI
// 004aa241: POP EBX
// 004aa242: LEA EAX,[EAX]
// 004aa248: LEA EDX,[EDX]
// 004aa24e: MOV EAX,EAX
