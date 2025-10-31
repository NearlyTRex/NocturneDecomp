// Name: core_morph.cpp_CMorphModel_FreeSomething1_FUN_0052a510
// Address: 0052a510
// Address Range: [[0052a510, 0052a573]]
// Convention: unknown
// Signature: undefined core_morph.cpp_CMorphModel_FreeSomething1_FUN_0052a510()
// Cross-references:
//   core_morph.cpp_CMorphModel_CallToFreeSomething1_FUN_0052b350 (0052b350) at 0052b367 [UNCONDITIONAL_CALL]
//   core_morph.cpp_CMorphModel_dtor_FUN_0052a4f0 (0052a4f0) at 0052a4f6 [UNCONDITIONAL_CALL]
//   core_morph.cpp_CallToFreeSomething1_FUN_0052b430 (0052b430) at 0052b44d [UNCONDITIONAL_CALL]
//   core_morph.cpp_CallToFreeSomething2_FUN_0052b470 (0052b470) at 0052b48d [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052b370 (0052b370) at 0052b390 [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052b3d0 (0052b3d0) at 0052b3f0 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_morph_cpp_0063a0df
//   TerminatedCString s_core_morph_cpp_0063a0f1
// Function calls:
//   shape_memdbg.cpp_debugFree_FUN_0050f460

#include "nocturne.h"

/* Signature: undefined1 core_morph.cpp_CMorphModel_FreeSomething1(CMorphModel* param_1) */

void core_morph_cpp_CMorphModel_FreeSomething1_FUN_0052a510(void)

{
  undefined4 *in_stack_00000004;
  
  if ((void *)in_stack_00000004[0x16] != (void *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460
              ((void *)in_stack_00000004[0x16],"..\\core\\morph.cpp",0x5c);
    in_stack_00000004[0x16] = 0;
  }
  if ((void *)in_stack_00000004[0x18] != (void *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460
              ((void *)in_stack_00000004[0x18],"..\\core\\morph.cpp",0x60);
    in_stack_00000004[0x18] = 0;
  }
  in_stack_00000004[0x17] = 0;
  in_stack_00000004[0x19] = 0;
  *in_stack_00000004 = 0;
  in_stack_00000004[0x15] = 0;
  return;
}


// Assembly code:
// 0052a510: PUSH EBX
//   Label: core_morph.cpp_CMorphModel_FreeSomething1_FUN_0052a510
// 0052a511: PUSH ESI
// 0052a512: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0052a516: MOV EDX,dword ptr [EBX + 0x58]
// 0052a519: TEST EDX,EDX
// 0052a51b: JNZ 0x0052a542
//   XREF to: 0052a542 (CONDITIONAL_JUMP)
// 0052a51d: MOV ESI,dword ptr [EBX + 0x60]
//   Label: LAB_0052a51d
// 0052a520: TEST ESI,ESI
// 0052a522: JNZ 0x0052a55b
//   XREF to: 0052a55b (CONDITIONAL_JUMP)
// 0052a524: MOV dword ptr [EBX + 0x5c],0x0
//   Label: LAB_0052a524
// 0052a52b: MOV dword ptr [EBX + 0x64],0x0
// 0052a532: MOV dword ptr [EBX],0x0
// 0052a538: MOV dword ptr [EBX + 0x54],0x0
// 0052a53f: POP ESI
// 0052a540: POP EBX
// 0052a541: RET
// 0052a542: PUSH 0x5c
//   Label: LAB_0052a542
// 0052a544: PUSH 0x63a0df
//   XREF to: 0063a0df (DATA)
// 0052a549: PUSH EDX
// 0052a54a: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 0052a54f: ADD ESP,0xc
// 0052a552: MOV dword ptr [EBX + 0x58],0x0
// 0052a559: JMP 0x0052a51d
//   XREF to: 0052a51d (UNCONDITIONAL_JUMP)
// 0052a55b: PUSH 0x60
//   Label: LAB_0052a55b
// 0052a55d: PUSH 0x63a0f1
//   XREF to: 0063a0f1 (DATA)
// 0052a562: PUSH ESI
// 0052a563: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 0052a568: ADD ESP,0xc
// 0052a56b: MOV dword ptr [EBX + 0x60],0x0
// 0052a572: JMP 0x0052a524
//   XREF to: 0052a524 (UNCONDITIONAL_JUMP)
