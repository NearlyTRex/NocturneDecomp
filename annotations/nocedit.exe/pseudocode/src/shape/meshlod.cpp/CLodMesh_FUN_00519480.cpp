// Name: shape_meshlod.cpp_CLodMesh_FUN_00519480
// Address: 00519480
// Address Range: [[00519480, 0051967b]]
// Convention: __cdecl
// Signature: int shape_meshlod.cpp_CLodMesh_FUN_00519480(CLodMesh * this_ptr)
// Cross-references:
//   shape_meshlod.cpp_CLodMesh_FUN_00518910 (00518910) at 0051897a [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_006379e5 = 0.900000000000000

#include "nocturne.h"

int __cdecl shape_meshlod_cpp_CLodMesh_FUN_00519480(CLodMesh *this_ptr)

{
  SLodVert *pSVar1;
  int iVar2;
  int iVar3;
  SLodVert *pSVar4;
  float fVar5;
  SLodEdge *pSVar6;
  SLodVert *pSVar7;
  int iVar8;
  int in_stack_00000008;
  int in_stack_0000000c;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  
  pSVar7 = this_ptr->vertex_data;
  pSVar1 = pSVar7 + in_stack_0000000c;
  iVar8 = this_ptr->edges_ptr[in_stack_00000008].vertex_idx_1;
  iVar2 = this_ptr->edges_ptr[in_stack_00000008].vertex_idx_2;
  local_24 = *(float *)pSVar7[iVar8].field0_0x0 - *(float *)pSVar7[iVar2].field0_0x0;
  local_20 = *(float *)(pSVar7[iVar8].field0_0x0 + 4) - *(float *)(pSVar7[iVar2].field0_0x0 + 4);
  local_1c = *(float *)(pSVar7[iVar8].field0_0x0 + 8) - *(float *)(pSVar7[iVar2].field0_0x0 + 8);
  fVar5 = SQRT(local_1c * local_1c + local_24 * local_24 + local_20 * local_20);
  if (0.0 < fVar5) {
    fVar5 = 1.0 / fVar5;
    local_24 = local_24 * fVar5;
    local_20 = local_20 * fVar5;
    local_1c = local_1c * fVar5;
  }
  else {
    local_20 = 0.0;
    local_24 = 0.0;
    local_1c = 0.0;
  }
  iVar8 = 0;
  pSVar7 = pSVar1;
  if (0 < pSVar1->adjacent_edge_count) {
    do {
      if (pSVar7->adjacent_edge_indices[0] != in_stack_00000008) {
        pSVar6 = this_ptr->edges_ptr + pSVar7->adjacent_edge_indices[0];
        if ((1 < pSVar6->collapse_viability) || (1 < pSVar6->collapse_curvature)) {
          return 1;
        }
        if ((pSVar6->collapse_viability != 0) || (pSVar6->collapse_curvature != 0)) {
          iVar2 = pSVar6->vertex_idx_2;
          iVar3 = pSVar6->vertex_idx_1;
          pSVar4 = this_ptr->vertex_data;
          local_30 = *(float *)pSVar4[iVar3].field0_0x0 - *(float *)pSVar4[iVar2].field0_0x0;
          local_2c = *(float *)(pSVar4[iVar3].field0_0x0 + 4) -
                     *(float *)(pSVar4[iVar2].field0_0x0 + 4);
          local_28 = *(float *)(pSVar4[iVar3].field0_0x0 + 8) -
                     *(float *)(pSVar4[iVar2].field0_0x0 + 8);
          fVar5 = SQRT(local_28 * local_28 + local_30 * local_30 + local_2c * local_2c);
          if (fVar5 <= 0.0) {
            local_2c = 0.0;
            local_30 = 0.0;
            local_28 = 0.0;
          }
          else {
            fVar5 = 1.0 / fVar5;
            local_30 = local_30 * fVar5;
            local_2c = local_2c * fVar5;
            local_28 = local_28 * fVar5;
          }
          if (ABS(local_1c * local_28 + local_24 * local_30 + local_20 * local_2c) <
              (float)DOUBLE_006379e5) {
            return 1;
          }
        }
      }
      iVar8 = iVar8 + 1;
      pSVar7 = (SLodVert *)(pSVar7->field0_0x0 + 4);
    } while (iVar8 < pSVar1->adjacent_edge_count);
  }
  return 0;
}


// Assembly code:
// 00519480: PUSH EBX
//   Label: shape_meshlod.cpp_CLodMesh_FUN_00519480
// 00519481: PUSH ESI
// 00519482: PUSH EDI
// 00519483: PUSH EBP
// 00519484: MOV EBP,ESP
// 00519486: SUB ESP,0x28
// 00519489: AND ESP,0xfffffff8
// 0051948c: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0051948f: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00519492: SHL EAX,0x4
// 00519495: MOV EDX,EAX
// 00519497: SHL EAX,0x4
// 0051949a: MOV EBX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0051949d: SUB EAX,EDX
// 0051949f: IMUL EDX,EBX,0x4c4
// 005194a5: MOV ECX,dword ptr [EDI + 0x48]
// 005194a8: ADD ECX,EAX
// 005194aa: MOV EAX,dword ptr [EDI + 0x4]
// 005194ad: LEA EBX,[EAX + EDX*0x1]
// 005194b0: MOV dword ptr [ESP + 0x24],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 005194b4: MOV EBX,dword ptr [ECX]
// 005194b6: MOV ESI,dword ptr [ECX + 0x4]
// 005194b9: IMUL ECX,EBX,0x4c4
// 005194bf: IMUL EDX,ESI,0x4c4
// 005194c5: FLD float ptr [ECX + EAX*0x1]
// 005194c8: FSUB float ptr [EDX + EAX*0x1]
// 005194cb: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x24] (WRITE)
// 005194cf: FLD float ptr [ECX + EAX*0x1 + 0x4]
// 005194d3: FSUB float ptr [EDX + EAX*0x1 + 0x4]
// 005194d7: FST float ptr [ESP + 0x18]
//   XREF to: Stack[-0x20] (WRITE)
// 005194db: FMUL float ptr [ESP + 0x18]
//   XREF to: Stack[-0x20] (READ)
// 005194df: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x24] (READ)
// 005194e3: FMUL ST0
// 005194e5: FLD float ptr [ECX + EAX*0x1 + 0x8]
// 005194e9: FSUB float ptr [EDX + EAX*0x1 + 0x8]
// 005194ed: FXCH
// 005194ef: FADDP ST2,ST0
// 005194f1: FST float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x1c] (WRITE)
// 005194f5: FMUL float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x1c] (READ)
// 005194f9: FADDP
// 005194fb: FSQRT
// 005194fd: FST float ptr [ESP + 0x4]
//   XREF to: Stack[-0x34] (WRITE)
// 00519501: FLDZ
// 00519503: FCOMPP
// 00519505: FNSTSW AX
// 00519507: SAHF
// 00519508: JC 0x00519552
//   XREF to: 00519552 (CONDITIONAL_JUMP)
// 0051950a: XOR ESI,ESI
// 0051950c: MOV dword ptr [ESP + 0x18],ESI
//   XREF to: Stack[-0x20] (WRITE)
// 00519510: MOV dword ptr [ESP + 0x14],ESI
//   XREF to: Stack[-0x24] (WRITE)
// 00519514: MOV dword ptr [ESP + 0x1c],ESI
//   XREF to: Stack[-0x1c] (WRITE)
// 00519518: MOV EAX,dword ptr [ESP + 0x24]
//   Label: LAB_00519518
//   XREF to: Stack[-0x14] (READ)
// 0051951c: MOV ECX,dword ptr [EAX + 0x3f8]
// 00519522: XOR EBX,EBX
// 00519524: TEST ECX,ECX
// 00519526: JLE 0x00519549
//   XREF to: 00519549 (CONDITIONAL_JUMP)
// 00519528: MOV ECX,EAX
// 0051952a: MOV EDX,dword ptr [EBP + 0x18]
//   Label: LAB_0051952a
//   XREF to: Stack[0x8] (READ)
// 0051952d: MOV EAX,dword ptr [ECX + 0x3fc]
// 00519533: CMP EAX,EDX
// 00519535: JNZ 0x0051957e
//   XREF to: 0051957e (CONDITIONAL_JUMP)
// 00519537: MOV EAX,dword ptr [ESP + 0x24]
//   Label: LAB_00519537
//   XREF to: Stack[-0x14] (READ)
// 0051953b: INC EBX
// 0051953c: MOV ESI,dword ptr [EAX + 0x3f8]
// 00519542: ADD ECX,0x4
// 00519545: CMP EBX,ESI
// 00519547: JL 0x0051952a
//   XREF to: 0051952a (CONDITIONAL_JUMP)
// 00519549: XOR EAX,EAX
//   Label: LAB_00519549
// 0051954b: MOV ESP,EBP
// 0051954d: POP EBP
// 0051954e: POP EDI
// 0051954f: POP ESI
// 00519550: POP EBX
// 00519551: RET
// 00519552: FLD1
//   Label: LAB_00519552
// 00519554: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x24] (READ)
// 00519558: FXCH
// 0051955a: FDIV float ptr [ESP + 0x4]
//   XREF to: Stack[-0x34] (READ)
// 0051955e: FXCH
// 00519560: FMUL ST1
// 00519562: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x20] (READ)
// 00519566: FMUL ST2
// 00519568: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x1c] (READ)
// 0051956c: FMULP ST3
// 0051956e: FXCH
// 00519570: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x24] (WRITE)
// 00519574: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x20] (WRITE)
// 00519578: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x1c] (WRITE)
// 0051957c: JMP 0x00519518
//   XREF to: 00519518 (UNCONDITIONAL_JUMP)
// 0051957e: IMUL EAX,EAX,0xf0
//   Label: LAB_0051957e
// 00519584: MOV EDX,dword ptr [EDI + 0x48]
// 00519587: ADD EAX,EDX
// 00519589: MOV ESI,dword ptr [EAX + 0x18]
// 0051958c: CMP ESI,0x1
// 0051958f: JG 0x00519653
//   XREF to: 00519653 (CONDITIONAL_JUMP)
// 00519595: MOV EDX,dword ptr [EAX + 0x1c]
// 00519598: CMP EDX,0x1
// 0051959b: JG 0x00519653
//   XREF to: 00519653 (CONDITIONAL_JUMP)
// 005195a1: TEST ESI,ESI
// 005195a3: JZ 0x0051965f
//   XREF to: 0051965f (CONDITIONAL_JUMP)
// 005195a9: IMUL EDX,dword ptr [EAX + 0x4],0x4c4
//   Label: LAB_005195a9
// 005195b0: IMUL EAX,dword ptr [EAX],0x4c4
// 005195b6: MOV ESI,dword ptr [EDI + 0x4]
// 005195b9: FLD float ptr [ESI + EAX*0x1]
// 005195bc: FSUB float ptr [EDX + ESI*0x1]
// 005195bf: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x30] (WRITE)
// 005195c3: FLD float ptr [ESI + EAX*0x1 + 0x4]
// 005195c7: FSUB float ptr [EDX + ESI*0x1 + 0x4]
// 005195cb: FST float ptr [ESP + 0xc]
//   XREF to: Stack[-0x2c] (WRITE)
// 005195cf: FMUL float ptr [ESP + 0xc]
//   XREF to: Stack[-0x2c] (READ)
// 005195d3: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x30] (READ)
// 005195d7: FMUL ST0
// 005195d9: FLD float ptr [ESI + EAX*0x1 + 0x8]
// 005195dd: FSUB float ptr [EDX + ESI*0x1 + 0x8]
// 005195e1: FXCH
// 005195e3: FADDP ST2,ST0
// 005195e5: FST float ptr [ESP + 0x10]
//   XREF to: Stack[-0x28] (WRITE)
// 005195e9: FMUL float ptr [ESP + 0x10]
//   XREF to: Stack[-0x28] (READ)
// 005195ed: FADDP
// 005195ef: FSQRT
// 005195f1: FST float ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 005195f4: FLDZ
// 005195f6: FCOMPP
// 005195f8: FNSTSW AX
// 005195fa: SAHF
// 005195fb: JNC 0x0051966c
//   XREF to: 0051966c (CONDITIONAL_JUMP)
// 005195fd: FLD1
// 005195ff: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x30] (READ)
// 00519603: FXCH
// 00519605: FDIV float ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 00519608: FXCH
// 0051960a: FMUL ST1
// 0051960c: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x2c] (READ)
// 00519610: FMUL ST2
// 00519612: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x28] (READ)
// 00519616: FMULP ST3
// 00519618: FXCH
// 0051961a: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x30] (WRITE)
// 0051961e: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x2c] (WRITE)
// 00519622: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x28] (WRITE)
// 00519626: FLD float ptr [ESP + 0x18]
//   Label: LAB_00519626
//   XREF to: Stack[-0x20] (READ)
// 0051962a: FMUL float ptr [ESP + 0xc]
//   XREF to: Stack[-0x2c] (READ)
// 0051962e: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x24] (READ)
// 00519632: FMUL float ptr [ESP + 0x8]
//   XREF to: Stack[-0x30] (READ)
// 00519636: FADDP
// 00519638: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x1c] (READ)
// 0051963c: FMUL float ptr [ESP + 0x10]
//   XREF to: Stack[-0x28] (READ)
// 00519640: FADDP
// 00519642: FABS
// 00519644: FCOMP double ptr [0x006379e5]
//   XREF to: 006379e5 (READ)
// 0051964a: FNSTSW AX
// 0051964c: SAHF
// 0051964d: JNC 0x00519537
//   XREF to: 00519537 (CONDITIONAL_JUMP)
// 00519653: MOV EAX,0x1
//   Label: LAB_00519653
// 00519658: MOV ESP,EBP
// 0051965a: POP EBP
// 0051965b: POP EDI
// 0051965c: POP ESI
// 0051965d: POP EBX
// 0051965e: RET
// 0051965f: TEST EDX,EDX
//   Label: LAB_0051965f
// 00519661: JNZ 0x005195a9
//   XREF to: 005195a9 (CONDITIONAL_JUMP)
// 00519667: JMP 0x00519537
//   XREF to: 00519537 (UNCONDITIONAL_JUMP)
// 0051966c: XOR EAX,EAX
//   Label: LAB_0051966c
// 0051966e: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00519672: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 00519676: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0051967a: JMP 0x00519626
//   XREF to: 00519626 (UNCONDITIONAL_JUMP)
