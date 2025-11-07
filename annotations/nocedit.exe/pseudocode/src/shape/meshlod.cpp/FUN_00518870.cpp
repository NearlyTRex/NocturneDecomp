// Name: shape_meshlod.cpp_FUN_00518870
// Address: 00518870
// Address Range: [[00518870, 0051890e]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_00518870()
// Cross-references:
//   shape_meshlod.cpp_CLodMesh_FUN_00518910 (00518910) at 00518de7 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_createOrigSamplePoints_FUN_00517000 (00517000) at 005170e0 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051a400 (0051a400) at 0051a65c [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051a6b0 (0051a6b0) at 0051a8ac [UNCONDITIONAL_CALL]
// Globals:
//   float FLOAT_00637919 = 3
//   float FLOAT_0063791d = 0.3333333

#include "nocturne.h"

float * shape_meshlod_cpp_FUN_00518870(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int in_stack_00000004;
  float *in_stack_00000008;
  int in_stack_0000000c;
  
  iVar10 = *(int *)(in_stack_0000000c + 0x18) * 0x4c4;
  iVar11 = *(int *)(in_stack_0000000c + 0x10) * 0x4c4;
  iVar9 = *(int *)(in_stack_0000000c + 0x14) * 0x4c4;
  iVar7 = *(int *)(in_stack_00000004 + 4);
  fVar1 = *(float *)(iVar11 + 4 + iVar7);
  fVar2 = *(float *)(iVar9 + 4 + iVar7);
  fVar3 = *(float *)(iVar11 + 8 + iVar7);
  fVar4 = *(float *)(iVar9 + 8 + iVar7);
  fVar5 = *(float *)(iVar10 + 4 + iVar7);
  fVar6 = *(float *)(iVar10 + 8 + iVar7);
  *in_stack_00000008 =
       (*(float *)(iVar11 + iVar7) + *(float *)(iVar9 + iVar7) + *(float *)(iVar10 + iVar7)) /
       FLOAT_00637919;
  fVar8 = FLOAT_0063791d;
  in_stack_00000008[1] = (fVar1 + fVar2 + fVar5) * FLOAT_0063791d;
  in_stack_00000008[2] = fVar8 * (fVar3 + fVar4 + fVar6);
  return in_stack_00000008;
}


// Assembly code:
// 00518870: PUSH EBX
//   Label: shape_meshlod.cpp_FUN_00518870
// 00518871: PUSH ESI
// 00518872: PUSH EDI
// 00518873: PUSH EBP
// 00518874: SUB ESP,0x18
// 00518877: MOV EBX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x8] (READ)
// 0051887b: MOV ESI,dword ptr [ESP + 0x34]
//   XREF to: Stack[0xc] (READ)
// 0051887f: IMUL EDX,dword ptr [ESI + 0x18],0x4c4
// 00518886: MOV EBP,dword ptr [ESI + 0x10]
// 00518889: MOV EDI,dword ptr [ESI + 0x14]
// 0051888c: IMUL ESI,EBP,0x4c4
// 00518892: IMUL ECX,EDI,0x4c4
// 00518898: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 0051889c: MOV EAX,dword ptr [EAX + 0x4]
// 0051889f: FLD float ptr [ESI + EAX*0x1]
// 005188a2: FADD float ptr [ECX + EAX*0x1]
// 005188a5: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (WRITE)
// 005188a9: FLD float ptr [ESI + EAX*0x1 + 0x4]
// 005188ad: FADD float ptr [ECX + EAX*0x1 + 0x4]
// 005188b1: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (WRITE)
// 005188b5: FLD float ptr [ESI + EAX*0x1 + 0x8]
// 005188b9: FADD float ptr [ECX + EAX*0x1 + 0x8]
// 005188bd: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (READ)
// 005188c1: FXCH
// 005188c3: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x14] (WRITE)
// 005188c7: FADD float ptr [EDX + EAX*0x1]
// 005188ca: FST float ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 005188cd: FDIV float ptr [0x00637919]
//   XREF to: 00637919 (READ)
// 005188d3: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 005188d7: FADD float ptr [EDX + EAX*0x1 + 0x4]
// 005188db: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x14] (READ)
// 005188df: FXCH
// 005188e1: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x24] (WRITE)
// 005188e5: FADD float ptr [EDX + EAX*0x1 + 0x8]
// 005188e9: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (WRITE)
// 005188ed: FSTP float ptr [EBX]
// 005188ef: FLD float ptr [0x0063791d]
//   XREF to: 0063791d (READ)
// 005188f5: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x24] (READ)
// 005188f9: FMUL ST1
// 005188fb: FSTP float ptr [EBX + 0x4]
// 005188fe: FMUL float ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 00518902: MOV EAX,EBX
// 00518904: FSTP float ptr [EBX + 0x8]
// 00518907: ADD ESP,0x18
// 0051890a: POP EBP
// 0051890b: POP EDI
// 0051890c: POP ESI
// 0051890d: POP EBX
// 0051890e: RET
