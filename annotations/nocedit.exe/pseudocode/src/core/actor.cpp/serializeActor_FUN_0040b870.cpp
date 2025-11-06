// Name: core_actor.cpp_serializeActor_FUN_0040b870
// Address: 0040b870
// Address Range: [[0040b870, 0040b8ee]]
// Convention: __cdecl
// Signature: void core_actor.cpp_serializeActor_FUN_0040b870(CDemonActor * actor_ptr, char * property_name)
// Cross-references:
//   core_ammobox.cpp_CAmmoBox_serialize_FUN_00411900 (00411900) at 004119ae [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_CBodyPart_serialize_FUN_00419880 (00419880) at 00419a19 [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_CBoneGuy_load_FUN_0041d270 (0041d270) at 0041d420 [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_CBoxActor_load_FUN_00422060 (00422060) at 00422152 [UNCONDITIONAL_CALL]
//   core_chain.cpp_CChain_load_FUN_00430fe0 (00430fe0) at 00431022 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_serialize_FUN_004283a0 (004283a0) at 00428482 [UNCONDITIONAL_CALL]
//   core_crate.cpp_CCrate_load_FUN_00448910 (00448910) at 0044894b [UNCONDITIONAL_CALL]
//   core_dest.cpp_CActorDestination_load_FUN_0046fdb0 (0046fdb0) at 0046fdfd [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_CDraculaBride_load_FUN_00485dd0 (00485dd0) at 00485f7f [UNCONDITIONAL_CALL]
//   core_emitter.cpp_CEmitter_load_FUN_004a8b30 (004a8b30) at 004a8caa [UNCONDITIONAL_CALL]
//   core_enemy.cpp_CEnemy_serialize_FUN_004a9660 (004a9660) at 004a97a7 [UNCONDITIONAL_CALL]
//   core_filmreel.cpp_serialize_FUN_004bede0 (004bede0) at 004bee07 [UNCONDITIONAL_CALL]
//   core_flies.cpp_FUN_004cbe60 (004cbe60) at 004cbea4 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_CGabriella_load_FUN_004d6090 (004d6090) at 004d60e2 [UNCONDITIONAL_CALL]
//   core_gargoyle.cpp_CGargoyle_load_FUN_004e5470 (004e5470) at 004e550b [UNCONDITIONAL_CALL]
//   core_hero.cpp_CHero_serialize_FUN_004f2610 (004f2610) at 004f2722 [UNCONDITIONAL_CALL]
//   core_hostage.cpp_CHostage_load_FUN_004f6170 (004f6170) at 004f6327 [UNCONDITIONAL_CALL]
//   core_ladder.cpp_CLadder_load_FUN_005029c0 (005029c0) at 00502a02 [UNCONDITIONAL_CALL]
//   core_lever.cpp_CLever_load_FUN_00504e80 (00504e80) at 00504f7a [UNCONDITIONAL_CALL]
//   core_mimic.cpp_CMimic_load_FUN_00520930 (00520930) at 0052099b [UNCONDITIONAL_CALL]
//   core_mobster.cpp_CMobster_load_FUN_00527230 (00527230) at 005272ee [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_CPlatform_load_FUN_0054dbc0 (0054dbc0) at 0054df38 [UNCONDITIONAL_CALL]
//   core_stone.cpp_FUN_005bad40 (005bad40) at 005bad5c [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_serialize_FUN_005c2fe0 (005c2fe0) at 005c3063 [UNCONDITIONAL_CALL]
//   core_teleport.cpp_CTeleport_serialize_FUN_005dab30 (005dab30) at 005dab58 [UNCONDITIONAL_CALL]
//   core_tentacle.cpp_CTentacle_serialize_FUN_005db880 (005db880) at 005db8dc [UNCONDITIONAL_CALL]
//   core_trap.cpp_CTrap_serialize_FUN_005de9c0 (005de9c0) at 005de9ee [UNCONDITIONAL_CALL]
//   core_turret.cpp_CTurret_serialize_FUN_005e2c40 (005e2c40) at 005e2cfa [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_serialize_FUN_005e6f50 (005e6f50) at 005e6fa6 [UNCONDITIONAL_CALL]
//   core_vehicle.cpp_CVehicle_serialize_FUN_005e8720 (005e8720) at 005e8885 [UNCONDITIONAL_CALL]
//   core_vessel.cpp_CCryptVessel_serialize_FUN_005e9a80 (005e9a80) at 005e9aae [UNCONDITIONAL_CALL]
//   core_waypoint.cpp_CWayPoint_FUN_005ec280 (005ec280) at 005ec2c2 [UNCONDITIONAL_CALL]
//   core_weapon.cpp_CWeapon_serialize_FUN_005ee250 (005ee250) at 005ee303 [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_CWerewolf_serialize_FUN_005f1980 (005f1980) at 005f1a0d [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_serialize_FUN_005fbfd0 (005fbfd0) at 005fc0ad [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_s_00613f30
//   char[104] g_PropertyNamePrefix
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   FILE* g_ActorDataFile
//   int g_ActorReadingMode
//   CDemonActor* g_CurrentActorBeingProcessed
//   CDemonMission g_CDemonMissionInstance
// Function calls:
//   core_mission.cpp_CDemonMission_loadActor_FUN_00523990
//   core_mission.cpp_CDemonMission_saveActor_FUN_00523af0
//   crt_stdio.c_fprintf_FUN_005fe6d0

#include "nocturne.h"

void __cdecl core_actor_cpp_serializeActor_FUN_0040b870(CDemonActor *actor_ptr,char *property_name)

{
  CDemonActor *pCVar1;
  char *in_stack_0000000c;
  
  if (g_ActorReadingMode == 1) {
    pCVar1 = core_mission_cpp_CDemonMission_loadActor_FUN_00523990
                       (g_CDemonMissionPtr,g_ActorDataFile,g_CurrentActorBeingProcessed,
                        property_name);
    *(CDemonActor **)property_name = pCVar1;
    return;
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(g_ActorDataFile,"%s",g_PropertyNamePrefix);
  core_mission_cpp_CDemonMission_saveActor_FUN_00523af0
            (g_CDemonMissionPtr,*(CDemonActor **)property_name,g_ActorDataFile,
             g_CurrentActorBeingProcessed,in_stack_0000000c);
  return;
}


// Assembly code:
// 0040b870: PUSH EBX
//   Label: core_actor.cpp_serializeActor_FUN_0040b870
// 0040b871: PUSH ESI
// 0040b872: PUSH EBP
// 0040b873: CMP dword ptr [0x00822038],0x1
//   XREF to: 00822038 (READ)
// 0040b87a: JNZ 0x0040b8a8
//   XREF to: 0040b8a8 (CONDITIONAL_JUMP)
// 0040b87c: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0040b880: PUSH EDX
// 0040b881: MOV ECX,dword ptr [0x0082203c]
//   XREF to: 0082203c (READ)
// 0040b887: PUSH ECX
// 0040b888: MOV EBX,dword ptr [0x00822034]
//   XREF to: 00822034 (READ)
// 0040b88e: PUSH EBX
// 0040b88f: MOV ESI,dword ptr [0x0067d550]
//   XREF to: 0067d550 (READ)
// 0040b895: PUSH ESI
//   XREF to: 02f33740 (DATA)
// 0040b896: CALL core_mission.cpp_CDemonMission_loadActor_FUN_00523990
//   XREF to: 00523990 (UNCONDITIONAL_CALL)
// 0040b89b: ADD ESP,0x10
// 0040b89e: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0040b8a2: MOV dword ptr [EDX],EAX
// 0040b8a4: POP EBP
// 0040b8a5: POP ESI
// 0040b8a6: POP EBX
// 0040b8a7: RET
// 0040b8a8: PUSH EDI
//   Label: LAB_0040b8a8
// 0040b8a9: PUSH 0x66e178
//   XREF to: 0066e178 (DATA)
// 0040b8ae: PUSH 0x613f30
//   XREF to: 00613f30 (DATA)
// 0040b8b3: MOV ECX,dword ptr [0x00822034]
//   XREF to: 00822034 (READ)
// 0040b8b9: PUSH ECX
// 0040b8ba: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0040b8bf: ADD ESP,0xc
// 0040b8c2: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0040b8c6: PUSH EBX
// 0040b8c7: MOV ESI,dword ptr [0x0082203c]
//   XREF to: 0082203c (READ)
// 0040b8cd: PUSH ESI
// 0040b8ce: MOV EDI,dword ptr [0x00822034]
//   XREF to: 00822034 (READ)
// 0040b8d4: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0040b8d8: PUSH EDI
// 0040b8d9: MOV EBP,dword ptr [EAX]
// 0040b8db: PUSH EBP
// 0040b8dc: MOV EAX,[0x0067d550]
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 0040b8e1: PUSH EAX
//   XREF to: 02f33740 (DATA)
// 0040b8e2: CALL core_mission.cpp_CDemonMission_saveActor_FUN_00523af0
//   XREF to: 00523af0 (UNCONDITIONAL_CALL)
// 0040b8e7: ADD ESP,0x14
// 0040b8ea: POP EDI
// 0040b8eb: POP EBP
// 0040b8ec: POP ESI
// 0040b8ed: POP EBX
// 0040b8ee: RET
