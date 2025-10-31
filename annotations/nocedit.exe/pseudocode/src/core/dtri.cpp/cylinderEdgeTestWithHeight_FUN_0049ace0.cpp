// Name: core_dtri.cpp_cylinderEdgeTestWithHeight_FUN_0049ace0
// Address: 0049ace0
// Address Range: [[0049ace0, 0049ad76]]
// Convention: __cdecl
// Signature: void core_dtri.cpp_cylinderEdgeTestWithHeight_FUN_0049ace0(SIntersectXZCylinder * cylinder, CVector3f * vertex1, CVector3f * vertex2)
// Cross-references:
//   core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80 (0049ad80) at 0049b16d [UNCONDITIONAL_CALL]
// Function calls:
//   core_dtri.cpp_cylinderEdgeIntersection_FUN_0049aa00

#include "nocturne.h"

void __cdecl
core_dtri_cpp_cylinderEdgeTestWithHeight_FUN_0049ace0
          (SIntersectXZCylinder *cylinder,CVector3f *vertex1,CVector3f *vertex2)

{
  float fVar1;
  int iVar2;
  
  cylinder->edge_x1 = vertex1->x;
  cylinder->edge_z1 = vertex1->z;
  cylinder->edge_x2 = vertex2->x;
  cylinder->edge_z2 = vertex2->z;
  iVar2 = core_dtri_cpp_cylinderEdgeIntersection_FUN_0049aa00(cylinder);
  if (((iVar2 != 0) &&
      (fVar1 = (vertex2->y - vertex1->y) * cylinder->param_clamped + vertex1->y,
      cylinder->top_y < fVar1)) && (fVar1 < cylinder->bottom_y)) {
    cylinder->flags = 0;
    cylinder->max_distance = cylinder->param_t;
    cylinder->push_x =
         (cylinder->normal_z * cylinder->param_t + cylinder->center_z) - cylinder->intersect_z;
    cylinder->push_z =
         (cylinder->normal_x * cylinder->param_t + cylinder->center_x) - cylinder->intersect_x;
    return;
  }
  return;
}


// Assembly code:
// 0049ace0: PUSH EBX
//   Label: core_dtri.cpp_cylinderEdgeTestWithHeight_FUN_0049ace0
// 0049ace1: PUSH ESI
// 0049ace2: PUSH EDI
// 0049ace3: SUB ESP,0x4
// 0049ace6: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0049acea: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0049acee: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0049acf2: FLD float ptr [ESI]
// 0049acf4: PUSH EBX
// 0049acf5: FSTP float ptr [EBX + 0x3c]
// 0049acf8: MOV EAX,dword ptr [ESI + 0x8]
// 0049acfb: MOV dword ptr [EBX + 0x40],EAX
// 0049acfe: MOV EAX,dword ptr [EDI]
// 0049ad00: MOV dword ptr [EBX + 0x44],EAX
// 0049ad03: MOV EAX,dword ptr [EDI + 0x8]
// 0049ad06: MOV dword ptr [EBX + 0x48],EAX
// 0049ad09: CALL core_dtri.cpp_cylinderEdgeIntersection_FUN_0049aa00
//   XREF to: 0049aa00 (UNCONDITIONAL_CALL)
// 0049ad0e: ADD ESP,0x4
// 0049ad11: TEST EAX,EAX
// 0049ad13: JZ 0x0049ad37
//   XREF to: 0049ad37 (CONDITIONAL_JUMP)
// 0049ad15: FLD float ptr [EDI + 0x4]
// 0049ad18: FSUB float ptr [ESI + 0x4]
// 0049ad1b: FMUL float ptr [EBX + 0x50]
// 0049ad1e: FADD float ptr [ESI + 0x4]
// 0049ad21: FST float ptr [ESP]
//   XREF to: Stack[-0x10] (DATA)
// 0049ad24: FCOMP float ptr [EBX + 0x28]
// 0049ad27: FNSTSW AX
// 0049ad29: SAHF
// 0049ad2a: JBE 0x0049ad37
//   XREF to: 0049ad37 (CONDITIONAL_JUMP)
// 0049ad2c: FLD float ptr [ESP]
//   XREF to: Stack[-0x10] (DATA)
// 0049ad2f: FCOMP float ptr [EBX + 0x24]
// 0049ad32: FNSTSW AX
// 0049ad34: SAHF
// 0049ad35: JC 0x0049ad3e
//   XREF to: 0049ad3e (CONDITIONAL_JUMP)
// 0049ad37: ADD ESP,0x4
//   Label: LAB_0049ad37
// 0049ad3a: POP EDI
// 0049ad3b: POP ESI
// 0049ad3c: POP EBX
// 0049ad3d: RET
// 0049ad3e: MOV dword ptr [EBX + 0x8],0x0
//   Label: LAB_0049ad3e
// 0049ad45: FLD float ptr [EBX + 0x18]
// 0049ad48: FMUL float ptr [EBX + 0x4c]
// 0049ad4b: FLD float ptr [EBX + 0x1c]
// 0049ad4e: FMUL float ptr [EBX + 0x4c]
// 0049ad51: MOV EAX,dword ptr [EBX + 0x4c]
// 0049ad54: MOV dword ptr [EBX],EAX
// 0049ad56: FXCH
// 0049ad58: FADD float ptr [EBX + 0x10]
// 0049ad5b: FXCH
// 0049ad5d: FADD float ptr [EBX + 0x14]
// 0049ad60: FLD float ptr [EBX + 0x54]
// 0049ad63: FLD float ptr [EBX + 0x58]
// 0049ad66: FSUBP ST2,ST0
// 0049ad68: FSUBP ST2,ST0
// 0049ad6a: FSTP float ptr [EBX + 0xc]
// 0049ad6d: FSTP float ptr [EBX + 0x4]
// 0049ad70: ADD ESP,0x4
// 0049ad73: POP EDI
// 0049ad74: POP ESI
// 0049ad75: POP EBX
// 0049ad76: RET
