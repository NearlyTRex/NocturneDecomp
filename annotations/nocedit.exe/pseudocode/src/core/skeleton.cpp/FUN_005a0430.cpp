// Name: core_skeleton.cpp_FUN_005a0430
// Address: 005a0430
// Address Range: [[005a0430, 005a044a]]
// Convention: unknown
// Signature: undefined core_skeleton.cpp_FUN_005a0430()
// Cross-references:
//   core_actor.cpp_serializePartStatus_FUN_0040bae0 (0040bae0) at 0040bb95 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModelInstance_FUN_005968b0 (005968b0) at 00597181 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0840 (005a0840) at 005a087f [UNCONDITIONAL_CALL]

#include "nocturne.h"

void core_skeleton_cpp_FUN_005a0430(void)

{
  int iVar1;
  int in_stack_00000004;
  int iVar2;
  
  iVar2 = in_stack_00000004;
  do {
    iVar1 = iVar2 + 4;
    *(undefined4 *)(iVar2 + 0x21b8) = 0;
    iVar2 = iVar1;
  } while (iVar1 != in_stack_00000004 + 0x78);
  return;
}


// Assembly code:
// 005a0430: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_skeleton.cpp_FUN_005a0430
//   XREF to: Stack[0x4] (READ)
// 005a0434: MOV EAX,EDX
// 005a0436: ADD EDX,0x78
// 005a0439: ADD EAX,0x4
//   Label: LAB_005a0439
// 005a043c: MOV dword ptr [EAX + 0x21b4],0x0
// 005a0446: CMP EAX,EDX
// 005a0448: JNZ 0x005a0439
//   XREF to: 005a0439 (CONDITIONAL_JUMP)
// 005a044a: RET
