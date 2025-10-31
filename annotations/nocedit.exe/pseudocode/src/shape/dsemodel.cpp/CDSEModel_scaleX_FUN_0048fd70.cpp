// Name: shape_dsemodel.cpp_CDSEModel_scaleX_FUN_0048fd70
// Address: 0048fd70
// Address Range: [[0048fd70, 0048fe18]]
// Convention: __cdecl
// Signature: void shape_dsemodel.cpp_CDSEModel_scaleX_FUN_0048fd70(CDSEModel * this_ptr, float scale_factor)
// Cross-references:
//   shape_dsemodel.cpp_CDSEModel_fitToExistingBIN_FUN_0048fed0 (0048fed0) at 0048ffc8 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl
shape_dsemodel_cpp_CDSEModel_scaleX_FUN_0048fd70(CDSEModel *this_ptr,float scale_factor)

{
  float fVar1;
  int local_20;
  float local_18;
  float local_14;
  
  local_18 = 999999.9;
  local_14 = -999999.9;
  for (local_20 = 0; local_20 < this_ptr->vertex_count; local_20 = local_20 + 1) {
    fVar1 = this_ptr->vertices[local_20].vertex.x;
    if (local_14 < fVar1) {
      local_14 = fVar1;
    }
    if (fVar1 < local_18) {
      local_18 = fVar1;
    }
  }
  for (local_20 = 0; local_20 < this_ptr->vertex_count; local_20 = local_20 + 1) {
    this_ptr->vertices[local_20].vertex.x =
         this_ptr->vertices[local_20].vertex.x * (scale_factor / (local_14 - local_18));
  }
  return;
}


// Assembly code:
// 0048fd70: PUSH EBX
//   Label: shape_dsemodel.cpp_CDSEModel_scaleX_FUN_0048fd70
// 0048fd71: PUSH ESI
// 0048fd72: PUSH EDI
// 0048fd73: PUSH EBP
// 0048fd74: MOV EBP,ESP
// 0048fd76: SUB ESP,0x60
// 0048fd7c: MOV dword ptr [EBP + -0x8],0x497423fe
//   XREF to: Stack[-0x18] (WRITE)
// 0048fd83: MOV dword ptr [EBP + -0x4],0xc97423fe
//   XREF to: Stack[-0x14] (WRITE)
// 0048fd8a: MOV dword ptr [EBP + -0x10],0x0
//   XREF to: Stack[-0x20] (WRITE)
// 0048fd91: JMP 0x0048fd99
//   XREF to: 0048fd99 (UNCONDITIONAL_JUMP)
// 0048fd93: MOV EAX,dword ptr [EBP + -0x10]
//   Label: LAB_0048fd93
//   XREF to: Stack[-0x20] (READ)
// 0048fd96: INC dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ_WRITE)
// 0048fd99: MOV EAX,dword ptr [EBP + -0x10]
//   Label: LAB_0048fd99
//   XREF to: Stack[-0x20] (READ)
// 0048fd9c: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048fd9f: CMP EAX,dword ptr [EDX]
// 0048fda1: JGE 0x0048fdd4
//   XREF to: 0048fdd4 (CONDITIONAL_JUMP)
// 0048fda3: IMUL EAX,dword ptr [EBP + -0x10],0x14
//   XREF to: Stack[-0x20] (READ)
// 0048fda7: ADD EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048fdaa: MOV EAX,dword ptr [EAX + 0x4]
// 0048fdad: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0048fdb0: FLD float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0048fdb3: FCOMP float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0048fdb6: FNSTSW AX
// 0048fdb8: SAHF
// 0048fdb9: JBE 0x0048fdc1
//   XREF to: 0048fdc1 (CONDITIONAL_JUMP)
// 0048fdbb: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0048fdbe: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0048fdc1: FLD float ptr [EBP + -0xc]
//   Label: LAB_0048fdc1
//   XREF to: Stack[-0x1c] (READ)
// 0048fdc4: FCOMP float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0048fdc7: FNSTSW AX
// 0048fdc9: SAHF
// 0048fdca: JNC 0x0048fdd2
//   XREF to: 0048fdd2 (CONDITIONAL_JUMP)
// 0048fdcc: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0048fdcf: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0048fdd2: JMP 0x0048fd93
//   Label: LAB_0048fdd2
//   XREF to: 0048fd93 (UNCONDITIONAL_JUMP)
// 0048fdd4: FLD float ptr [EBP + -0x4]
//   Label: LAB_0048fdd4
//   XREF to: Stack[-0x14] (READ)
// 0048fdd7: FSUB float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0048fdda: FDIVR float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0048fddd: FSTP float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (WRITE)
// 0048fde0: MOV dword ptr [EBP + -0x10],0x0
//   XREF to: Stack[-0x20] (WRITE)
// 0048fde7: JMP 0x0048fdef
//   XREF to: 0048fdef (UNCONDITIONAL_JUMP)
// 0048fde9: MOV EAX,dword ptr [EBP + -0x10]
//   Label: LAB_0048fde9
//   XREF to: Stack[-0x20] (READ)
// 0048fdec: INC dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ_WRITE)
// 0048fdef: MOV EAX,dword ptr [EBP + -0x10]
//   Label: LAB_0048fdef
//   XREF to: Stack[-0x20] (READ)
// 0048fdf2: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048fdf5: CMP EAX,dword ptr [EDX]
// 0048fdf7: JGE 0x0048fe12
//   XREF to: 0048fe12 (CONDITIONAL_JUMP)
// 0048fdf9: IMUL EAX,dword ptr [EBP + -0x10],0x14
//   XREF to: Stack[-0x20] (READ)
// 0048fdfd: ADD EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048fe00: FLD float ptr [EAX + 0x4]
// 0048fe03: FMUL float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0048fe06: IMUL EAX,dword ptr [EBP + -0x10],0x14
//   XREF to: Stack[-0x20] (READ)
// 0048fe0a: ADD EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048fe0d: FSTP float ptr [EAX + 0x4]
// 0048fe10: JMP 0x0048fde9
//   XREF to: 0048fde9 (UNCONDITIONAL_JUMP)
// 0048fe12: MOV ESP,EBP
//   Label: LAB_0048fe12
// 0048fe14: POP EBP
// 0048fe15: POP EDI
// 0048fe16: POP ESI
// 0048fe17: POP EBX
// 0048fe18: RET
