// Name: core_dmodel.cpp_CKeyFramedModel_applyBias_FUN_0047c370
// Address: 0047c370
// Address Range: [[0047c370, 0047c46e]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_applyBias_FUN_0047c370(CKeyFramedModel * this_ptr, CVector3f * bias_offset)
// Cross-references:
//   core_dmodel.cpp_CKeyFramedModel_recenter_FUN_0047c220 (0047c220) at 0047c2b5 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 (0047cbc0) at 0047e11c [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_0062056b = 256
//   double DOUBLE_00620573 = 0.5
// Function calls:
//   core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010
//   crt_math.c_floor_FUN_005feb90
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_CKeyFramedModel_applyBias_FUN_0047c370
          (CKeyFramedModel *this_ptr,CVector3f *bias_offset)

{
  int *piVar1;
  undefined4 extraout_EAX;
  undefined4 extraout_EAX_00;
  undefined4 extraout_EAX_01;
  int extraout_ECX;
  int iVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  int iVar3;
  float10 in_ST0;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  double dVar7;
  
  dVar7 = crt_math_c_floor_FUN_005feb90((double)in_ST0);
  fVar6 = (float10)dVar7;
  fVar4 = (float10)(double)CONCAT44(extraout_EDX,extraout_EAX);
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,extraout_EAX));
  dVar7 = crt_math_c_floor_FUN_005feb90((double)fVar6);
  fVar6 = (float10)dVar7;
  fVar5 = (float10)(double)CONCAT44(extraout_EDX_00,extraout_EAX_00);
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX_00,extraout_EAX_00));
  crt_math_c_floor_FUN_005feb90((double)fVar6);
  fVar6 = (float10)(double)CONCAT44(extraout_EDX_01,extraout_EAX_01);
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX_01,extraout_EAX_01));
  iVar3 = 0;
  for (iVar2 = extraout_ECX; iVar2 < this_ptr->frame_count * this_ptr->vertex_count;
      iVar2 = iVar2 + 1) {
    piVar1 = (int *)(iVar3 + (int)this_ptr->vertex_list);
    *piVar1 = *piVar1 + (int)ROUND(fVar4);
    piVar1 = (int *)(iVar3 + 4 + (int)this_ptr->vertex_list);
    *piVar1 = *piVar1 + (int)ROUND(fVar5);
    *(int *)(iVar3 + 8 + (int)this_ptr->vertex_list) =
         *(int *)(iVar3 + 8 + (int)this_ptr->vertex_list) + (int)ROUND(fVar6);
    iVar3 = iVar3 + 0xc;
  }
  core_dmodel_cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010(this_ptr);
  return;
}


// Assembly code:
// 0047c370: PUSH EBX
//   Label: core_dmodel.cpp_CKeyFramedModel_applyBias_FUN_0047c370
// 0047c371: PUSH ESI
// 0047c372: PUSH EDI
// 0047c373: SUB ESP,0x14
// 0047c376: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 0047c37a: MOV ESI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 0047c37e: FLD float ptr [ESI]
// 0047c380: FMUL double ptr [0x0062056b]
//   XREF to: 0062056b (READ)
// 0047c386: FADD double ptr [0x00620573]
//   XREF to: 00620573 (READ)
// 0047c38c: SUB ESP,0x8
// 0047c38f: FSTP double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 0047c392: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 0047c397: FLD float ptr [ESI + 0x4]
// 0047c39a: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0047c39e: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0047c3a2: FMUL double ptr [0x0062056b]
//   XREF to: 0062056b (READ)
// 0047c3a8: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 0047c3ac: ADD ESP,0x8
// 0047c3af: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0047c3b4: FISTP dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (WRITE)
// 0047c3b8: FADD double ptr [0x00620573]
//   XREF to: 00620573 (READ)
// 0047c3be: SUB ESP,0x8
// 0047c3c1: FSTP double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 0047c3c4: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 0047c3c9: FLD float ptr [ESI + 0x8]
// 0047c3cc: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0047c3d0: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0047c3d4: FMUL double ptr [0x0062056b]
//   XREF to: 0062056b (READ)
// 0047c3da: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 0047c3de: ADD ESP,0x8
// 0047c3e1: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0047c3e6: FISTP dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (WRITE)
// 0047c3ea: FADD double ptr [0x00620573]
//   XREF to: 00620573 (READ)
// 0047c3f0: SUB ESP,0x8
// 0047c3f3: FSTP double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 0047c3f6: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 0047c3fb: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0047c3ff: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0047c403: XOR ECX,ECX
// 0047c405: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 0047c409: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0047c40e: ADD ESP,0x8
// 0047c411: XOR EDX,EDX
// 0047c413: FISTP dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x10] (WRITE)
// 0047c417: MOV ESI,dword ptr [EBX + 0x104]
//   Label: LAB_0047c417
// 0047c41d: MOV EAX,dword ptr [EBX + 0x100]
// 0047c423: IMUL EAX,ESI
// 0047c426: CMP ECX,EAX
// 0047c428: JGE 0x0047c45f
//   XREF to: 0047c45f (CONDITIONAL_JUMP)
// 0047c42a: MOV ESI,dword ptr [EBX + 0x10c]
// 0047c430: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 0047c434: ADD dword ptr [EDX + ESI*0x1],EAX
// 0047c437: MOV ESI,dword ptr [EBX + 0x10c]
// 0047c43d: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (READ)
// 0047c441: ADD dword ptr [EDX + ESI*0x1 + 0x4],EAX
// 0047c445: MOV ESI,dword ptr [EBX + 0x10c]
// 0047c44b: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x10] (READ)
// 0047c44f: MOV EDI,dword ptr [EDX + ESI*0x1 + 0x8]
// 0047c453: ADD EDX,0xc
// 0047c456: ADD EDI,EAX
// 0047c458: INC ECX
// 0047c459: MOV dword ptr [EDX + ESI*0x1 + -0x4],EDI
// 0047c45d: JMP 0x0047c417
//   XREF to: 0047c417 (UNCONDITIONAL_JUMP)
// 0047c45f: PUSH EBX
//   Label: LAB_0047c45f
// 0047c460: CALL core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010
//   XREF to: 00478010 (UNCONDITIONAL_CALL)
// 0047c465: ADD ESP,0x4
// 0047c468: ADD ESP,0x14
// 0047c46b: POP EDI
// 0047c46c: POP ESI
// 0047c46d: POP EBX
// 0047c46e: RET
