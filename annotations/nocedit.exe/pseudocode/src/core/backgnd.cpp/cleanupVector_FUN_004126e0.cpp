// Name: core_backgnd.cpp_cleanupVector_FUN_004126e0
// Address: 004126e0
// Address Range: [[004126e0, 004126f4]]
// Convention: __cdecl
// Signature: int core_backgnd.cpp_cleanupVector_FUN_004126e0(CVector3f * * objs)
// Cross-references:
//   core_armour.cpp_CArmour_dtor_FUN_00412500 (00412500) at 00412549 [UNCONDITIONAL_CALL]
//   core_batcreat.cpp_CBatCreature_dtor_FUN_00416320 (00416320) at 00416369 [UNCONDITIONAL_CALL]
//   core_batman.cpp_CBatman_dtor_FUN_00417d60 (00417d60) at 00417da9 [UNCONDITIONAL_CALL]
//   core_beast.cpp_CBeast_dtor_FUN_00418490 (00418490) at 004184c9 [UNCONDITIONAL_CALL]
//   core_biggs.cpp_CBiggs_dtor_FUN_00418d10 (00418d10) at 00418d69 [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_CBoneGuy_dtor_FUN_0041da40 (0041da40) at 0041da89 [UNCONDITIONAL_CALL]
//   core_bride.cpp_CBride_dtor_FUN_00424b80 (00424b80) at 00424bc9 [UNCONDITIONAL_CALL]
//   core_bugs.cpp_CBugs_dtor_FUN_00427bd0 (00427bd0) at 00427c29 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_dtor_FUN_0042f9f0 (0042f9f0) at 0042fa29 [UNCONDITIONAL_CALL]
//   core_cow.cpp_FUN_00444cd0 (00444cd0) at 00444d09 [UNCONDITIONAL_CALL]
//   core_dog.cpp_CZombieDog_dtor_FUN_0047f9a0 (0047f9a0) at 0047f9e9 [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_dtor_FUN_00486d70 (00486d70) at 00486da9 [UNCONDITIONAL_CALL]
//   core_drone.cpp_dtor_FUN_0048f5a0 (0048f5a0) at 0048f5e9 [UNCONDITIONAL_CALL]
//   core_enemy.cpp_CEnemy_dtor_FUN_004125c0 (004125c0) at 00412609 [UNCONDITIONAL_CALL]
//   core_gargoyle.cpp_FUN_004e5bd0 (004e5bd0) at 004e5c09 [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_FUN_004e8f10 (004e8f10) at 004e8f49 [UNCONDITIONAL_CALL]
//   core_hero.cpp_CHero_dtor_FUN_004f2470 (004f2470) at 004f24ee [UNCONDITIONAL_CALL]
//   core_hiram.cpp_FUN_004f4450 (004f4450) at 004f44a3 [UNCONDITIONAL_CALL]
//   core_hostage.cpp_FUN_004f6b60 (004f6b60) at 004f6ba9 [UNCONDITIONAL_CALL]
//   core_hotdemon.cpp_FUN_004f7a40 (004f7a40) at 004f7a89 [UNCONDITIONAL_CALL]
//   core_hpriest.cpp_FUN_004f7cb0 (004f7cb0) at 004f7d09 [UNCONDITIONAL_CALL]
//   core_imp.cpp_FUN_004fb180 (004fb180) at 004fb1c9 [UNCONDITIONAL_CALL]
//   core_larva.cpp_FUN_00503cc0 (00503cc0) at 00503d09 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_FUN_0051f2c0 (0051f2c0) at 0051f36f [UNCONDITIONAL_CALL]
//   core_mobster.cpp_CMobster_dtor_FUN_00527c70 (00527c70) at 00527ca9 [UNCONDITIONAL_CALL]
//   core_npc.cpp_CNPC_dtor_FUN_004f4700 (004f4700) at 004f4749 [UNCONDITIONAL_CALL]
//   core_passngr.cpp_CPassenger_dtor_FUN_00545c10 (00545c10) at 00545caa [UNCONDITIONAL_CALL]
//   core_sentinel.cpp_CSentinel_dtor_FUN_00568f80 (00568f80) at 00568fc9 [UNCONDITIONAL_CALL]
//   core_smiley.cpp_CSmiley_dtor_FUN_005a3880 (005a3880) at 005a38c9 [UNCONDITIONAL_CALL]
//   core_succubus.cpp_CSuccubus_dtor_FUN_005c7820 (005c7820) at 005c7889 [UNCONDITIONAL_CALL]
//   core_tbplayer.cpp_CBassPlayer_dtor_FUN_005da610 (005da610) at 005da669 [UNCONDITIONAL_CALL]
//   core_tbplayer.cpp_CDrummer_dtor_FUN_005da540 (005da540) at 005da589 [UNCONDITIONAL_CALL]
//   core_tentacle.cpp_CTentacle_dtor_FUN_005dbcf0 (005dbcf0) at 005dbd29 [UNCONDITIONAL_CALL]
//   core_tvbat.cpp_CTVBat_dtor_FUN_005e5460 (005e5460) at 005e54a9 [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_dtor_FUN_005e7700 (005e7700) at 005e7789 [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_CWerewolf_dtor_FUN_005f2220 (005f2220) at 005f2269 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_dtor_FUN_005fcc50 (005fcc50) at 005fcc89 [UNCONDITIONAL_CALL]
// Globals:
//   WatcomTypeInfo g_CVectorTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

int __cdecl core_backgnd_cpp_cleanupVector_FUN_004126e0(CVector3f **objs)

{
  int iVar1;
  
  iVar1 = crt_memory_c_freeTypeArray_FUN_005feee9(objs,0xf,&g_CVectorTypeInfo);
  return iVar1;
}


// Assembly code:
// 004126e0: PUSH 0x6598c0
//   Label: core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 006598c0 (DATA)
// 004126e5: PUSH 0xf
// 004126e7: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004126eb: PUSH EDX
// 004126ec: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 004126f1: ADD ESP,0xc
// 004126f4: RET
