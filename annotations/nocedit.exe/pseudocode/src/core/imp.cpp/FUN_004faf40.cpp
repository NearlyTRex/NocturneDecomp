// Name: core_imp.cpp_FUN_004faf40
// Address: 004faf40
// Address Range: [[004faf40, 004fb0e9]]
// Convention: unknown
// Signature: undefined core_imp.cpp_FUN_004faf40()
// Globals:
//   undefined4 DAT_02db89f4
//   undefined4 DAT_02db8a08
//   undefined4 DAT_02db8a0c
//   undefined4 DAT_02db8a18
//   undefined4 DAT_02db8a20
// Function calls:
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb00

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_imp.cpp_FUN_004faf40(undefined4 param_1, undefined4 param_2)
    */

int core_imp_cpp_FUN_004faf40(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int in_stack_00000004;
  undefined4 *in_stack_00000008;
  
  iVar3 = 0;
  if (*(int *)(in_stack_00000004 + 0x2298 + *(int *)(in_stack_00000004 + 0xbef0) * 4) != 0) {
    puVar1 = (undefined4 *)core_skeleton_cpp_CDeformableModelInstance_FUN_0059fb00();
    if (in_stack_00000008 != puVar1) {
      *in_stack_00000008 = *puVar1;
      in_stack_00000008[1] = puVar1[1];
      in_stack_00000008[2] = puVar1[2];
    }
    iVar3 = 1;
  }
  if (*(int *)(in_stack_00000004 + 0x2298 + *(int *)(in_stack_00000004 + 0xbec8) * 4) != 0) {
    puVar1 = (undefined4 *)core_skeleton_cpp_CDeformableModelInstance_FUN_0059fb00();
    puVar2 = in_stack_00000008 + iVar3 * 3;
    if (puVar2 != puVar1) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
    }
    iVar3 = iVar3 + 1;
  }
  if (*(int *)(in_stack_00000004 + 0x2298 + *(int *)(in_stack_00000004 + 0xbed0) * 4) != 0) {
    puVar1 = (undefined4 *)core_skeleton_cpp_CDeformableModelInstance_FUN_0059fb00();
    puVar2 = in_stack_00000008 + iVar3 * 3;
    if (puVar2 != puVar1) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
    }
    iVar3 = iVar3 + 1;
  }
  if (*(int *)(in_stack_00000004 + 0x2298 + *(int *)(in_stack_00000004 + 0xbee8) * 4) != 0) {
    puVar1 = (undefined4 *)core_skeleton_cpp_CDeformableModelInstance_FUN_0059fb00();
    puVar2 = in_stack_00000008 + iVar3 * 3;
    if (puVar2 != puVar1) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
    }
    iVar3 = iVar3 + 1;
  }
  if (*(int *)(in_stack_00000004 + 0x2298 + *(int *)(in_stack_00000004 + 0xbeec) * 4) == 0) {
    return iVar3;
  }
  puVar1 = (undefined4 *)core_skeleton_cpp_CDeformableModelInstance_FUN_0059fb00();
  in_stack_00000008 = in_stack_00000008 + iVar3 * 3;
  if (in_stack_00000008 != puVar1) {
    *in_stack_00000008 = *puVar1;
    in_stack_00000008[1] = puVar1[1];
    in_stack_00000008[2] = puVar1[2];
  }
  return iVar3 + 1;
}


// Assembly code:
// 004faf40: PUSH EBX
//   Label: core_imp.cpp_FUN_004faf40
// 004faf41: PUSH ESI
// 004faf42: PUSH EDI
// 004faf43: SUB ESP,0x3c
// 004faf46: MOV ESI,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x4] (READ)
// 004faf4a: MOV EDI,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x8] (READ)
// 004faf4e: MOV EAX,dword ptr [ESI + 0xbef0]
// 004faf54: MOV EDX,dword ptr [ESI + EAX*0x4 + 0x2298]
// 004faf5b: XOR EBX,EBX
// 004faf5d: TEST EDX,EDX
// 004faf5f: JNZ 0x004fb06c
//   XREF to: 004fb06c (CONDITIONAL_JUMP)
// 004faf65: MOV EAX,dword ptr [ESI + 0xbec8]
//   Label: LAB_004faf65
// 004faf6b: CMP dword ptr [ESI + EAX*0x4 + 0x2298],0x0
// 004faf73: JZ 0x004fafb4
//   XREF to: 004fafb4 (CONDITIONAL_JUMP)
// 004faf75: MOV EAX,[0x02db8a08]
//   XREF to: 02db8a08 (READ)
// 004faf7a: PUSH EAX
// 004faf7b: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x3c] (DATA)
// 004faf7f: PUSH EAX
// 004faf80: LEA EAX,[ESI + 0x158]
// 004faf86: PUSH EAX
// 004faf87: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 004faf8c: MOV EDX,EAX
// 004faf8e: LEA EAX,[EBX*0x4 + 0x0]
// 004faf95: SUB EAX,EBX
// 004faf97: SHL EAX,0x2
// 004faf9a: ADD EAX,EDI
// 004faf9c: ADD ESP,0xc
// 004faf9f: CMP EAX,EDX
// 004fafa1: JZ 0x004fafb3
//   XREF to: 004fafb3 (CONDITIONAL_JUMP)
// 004fafa3: MOV ECX,dword ptr [EDX]
// 004fafa5: MOV dword ptr [EAX],ECX
// 004fafa7: MOV ECX,dword ptr [EDX + 0x4]
// 004fafaa: MOV dword ptr [EAX + 0x4],ECX
// 004fafad: MOV ECX,dword ptr [EDX + 0x8]
// 004fafb0: MOV dword ptr [EAX + 0x8],ECX
// 004fafb3: INC EBX
//   Label: LAB_004fafb3
// 004fafb4: MOV EAX,dword ptr [ESI + 0xbed0]
//   Label: LAB_004fafb4
// 004fafba: CMP dword ptr [ESI + EAX*0x4 + 0x2298],0x0
// 004fafc2: JZ 0x004fb004
//   XREF to: 004fb004 (CONDITIONAL_JUMP)
// 004fafc4: MOV ECX,dword ptr [0x02db8a0c]
//   XREF to: 02db8a0c (READ)
// 004fafca: PUSH ECX
// 004fafcb: LEA EAX,[ESP + 0x34]
//   XREF to: Stack[-0x18] (DATA)
// 004fafcf: PUSH EAX
// 004fafd0: LEA EAX,[ESI + 0x158]
// 004fafd6: PUSH EAX
// 004fafd7: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 004fafdc: MOV EDX,EAX
// 004fafde: LEA EAX,[EBX*0x4 + 0x0]
// 004fafe5: SUB EAX,EBX
// 004fafe7: SHL EAX,0x2
// 004fafea: ADD EAX,EDI
// 004fafec: ADD ESP,0xc
// 004fafef: CMP EAX,EDX
// 004faff1: JZ 0x004fb003
//   XREF to: 004fb003 (CONDITIONAL_JUMP)
// 004faff3: MOV ECX,dword ptr [EDX]
// 004faff5: MOV dword ptr [EAX],ECX
// 004faff7: MOV ECX,dword ptr [EDX + 0x4]
// 004faffa: MOV dword ptr [EAX + 0x4],ECX
// 004faffd: MOV ECX,dword ptr [EDX + 0x8]
// 004fb000: MOV dword ptr [EAX + 0x8],ECX
// 004fb003: INC EBX
//   Label: LAB_004fb003
// 004fb004: MOV EAX,dword ptr [ESI + 0xbee8]
//   Label: LAB_004fb004
// 004fb00a: CMP dword ptr [ESI + EAX*0x4 + 0x2298],0x0
// 004fb012: JZ 0x004fb053
//   XREF to: 004fb053 (CONDITIONAL_JUMP)
// 004fb014: MOV EAX,[0x02db8a18]
//   XREF to: 02db8a18 (READ)
// 004fb019: PUSH EAX
// 004fb01a: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x48] (DATA)
// 004fb01e: PUSH EAX
// 004fb01f: LEA EAX,[ESI + 0x158]
// 004fb025: PUSH EAX
// 004fb026: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 004fb02b: MOV EDX,EAX
// 004fb02d: LEA EAX,[EBX*0x4 + 0x0]
// 004fb034: SUB EAX,EBX
// 004fb036: SHL EAX,0x2
// 004fb039: ADD EAX,EDI
// 004fb03b: ADD ESP,0xc
// 004fb03e: CMP EAX,EDX
// 004fb040: JZ 0x004fb052
//   XREF to: 004fb052 (CONDITIONAL_JUMP)
// 004fb042: MOV ECX,dword ptr [EDX]
// 004fb044: MOV dword ptr [EAX],ECX
// 004fb046: MOV ECX,dword ptr [EDX + 0x4]
// 004fb049: MOV dword ptr [EAX + 0x4],ECX
// 004fb04c: MOV ECX,dword ptr [EDX + 0x8]
// 004fb04f: MOV dword ptr [EAX + 0x8],ECX
// 004fb052: INC EBX
//   Label: LAB_004fb052
// 004fb053: MOV EAX,dword ptr [ESI + 0xbeec]
//   Label: LAB_004fb053
// 004fb059: CMP dword ptr [ESI + EAX*0x4 + 0x2298],0x0
// 004fb061: JNZ 0x004fb0a1
//   XREF to: 004fb0a1 (CONDITIONAL_JUMP)
// 004fb063: MOV EAX,EBX
// 004fb065: ADD ESP,0x3c
// 004fb068: POP EDI
// 004fb069: POP ESI
// 004fb06a: POP EBX
// 004fb06b: RET
// 004fb06c: MOV ECX,dword ptr [0x02db89f4]
//   Label: LAB_004fb06c
//   XREF to: 02db89f4 (READ)
// 004fb072: PUSH ECX
// 004fb073: LEA EAX,[ESP + 0x1c]
//   XREF to: Stack[-0x30] (DATA)
// 004fb077: PUSH EAX
// 004fb078: LEA EAX,[ESI + 0x158]
// 004fb07e: PUSH EAX
// 004fb07f: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 004fb084: ADD ESP,0xc
// 004fb087: CMP EDI,EAX
// 004fb089: JZ 0x004fb09b
//   XREF to: 004fb09b (CONDITIONAL_JUMP)
// 004fb08b: MOV EDX,dword ptr [EAX]
// 004fb08d: MOV dword ptr [EDI],EDX
// 004fb08f: MOV EDX,dword ptr [EAX + 0x4]
// 004fb092: MOV dword ptr [EDI + 0x4],EDX
// 004fb095: MOV EDX,dword ptr [EAX + 0x8]
// 004fb098: MOV dword ptr [EDI + 0x8],EDX
// 004fb09b: INC EBX
//   Label: LAB_004fb09b
// 004fb09c: JMP 0x004faf65
//   XREF to: 004faf65 (UNCONDITIONAL_JUMP)
// 004fb0a1: MOV ECX,dword ptr [0x02db8a20]
//   Label: LAB_004fb0a1
//   XREF to: 02db8a20 (READ)
// 004fb0a7: PUSH ECX
// 004fb0a8: LEA EAX,[ESP + 0x28]
//   XREF to: Stack[-0x24] (DATA)
// 004fb0ac: PUSH EAX
// 004fb0ad: ADD ESI,0x158
// 004fb0b3: PUSH ESI
// 004fb0b4: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 004fb0b9: MOV EDX,EAX
// 004fb0bb: LEA EAX,[EBX*0x4 + 0x0]
// 004fb0c2: SUB EAX,EBX
// 004fb0c4: SHL EAX,0x2
// 004fb0c7: ADD EDI,EAX
// 004fb0c9: ADD ESP,0xc
// 004fb0cc: CMP EDI,EDX
// 004fb0ce: JZ 0x004fb0e0
//   XREF to: 004fb0e0 (CONDITIONAL_JUMP)
// 004fb0d0: MOV EAX,dword ptr [EDX]
// 004fb0d2: MOV dword ptr [EDI],EAX
// 004fb0d4: MOV EAX,dword ptr [EDX + 0x4]
// 004fb0d7: MOV dword ptr [EDI + 0x4],EAX
// 004fb0da: MOV EAX,dword ptr [EDX + 0x8]
// 004fb0dd: MOV dword ptr [EDI + 0x8],EAX
// 004fb0e0: INC EBX
//   Label: LAB_004fb0e0
// 004fb0e1: MOV EAX,EBX
// 004fb0e3: ADD ESP,0x3c
// 004fb0e6: POP EDI
// 004fb0e7: POP ESI
// 004fb0e8: POP EBX
// 004fb0e9: RET
