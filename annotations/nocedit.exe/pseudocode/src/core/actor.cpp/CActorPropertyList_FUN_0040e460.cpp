// Name: core_actor.cpp_CActorPropertyList_FUN_0040e460
// Address: 0040e460
// Address Range: [[0040e460, 0040e47d]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CActorPropertyList_FUN_0040e460(CActorPropertyList * this_ptr)
// Cross-references:
//   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290 (0040d290) at 0040d2e5 [UNCONDITIONAL_CALL]
//   core_anvil.cpp_CAnvil_FUN_00412030 (00412030) at 00412068 [UNCONDITIONAL_CALL]
//   core_armour.cpp_CArmour_SnagRelatedMultiple_FUN_00412470 (00412470) at 004124b8 [UNCONDITIONAL_CALL]
//   core_baron.cpp_CBaron_FUN_00414010 (00414010) at 00414046 [UNCONDITIONAL_CALL]
//   core_batman.cpp_CBatman_FUN_00417cd0 (00417cd0) at 00417d18 [UNCONDITIONAL_CALL]
//   core_biggs.cpp_snag_FUN_00418c80 (00418c80) at 00418cc8 [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_SnagRelated_ModelStateDeath_FUN_0041d990 (0041d990) at 0041d9ef [UNCONDITIONAL_CALL]
//   core_bugs.cpp_CBugs_FUN_004277e0 (004277e0) at 00427886 [UNCONDITIONAL_CALL]
//   core_conveyor.cpp_FUN_00442130 (00442130) at 00442166 [UNCONDITIONAL_CALL]
//   core_curtain.cpp_FUN_0044b610 (0044b610) at 0044b767 [UNCONDITIONAL_CALL]
//   core_door.cpp_CDoor_getPropertyList_FUN_00481320 (00481320) at 004813c2 [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_00486c90 (00486c90) at 00486cc9 [UNCONDITIONAL_CALL]
//   core_emitter.cpp_FUN_004a8db0 (004a8db0) at 004a8e29 [UNCONDITIONAL_CALL]
//   core_filmreel.cpp_CFilmReel_FUN_004bee30 (004bee30) at 004bee6f [UNCONDITIONAL_CALL]
//   core_flame.cpp_FUN_004cae70 (004cae70) at 004caec4 [UNCONDITIONAL_CALL]
//   core_flamecan.cpp_FUN_004cb6e0 (004cb6e0) at 004cb744 [UNCONDITIONAL_CALL]
//   core_glass.cpp_FUN_004eb3c0 (004eb3c0) at 004eb40f [UNCONDITIONAL_CALL]
//   core_grave.cpp_FUN_004ee9e0 (004ee9e0) at 004eea4b [UNCONDITIONAL_CALL]
//   core_hiram.cpp_FUN_004f46a0 (004f46a0) at 004f46c7 [UNCONDITIONAL_CALL]
//   core_hostage.cpp_FUN_004f69c0 (004f69c0) at 004f6a34 [UNCONDITIONAL_CALL]
//   core_hpriest.cpp_CHighPriestOfGardath_FUN_004f7c70 (004f7c70) at 004f7c97 [UNCONDITIONAL_CALL]
//   core_litecone.cpp_FUN_00506da0 (00506da0) at 00506e04 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_FUN_00520d10 (00520d10) at 00520d46 [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00527b70 (00527b70) at 00527c1e [UNCONDITIONAL_CALL]
//   core_moloch.cpp_FUN_00529950 (00529950) at 00529986 [UNCONDITIONAL_CALL]
//   core_passngr.cpp_FUN_00546270 (00546270) at 005462aa [UNCONDITIONAL_CALL]
//   core_pendulum.cpp_FUN_0054a5f0 (0054a5f0) at 0054a628 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054e7d0 (0054e7d0) at 0054e808 [UNCONDITIONAL_CALL]
//   core_simbox.cpp_CSimBox_FUN_00589310 (00589310) at 00589385 [UNCONDITIONAL_CALL]
//   core_spike.cpp_FUN_005b8e90 (005b8e90) at 005b9007 [UNCONDITIONAL_CALL]
//   core_turret.cpp_CTurret_FUN_005e3ca0 (005e3ca0) at 005e3cdd [UNCONDITIONAL_CALL]
//   core_vessel.cpp_CCryptVessel_FUN_005e9c00 (005e9c00) at 005e9cc5 [UNCONDITIONAL_CALL]
//   core_wateract.cpp_CWaterActor_FUN_005eb940 (005eb940) at 005eb9e7 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_FUN_005fca80 (005fca80) at 005fcad9 [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0

#include "nocturne.h"

void __cdecl core_actor_cpp_CActorPropertyList_FUN_0040e460(CActorPropertyList *this_ptr)

{
  core_actor_cpp_CActorPropertyList_snag_FUN_0040e6c0(this_ptr);
  return;
}


// Assembly code:
// 0040e460: PUSH EBX
//   Label: core_actor.cpp_CActorPropertyList_FUN_0040e460
// 0040e461: PUSH 0x0
// 0040e463: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 0040e467: PUSH EDX
// 0040e468: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0040e46c: PUSH ECX
// 0040e46d: PUSH 0xb
// 0040e46f: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0040e473: PUSH EBX
// 0040e474: CALL core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0
//   XREF to: 0040e6c0 (UNCONDITIONAL_CALL)
// 0040e479: ADD ESP,0x14
// 0040e47c: POP EBX
// 0040e47d: RET
