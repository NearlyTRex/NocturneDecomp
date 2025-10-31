// Name: core_cloth.cpp_FUN_0043bf80
// Address: 0043bf80
// Address Range: [[0043bf80, 0043bf91]]
// Convention: unknown
// Signature: undefined core_cloth.cpp_FUN_0043bf80()
// Cross-references:
//   core_armour.cpp_CArmour_dtor_FUN_00412500 (00412500) at 00412559 [UNCONDITIONAL_CALL]
//   core_batcreat.cpp_CBatCreature_dtor_FUN_00416320 (00416320) at 00416379 [UNCONDITIONAL_CALL]
//   core_batman.cpp_CBatman_dtor_FUN_00417d60 (00417d60) at 00417db9 [UNCONDITIONAL_CALL]
//   core_beast.cpp_CBeast_dtor_FUN_00418490 (00418490) at 004184e9 [UNCONDITIONAL_CALL]
//   core_biggs.cpp_CBiggs_dtor_FUN_00418d10 (00418d10) at 00418d79 [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_CBoneGuy_dtor_FUN_0041da40 (0041da40) at 0041daa9 [UNCONDITIONAL_CALL]
//   core_bride.cpp_CBride_dtor_FUN_00424b80 (00424b80) at 00424bd9 [UNCONDITIONAL_CALL]
//   core_bugs.cpp_CBugs_dtor_FUN_00427bd0 (00427bd0) at 00427c39 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_dtor_FUN_0042f9f0 (0042f9f0) at 0042fa49 [UNCONDITIONAL_CALL]
//   core_cow.cpp_FUN_00444cd0 (00444cd0) at 00444d29 [UNCONDITIONAL_CALL]
//   core_dog.cpp_CZombieDog_dtor_FUN_0047f9a0 (0047f9a0) at 0047f9f9 [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_dtor_FUN_00486d70 (00486d70) at 00486dc9 [UNCONDITIONAL_CALL]
//   core_drone.cpp_dtor_FUN_0048f5a0 (0048f5a0) at 0048f5f9 [UNCONDITIONAL_CALL]
//   core_enemy.cpp_CEnemy_dtor_FUN_004125c0 (004125c0) at 00412619 [UNCONDITIONAL_CALL]
//   core_gargoyle.cpp_FUN_004e5bd0 (004e5bd0) at 004e5c29 [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_FUN_004e8f10 (004e8f10) at 004e8f69 [UNCONDITIONAL_CALL]
//   core_hero.cpp_CHero_dtor_FUN_004f2470 (004f2470) at 004f24fe [UNCONDITIONAL_CALL]
//   core_hiram.cpp_FUN_004f4450 (004f4450) at 004f44c3 [UNCONDITIONAL_CALL]
//   core_hostage.cpp_FUN_004f6b60 (004f6b60) at 004f6bc9 [UNCONDITIONAL_CALL]
//   core_hotdemon.cpp_FUN_004f7a40 (004f7a40) at 004f7a99 [UNCONDITIONAL_CALL]
//   core_hpriest.cpp_FUN_004f7cb0 (004f7cb0) at 004f7d19 [UNCONDITIONAL_CALL]
//   core_imp.cpp_FUN_004fb180 (004fb180) at 004fb1d9 [UNCONDITIONAL_CALL]
//   core_larva.cpp_FUN_00503cc0 (00503cc0) at 00503d19 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_FUN_0051f2c0 (0051f2c0) at 0051f37f [UNCONDITIONAL_CALL]
//   core_mobster.cpp_CMobster_dtor_FUN_00527c70 (00527c70) at 00527cc9 [UNCONDITIONAL_CALL]
//   core_npc.cpp_CNPC_dtor_FUN_004f4700 (004f4700) at 004f4769 [UNCONDITIONAL_CALL]
//   core_passngr.cpp_CPassenger_dtor_FUN_00545c10 (00545c10) at 00545cca [UNCONDITIONAL_CALL]
//   core_sentinel.cpp_CSentinel_dtor_FUN_00568f80 (00568f80) at 00568fd9 [UNCONDITIONAL_CALL]
//   core_smiley.cpp_CSmiley_dtor_FUN_005a3880 (005a3880) at 005a38d9 [UNCONDITIONAL_CALL]
//   core_succubus.cpp_CSuccubus_dtor_FUN_005c7820 (005c7820) at 005c7849 [UNCONDITIONAL_CALL]
//   core_tbplayer.cpp_CBassPlayer_dtor_FUN_005da610 (005da610) at 005da679 [UNCONDITIONAL_CALL]
//   core_tbplayer.cpp_CDrummer_dtor_FUN_005da540 (005da540) at 005da5a9 [UNCONDITIONAL_CALL]
//   core_tentacle.cpp_CTentacle_dtor_FUN_005dbcf0 (005dbcf0) at 005dbd49 [UNCONDITIONAL_CALL]
//   core_tvbat.cpp_CTVBat_dtor_FUN_005e5460 (005e5460) at 005e54b9 [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_dtor_FUN_005e7700 (005e7700) at 005e77a9 [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_CWerewolf_dtor_FUN_005f2220 (005f2220) at 005f2279 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_dtor_FUN_005fcc50 (005fcc50) at 005fcca9 [UNCONDITIONAL_CALL]
// Function calls:
//   core_cloth.cpp_FUN_0043c070

#include "nocturne.h"

/* Signature: undefined1 core_cloth.cpp_FUN_0043bf80(undefined4 param_1) */

undefined4 core_cloth_cpp_FUN_0043bf80(void)

{
  undefined4 in_stack_00000004;
  
  core_cloth_cpp_FUN_0043c070();
  return in_stack_00000004;
}


// Assembly code:
// 0043bf80: PUSH EBX
//   Label: core_cloth.cpp_FUN_0043bf80
// 0043bf81: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0043bf85: PUSH EBX
// 0043bf86: CALL core_cloth.cpp_FUN_0043c070
//   XREF to: 0043c070 (UNCONDITIONAL_CALL)
// 0043bf8b: ADD ESP,0x4
// 0043bf8e: MOV EAX,EBX
// 0043bf90: POP EBX
// 0043bf91: RET
