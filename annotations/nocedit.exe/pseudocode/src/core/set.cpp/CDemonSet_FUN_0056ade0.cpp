// Name: core_set.cpp_CDemonSet_FUN_0056ade0
// Address: 0056ade0
// Address Range: [[0056ade0, 0056ae42]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_FUN_0056ade0(CDemonSet * this_ptr)
// Cross-references:
//   core_emitter.cpp_FUN_004a8070 (004a8070) at 004a82a5 [UNCONDITIONAL_CALL]
//   core_grave.cpp_FUN_004ee790 (004ee790) at 004ee7de [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 (0056ae50) at 0056b1a1 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_FUN_0056ade0(CDemonSet *this_ptr)

{
  int in_stack_00000008;
  
  *(undefined4 *)(in_stack_00000008 + 0x140) = 0x1f;
  if ((undefined4 *)(in_stack_00000008 + 0x128) != (undefined4 *)(in_stack_00000008 + 0x20)) {
    *(undefined4 *)(in_stack_00000008 + 0x128) = *(undefined4 *)(in_stack_00000008 + 0x20);
    *(undefined4 *)(in_stack_00000008 + 300) = *(undefined4 *)(in_stack_00000008 + 0x24);
    *(undefined4 *)(in_stack_00000008 + 0x130) = *(undefined4 *)(in_stack_00000008 + 0x28);
  }
  if ((undefined4 *)(in_stack_00000008 + 0x134) == (undefined4 *)(in_stack_00000008 + 0x30)) {
    *(undefined4 *)(in_stack_00000008 + 0x144) = 0;
    return;
  }
  *(undefined4 *)(in_stack_00000008 + 0x134) = *(undefined4 *)(in_stack_00000008 + 0x30);
  *(undefined4 *)(in_stack_00000008 + 0x138) = *(undefined4 *)(in_stack_00000008 + 0x34);
  *(undefined4 *)(in_stack_00000008 + 0x13c) = *(undefined4 *)(in_stack_00000008 + 0x38);
  *(undefined4 *)(in_stack_00000008 + 0x144) = 0;
  return;
}


// Assembly code:
// 0056ade0: PUSH EBX
//   Label: core_set.cpp_CDemonSet_FUN_0056ade0
// 0056ade1: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0056ade5: LEA EDX,[ECX + 0x128]
// 0056adeb: LEA EAX,[ECX + 0x20]
// 0056adee: MOV dword ptr [ECX + 0x140],0x1f
// 0056adf8: CMP EDX,EAX
// 0056adfa: JNZ 0x0056ae15
//   XREF to: 0056ae15 (CONDITIONAL_JUMP)
// 0056adfc: LEA EDX,[ECX + 0x134]
//   Label: LAB_0056adfc
// 0056ae02: LEA EAX,[ECX + 0x30]
// 0056ae05: CMP EDX,EAX
// 0056ae07: JNZ 0x0056ae27
//   XREF to: 0056ae27 (CONDITIONAL_JUMP)
// 0056ae09: MOV dword ptr [ECX + 0x144],0x0
// 0056ae13: POP EBX
// 0056ae14: RET
// 0056ae15: MOV EBX,dword ptr [EAX]
//   Label: LAB_0056ae15
// 0056ae17: MOV dword ptr [EDX],EBX
// 0056ae19: MOV EBX,dword ptr [EAX + 0x4]
// 0056ae1c: MOV dword ptr [EDX + 0x4],EBX
// 0056ae1f: MOV EBX,dword ptr [EAX + 0x8]
// 0056ae22: MOV dword ptr [EDX + 0x8],EBX
// 0056ae25: JMP 0x0056adfc
//   XREF to: 0056adfc (UNCONDITIONAL_JUMP)
// 0056ae27: MOV EBX,dword ptr [EAX]
//   Label: LAB_0056ae27
// 0056ae29: MOV dword ptr [EDX],EBX
// 0056ae2b: MOV EBX,dword ptr [EAX + 0x4]
// 0056ae2e: MOV dword ptr [EDX + 0x4],EBX
// 0056ae31: MOV EBX,dword ptr [EAX + 0x8]
// 0056ae34: MOV dword ptr [EDX + 0x8],EBX
// 0056ae37: MOV dword ptr [ECX + 0x144],0x0
// 0056ae41: POP EBX
// 0056ae42: RET
