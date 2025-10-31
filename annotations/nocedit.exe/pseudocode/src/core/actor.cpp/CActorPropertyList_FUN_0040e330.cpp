// Name: core_actor.cpp_CActorPropertyList_FUN_0040e330
// Address: 0040e330
// Address Range: [[0040e330, 0040e34d]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CActorPropertyList_FUN_0040e330(CActorPropertyList * this_ptr)
// Cross-references:
//   core_ammobox.cpp_CAmmoBox_getPropertyList_FUN_00411b30 (00411b30) at 00411b90 [UNCONDITIONAL_CALL]
//   core_backgnd.cpp_CBackgroundActor_FUN_00412a40 (00412a40) at 00412a78 [UNCONDITIONAL_CALL]
//   core_baron.cpp_CBaron_FUN_00414010 (00414010) at 0041405b [UNCONDITIONAL_CALL]
//   core_barrier.cpp_CBarrier_FUN_00414400 (00414400) at 00414454 [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_CLightActor_FUN_004234e0 (004234e0) at 00423523 [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_FUN_004226e0 (004226e0) at 004228a0 [UNCONDITIONAL_CALL]
//   core_chain.cpp_FUN_00431120 (00431120) at 00431243 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042f730 (0042f730) at 0042f7b5 [UNCONDITIONAL_CALL]
//   core_conveyor.cpp_FUN_00442130 (00442130) at 00442151 [UNCONDITIONAL_CALL]
//   core_curtain.cpp_FUN_0044b610 (0044b610) at 0044b728 [UNCONDITIONAL_CALL]
//   core_dest.cpp_FUN_0046fe80 (0046fe80) at 0046feed [UNCONDITIONAL_CALL]
//   core_door.cpp_CDoor_getPropertyList_FUN_00481320 (00481320) at 00481508 [UNCONDITIONAL_CALL]
//   core_drip.cpp_FUN_0048e930 (0048e930) at 0048e978 [UNCONDITIONAL_CALL]
//   core_emitter.cpp_FUN_004a8db0 (004a8db0) at 004a8dee [UNCONDITIONAL_CALL]
//   core_enemy.cpp_CEnemy_FUN_004aa170 (004aa170) at 004aa1b2 [UNCONDITIONAL_CALL]
//   core_flame.cpp_FUN_004cae70 (004cae70) at 004caf46 [UNCONDITIONAL_CALL]
//   core_flamecan.cpp_FUN_004cb6e0 (004cb6e0) at 004cb72f [UNCONDITIONAL_CALL]
//   core_glass.cpp_FUN_004eb3c0 (004eb3c0) at 004eb424 [UNCONDITIONAL_CALL]
//   core_grave.cpp_FUN_004ee9e0 (004ee9e0) at 004eea36 [UNCONDITIONAL_CALL]
//   core_hostage.cpp_FUN_004f69c0 (004f69c0) at 004f6ae0 [UNCONDITIONAL_CALL]
//   core_lever.cpp_FUN_00505240 (00505240) at 00505364 [UNCONDITIONAL_CALL]
//   core_litecone.cpp_FUN_00506da0 (00506da0) at 00506def [UNCONDITIONAL_CALL]
//   core_melee.cpp_FUN_0050ecf0 (0050ecf0) at 0050ed87 [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00527b70 (00527b70) at 00527c09 [UNCONDITIONAL_CALL]
//   core_moloch.cpp_FUN_00529950 (00529950) at 00529971 [UNCONDITIONAL_CALL]
//   core_npc.cpp_CNPC_FUN_00544e40 (00544e40) at 00544e88 [UNCONDITIONAL_CALL]
//   core_pendulum.cpp_FUN_0054a5f0 (0054a5f0) at 0054a70a [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054e7d0 (0054e7d0) at 0054e9a0 [UNCONDITIONAL_CALL]
//   core_trigger.cpp_CTrigger_FUN_005e0f70 (005e0f70) at 005e1103 [UNCONDITIONAL_CALL]
//   core_turret.cpp_CTurret_FUN_005e3ca0 (005e3ca0) at 005e3dc2 [UNCONDITIONAL_CALL]
//   core_tvbat.cpp_CTVBat_FUN_005e51a0 (005e51a0) at 005e5206 [UNCONDITIONAL_CALL]
//   core_wateract.cpp_CWaterActor_FUN_005eb940 (005eb940) at 005eba5b [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_CWerewolf_FUN_005f20d0 (005f20d0) at 005f2130 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_FUN_005fca80 (005fca80) at 005fcb49 [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0

#include "nocturne.h"

void __cdecl core_actor_cpp_CActorPropertyList_FUN_0040e330(CActorPropertyList *this_ptr)

{
  core_actor_cpp_CActorPropertyList_snag_FUN_0040e6c0(this_ptr);
  return;
}


// Assembly code:
// 0040e330: PUSH EBX
//   Label: core_actor.cpp_CActorPropertyList_FUN_0040e330
// 0040e331: PUSH 0x0
// 0040e333: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 0040e337: PUSH EDX
// 0040e338: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0040e33c: PUSH ECX
// 0040e33d: PUSH 0x4
// 0040e33f: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0040e343: PUSH EBX
// 0040e344: CALL core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0
//   XREF to: 0040e6c0 (UNCONDITIONAL_CALL)
// 0040e349: ADD ESP,0x14
// 0040e34c: POP EBX
// 0040e34d: RET
