// Name: shape_design.c_isAngleBelowThreshold_FUN_00461d30
// Address: 00461d30
// Address Range: [[00461d30, 00461d76]]
// Convention: __cdecl
// Signature: int shape_design.c_isAngleBelowThreshold_FUN_00461d30(SShapeEditorPolygon * polygon1, SShapeEditorPolygon * polygon2, double angle_threshold)
// Function calls:
//   shape_design.c_calculateAngleBetweenPolygonNormals_FUN_00461cb0

#include "nocturne.h"

int __cdecl
shape_design_c_isAngleBelowThreshold_FUN_00461d30
          (SShapeEditorPolygon *polygon1,SShapeEditorPolygon *polygon2,double angle_threshold)

{
  double dVar1;
  SShapeEditorPolygon *in_stack_ffffffe4;
  uint local_14;
  
  dVar1 = shape_design_c_calculateAngleBetweenPolygonNormals_FUN_00461cb0
                    (polygon2,in_stack_ffffffe4);
  local_14 = (uint)(dVar1 < angle_threshold);
  return local_14;
}


// Assembly code:
// 00461d30: PUSH EBX
//   Label: shape_design.c_isAngleBelowThreshold_FUN_00461d30
// 00461d31: PUSH ESI
// 00461d32: PUSH EDI
// 00461d33: PUSH EBP
// 00461d34: MOV EBP,ESP
// 00461d36: SUB ESP,0xc
// 00461d3c: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00461d3f: PUSH EAX
// 00461d40: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00461d43: PUSH EAX
// 00461d44: CALL shape_design.c_calculateAngleBetweenPolygonNormals_FUN_00461cb0
//   XREF to: 00461cb0 (UNCONDITIONAL_CALL)
// 00461d49: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00461d4c: MOV dword ptr [EBP + -0x8],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 00461d4f: FLD double ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00461d52: ADD ESP,0x8
// 00461d55: FCOMP double ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00461d58: FNSTSW AX
// 00461d5a: SAHF
// 00461d5b: JNC 0x00461d66
//   XREF to: 00461d66 (CONDITIONAL_JUMP)
// 00461d5d: MOV dword ptr [EBP + -0x4],0x1
//   XREF to: Stack[-0x14] (WRITE)
// 00461d64: JMP 0x00461d6d
//   XREF to: 00461d6d (UNCONDITIONAL_JUMP)
// 00461d66: MOV dword ptr [EBP + -0x4],0x0
//   Label: LAB_00461d66
//   XREF to: Stack[-0x14] (WRITE)
// 00461d6d: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_00461d6d
//   XREF to: Stack[-0x14] (READ)
// 00461d70: MOV ESP,EBP
// 00461d72: POP EBP
// 00461d73: POP EDI
// 00461d74: POP ESI
// 00461d75: POP EBX
// 00461d76: RET
