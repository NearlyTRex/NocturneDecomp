// Name: shape_dsemodel.cpp_CDSEModel_scaleY_FUN_0048fe20
// Address: 0048fe20
// Address Range: [[0048fe20, 0048fec8]]
// Convention: __cdecl
// Signature: void shape_dsemodel.cpp_CDSEModel_scaleY_FUN_0048fe20(CDSEModel * this_ptr, float scale_factor)
// Cross-references:
//   shape_dsemodel.cpp_CDSEModel_fitToExistingBIN_FUN_0048fed0 (0048fed0) at 0048ffdd [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl
shape_dsemodel_cpp_CDSEModel_scaleY_FUN_0048fe20(CDSEModel *this_ptr,float scale_factor)

{
  float fVar1;
  int local_20;
  float local_18;
  float local_14;
  
  local_18 = 999999.9;
  local_14 = -999999.9;
  for (local_20 = 0; local_20 < this_ptr->vertex_count; local_20 = local_20 + 1) {
    fVar1 = this_ptr->vertices[local_20].vertex.y;
    if (local_14 < fVar1) {
      local_14 = fVar1;
    }
    if (fVar1 < local_18) {
      local_18 = fVar1;
    }
  }
  for (local_20 = 0; local_20 < this_ptr->vertex_count; local_20 = local_20 + 1) {
    this_ptr->vertices[local_20].vertex.y =
         this_ptr->vertices[local_20].vertex.y * (scale_factor / (local_14 - local_18));
  }
  return;
}


// Assembly code:
// 0048fe20: PUSH EBX
//   Label: shape_dsemodel.cpp_CDSEModel_scaleY_FUN_0048fe20
// 0048fe21: PUSH ESI
// 0048fe22: PUSH EDI
// 0048fe23: PUSH EBP
// 0048fe24: MOV EBP,ESP
// 0048fe26: SUB ESP,0x60
// 0048fe2c: MOV dword ptr [EBP + -0x8],0x497423fe
//   XREF to: Stack[-0x18] (WRITE)
// 0048fe33: MOV dword ptr [EBP + -0x4],0xc97423fe
//   XREF to: Stack[-0x14] (WRITE)
// 0048fe3a: MOV dword ptr [EBP + -0x10],0x0
//   XREF to: Stack[-0x20] (WRITE)
// 0048fe41: JMP 0x0048fe49
//   XREF to: 0048fe49 (UNCONDITIONAL_JUMP)
// 0048fe43: MOV EAX,dword ptr [EBP + -0x10]
//   Label: LAB_0048fe43
//   XREF to: Stack[-0x20] (READ)
// 0048fe46: INC dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ_WRITE)
// 0048fe49: MOV EAX,dword ptr [EBP + -0x10]
//   Label: LAB_0048fe49
//   XREF to: Stack[-0x20] (READ)
// 0048fe4c: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048fe4f: CMP EAX,dword ptr [EDX]
// 0048fe51: JGE 0x0048fe84
//   XREF to: 0048fe84 (CONDITIONAL_JUMP)
// 0048fe53: IMUL EAX,dword ptr [EBP + -0x10],0x14
//   XREF to: Stack[-0x20] (READ)
// 0048fe57: ADD EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048fe5a: MOV EAX,dword ptr [EAX + 0x8]
// 0048fe5d: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0048fe60: FLD float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0048fe63: FCOMP float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0048fe66: FNSTSW AX
// 0048fe68: SAHF
// 0048fe69: JBE 0x0048fe71
//   XREF to: 0048fe71 (CONDITIONAL_JUMP)
// 0048fe6b: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0048fe6e: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0048fe71: FLD float ptr [EBP + -0xc]
//   Label: LAB_0048fe71
//   XREF to: Stack[-0x1c] (READ)
// 0048fe74: FCOMP float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0048fe77: FNSTSW AX
// 0048fe79: SAHF
// 0048fe7a: JNC 0x0048fe82
//   XREF to: 0048fe82 (CONDITIONAL_JUMP)
// 0048fe7c: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0048fe7f: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0048fe82: JMP 0x0048fe43
//   Label: LAB_0048fe82
//   XREF to: 0048fe43 (UNCONDITIONAL_JUMP)
// 0048fe84: FLD float ptr [EBP + -0x4]
//   Label: LAB_0048fe84
//   XREF to: Stack[-0x14] (READ)
// 0048fe87: FSUB float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0048fe8a: FDIVR float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0048fe8d: FSTP float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (WRITE)
// 0048fe90: MOV dword ptr [EBP + -0x10],0x0
//   XREF to: Stack[-0x20] (WRITE)
// 0048fe97: JMP 0x0048fe9f
//   XREF to: 0048fe9f (UNCONDITIONAL_JUMP)
// 0048fe99: MOV EAX,dword ptr [EBP + -0x10]
//   Label: LAB_0048fe99
//   XREF to: Stack[-0x20] (READ)
// 0048fe9c: INC dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ_WRITE)
// 0048fe9f: MOV EAX,dword ptr [EBP + -0x10]
//   Label: LAB_0048fe9f
//   XREF to: Stack[-0x20] (READ)
// 0048fea2: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048fea5: CMP EAX,dword ptr [EDX]
// 0048fea7: JGE 0x0048fec2
//   XREF to: 0048fec2 (CONDITIONAL_JUMP)
// 0048fea9: IMUL EAX,dword ptr [EBP + -0x10],0x14
//   XREF to: Stack[-0x20] (READ)
// 0048fead: ADD EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048feb0: FLD float ptr [EAX + 0x8]
// 0048feb3: FMUL float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0048feb6: IMUL EAX,dword ptr [EBP + -0x10],0x14
//   XREF to: Stack[-0x20] (READ)
// 0048feba: ADD EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048febd: FSTP float ptr [EAX + 0x8]
// 0048fec0: JMP 0x0048fe99
//   XREF to: 0048fe99 (UNCONDITIONAL_JUMP)
// 0048fec2: MOV ESP,EBP
//   Label: LAB_0048fec2
// 0048fec4: POP EBP
// 0048fec5: POP EDI
// 0048fec6: POP ESI
// 0048fec7: POP EBX
// 0048fec8: RET
