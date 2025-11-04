// Name: core_hero.cpp_CHero_FUN_004f2540
// Address: 004f2540
// Address Range: [[004f2540, 004f2577]]
// Convention: __cdecl
// Signature: void core_hero.cpp_CHero_FUN_004f2540(CHero * this_ptr)
// Cross-references:
//   core_baron.cpp_CBaron_FUN_00412cb0 (00412cb0) at 00412cb7 [UNCONDITIONAL_CALL]
//   core_colonel.cpp_FUN_0043f850 (0043f850) at 0043f857 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d2c40 (004d2c40) at 004d2c48 [UNCONDITIONAL_CALL]
//   core_haystack.cpp_FUN_004f0c80 (004f0c80) at 004f0c87 [UNCONDITIONAL_CALL]
//   core_icepick.cpp_FUN_004f7e80 (004f7e80) at 004f7e87 [UNCONDITIONAL_CALL]
//   core_moloch.cpp_CMoloch_setup_FUN_00528c70 (00528c70) at 00528cf9 [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_00556f90 (00556f90) at 00556f97 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bb4b0 (005bb4b0) at 005bb4bb [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_CSvetlana_FUN_005d88e0 (005d88e0) at 005d8911 [UNCONDITIONAL_CALL]
// Function calls:
//   core_charactr.cpp_CCharacter_FUN_00428140
//   core_inv.cpp_CInventory_setupItems_FUN_004ff780
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0450

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_FUN_004f2540(CHero *this_ptr)

{
  core_skeleton_cpp_CDeformableModelInstance_FUN_005a0450(&(this_ptr->base_character).model);
  core_charactr_cpp_CCharacter_FUN_00428140(&this_ptr->base_character);
  this_ptr->field1_0xbe24 = 0;
  core_inv_cpp_CInventory_setupItems_FUN_004ff780(&this_ptr->inventory);
  return;
}


// Assembly code:
// 004f2540: PUSH EBX
//   Label: core_hero.cpp_CHero_FUN_004f2540
// 004f2541: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004f2545: LEA EAX,[EBX + 0x158]
// 004f254b: PUSH EAX
// 004f254c: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0450
//   XREF to: 005a0450 (UNCONDITIONAL_CALL)
// 004f2551: ADD ESP,0x4
// 004f2554: PUSH EBX
// 004f2555: CALL core_charactr.cpp_CCharacter_FUN_00428140
//   XREF to: 00428140 (UNCONDITIONAL_CALL)
// 004f255a: ADD ESP,0x4
// 004f255d: ADD EBX,0x1f738
// 004f2563: PUSH EBX
// 004f2564: MOV dword ptr [EBX + 0xfffec6ec],0x0
// 004f256e: CALL core_inv.cpp_CInventory_setupItems_FUN_004ff780
//   XREF to: 004ff780 (UNCONDITIONAL_CALL)
// 004f2573: ADD ESP,0x4
// 004f2576: POP EBX
// 004f2577: RET
