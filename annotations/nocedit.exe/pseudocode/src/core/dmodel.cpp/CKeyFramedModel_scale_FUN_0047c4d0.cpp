// Name: core_dmodel.cpp_CKeyFramedModel_scale_FUN_0047c4d0
// Address: 0047c4d0
// Address Range: [[0047c4d0, 0047c5e4]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_scale_FUN_0047c4d0(CKeyFramedModel * this_ptr, CVector3f * scale_factors)
// Cross-references:
//   core_dmodel.cpp_CKeyFramedModel_scaleUniform_FUN_0047c4a0 (0047c4a0) at 0047c4ba [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 (0047cbc0) at 0047e18e [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_0062057b = 0.5
// Function calls:
//   core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010
//   crt_math.c_floor_FUN_005feb90
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_CKeyFramedModel_scale_FUN_0047c4d0
          (CKeyFramedModel *this_ptr,CVector3f *scale_factors)

{
  undefined4 extraout_EAX;
  undefined4 extraout_EAX_00;
  undefined4 extraout_EAX_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  int iVar1;
  int iVar2;
  float10 in_ST0;
  float10 fVar3;
  float10 fVar4;
  double dVar5;
  
  iVar1 = 0;
  for (iVar2 = 0; iVar2 < this_ptr->frame_count * this_ptr->vertex_count; iVar2 = iVar2 + 1) {
    dVar5 = crt_math_c_floor_FUN_005feb90((double)in_ST0);
    fVar4 = (float10)dVar5;
    fVar3 = (float10)(double)CONCAT44(extraout_EDX,extraout_EAX);
    crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,extraout_EAX));
    *(int *)((int)this_ptr->vertex_list + iVar1) = (int)ROUND(fVar3);
    dVar5 = crt_math_c_floor_FUN_005feb90((double)fVar4);
    fVar4 = (float10)dVar5;
    fVar3 = (float10)(double)CONCAT44(extraout_EDX_00,extraout_EAX_00);
    crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX_00,extraout_EAX_00));
    *(int *)((int)this_ptr->vertex_list + iVar1 + 4) = (int)ROUND(fVar3);
    dVar5 = crt_math_c_floor_FUN_005feb90((double)fVar4);
    in_ST0 = (float10)dVar5;
    fVar4 = (float10)(double)CONCAT44(extraout_EDX_01,extraout_EAX_01);
    crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX_01,extraout_EAX_01));
    *(int *)((int)this_ptr->vertex_list + iVar1 + 8) = (int)ROUND(fVar4);
    iVar1 = iVar1 + 0xc;
  }
  core_dmodel_cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010(this_ptr);
  return;
}


// Assembly code:
// 0047c4d0: PUSH EBX
//   Label: core_dmodel.cpp_CKeyFramedModel_scale_FUN_0047c4d0
// 0047c4d1: PUSH ESI
// 0047c4d2: PUSH EDI
// 0047c4d3: PUSH EBP
// 0047c4d4: MOV EBP,ESP
// 0047c4d6: SUB ESP,0xc
// 0047c4d9: AND ESP,0xfffffff8
// 0047c4dc: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0047c4df: XOR EDI,EDI
// 0047c4e1: XOR EBX,EBX
// 0047c4e3: MOV EDX,dword ptr [ESI + 0x104]
//   Label: LAB_0047c4e3
// 0047c4e9: MOV EAX,dword ptr [ESI + 0x100]
// 0047c4ef: IMUL EAX,EDX
// 0047c4f2: CMP EDI,EAX
// 0047c4f4: JL 0x0047c506
//   XREF to: 0047c506 (CONDITIONAL_JUMP)
// 0047c4f6: PUSH ESI
// 0047c4f7: CALL core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010
//   XREF to: 00478010 (UNCONDITIONAL_CALL)
// 0047c4fc: ADD ESP,0x4
// 0047c4ff: MOV ESP,EBP
// 0047c501: POP EBP
// 0047c502: POP EDI
// 0047c503: POP ESI
// 0047c504: POP EBX
// 0047c505: RET
// 0047c506: MOV EAX,dword ptr [ESI + 0x10c]
//   Label: LAB_0047c506
// 0047c50c: FILD dword ptr [EBX + EAX*0x1]
// 0047c50f: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0047c512: FMUL float ptr [EAX]
// 0047c514: FADD double ptr [0x0062057b]
//   XREF to: 0062057b (READ)
// 0047c51a: SUB ESP,0x8
// 0047c51d: FSTP double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 0047c520: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 0047c525: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0047c529: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0047c52d: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 0047c531: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0047c536: ADD ESP,0x8
// 0047c539: MOV EDX,dword ptr [ESI + 0x10c]
// 0047c53f: FISTP dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (WRITE)
// 0047c543: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (READ)
// 0047c547: MOV dword ptr [EDX + EBX*0x1],EAX
// 0047c54a: MOV EAX,dword ptr [ESI + 0x10c]
// 0047c550: FILD dword ptr [EBX + EAX*0x1 + 0x4]
// 0047c554: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0047c557: FMUL float ptr [EAX + 0x4]
// 0047c55a: FADD double ptr [0x0062057b]
//   XREF to: 0062057b (READ)
// 0047c560: SUB ESP,0x8
// 0047c563: FSTP double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 0047c566: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 0047c56b: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0047c56f: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0047c573: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 0047c577: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0047c57c: MOV EAX,dword ptr [ESI + 0x10c]
// 0047c582: ADD ESP,0x8
// 0047c585: LEA EDX,[EAX + EBX*0x1]
// 0047c588: FISTP dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (WRITE)
// 0047c58c: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (READ)
// 0047c590: MOV dword ptr [EDX + 0x4],EAX
// 0047c593: MOV EAX,dword ptr [ESI + 0x10c]
// 0047c599: FILD dword ptr [EBX + EAX*0x1 + 0x8]
// 0047c59d: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0047c5a0: FMUL float ptr [EAX + 0x8]
// 0047c5a3: FADD double ptr [0x0062057b]
//   XREF to: 0062057b (READ)
// 0047c5a9: SUB ESP,0x8
// 0047c5ac: FSTP double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 0047c5af: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 0047c5b4: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0047c5b8: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0047c5bc: INC EDI
// 0047c5bd: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 0047c5c1: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0047c5c6: MOV EAX,dword ptr [ESI + 0x10c]
// 0047c5cc: ADD ESP,0x8
// 0047c5cf: LEA EDX,[EAX + EBX*0x1]
// 0047c5d2: FISTP dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (WRITE)
// 0047c5d6: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (READ)
// 0047c5da: ADD EBX,0xc
// 0047c5dd: MOV dword ptr [EDX + 0x8],EAX
// 0047c5e0: JMP 0x0047c4e3
//   XREF to: 0047c4e3 (UNCONDITIONAL_JUMP)
