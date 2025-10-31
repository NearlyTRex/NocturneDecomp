// Name: shape_dsemodel.cpp_CDSEModel_scaleZ_FUN_0048fcc0
// Address: 0048fcc0
// Address Range: [[0048fcc0, 0048fd68]]
// Convention: __cdecl
// Signature: void shape_dsemodel.cpp_CDSEModel_scaleZ_FUN_0048fcc0(CDSEModel * this_ptr, float scale_factor)
// Cross-references:
//   shape_dsemodel.cpp_CDSEModel_fitToExistingBIN_FUN_0048fed0 (0048fed0) at 0048fff2 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl
shape_dsemodel_cpp_CDSEModel_scaleZ_FUN_0048fcc0(CDSEModel *this_ptr,float scale_factor)

{
  float fVar1;
  int local_20;
  float local_18;
  float local_14;
  
  local_18 = 999999.9;
  local_14 = -999999.9;
  for (local_20 = 0; local_20 < this_ptr->vertex_count; local_20 = local_20 + 1) {
    fVar1 = this_ptr->vertices[local_20].vertex.z;
    if (local_14 < fVar1) {
      local_14 = fVar1;
    }
    if (fVar1 < local_18) {
      local_18 = fVar1;
    }
  }
  for (local_20 = 0; local_20 < this_ptr->vertex_count; local_20 = local_20 + 1) {
    this_ptr->vertices[local_20].vertex.z =
         this_ptr->vertices[local_20].vertex.z * (scale_factor / (local_14 - local_18));
  }
  return;
}


// Assembly code:
// 0048fcc0: PUSH EBX
//   Label: shape_dsemodel.cpp_CDSEModel_scaleZ_FUN_0048fcc0
// 0048fcc1: PUSH ESI
// 0048fcc2: PUSH EDI
// 0048fcc3: PUSH EBP
// 0048fcc4: MOV EBP,ESP
// 0048fcc6: SUB ESP,0x60
// 0048fccc: MOV dword ptr [EBP + -0x8],0x497423fe
//   XREF to: Stack[-0x18] (WRITE)
// 0048fcd3: MOV dword ptr [EBP + -0x4],0xc97423fe
//   XREF to: Stack[-0x14] (WRITE)
// 0048fcda: MOV dword ptr [EBP + -0x10],0x0
//   XREF to: Stack[-0x20] (WRITE)
// 0048fce1: JMP 0x0048fce9
//   XREF to: 0048fce9 (UNCONDITIONAL_JUMP)
// 0048fce3: MOV EAX,dword ptr [EBP + -0x10]
//   Label: LAB_0048fce3
//   XREF to: Stack[-0x20] (READ)
// 0048fce6: INC dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ_WRITE)
// 0048fce9: MOV EAX,dword ptr [EBP + -0x10]
//   Label: LAB_0048fce9
//   XREF to: Stack[-0x20] (READ)
// 0048fcec: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048fcef: CMP EAX,dword ptr [EDX]
// 0048fcf1: JGE 0x0048fd24
//   XREF to: 0048fd24 (CONDITIONAL_JUMP)
// 0048fcf3: IMUL EAX,dword ptr [EBP + -0x10],0x14
//   XREF to: Stack[-0x20] (READ)
// 0048fcf7: ADD EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048fcfa: MOV EAX,dword ptr [EAX + 0xc]
// 0048fcfd: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0048fd00: FLD float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0048fd03: FCOMP float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0048fd06: FNSTSW AX
// 0048fd08: SAHF
// 0048fd09: JBE 0x0048fd11
//   XREF to: 0048fd11 (CONDITIONAL_JUMP)
// 0048fd0b: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0048fd0e: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0048fd11: FLD float ptr [EBP + -0xc]
//   Label: LAB_0048fd11
//   XREF to: Stack[-0x1c] (READ)
// 0048fd14: FCOMP float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0048fd17: FNSTSW AX
// 0048fd19: SAHF
// 0048fd1a: JNC 0x0048fd22
//   XREF to: 0048fd22 (CONDITIONAL_JUMP)
// 0048fd1c: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0048fd1f: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0048fd22: JMP 0x0048fce3
//   Label: LAB_0048fd22
//   XREF to: 0048fce3 (UNCONDITIONAL_JUMP)
// 0048fd24: FLD float ptr [EBP + -0x4]
//   Label: LAB_0048fd24
//   XREF to: Stack[-0x14] (READ)
// 0048fd27: FSUB float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0048fd2a: FDIVR float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0048fd2d: FSTP float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (WRITE)
// 0048fd30: MOV dword ptr [EBP + -0x10],0x0
//   XREF to: Stack[-0x20] (WRITE)
// 0048fd37: JMP 0x0048fd3f
//   XREF to: 0048fd3f (UNCONDITIONAL_JUMP)
// 0048fd39: MOV EAX,dword ptr [EBP + -0x10]
//   Label: LAB_0048fd39
//   XREF to: Stack[-0x20] (READ)
// 0048fd3c: INC dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ_WRITE)
// 0048fd3f: MOV EAX,dword ptr [EBP + -0x10]
//   Label: LAB_0048fd3f
//   XREF to: Stack[-0x20] (READ)
// 0048fd42: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048fd45: CMP EAX,dword ptr [EDX]
// 0048fd47: JGE 0x0048fd62
//   XREF to: 0048fd62 (CONDITIONAL_JUMP)
// 0048fd49: IMUL EAX,dword ptr [EBP + -0x10],0x14
//   XREF to: Stack[-0x20] (READ)
// 0048fd4d: ADD EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048fd50: FLD float ptr [EAX + 0xc]
// 0048fd53: FMUL float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0048fd56: IMUL EAX,dword ptr [EBP + -0x10],0x14
//   XREF to: Stack[-0x20] (READ)
// 0048fd5a: ADD EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048fd5d: FSTP float ptr [EAX + 0xc]
// 0048fd60: JMP 0x0048fd39
//   XREF to: 0048fd39 (UNCONDITIONAL_JUMP)
// 0048fd62: MOV ESP,EBP
//   Label: LAB_0048fd62
// 0048fd64: POP EBP
// 0048fd65: POP EDI
// 0048fd66: POP ESI
// 0048fd67: POP EBX
// 0048fd68: RET
