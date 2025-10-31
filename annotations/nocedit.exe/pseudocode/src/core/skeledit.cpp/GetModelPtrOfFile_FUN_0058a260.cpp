// Name: core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260
// Address: 0058a260
// Address Range: [[0058a260, 0058a2a3]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260()
// Cross-references:
//   core_armour.cpp_CArmour_FUN_004124d0 (004124d0) at 004124f2 [UNCONDITIONAL_CALL]
//   core_batcreat.cpp_CBatCreature_FUN_004162f0 (004162f0) at 00416312 [UNCONDITIONAL_CALL]
//   core_batman.cpp_CBatman_FUN_00417d30 (00417d30) at 00417d52 [UNCONDITIONAL_CALL]
//   core_beast.cpp_FUN_00418460 (00418460) at 00418482 [UNCONDITIONAL_CALL]
//   core_biggs.cpp_FUN_00418ce0 (00418ce0) at 00418d02 [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_FUN_0041da10 (0041da10) at 0041da32 [UNCONDITIONAL_CALL]
//   core_bride.cpp_FUN_00424b50 (00424b50) at 00424b72 [UNCONDITIONAL_CALL]
//   core_cow.cpp_FUN_00444ca0 (00444ca0) at 00444cc2 [UNCONDITIONAL_CALL]
//   core_dog.cpp_CZombieDog_writeDependencies_FUN_0047f970 (0047f970) at 0047f992 [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_00486d00 (00486d00) at 00486d22 [UNCONDITIONAL_CALL]
//   core_drone.cpp_FUN_0048f570 (0048f570) at 0048f592 [UNCONDITIONAL_CALL]
//   core_gargoyle.cpp_FUN_004e5ba0 (004e5ba0) at 004e5bc2 [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_FUN_004e8ee0 (004e8ee0) at 004e8f02 [UNCONDITIONAL_CALL]
//   core_hostage.cpp_FUN_004f6b30 (004f6b30) at 004f6b52 [UNCONDITIONAL_CALL]
//   core_hotdemon.cpp_FUN_004f7a10 (004f7a10) at 004f7a32 [UNCONDITIONAL_CALL]
//   core_imp.cpp_FUN_004fb150 (004fb150) at 004fb172 [UNCONDITIONAL_CALL]
//   core_larva.cpp_FUN_00503c90 (00503c90) at 00503cb2 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_FUN_00520dd0 (00520dd0) at 00520df2 [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00527c40 (00527c40) at 00527c62 [UNCONDITIONAL_CALL]
//   core_sentinel.cpp_FUN_00568f50 (00568f50) at 00568f72 [UNCONDITIONAL_CALL]
//   core_smiley.cpp_FUN_005a3850 (005a3850) at 005a3872 [UNCONDITIONAL_CALL]
//   core_succubus.cpp_CSuccubus_FUN_005c77f0 (005c77f0) at 005c7812 [UNCONDITIONAL_CALL]
//   core_tentacle.cpp_CTentacle_FUN_005dbcc0 (005dbcc0) at 005dbce2 [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_CWerewolf_FUN_005f21f0 (005f21f0) at 005f2212 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_FUN_005fcc20 (005fcc20) at 005fcc42 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_MODELS_s_0064a24d
// Function calls:
//   core_skeledit.cpp_FUN_0058a2b0
//   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   crt_stack.c_stack_probe_FUN_005ff9f3
//   crt_stdio.c_fprintf_FUN_005fe6d0

#include "nocturne.h"

void core_skeledit_cpp_GetModelPtrOfFile_FUN_0058a260(void)

{
  FILE *in_stack_00000010;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x14);
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000010,"MODELS\\%s\n");
  core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0();
  core_skeledit_cpp_FUN_0058a2b0();
  return;
}


// Assembly code:
// 0058a260: PUSH 0x14
//   Label: core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260
// 0058a265: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 0058a26a: PUSH EBX
// 0058a26b: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0058a26f: ADD EAX,0x2260
// 0058a274: PUSH EAX
// 0058a275: PUSH 0x64a24d
//   XREF to: 0064a24d (DATA)
// 0058a27a: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0058a27e: PUSH EDX
// 0058a27f: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0058a284: ADD ESP,0xc
// 0058a287: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0058a28b: PUSH ECX
// 0058a28c: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0058a290: PUSH EBX
// 0058a291: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 0058a296: ADD ESP,0x4
// 0058a299: PUSH EAX
// 0058a29a: CALL core_skeledit.cpp_FUN_0058a2b0
//   XREF to: 0058a2b0 (UNCONDITIONAL_CALL)
// 0058a29f: ADD ESP,0x8
// 0058a2a2: POP EBX
// 0058a2a3: RET
