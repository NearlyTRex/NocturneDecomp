// Name: shape_design.c_isNormalDotProductBelowThreshold_FUN_00461df0
// Address: 00461df0
// Address Range: [[00461df0, 00461e57]]
// Convention: __cdecl
// Signature: int shape_design.c_isNormalDotProductBelowThreshold_FUN_00461df0(SShapeEditorPolygon * polygon1, SShapeEditorPolygon * polygon2, double threshold)

#include "nocturne.h"

int __cdecl
shape_design_c_isNormalDotProductBelowThreshold_FUN_00461df0
          (SShapeEditorPolygon *polygon1,SShapeEditorPolygon *polygon2,double threshold)

{
  uint local_14;
  
  local_14 = (uint)((polygon1->normal).z * (polygon2->normal).z +
                    (polygon1->normal).y * (polygon2->normal).y +
                    (polygon1->normal).x * (polygon2->normal).x <= (float)threshold);
  return local_14;
}


// Assembly code:
// 00461df0: PUSH EBX
//   Label: shape_design.c_isNormalDotProductBelowThreshold_FUN_00461df0
// 00461df1: PUSH ESI
// 00461df2: PUSH EDI
// 00461df3: PUSH EBP
// 00461df4: MOV EBP,ESP
// 00461df6: SUB ESP,0x4
// 00461dfc: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00461dff: FLD float ptr [EAX + 0xa8]
// 00461e05: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00461e08: FMUL float ptr [EAX + 0xa8]
// 00461e0e: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00461e11: FLD float ptr [EAX + 0xac]
// 00461e17: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00461e1a: FMUL float ptr [EAX + 0xac]
// 00461e20: FADDP
// 00461e22: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00461e25: FLD float ptr [EAX + 0xb0]
// 00461e2b: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00461e2e: FMUL float ptr [EAX + 0xb0]
// 00461e34: FADDP
// 00461e36: FCOMP double ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00461e39: FNSTSW AX
// 00461e3b: SAHF
// 00461e3c: JA 0x00461e47
//   XREF to: 00461e47 (CONDITIONAL_JUMP)
// 00461e3e: MOV dword ptr [EBP + -0x4],0x1
//   XREF to: Stack[-0x14] (WRITE)
// 00461e45: JMP 0x00461e4e
//   XREF to: 00461e4e (UNCONDITIONAL_JUMP)
// 00461e47: MOV dword ptr [EBP + -0x4],0x0
//   Label: LAB_00461e47
//   XREF to: Stack[-0x14] (WRITE)
// 00461e4e: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_00461e4e
//   XREF to: Stack[-0x14] (READ)
// 00461e51: MOV ESP,EBP
// 00461e53: POP EBP
// 00461e54: POP EDI
// 00461e55: POP ESI
// 00461e56: POP EBX
// 00461e57: RET
