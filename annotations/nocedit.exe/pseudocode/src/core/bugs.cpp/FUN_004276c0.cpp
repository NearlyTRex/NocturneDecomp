// Name: core_bugs.cpp_FUN_004276c0
// Address: 004276c0
// Address Range: [[004276c0, 004277db]]
// Convention: unknown
// Signature: undefined core_bugs.cpp_FUN_004276c0()
// Cross-references:
//   core_bugs.cpp_FUN_00425cc0 (00425cc0) at 00425fb0 [UNCONDITIONAL_CALL]
//   core_bugs.cpp_FUN_00425fe0 (00425fe0) at 00426207 [UNCONDITIONAL_CALL]
//   core_bugs.cpp_FUN_004278d0 (004278d0) at 00427946 [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_bugs.cpp_FUN_004276c0(undefined4 param_1, undefined4 param_2)
    */

void core_bugs_cpp_FUN_004276c0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int in_stack_00000004;
  float *in_stack_00000008;
  
  fVar1 = *in_stack_00000008 - *(float *)(in_stack_00000004 + 0x20);
  fVar2 = in_stack_00000008[1] - *(float *)(in_stack_00000004 + 0x24);
  fVar3 = in_stack_00000008[2] - *(float *)(in_stack_00000004 + 0x28);
  *(float *)(in_stack_00000004 + 0x20) = *in_stack_00000008;
  *(float *)(in_stack_00000004 + 0x24) = in_stack_00000008[1];
  *(float *)(in_stack_00000004 + 0x28) = in_stack_00000008[2];
  iVar7 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0xbec0)) {
    pfVar4 = (float *)(in_stack_00000004 + 0xbecc);
    do {
      *pfVar4 = *pfVar4 - fVar1;
      pfVar4[1] = pfVar4[1] - fVar2;
      pfVar4[2] = pfVar4[2] - fVar3;
      pfVar4[6] = pfVar4[6] - fVar1;
      pfVar4[7] = pfVar4[7] - fVar2;
      iVar7 = iVar7 + 1;
      pfVar4[8] = pfVar4[8] - fVar3;
      pfVar4 = pfVar4 + 0x10;
    } while (iVar7 < *(int *)(in_stack_00000004 + 0xbec0));
  }
  *(float *)(in_stack_00000004 + 0x199cc) = *(float *)(in_stack_00000004 + 0x199cc) - fVar1;
  *(float *)(in_stack_00000004 + 0x199d0) = *(float *)(in_stack_00000004 + 0x199d0) - fVar2;
  *(float *)(in_stack_00000004 + 0x199d4) = *(float *)(in_stack_00000004 + 0x199d4) - fVar3;
  iVar8 = 0;
  *(float *)(in_stack_00000004 + 0x199d8) = *(float *)(in_stack_00000004 + 0x199d8) - fVar1;
  *(float *)(in_stack_00000004 + 0x199dc) = *(float *)(in_stack_00000004 + 0x199dc) - fVar2;
  *(float *)(in_stack_00000004 + 0x199e0) = *(float *)(in_stack_00000004 + 0x199e0) - fVar3;
  iVar7 = in_stack_00000004;
  do {
    iVar7 = iVar7 + 0x30;
    iVar5 = iVar8 * 0x30 + in_stack_00000004;
    do {
      iVar6 = iVar5 + 4;
      *(float *)(iVar5 + 0x128b8) = *(float *)(iVar5 + 0x128b8) - fVar2;
      iVar5 = iVar6;
    } while (iVar6 != iVar7);
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0xc);
  return;
}


// Assembly code:
// 004276c0: PUSH EBX
//   Label: core_bugs.cpp_FUN_004276c0
// 004276c1: PUSH ESI
// 004276c2: SUB ESP,0xc
// 004276c5: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 004276c9: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 004276cd: LEA EAX,[ESI + 0x20]
// 004276d0: FLD float ptr [EDX]
// 004276d2: FSUB float ptr [EAX]
// 004276d4: FSTP float ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 004276d7: FLD float ptr [EDX + 0x4]
// 004276da: FSUB float ptr [EAX + 0x4]
// 004276dd: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x10] (WRITE)
// 004276e1: FLD float ptr [EDX + 0x8]
// 004276e4: FSUB float ptr [EAX + 0x8]
// 004276e7: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0xc] (WRITE)
// 004276eb: MOV ECX,dword ptr [EDX]
// 004276ed: MOV dword ptr [EAX],ECX
// 004276ef: MOV ECX,dword ptr [EDX + 0x4]
// 004276f2: MOV dword ptr [EAX + 0x4],ECX
// 004276f5: MOV ECX,dword ptr [EDX + 0x8]
// 004276f8: MOV dword ptr [EAX + 0x8],ECX
// 004276fb: MOV EDX,dword ptr [ESI + 0xbec0]
// 00427701: XOR ECX,ECX
// 00427703: TEST EDX,EDX
// 00427705: JLE 0x00427760
//   XREF to: 00427760 (CONDITIONAL_JUMP)
// 00427707: LEA EAX,[ESI + 0xbecc]
// 0042770d: FLD float ptr [EAX]
//   Label: LAB_0042770d
// 0042770f: FSUB float ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 00427712: FLD float ptr [EAX + 0x4]
// 00427715: FXCH
// 00427717: FSTP float ptr [EAX]
// 00427719: FSUB float ptr [ESP + 0x4]
//   XREF to: Stack[-0x10] (READ)
// 0042771d: FLD float ptr [EAX + 0x8]
// 00427720: FXCH
// 00427722: FSTP float ptr [EAX + 0x4]
// 00427725: FSUB float ptr [ESP + 0x8]
//   XREF to: Stack[-0xc] (READ)
// 00427729: FLD float ptr [EAX + 0x18]
// 0042772c: FXCH
// 0042772e: FSTP float ptr [EAX + 0x8]
// 00427731: FSUB float ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 00427734: FLD float ptr [EAX + 0x1c]
// 00427737: FXCH
// 00427739: FSTP float ptr [EAX + 0x18]
// 0042773c: FSUB float ptr [ESP + 0x4]
//   XREF to: Stack[-0x10] (READ)
// 00427740: FLD float ptr [EAX + 0x20]
// 00427743: FXCH
// 00427745: FSTP float ptr [EAX + 0x1c]
// 00427748: FSUB float ptr [ESP + 0x8]
//   XREF to: Stack[-0xc] (READ)
// 0042774c: INC ECX
// 0042774d: FSTP float ptr [EAX + 0x20]
// 00427750: MOV EBX,dword ptr [ESI + 0xbec0]
// 00427756: ADD EAX,0x40
// 00427759: CMP ECX,EBX
// 0042775b: JL 0x0042770d
//   XREF to: 0042770d (CONDITIONAL_JUMP)
// 0042775d: LEA EAX,[EAX]
// 00427760: LEA EAX,[ESI + 0x199cc]
//   Label: LAB_00427760
// 00427766: FLD float ptr [EAX]
// 00427768: FSUB float ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 0042776b: FLD float ptr [EAX + 0x4]
// 0042776e: FXCH
// 00427770: FSTP float ptr [EAX]
// 00427772: FSUB float ptr [ESP + 0x4]
//   XREF to: Stack[-0x10] (READ)
// 00427776: FLD float ptr [EAX + 0x8]
// 00427779: FXCH
// 0042777b: FSTP float ptr [EAX + 0x4]
// 0042777e: FSUB float ptr [ESP + 0x8]
//   XREF to: Stack[-0xc] (READ)
// 00427782: FSTP float ptr [EAX + 0x8]
// 00427785: LEA EAX,[ESI + 0x199d8]
// 0042778b: XOR ECX,ECX
// 0042778d: FLD float ptr [EAX]
// 0042778f: FSUB float ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 00427792: FLD float ptr [EAX + 0x4]
// 00427795: FXCH
// 00427797: FSTP float ptr [EAX]
// 00427799: FSUB float ptr [ESP + 0x4]
//   XREF to: Stack[-0x10] (READ)
// 0042779d: FLD float ptr [EAX + 0x8]
// 004277a0: FXCH
// 004277a2: FSTP float ptr [EAX + 0x4]
// 004277a5: FSUB float ptr [ESP + 0x8]
//   XREF to: Stack[-0xc] (READ)
// 004277a9: LEA EBX,[ESI + 0x30]
// 004277ac: FSTP float ptr [EAX + 0x8]
// 004277af: IMUL EAX,ECX,0x30
//   Label: LAB_004277af
// 004277b2: MOV EDX,EBX
// 004277b4: ADD EAX,ESI
// 004277b6: FLD float ptr [EAX + 0x128b8]
//   Label: LAB_004277b6
// 004277bc: FSUB float ptr [ESP + 0x4]
//   XREF to: Stack[-0x10] (READ)
// 004277c0: ADD EAX,0x4
// 004277c3: FSTP float ptr [EAX + 0x128b4]
// 004277c9: CMP EAX,EDX
// 004277cb: JNZ 0x004277b6
//   XREF to: 004277b6 (CONDITIONAL_JUMP)
// 004277cd: INC ECX
// 004277ce: ADD EBX,0x30
// 004277d1: CMP ECX,0xc
// 004277d4: JL 0x004277af
//   XREF to: 004277af (CONDITIONAL_JUMP)
// 004277d6: ADD ESP,0xc
// 004277d9: POP ESI
// 004277da: POP EBX
// 004277db: RET
