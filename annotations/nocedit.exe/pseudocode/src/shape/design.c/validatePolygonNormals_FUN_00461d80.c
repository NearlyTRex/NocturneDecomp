// Name: shape_design.c_validatePolygonNormals_FUN_00461d80
// Address: 00461d80
// Address Range: [[00461d80, 00461de7]]
// Convention: __cdecl
// Signature: int shape_design.c_validatePolygonNormals_FUN_00461d80(SShapeEditorPolygon * polygon1, SShapeEditorPolygon * polygon2, double cos_tolerance)
// Cross-references:
//   shape_design.c_configureSinglePassPolygonReduction_FUN_00465560 (00465560) at 004656c3 [UNCONDITIONAL_CALL]
//   shape_design.c_mergePolygonsWithValidation_FUN_00465b40 (00465b40) at 00465b81 [UNCONDITIONAL_CALL]
//   shape_design.c_mergeTrianglesIntoQuad_FUN_00462190 (00462190) at 004627b5 [UNCONDITIONAL_CALL]
//   shape_design.c_optimizePolygonMesh_FUN_004658e0 (004658e0) at 004659de [UNCONDITIONAL_CALL]
//   shape_design.c_vertexReducer_FUN_00467850 (00467850) at 00467cc0 [UNCONDITIONAL_CALL]

#include "nocturne.h"

int __cdecl
shape_design_c_validatePolygonNormals_FUN_00461d80
          (SShapeEditorPolygon *polygon1,SShapeEditorPolygon *polygon2,double cos_tolerance)

{
  uint local_14;
  
  local_14 = (uint)((float)cos_tolerance <=
                   (polygon1->normal).z * (polygon2->normal).z +
                   (polygon1->normal).y * (polygon2->normal).y +
                   (polygon1->normal).x * (polygon2->normal).x);
  return local_14;
}


// Assembly code:
// 00461d80: PUSH EBX
//   Label: shape_design.c_validatePolygonNormals_FUN_00461d80
// 00461d81: PUSH ESI
// 00461d82: PUSH EDI
// 00461d83: PUSH EBP
// 00461d84: MOV EBP,ESP
// 00461d86: SUB ESP,0x4
// 00461d8c: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00461d8f: FLD float ptr [EAX + 0xa8]
// 00461d95: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00461d98: FMUL float ptr [EAX + 0xa8]
// 00461d9e: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00461da1: FLD float ptr [EAX + 0xac]
// 00461da7: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00461daa: FMUL float ptr [EAX + 0xac]
// 00461db0: FADDP
// 00461db2: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00461db5: FLD float ptr [EAX + 0xb0]
// 00461dbb: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00461dbe: FMUL float ptr [EAX + 0xb0]
// 00461dc4: FADDP
// 00461dc6: FCOMP double ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00461dc9: FNSTSW AX
// 00461dcb: SAHF
// 00461dcc: JC 0x00461dd7
//   XREF to: 00461dd7 (CONDITIONAL_JUMP)
// 00461dce: MOV dword ptr [EBP + -0x4],0x1
//   XREF to: Stack[-0x14] (WRITE)
// 00461dd5: JMP 0x00461dde
//   XREF to: 00461dde (UNCONDITIONAL_JUMP)
// 00461dd7: MOV dword ptr [EBP + -0x4],0x0
//   Label: LAB_00461dd7
//   XREF to: Stack[-0x14] (WRITE)
// 00461dde: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_00461dde
//   XREF to: Stack[-0x14] (READ)
// 00461de1: MOV ESP,EBP
// 00461de3: POP EBP
// 00461de4: POP EDI
// 00461de5: POP ESI
// 00461de6: POP EBX
// 00461de7: RET
