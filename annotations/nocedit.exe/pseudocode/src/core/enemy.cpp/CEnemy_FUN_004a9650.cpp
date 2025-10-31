// Name: core_enemy.cpp_CEnemy_FUN_004a9650
// Address: 004a9650
// Address Range: [[004a9650, 004a965d]]
// Convention: __cdecl
// Signature: void core_enemy.cpp_CEnemy_FUN_004a9650(CEnemy * this_ptr)
// Cross-references:
//   core_armour.cpp_CArmour_FUN_00412240 (00412240) at 00412245 [UNCONDITIONAL_CALL]
//   core_batcreat.cpp_CBatCreature_FUN_00415150 (00415150) at 00415158 [UNCONDITIONAL_CALL]
//   core_batman.cpp_CBatman_FUN_00416510 (00416510) at 00416518 [UNCONDITIONAL_CALL]
//   core_beast.cpp_FUN_00418280 (00418280) at 00418297 [UNCONDITIONAL_CALL]
//   core_biggs.cpp_FUN_00418680 (00418680) at 00418688 [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_CBoneGuy_explode_FUN_0041bd90 (0041bd90) at 0041bf32 [UNCONDITIONAL_CALL]
//   core_bride.cpp_FUN_00423810 (00423810) at 004239ee [UNCONDITIONAL_CALL]
//   core_bugs.cpp_FUN_00424e50 (00424e50) at 00424e73 [UNCONDITIONAL_CALL]
//   core_cow.cpp_FUN_004441b0 (004441b0) at 004441fe [UNCONDITIONAL_CALL]
//   core_dog.cpp_CZombieDog_setup_FUN_0047f0c0 (0047f0c0) at 0047f10d [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_DraculaBrideModels_FUN_004840b0 (004840b0) at 00484146 [UNCONDITIONAL_CALL]
//   core_drone.cpp_FUN_0048ebc0 (0048ebc0) at 0048ec17 [UNCONDITIONAL_CALL]
//   core_gargoyle.cpp_CGargoyle_FUN_004e45e0 (004e45e0) at 004e45e8 [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_FUN_004e6160 (004e6160) at 004e6367 [UNCONDITIONAL_CALL]
//   core_hotdemon.cpp_FUN_004f6d00 (004f6d00) at 004f6d2d [UNCONDITIONAL_CALL]
//   core_imp.cpp_FUN_004f9910 (004f9910) at 004f991b [UNCONDITIONAL_CALL]
//   core_larva.cpp_FUN_00503020 (00503020) at 0050304c [UNCONDITIONAL_CALL]
//   core_mimic.cpp_CMimic_setup_FUN_0051f3e0 (0051f3e0) at 0051f5a5 [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00525340 (00525340) at 005255f3 [UNCONDITIONAL_CALL]
//   core_sentinel.cpp_FUN_00567e20 (00567e20) at 00567e28 [UNCONDITIONAL_CALL]
//   core_smiley.cpp_FUN_005a24d0 (005a24d0) at 005a24da [UNCONDITIONAL_CALL]
//   core_succubus.cpp_CSuccubus_FUN_005c6b60 (005c6b60) at 005c6ba5 [UNCONDITIONAL_CALL]
//   core_tentacle.cpp_CTentacle_FUN_005dafc0 (005dafc0) at 005dafd9 [UNCONDITIONAL_CALL]
//   core_tvbat.cpp_CTVBat_FUN_005e4050 (005e4050) at 005e4068 [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_FUN_005e56c0 (005e56c0) at 005e56cc [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_CWerewolf_FUN_005efcc0 (005efcc0) at 005efd52 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_FUN_005f9140 (005f9140) at 005f9388 [UNCONDITIONAL_CALL]
// Function calls:
//   core_charactr.cpp_CCharacter_FUN_00428140

#include "nocturne.h"

void __cdecl core_enemy_cpp_CEnemy_FUN_004a9650(CEnemy *this_ptr)

{
  core_charactr_cpp_CCharacter_FUN_00428140(&this_ptr->base_character);
  return;
}


// Assembly code:
// 004a9650: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_enemy.cpp_CEnemy_FUN_004a9650
//   XREF to: Stack[0x4] (READ)
// 004a9654: PUSH EDX
// 004a9655: CALL core_charactr.cpp_CCharacter_FUN_00428140
//   XREF to: 00428140 (UNCONDITIONAL_CALL)
// 004a965a: ADD ESP,0x4
// 004a965d: RET
