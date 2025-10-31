// Name: core_gabriela.cpp_FUN_004d5c10
// Address: 004d5c10
// Address Range: [[004d5c10, 004d5c50]]
// Convention: unknown
// Signature: undefined core_gabriela.cpp_FUN_004d5c10()
// Cross-references:
//   core_gabriela.cpp_FUN_004d4890 (004d4890) at 004d4c4e [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 g_CAmmoBoxClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_ammobox.cpp_AllocateMemoryMaybe_FUN_00411700

#include "nocturne.h"

/* Signature: undefined1 actors_hero_gabriella.cpp_FUN_004d5c10(undefined4 param_1) */

void core_gabriela_cpp_FUN_004d5c10(void)

{
  CDemonActor *pCVar1;
  int in_stack_00000004;
  
  if (*(CDemonActor **)(in_stack_00000004 + 0x1fba0) == (CDemonActor *)0x0) {
    return;
  }
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (*(CDemonActor **)(in_stack_00000004 + 0x1fba0),g_CAmmoBoxClassInfo.name_hash);
  if (pCVar1 != (CDemonActor *)0x0) {
    core_ammobox_cpp_AllocateMemoryMaybe_FUN_00411700();
  }
  *(undefined4 *)(in_stack_00000004 + 0x1fba0) = 0;
  return;
}


// Assembly code:
// 004d5c10: PUSH EBX
//   Label: core_gabriela.cpp_FUN_004d5c10
// 004d5c11: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004d5c15: MOV EDX,dword ptr [EBX + 0x1fba0]
// 004d5c1b: TEST EDX,EDX
// 004d5c1d: JNZ 0x004d5c21
//   XREF to: 004d5c21 (CONDITIONAL_JUMP)
// 004d5c1f: POP EBX
// 004d5c20: RET
// 004d5c21: MOV ECX,dword ptr [0x008223e0]
//   Label: LAB_004d5c21
//   XREF to: 008223e0 (READ)
// 004d5c27: PUSH ECX
// 004d5c28: PUSH EDX
// 004d5c29: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004d5c2e: ADD ESP,0x8
// 004d5c31: TEST EAX,EAX
// 004d5c33: JZ 0x004d5c45
//   XREF to: 004d5c45 (CONDITIONAL_JUMP)
// 004d5c35: LEA EDX,[EBX + 0x1f738]
// 004d5c3b: PUSH EDX
// 004d5c3c: PUSH EAX
// 004d5c3d: CALL core_ammobox.cpp_AllocateMemoryMaybe_FUN_00411700
//   XREF to: 00411700 (UNCONDITIONAL_CALL)
// 004d5c42: ADD ESP,0x8
// 004d5c45: MOV dword ptr [EBX + 0x1fba0],0x0
//   Label: LAB_004d5c45
// 004d5c4f: POP EBX
// 004d5c50: RET
