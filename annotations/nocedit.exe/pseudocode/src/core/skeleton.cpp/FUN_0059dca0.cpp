// Name: core_skeleton.cpp_FUN_0059dca0
// Address: 0059dca0
// Address Range: [[0059dca0, 0059dd5e]]
// Convention: unknown
// Signature: undefined core_skeleton.cpp_FUN_0059dca0()
// Cross-references:
//   core_actor.cpp_CDemonActor_rayIntersect_FUN_00409470 (00409470) at 004097f5 [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: undefined1 core_skeleton.cpp_FUN_0059dca0(undefined4 param_1, undefined4 param_2,
   undefined4 param_3) */

int core_skeleton_cpp_FUN_0059dca0(void)

{
  float *pfVar1;
  byte *pbVar2;
  int iVar3;
  ushort *puVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  BADSPACEBASE *in_ESP;
  byte *pbVar9;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  float local_1a4 [100];
  ushort *local_14;
  
  iVar6 = 0;
  do {
    iVar3 = iVar6 + 4;
    *(undefined4 *)((int)local_1a4 + iVar6) = 0;
    iVar6 = iVar3;
  } while (iVar3 != 400);
  in_stack_00000004 = in_stack_00000008 * 4 + in_stack_00000004;
  puVar4 = (ushort *)(*(int *)(in_stack_00000004 + 0x7c) + in_stack_0000000c * 0x12);
  local_14 = puVar4 + 3;
  do {
    pbVar9 = (byte *)(*(int *)(in_stack_00000004 + 0x40) + (uint)*puVar4 * 0x34);
    pbVar5 = pbVar9;
    pbVar7 = pbVar9;
    for (iVar6 = 0; iVar6 < (int)(uint)*pbVar9; iVar6 = iVar6 + 1) {
      pfVar1 = (float *)(pbVar7 + 4);
      pbVar2 = pbVar5 + 1;
      pbVar7 = pbVar7 + 4;
      pbVar5 = pbVar5 + 1;
      local_1a4[*pbVar2] = *pfVar1 + local_1a4[*pbVar2];
    }
    puVar4 = puVar4 + 1;
  } while (puVar4 != local_14);
  iVar8 = 1;
  iVar3 = 4;
  iVar6 = 0;
  do {
    if (local_1a4[iVar6] < *(float *)((int)local_1a4 + iVar3)) {
      iVar6 = iVar8;
    }
    iVar8 = iVar8 + 1;
    iVar3 = iVar3 + 4;
  } while (iVar8 < 100);
  return iVar6;
}


// Assembly code:
// 0059dca0: PUSH EBX
//   Label: core_skeleton.cpp_FUN_0059dca0
// 0059dca1: PUSH ESI
// 0059dca2: PUSH EDI
// 0059dca3: PUSH EBP
// 0059dca4: SUB ESP,0x194
// 0059dcaa: XOR EAX,EAX
// 0059dcac: ADD EAX,0x4
//   Label: LAB_0059dcac
// 0059dcaf: XOR EDX,EDX
// 0059dcb1: MOV dword ptr [ESP + EAX*0x1 + -0x4],EDX
//   XREF to: Stack[-0x1a4] (DATA)
// 0059dcb5: CMP EAX,0x190
// 0059dcba: JNZ 0x0059dcac
//   XREF to: 0059dcac (CONDITIONAL_JUMP)
// 0059dcbc: MOV EBP,dword ptr [ESP + 0x1ac]
//   XREF to: Stack[0x8] (READ)
// 0059dcc3: MOV ECX,dword ptr [ESP + 0x1a8]
//   XREF to: Stack[0x4] (READ)
// 0059dcca: MOV EDX,dword ptr [ESP + 0x1b0]
//   XREF to: Stack[0xc] (READ)
// 0059dcd1: SHL EBP,0x2
// 0059dcd4: LEA EAX,[EDX*0x8 + 0x0]
// 0059dcdb: ADD EBP,ECX
// 0059dcdd: ADD EDX,EAX
// 0059dcdf: MOV EAX,dword ptr [EBP + 0x7c]
// 0059dce2: ADD EDX,EDX
// 0059dce4: ADD EAX,EDX
// 0059dce6: MOV EDI,EAX
// 0059dce8: ADD EAX,0x6
// 0059dceb: MOV dword ptr [ESP + 0x190],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0059dcf2: XOR EAX,EAX
//   Label: LAB_0059dcf2
// 0059dcf4: MOV AX,word ptr [EDI]
// 0059dcf7: IMUL EAX,EAX,0x34
// 0059dcfa: MOV ESI,dword ptr [EBP + 0x40]
// 0059dcfd: ADD ESI,EAX
// 0059dcff: XOR ECX,ECX
// 0059dd01: MOV EDX,ESI
// 0059dd03: MOV EAX,ESI
// 0059dd05: XOR EBX,EBX
//   Label: LAB_0059dd05
// 0059dd07: MOV BL,byte ptr [ESI]
// 0059dd09: CMP ECX,EBX
// 0059dd0b: JL 0x0059dd4a
//   XREF to: 0059dd4a (CONDITIONAL_JUMP)
// 0059dd0d: MOV EBX,dword ptr [ESP + 0x190]
//   XREF to: Stack[-0x14] (READ)
// 0059dd14: ADD EDI,0x2
// 0059dd17: CMP EDI,EBX
// 0059dd19: JNZ 0x0059dcf2
//   XREF to: 0059dcf2 (CONDITIONAL_JUMP)
// 0059dd1b: MOV EBX,0x1
// 0059dd20: MOV EDX,0x4
// 0059dd25: XOR ECX,ECX
// 0059dd27: FLD float ptr [ESP + EDX*0x1]
//   Label: LAB_0059dd27
// 0059dd2a: FCOMP float ptr [ESP + ECX*0x4]
//   XREF to: Stack[-0x1a4] (DATA)
// 0059dd2d: FNSTSW AX
// 0059dd2f: SAHF
// 0059dd30: JBE 0x0059dd34
//   XREF to: 0059dd34 (CONDITIONAL_JUMP)
// 0059dd32: MOV ECX,EBX
// 0059dd34: INC EBX
//   Label: LAB_0059dd34
// 0059dd35: ADD EDX,0x4
// 0059dd38: CMP EBX,0x64
// 0059dd3b: JL 0x0059dd27
//   XREF to: 0059dd27 (CONDITIONAL_JUMP)
// 0059dd3d: MOV EAX,ECX
// 0059dd3f: ADD ESP,0x194
// 0059dd45: POP EBP
// 0059dd46: POP EDI
// 0059dd47: POP ESI
// 0059dd48: POP EBX
// 0059dd49: RET
// 0059dd4a: XOR EBX,EBX
//   Label: LAB_0059dd4a
// 0059dd4c: FLD float ptr [EDX + 0x4]
// 0059dd4f: MOV BL,byte ptr [EAX + 0x1]
// 0059dd52: ADD EDX,0x4
// 0059dd55: INC EAX
// 0059dd56: FADD float ptr [ESP + EBX*0x4]
// 0059dd59: INC ECX
// 0059dd5a: FSTP float ptr [ESP + EBX*0x4]
// 0059dd5d: JMP 0x0059dd05
//   XREF to: 0059dd05 (UNCONDITIONAL_JUMP)
