// Name: core_cloth.cpp_FUN_0043c070
// Address: 0043c070
// Address Range: [[0043c070, 0043c0ef]]
// Convention: unknown
// Signature: undefined core_cloth.cpp_FUN_0043c070()
// Cross-references:
//   core_cloth.cpp_FUN_0043bf80 (0043bf80) at 0043bf86 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c3150 (005c3150) at 005c353a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_cloth_cpp_006185cc
//   char* g_CurrentDebugFilename = 0067d200
//   int g_CurrentDebugLine
// Function calls:
//   core_cloth.cpp_CallToUnknownSomethingFreeMem_FUN_00438c00
//   crt_memory.c_memset_FUN_005fde40
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

/* Signature: undefined1 core_cloth.cpp_FUN_0043c070(undefined4 param_1) */

void core_cloth_cpp_FUN_0043c070(void)

{
  void *ptr;
  int *piVar1;
  int iVar2;
  int *in_stack_00000004;
  
  iVar2 = 0;
  piVar1 = in_stack_00000004;
  if (0 < *in_stack_00000004) {
    do {
      g_CurrentDebugLine = 0x5bd;
      g_CurrentDebugFilename = "..\\core\\cloth.cpp";
      if (piVar1[0x65] != 0) {
        ptr = (void *)core_cloth_cpp_CallToUnknownSomethingFreeMem_FUN_00438c00();
        shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < *in_stack_00000004);
  }
  *in_stack_00000004 = 0;
  crt_memory_c_memset_FUN_005fde40(in_stack_00000004 + 1,0,400);
  crt_memory_c_memset_FUN_005fde40(in_stack_00000004 + 0x65,0,0x28);
  return;
}


// Assembly code:
// 0043c070: PUSH EBX
//   Label: core_cloth.cpp_FUN_0043c070
// 0043c071: PUSH ESI
// 0043c072: PUSH EDI
// 0043c073: PUSH EBP
// 0043c074: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0043c078: MOV EDX,dword ptr [EDI]
// 0043c07a: XOR ESI,ESI
// 0043c07c: TEST EDX,EDX
// 0043c07e: JLE 0x0043c0bf
//   XREF to: 0043c0bf (CONDITIONAL_JUMP)
// 0043c080: MOV EBP,0x6185cc
//   XREF to: 006185cc (DATA)
// 0043c085: MOV EBX,EDI
// 0043c087: MOV dword ptr [0x02f0d944],0x5bd
//   Label: LAB_0043c087
//   XREF to: 02f0d944 (WRITE)
// 0043c091: MOV EAX,dword ptr [EBX + 0x194]
// 0043c097: MOV dword ptr [0x0067d20c],EBP
//   XREF to: 0067d20c (WRITE)
// 0043c09d: TEST EAX,EAX
// 0043c09f: JZ 0x0043c0b5
//   XREF to: 0043c0b5 (CONDITIONAL_JUMP)
// 0043c0a1: PUSH 0x0
// 0043c0a3: PUSH EAX
// 0043c0a4: CALL core_cloth.cpp_CallToUnknownSomethingFreeMem_FUN_00438c00
//   XREF to: 00438c00 (UNCONDITIONAL_CALL)
// 0043c0a9: ADD ESP,0x8
// 0043c0ac: PUSH EAX
// 0043c0ad: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 0043c0b2: ADD ESP,0x4
// 0043c0b5: INC ESI
//   Label: LAB_0043c0b5
// 0043c0b6: MOV ECX,dword ptr [EDI]
// 0043c0b8: ADD EBX,0x4
// 0043c0bb: CMP ESI,ECX
// 0043c0bd: JL 0x0043c087
//   XREF to: 0043c087 (CONDITIONAL_JUMP)
// 0043c0bf: PUSH 0x190
//   Label: LAB_0043c0bf
// 0043c0c4: PUSH 0x0
// 0043c0c6: LEA EAX,[EDI + 0x4]
// 0043c0c9: PUSH EAX
// 0043c0ca: MOV dword ptr [EDI],0x0
// 0043c0d0: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 0043c0d5: ADD ESP,0xc
// 0043c0d8: PUSH 0x28
// 0043c0da: PUSH 0x0
// 0043c0dc: ADD EDI,0x194
// 0043c0e2: PUSH EDI
// 0043c0e3: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 0043c0e8: ADD ESP,0xc
// 0043c0eb: POP EBP
// 0043c0ec: POP EDI
// 0043c0ed: POP ESI
// 0043c0ee: POP EBX
// 0043c0ef: RET
