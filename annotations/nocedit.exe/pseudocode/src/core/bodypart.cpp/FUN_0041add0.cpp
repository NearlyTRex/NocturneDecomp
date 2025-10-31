// Name: core_bodypart.cpp_FUN_0041add0
// Address: 0041add0
// Address Range: [[0041add0, 0041ae4b]]
// Convention: unknown
// Signature: undefined core_bodypart.cpp_FUN_0041add0()
// Cross-references:
//   core_charactr.cpp_CCharacter_FUN_0042bd30 (0042bd30) at 0042bee1 [UNCONDITIONAL_CALL]
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
//   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0

#include "nocturne.h"

/* Signature: undefined1 actors_other_bodypart.cpp_FUN_0041add0(undefined4 param_1, undefined4
   param_2, undefined4 param_3, undefined4 param_4) */

void core_bodypart_cpp_FUN_0041add0(void)

{
  int iVar1;
  undefined4 *puVar2;
  int in_stack_00000004;
  char *in_stack_00000008;
  undefined4 *in_stack_0000000c;
  undefined4 *in_stack_00000010;
  
  iVar1 = *(int *)(in_stack_00000004 + 0x28c);
  if (iVar1 < 3) {
    puVar2 = (undefined4 *)(in_stack_00000004 + 0x290 + iVar1 * 0x194);
    *(int *)(in_stack_00000004 + 0x28c) = iVar1 + 1;
    if (puVar2 != in_stack_0000000c) {
      *puVar2 = *in_stack_0000000c;
      puVar2[1] = in_stack_0000000c[1];
      puVar2[2] = in_stack_0000000c[2];
    }
    if (puVar2 + 3 != in_stack_00000010) {
      puVar2[3] = *in_stack_00000010;
      puVar2[4] = in_stack_00000010[1];
      puVar2[5] = in_stack_00000010[2];
    }
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
              ((CKeyFramedModelInstance *)(puVar2 + 6),in_stack_00000008);
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
              ((CKeyFramedModelInstance *)(puVar2 + 6));
  }
  return;
}


// Assembly code:
// 0041add0: PUSH EBX
//   Label: core_bodypart.cpp_FUN_0041add0
// 0041add1: PUSH ESI
// 0041add2: PUSH EBP
// 0041add3: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0041add7: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 0041addb: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x10] (READ)
// 0041addf: MOV ESI,dword ptr [EDX + 0x28c]
// 0041ade5: CMP ESI,0x3
// 0041ade8: JGE 0x0041ae36
//   XREF to: 0041ae36 (CONDITIONAL_JUMP)
// 0041adea: MOV EBP,ESI
// 0041adec: IMUL ESI,ESI,0x194
// 0041adf2: LEA EAX,[EDX + 0x290]
// 0041adf8: INC EBP
// 0041adf9: ADD EAX,ESI
// 0041adfb: MOV dword ptr [EDX + 0x28c],EBP
// 0041ae01: CMP EAX,ECX
// 0041ae03: JNZ 0x0041ae3a
//   XREF to: 0041ae3a (CONDITIONAL_JUMP)
// 0041ae05: LEA EDX,[EAX + 0xc]
//   Label: LAB_0041ae05
// 0041ae08: CMP EDX,EBX
// 0041ae0a: JZ 0x0041ae1c
//   XREF to: 0041ae1c (CONDITIONAL_JUMP)
// 0041ae0c: MOV ECX,dword ptr [EBX]
// 0041ae0e: MOV dword ptr [EDX],ECX
// 0041ae10: MOV ECX,dword ptr [EBX + 0x4]
// 0041ae13: MOV dword ptr [EDX + 0x4],ECX
// 0041ae16: MOV ECX,dword ptr [EBX + 0x8]
// 0041ae19: MOV dword ptr [EDX + 0x8],ECX
// 0041ae1c: MOV EDX,dword ptr [ESP + 0x14]
//   Label: LAB_0041ae1c
//   XREF to: Stack[0x8] (READ)
// 0041ae20: PUSH EDX
// 0041ae21: LEA EBX,[EAX + 0x18]
// 0041ae24: PUSH EBX
// 0041ae25: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 0041ae2a: ADD ESP,0x8
// 0041ae2d: PUSH EBX
// 0041ae2e: CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
//   XREF to: 00478d60 (UNCONDITIONAL_CALL)
// 0041ae33: ADD ESP,0x4
// 0041ae36: POP EBP
//   Label: LAB_0041ae36
// 0041ae37: POP ESI
// 0041ae38: POP EBX
// 0041ae39: RET
// 0041ae3a: MOV EDX,dword ptr [ECX]
//   Label: LAB_0041ae3a
// 0041ae3c: MOV dword ptr [EAX],EDX
// 0041ae3e: MOV EDX,dword ptr [ECX + 0x4]
// 0041ae41: MOV dword ptr [EAX + 0x4],EDX
// 0041ae44: MOV EDX,dword ptr [ECX + 0x8]
// 0041ae47: MOV dword ptr [EAX + 0x8],EDX
// 0041ae4a: JMP 0x0041ae05
//   XREF to: 0041ae05 (UNCONDITIONAL_JUMP)
