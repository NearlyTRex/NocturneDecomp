// Name: core_cloth.cpp_FUN_0043e0a0
// Address: 0043e0a0
// Address Range: [[0043e0a0, 0043e0cf]]
// Convention: unknown
// Signature: undefined core_cloth.cpp_FUN_0043e0a0()
// Cross-references:
//   core_fileman.cpp_CDemonFileManager_addClothFileToExtractList_FUN_004be150 (004be150) at 004be1e2 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_models_s_00618ac9
// Function calls:
//   core_dmodel.cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00
//   crt_stdio.c_fprintf_FUN_005fe6d0

#include "nocturne.h"

/* Signature: undefined1 core_cloth.cpp_FUN_0043e0a0(undefined4 param_1, undefined4 param_2) */

void core_cloth_cpp_FUN_0043e0a0(void)

{
  undefined4 in_stack_00000004;
  CKeyFramedModel *in_stack_00000008;
  FILE *in_stack_0000000c;
  
  crt_stdio_c_fprintf_FUN_005fe6d0((FILE *)in_stack_00000008,"models\\%s\n",in_stack_00000004);
  core_dmodel_cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00
            (in_stack_00000008,in_stack_0000000c,0);
  return;
}


// Assembly code:
// 0043e0a0: PUSH EBX
//   Label: core_cloth.cpp_FUN_0043e0a0
// 0043e0a1: PUSH ESI
// 0043e0a2: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0043e0a6: PUSH EDX
// 0043e0a7: PUSH 0x618ac9
//   XREF to: 00618ac9 (DATA)
// 0043e0ac: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0043e0b0: PUSH ECX
// 0043e0b1: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0043e0b6: ADD ESP,0xc
// 0043e0b9: PUSH 0x0
// 0043e0bb: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0043e0bf: PUSH EBX
// 0043e0c0: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0043e0c4: PUSH ESI
// 0043e0c5: CALL core_dmodel.cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00
//   XREF to: 0047ed00 (UNCONDITIONAL_CALL)
// 0043e0ca: ADD ESP,0xc
// 0043e0cd: POP ESI
// 0043e0ce: POP EBX
// 0043e0cf: RET
