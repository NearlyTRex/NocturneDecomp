// Name: core_actor.cpp_serializeInteger_FUN_0040b7f0
// Address: 0040b7f0
// Address Range: [[0040b7f0, 0040b863]]
// Convention: __cdecl
// Signature: void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
// Cross-references:
//   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0 (0040c1c0) at 0040c22c [UNCONDITIONAL_CALL]
//   core_ammo.cpp_CAmmo_serialize_FUN_00410f40 (00410f40) at 00410f82 [UNCONDITIONAL_CALL]
//   core_ammobox.cpp_CAmmoBox_serialize_FUN_00411900 (00411900) at 00411942 [UNCONDITIONAL_CALL]
//   core_anvil.cpp_CAnvil_serialize_FUN_00411f50 (00411f50) at 00411fa6 [UNCONDITIONAL_CALL]
//   core_backgnd.cpp_CBackgroundActor_serialize_FUN_00412990 (00412990) at 004129be [UNCONDITIONAL_CALL]
//   core_baron.cpp_CBaron_serialize_FUN_00413a70 (00413a70) at 00413abf [UNCONDITIONAL_CALL]
//   core_barrier.cpp_CBarrier_serialize_FUN_00414340 (00414340) at 0041438f [UNCONDITIONAL_CALL]
//   core_batman.cpp_CBatman_serialize_FUN_00417580 (00417580) at 00417608 [UNCONDITIONAL_CALL]
//   core_biggs.cpp_CBiggs_load_FUN_00418ac0 (00418ac0) at 00418b11 [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_CBodyPart_load_FUN_00419880 (00419880) at 004198a0 [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_CBoneGuy_load_FUN_0041d270 (0041d270) at 0041d325 [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_CBoxActor_load_FUN_00422060 (00422060) at 00422203 [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_load_FUN_00422c80 (00422c80) at 00422d0d [UNCONDITIONAL_CALL]
//   core_bugs.cpp_CBugs_load_FUN_004254f0 (004254f0) at 004255c0 [UNCONDITIONAL_CALL]
//   core_chain.cpp_CChain_load_FUN_00430fe0 (00430fe0) at 00431036 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_serialize_FUN_004283a0 (004283a0) at 00428561 [UNCONDITIONAL_CALL]
//   core_conveyor.cpp_FUN_00442020 (00442020) at 0044208a [UNCONDITIONAL_CALL]
//   core_curtain.cpp_CCurtain_load_FUN_0044b3e0 (0044b3e0) at 0044b425 [UNCONDITIONAL_CALL]
//   core_dest.cpp_CActorDestination_load_FUN_0046fdb0 (0046fdb0) at 0046fe5d [UNCONDITIONAL_CALL]
//   core_door.cpp_CDoor_serialize_FUN_00480aa0 (00480aa0) at 00480ca1 [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_CDraculaBride_load_FUN_00485dd0 (00485dd0) at 00485fe2 [UNCONDITIONAL_CALL]
//   core_drip.cpp_CDrip_load_FUN_0048e170 (0048e170) at 0048e1a2 [UNCONDITIONAL_CALL]
//   core_emitter.cpp_CEmitter_load_FUN_004a8b30 (004a8b30) at 004a8bc7 [UNCONDITIONAL_CALL]
//   core_enemy.cpp_CEnemy_serialize_FUN_004a9660 (004a9660) at 004a96c5 [UNCONDITIONAL_CALL]
//   core_flame.cpp_CFlame_load_FUN_004cac60 (004cac60) at 004cace0 [UNCONDITIONAL_CALL]
//   core_flamecan.cpp_CFlameCan_load_FUN_004cb620 (004cb620) at 004cb64e [UNCONDITIONAL_CALL]
//   core_flies.cpp_FUN_004cbe60 (004cbe60) at 004cbeb8 [UNCONDITIONAL_CALL]
//   core_frankgen.cpp_CFrankenstienMachine_load_FUN_004d19e0 (004d19e0) at 004d19fa [UNCONDITIONAL_CALL]
//   core_gargoyle.cpp_CGargoyle_load_FUN_004e5470 (004e5470) at 004e54e3 [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_CGhoul_load_FUN_004e81c0 (004e81c0) at 004e82a7 [UNCONDITIONAL_CALL]
//   core_glass.cpp_CGlass_serialize_FUN_004ea090 (004ea090) at 004ea0ea [UNCONDITIONAL_CALL]
//   core_grave.cpp_CGrave_load_FUN_004ee7f0 (004ee7f0) at 004ee841 [UNCONDITIONAL_CALL]
//   core_health.cpp_CHealthItem_serialize_FUN_004f1f20 (004f1f20) at 004f1f57 [UNCONDITIONAL_CALL]
//   core_hero.cpp_CHeroPlaceholder_serialize_FUN_004f3ef0 (004f3ef0) at 004f3f0c [UNCONDITIONAL_CALL]
//   core_hero.cpp_CHero_serialize_FUN_004f2610 (004f2610) at 004f2705 [UNCONDITIONAL_CALL]
//   core_hostage.cpp_CHostage_load_FUN_004f6170 (004f6170) at 004f62c9 [UNCONDITIONAL_CALL]
//   core_keyactor.cpp_CKeyActor_serialize_FUN_00501880 (00501880) at 005018b7 [UNCONDITIONAL_CALL]
//   core_ladder.cpp_CLadder_load_FUN_005029c0 (005029c0) at 00502a2c [UNCONDITIONAL_CALL]
//   core_lever.cpp_CLever_load_FUN_00504e80 (00504e80) at 00505002 [UNCONDITIONAL_CALL]
//   core_litecone.cpp_FUN_00506d00 (00506d00) at 00506d4f [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_CMansionPuzzleCircle_load_FUN_0050adf0 (0050adf0) at 0050ae65 [UNCONDITIONAL_CALL]
//   core_marquee.cpp_CMarquee_load_FUN_0050c2f0 (0050c2f0) at 0050c346 [UNCONDITIONAL_CALL]
//   core_melee.cpp_CMelee_load_FUN_0050e920 (0050e920) at 0050e9f0 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_CMimic_load_FUN_00520930 (00520930) at 00520987 [UNCONDITIONAL_CALL]
//   core_mobster.cpp_CMobster_load_FUN_00527230 (00527230) at 00527302 [UNCONDITIONAL_CALL]
//   core_moloch.cpp_CMoloch_load_FUN_00529880 (00529880) at 005298c2 [UNCONDITIONAL_CALL]
//   core_npc.cpp_CNPC_serialize_FUN_00544ba0 (00544ba0) at 00544bfa [UNCONDITIONAL_CALL]
//   core_pendulum.cpp_CPendulum_load_FUN_0054a3b0 (0054a3b0) at 0054a542 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_CPlatform_load_FUN_0054dbc0 (0054dbc0) at 0054dd80 [UNCONDITIONAL_CALL]
//   core_simbox.cpp_CSimBox_FUN_005891b0 (005891b0) at 0058924f [UNCONDITIONAL_CALL]
//   core_spike.cpp_CSpike_load_FUN_005b87f0 (005b87f0) at 005b8846 [UNCONDITIONAL_CALL]
//   core_stairs.cpp_FUN_005ba4f0 (005ba4f0) at 005ba546 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_serialize_FUN_005c2fe0 (005c2fe0) at 005c310a [UNCONDITIONAL_CALL]
//   core_trigger.cpp_CTrigger_serialize_FUN_005e0690 (005e0690) at 005e0869 [UNCONDITIONAL_CALL]
//   core_turret.cpp_CTurret_serialize_FUN_005e2c40 (005e2c40) at 005e2d43 [UNCONDITIONAL_CALL]
//   core_tvbat.cpp_CTVBat_serialize_FUN_005e40c0 (005e40c0) at 005e419b [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_serialize_FUN_005e6f50 (005e6f50) at 005e7006 [UNCONDITIONAL_CALL]
//   core_vehicle.cpp_CVehicle_serialize_FUN_005e8720 (005e8720) at 005e8758 [UNCONDITIONAL_CALL]
//   core_vessel.cpp_CCryptVessel_serialize_FUN_005e9a80 (005e9a80) at 005e9b12 [UNCONDITIONAL_CALL]
//   core_wateract.cpp_CWaterActor_serialize_FUN_005eb510 (005eb510) at 005eb6e4 [UNCONDITIONAL_CALL]
//   core_waypoint.cpp_CWayPoint_FUN_005ec280 (005ec280) at 005ec2da [UNCONDITIONAL_CALL]
//   core_weapon.cpp_CWeapon_serialize_FUN_005ee250 (005ee250) at 005ee2c3 [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_CWerewolf_serialize_FUN_005f1980 (005f1980) at 005f19f0 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_serialize_FUN_005fbfd0 (005fbfd0) at 005fc0ee [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_d_00613f28
//   TerminatedCString s_s_d_00613f2b
//   string s_Integer_value_0066e148
//   char[104] g_PropertyNamePrefix
//   FILE* g_ActorDataFile
//   int g_ActorReadingMode
// Function calls:
//   core_actor.cpp_handleActorPropertyParseError_FUN_0040b210
//   core_actor.cpp_serializeDescription_FUN_0040b290
//   crt_stdio.c_fprintf_FUN_005fe6d0
//   crt_stdio.c_fscanf_FUN_005fe7c0

#include "nocturne.h"

void __cdecl core_actor_cpp_serializeInteger_FUN_0040b7f0(int *int_ptr,char *property_name)

{
  int iVar1;
  char *in_stack_0000000c;
  
  if (g_ActorReadingMode == 1) {
    iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0(g_ActorDataFile,"%d",int_ptr);
    if (iVar1 != 1) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b210
                ("Integer value",property_name);
    }
  }
  else {
    crt_stdio_c_fprintf_FUN_005fe6d0(g_ActorDataFile,"%s%d",g_PropertyNamePrefix,*int_ptr);
  }
  core_actor_cpp_serializeDescription_FUN_0040b290("Integer value",in_stack_0000000c);
  return;
}


// Assembly code:
// 0040b7f0: PUSH ESI
//   Label: core_actor.cpp_serializeInteger_FUN_0040b7f0
// 0040b7f1: PUSH EDI
// 0040b7f2: PUSH EBP
// 0040b7f3: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0040b7f7: CMP dword ptr [0x00822038],0x1
//   XREF to: 00822038 (READ)
// 0040b7fe: JNZ 0x0040b844
//   XREF to: 0040b844 (CONDITIONAL_JUMP)
// 0040b800: PUSH EAX
// 0040b801: PUSH 0x613f28
//   XREF to: 00613f28 (DATA)
// 0040b806: MOV ESI,dword ptr [0x00822034]
//   XREF to: 00822034 (READ)
// 0040b80c: PUSH ESI
// 0040b80d: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0040b812: ADD ESP,0xc
// 0040b815: CMP EAX,0x1
// 0040b818: JNZ 0x0040b830
//   XREF to: 0040b830 (CONDITIONAL_JUMP)
// 0040b81a: MOV EBP,dword ptr [ESP + 0x14]
//   Label: LAB_0040b81a
//   XREF to: Stack[0x8] (READ)
// 0040b81e: PUSH EBP
// 0040b81f: PUSH 0x66e148
//   XREF to: 0066e148 (DATA)
// 0040b824: CALL core_actor.cpp_serializeDescription_FUN_0040b290
//   XREF to: 0040b290 (UNCONDITIONAL_CALL)
// 0040b829: ADD ESP,0x8
// 0040b82c: POP EBP
// 0040b82d: POP EDI
// 0040b82e: POP ESI
// 0040b82f: RET
// 0040b830: MOV EDI,dword ptr [ESP + 0x14]
//   Label: LAB_0040b830
//   XREF to: Stack[0x8] (READ)
// 0040b834: PUSH EDI
// 0040b835: PUSH 0x66e148
//   XREF to: 0066e148 (DATA)
// 0040b83a: CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b210
//   XREF to: 0040b210 (UNCONDITIONAL_CALL)
// 0040b83f: ADD ESP,0x8
// 0040b842: JMP 0x0040b81a
//   XREF to: 0040b81a (UNCONDITIONAL_JUMP)
// 0040b844: PUSH EBX
//   Label: LAB_0040b844
// 0040b845: MOV ECX,dword ptr [EAX]
// 0040b847: PUSH ECX
// 0040b848: PUSH 0x66e178
//   XREF to: 0066e178 (DATA)
// 0040b84d: PUSH 0x613f2b
//   XREF to: 00613f2b (DATA)
// 0040b852: MOV EBX,dword ptr [0x00822034]
//   XREF to: 00822034 (READ)
// 0040b858: PUSH EBX
// 0040b859: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0040b85e: ADD ESP,0x10
// 0040b861: POP EBX
// 0040b862: JMP 0x0040b81a
//   XREF to: 0040b81a (UNCONDITIONAL_JUMP)
