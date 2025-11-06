// Name: core_bodypart.cpp_FUN_0041b1b0
// Address: 0041b1b0
// Address Range: [[0041b1b0, 0041b1e5]]
// Convention: unknown
// Signature: undefined core_bodypart.cpp_FUN_0041b1b0()
// Cross-references:
//   core_bodypart.cpp_CBodyPart_process_FUN_00419be0 (00419be0) at 00419c23 [UNCONDITIONAL_CALL]
// Globals:
//   CGore* g_CGorePtr = 02d83364
//   CGore g_CGoreInstance
//   CVector3f g_ZeroVector
// Function calls:
//   core_actor.cpp_randomChance_FUN_0040cd10
//   core_gore.cpp_FUN_004edaa0

#include "nocturne.h"

void core_bodypart_cpp_FUN_0041b1b0(void)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_randomChance_FUN_0040cd10(0.08);
  if (iVar1 == 0) {
    return;
  }
  core_gore_cpp_FUN_004edaa0();
  return;
}


// Assembly code:
// 0041b1b0: PUSH 0x3da3d70a
//   Label: core_bodypart.cpp_FUN_0041b1b0
// 0041b1b5: CALL core_actor.cpp_randomChance_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 0041b1ba: ADD ESP,0x4
// 0041b1bd: TEST EAX,EAX
// 0041b1bf: JNZ 0x0041b1c2
//   XREF to: 0041b1c2 (CONDITIONAL_JUMP)
// 0041b1c1: RET
// 0041b1c2: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_0041b1c2
//   XREF to: Stack[0x4] (READ)
// 0041b1c6: MOV EDX,dword ptr [EAX + 0xcb8]
// 0041b1cc: PUSH EDX
// 0041b1cd: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 0041b1d2: ADD EAX,0x20
// 0041b1d5: PUSH EAX
// 0041b1d6: MOV ECX,dword ptr [0x0067b9a0]
//   XREF to: 02d83364 (PARAM)
//   XREF to: 0067b9a0 (READ)
// 0041b1dc: PUSH ECX
//   XREF to: 02d83364 (DATA)
// 0041b1dd: CALL core_gore.cpp_FUN_004edaa0
//   XREF to: 004edaa0 (UNCONDITIONAL_CALL)
// 0041b1e2: ADD ESP,0x10
// 0041b1e5: RET
