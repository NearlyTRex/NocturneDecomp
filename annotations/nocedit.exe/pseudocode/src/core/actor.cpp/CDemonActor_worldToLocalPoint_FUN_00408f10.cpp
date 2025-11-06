// Name: core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
// Address: 00408f10
// Address Range: [[00408f10, 00408f54]]
// Convention: __cdecl
// Signature: CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
// Cross-references:
//   core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a210 (0040a210) at 0040a645 [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_rayIntersect_FUN_00409470 (00409470) at 00409558 [UNCONDITIONAL_CALL]
//   core_baron.cpp_FUN_004136b0 (004136b0) at 004136ed [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_FUN_00422390 (00422390) at 004223ab [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_FUN_00422590 (00422590) at 004225b1 [UNCONDITIONAL_CALL]
//   core_chain.cpp_FUN_00430eb0 (00430eb0) at 00430fa4 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_00428d80 (00428d80) at 00428d93 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_00429b40 (00429b40) at 00429c84 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042c110 (0042c110) at 0042c123 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042c180 (0042c180) at 0042c1ae [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042ca70 (0042ca70) at 0042cbba [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042ede0 (0042ede0) at 0042ee7f [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0 (004286e0) at 0042873c [UNCONDITIONAL_CALL]
//   core_colonel.cpp_FUN_0043fa00 (0043fa00) at 0043fb00 [UNCONDITIONAL_CALL]
//   core_crossbow.cpp_CCrossbow_FUN_00448f20 (00448f20) at 0044942d [UNCONDITIONAL_CALL]
//   core_door.cpp_CDoor_getMoveType_FUN_00481070 (00481070) at 0048108b [UNCONDITIONAL_CALL]
//   core_door.cpp_CDoor_getOpenStandPos_FUN_00480e20 (00480e20) at 00480e7e [UNCONDITIONAL_CALL]
//   core_door.cpp_CDoor_renderOpaque_FUN_004807d0 (004807d0) at 00480989 [UNCONDITIONAL_CALL]
//   core_emitter.cpp_FUN_004a8070 (004a8070) at 004a8501 [UNCONDITIONAL_CALL]
//   core_enemy.cpp_FUN_004a9a50 (004a9a50) at 004a9aa8 [UNCONDITIONAL_CALL]
//   core_event.cpp_CEventList_FUN_004ae140 (004ae140) at 004af8cb [UNCONDITIONAL_CALL]
//   core_fire.cpp_CFireEffect_FUN_004c8230 (004c8230) at 004c8426 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CGunFlame_FUN_004c4c00 (004c4c00) at 004c4d07 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d2ea0 (004d2ea0) at 004d3941 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d4890 (004d4890) at 004d4b31 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d5c60 (004d5c60) at 004d5dc9 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d6260 (004d6260) at 004d62ef [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d6540 (004d6540) at 004d6871 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_PickupSomething_FUN_004d5870 (004d5870) at 004d5aa7 [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_CGhoul_FUN_004e6600 (004e6600) at 004e6c6c [UNCONDITIONAL_CALL]
//   core_gun.cpp_FUN_004f0350 (004f0350) at 004f099c [UNCONDITIONAL_CALL]
//   core_haystack.cpp_FUN_004f0e40 (004f0e40) at 004f0f49 [UNCONDITIONAL_CALL]
//   core_hero.cpp_CHero_FUN_004f28d0 (004f28d0) at 004f2955 [UNCONDITIONAL_CALL]
//   core_hero.cpp_FUN_004f2d70 (004f2d70) at 004f2e0f [UNCONDITIONAL_CALL]
//   core_hero.cpp_FUN_004f2f50 (004f2f50) at 004f2fd2 [UNCONDITIONAL_CALL]
//   core_hero.cpp_FUN_004f3120 (004f3120) at 004f3266 [UNCONDITIONAL_CALL]
//   core_hero.cpp_FUN_004f33b0 (004f33b0) at 004f34c4 [UNCONDITIONAL_CALL]
//   core_hero.cpp_FUN_004f35b0 (004f35b0) at 004f366a [UNCONDITIONAL_CALL]
//   core_hostage.cpp_RelatedToRescuedTownsfolk_FUN_004f4bd0 (004f4bd0) at 004f5276 [UNCONDITIONAL_CALL]
//   core_icepick.cpp_FUN_004f80b0 (004f80b0) at 004f81db [UNCONDITIONAL_CALL]
//   core_lever.cpp_FUN_00505080 (00505080) at 005050ae [UNCONDITIONAL_CALL]
//   core_mimic.cpp_FUN_0051fcc0 (0051fcc0) at 0051fd32 [UNCONDITIONAL_CALL]
//   core_moloch.cpp_CMoloch_process_FUN_00528d20 (00528d20) at 00528e62 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053c340 (0053c340) at 0053c467 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054cc30 (0054cc30) at 0054d233 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054df80 (0054df80) at 0054e031 [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_005571f0 (005571f0) at 00557300 [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_00558720 (00558720) at 00558b1b [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_00558cf0 (00558cf0) at 00558d7f [UNCONDITIONAL_CALL]
//   core_setcolid.cpp_CDemonSet_FUN_00574580 (00574580) at 005745fb [UNCONDITIONAL_CALL]
//   core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0 (005716b0) at 00572230 [UNCONDITIONAL_CALL]
//   core_setcolid.cpp_CDemonSet_testCapsuleCollision_FUN_00573470 (00573470) at 00573c28 [UNCONDITIONAL_CALL]
//   core_spike.cpp_FUN_005b8950 (005b8950) at 005b8c4a [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bb960 (005bb960) at 005bba88 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bdd20 (005bdd20) at 005be289 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005be520 (005be520) at 005be8e1 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c1680 (005c1680) at 005c1dcb [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c1fe0 (005c1fe0) at 005c20d2 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c2400 (005c2400) at 005c26f7 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c2850 (005c2850) at 005c2a2a [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c3960 (005c3960) at 005c3eec [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c4c20 (005c4c20) at 005c4c79 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_aimLeftPistol_FUN_005c4370 (005c4370) at 005c4594 [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_CSvetlana_process_FUN_005d8ba0 (005d8ba0) at 005d8d0a [UNCONDITIONAL_CALL]
//   core_teleport.cpp_CTeleport_process_FUN_005daa20 (005daa20) at 005daa4f [UNCONDITIONAL_CALL]
//   core_tommygun.cpp_FUN_005ddb30 (005ddb30) at 005de1b5 [UNCONDITIONAL_CALL]
//   core_trap.cpp_CTrap_process_FUN_005de770 (005de770) at 005de86f [UNCONDITIONAL_CALL]
//   core_trigger.cpp_CTrigger_FUN_005e0980 (005e0980) at 005e09af [UNCONDITIONAL_CALL]
//   core_trigger.cpp_CTrigger_containsActor_FUN_005e0cd0 (005e0cd0) at 005e0db4 [UNCONDITIONAL_CALL]
//   core_turret.cpp_FUN_005e2d50 (005e2d50) at 005e30e9 [UNCONDITIONAL_CALL]
//   core_turret.cpp_FUN_005e3750 (005e3750) at 005e3a5d [UNCONDITIONAL_CALL]
//   core_vehicle.cpp_CVehicle_process_FUN_005e7e80 (005e7e80) at 005e8202 [UNCONDITIONAL_CALL]
//   core_waypoint.cpp_CWaypoint_FUN_005ebf70 (005ebf70) at 005ec1e1 [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_CWerewolf_process_FUN_005efde0 (005efde0) at 005f0acf [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_FUN_005f1e40 (005f1e40) at 005f1eaf [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_process_FUN_005f9470 (005f9470) at 005fab74 [UNCONDITIONAL_CALL]
// Function calls:
//   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030

#include "nocturne.h"

CVector3f * __cdecl
core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
          (CDemonActor *this_ptr,CVector3f *output_local_point,CVector3f *input_world_point)

{
  BADSPACEBASE *in_ESP;
  CVector3f local_10;
  
  local_10.x = input_world_point->x - (this_ptr->location).position.x;
  local_10.y = input_world_point->y - (this_ptr->location).position.y;
  local_10.z = input_world_point->z - (this_ptr->location).position.z;
  core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
            (&this_ptr->orient_matrix,output_local_point,&local_10);
  return output_local_point;
}


// Assembly code:
// 00408f10: PUSH EBX
//   Label: core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
// 00408f11: SUB ESP,0xc
// 00408f14: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00408f18: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00408f1c: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00408f20: LEA EAX,[ECX + 0x20]
// 00408f23: FLD float ptr [EDX]
// 00408f25: FSUB float ptr [EAX]
// 00408f27: FSTP float ptr [ESP]
//   XREF to: Stack[-0x10] (DATA)
// 00408f2a: FLD float ptr [EDX + 0x4]
// 00408f2d: FSUB float ptr [EAX + 0x4]
// 00408f30: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0xc] (WRITE)
// 00408f34: FLD float ptr [EDX + 0x8]
// 00408f37: FSUB float ptr [EAX + 0x8]
// 00408f3a: MOV EAX,ESP
// 00408f3c: PUSH EAX
// 00408f3d: PUSH EBX
// 00408f3e: LEA EAX,[ECX + 0x3c]
// 00408f41: PUSH EAX
// 00408f42: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x8] (WRITE)
// 00408f46: CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
//   XREF to: 00472030 (UNCONDITIONAL_CALL)
// 00408f4b: ADD ESP,0xc
// 00408f4e: MOV EAX,EBX
// 00408f50: ADD ESP,0xc
// 00408f53: POP EBX
// 00408f54: RET
