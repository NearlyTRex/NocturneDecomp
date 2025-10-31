// Name: core_dmodel.cpp_CKeyFramedModel_applyVertexBias_FUN_0047c2d0
// Address: 0047c2d0
// Address Range: [[0047c2d0, 0047c36b]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_applyVertexBias_FUN_0047c2d0(CKeyFramedModel * this_ptr, int frame_index)
// Cross-references:
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 (0047cbc0) at 0047deb3 [UNCONDITIONAL_CALL]
// Globals:
//   double g_BiasMultiplier = 256
//   double g_BiasOffset = 0.5
// Function calls:
//   core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010
//   crt_math.c_floor_FUN_005feb90
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_CKeyFramedModel_applyVertexBias_FUN_0047c2d0
          (CKeyFramedModel *this_ptr,int frame_index)

{
  uint extraout_EAX;
  int extraout_ECX;
  int iVar1;
  undefined4 extraout_EDX;
  int iVar2;
  float10 in_ST0;
  float10 fVar3;
  double dVar4;
  
  core_dmodel_cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010(this_ptr);
  crt_math_c_floor_FUN_005feb90((double)in_ST0);
  fVar3 = -(float10)(double)CONCAT44(extraout_EDX,extraout_EAX);
  dVar4 = crt_math_c_round_FUN_005fe6b0((double)(ulonglong)extraout_EAX);
  iVar2 = (int)((ulonglong)dVar4 >> 0x20);
  for (iVar1 = extraout_ECX; iVar1 < this_ptr->frame_count * this_ptr->vertex_count;
      iVar1 = iVar1 + 1) {
    *(int *)(iVar2 + 4 + (int)this_ptr->vertex_list) =
         *(int *)(iVar2 + 4 + (int)this_ptr->vertex_list) + (int)ROUND(fVar3);
    iVar2 = iVar2 + 0xc;
  }
  core_dmodel_cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010(this_ptr);
  return;
}


// Assembly code:
// 0047c2d0: PUSH EBX
//   Label: core_dmodel.cpp_CKeyFramedModel_applyVertexBias_FUN_0047c2d0
// 0047c2d1: PUSH ESI
// 0047c2d2: PUSH EDI
// 0047c2d3: SUB ESP,0xc
// 0047c2d6: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0047c2da: PUSH EBX
// 0047c2db: CALL core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010
//   XREF to: 00478010 (UNCONDITIONAL_CALL)
// 0047c2e0: ADD ESP,0x4
// 0047c2e3: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 0047c2e7: LEA EAX,[EDX*0x4 + 0x0]
// 0047c2ee: SUB EAX,EDX
// 0047c2f0: MOV EDX,dword ptr [EBX + 0x5690]
// 0047c2f6: FLD float ptr [EDX + EAX*0x8 + 0x4]
// 0047c2fa: FMUL double ptr [0x0062055b]
//   XREF to: 0062055b (READ)
// 0047c300: FADD double ptr [0x00620563]
//   XREF to: 00620563 (READ)
// 0047c306: SUB ESP,0x8
// 0047c309: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 0047c30c: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 0047c311: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0047c315: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 0047c319: XOR ECX,ECX
// 0047c31b: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (READ)
// 0047c31f: FCHS
// 0047c321: XOR EDX,EDX
// 0047c323: ADD ESP,0x8
// 0047c326: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0047c32b: FISTP dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x10] (WRITE)
// 0047c32f: MOV ESI,dword ptr [EBX + 0x104]
//   Label: LAB_0047c32f
// 0047c335: MOV EAX,dword ptr [EBX + 0x100]
// 0047c33b: IMUL EAX,ESI
// 0047c33e: CMP ECX,EAX
// 0047c340: JGE 0x0047c35c
//   XREF to: 0047c35c (CONDITIONAL_JUMP)
// 0047c342: MOV ESI,dword ptr [EBX + 0x10c]
// 0047c348: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x10] (READ)
// 0047c34c: MOV EDI,dword ptr [EDX + ESI*0x1 + 0x4]
// 0047c350: ADD EDX,0xc
// 0047c353: ADD EDI,EAX
// 0047c355: INC ECX
// 0047c356: MOV dword ptr [EDX + ESI*0x1 + -0x8],EDI
// 0047c35a: JMP 0x0047c32f
//   XREF to: 0047c32f (UNCONDITIONAL_JUMP)
// 0047c35c: PUSH EBX
//   Label: LAB_0047c35c
// 0047c35d: CALL core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010
//   XREF to: 00478010 (UNCONDITIONAL_CALL)
// 0047c362: ADD ESP,0x4
// 0047c365: ADD ESP,0xc
// 0047c368: POP EDI
// 0047c369: POP ESI
// 0047c36a: POP EBX
// 0047c36b: RET
