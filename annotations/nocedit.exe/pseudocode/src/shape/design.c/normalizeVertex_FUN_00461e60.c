// Name: shape_design.c_normalizeVertex_FUN_00461e60
// Address: 00461e60
// Address Range: [[00461e60, 00461ed3]]
// Convention: __cdecl
// Signature: void shape_design.c_normalizeVertex_FUN_00461e60(CVector3f * vertex)
// Cross-references:
//   shape_design.c_calculatePolygonAngularArea_FUN_00461ee0 (00461ee0) at 00461fe4 [UNCONDITIONAL_CALL]
//   shape_design.c_calculateVertexAngle_FUN_00462050 (00462050) at 004620cc [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl shape_design_c_normalizeVertex_FUN_00461e60(CVector3f *vertex)

{
  double local_18;
  
  local_18 = SQRT(*(double *)&vertex[1].y * *(double *)&vertex[1].y +
                  *(double *)vertex * *(double *)vertex +
                  *(double *)&vertex->z * *(double *)&vertex->z);
  if ((((ulonglong)local_18 & 0x7fffffff00000000) == 0) && (local_18._0_4_ == 0)) {
    local_18 = 1.0;
  }
  *(double *)vertex = *(double *)vertex / local_18;
  *(double *)&vertex->z = *(double *)&vertex->z / local_18;
  *(double *)&vertex[1].y = *(double *)&vertex[1].y / local_18;
  return;
}


// Assembly code:
// 00461e60: PUSH EBX
//   Label: shape_design.c_normalizeVertex_FUN_00461e60
// 00461e61: PUSH ESI
// 00461e62: PUSH EDI
// 00461e63: PUSH EBP
// 00461e64: MOV EBP,ESP
// 00461e66: SUB ESP,0x8
// 00461e6c: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00461e6f: FLD double ptr [EAX + 0x8]
// 00461e72: FMUL double ptr [EAX + 0x8]
// 00461e75: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00461e78: FLD double ptr [EAX]
// 00461e7a: FMUL double ptr [EAX]
// 00461e7c: FADDP
// 00461e7e: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00461e81: FLD double ptr [EAX + 0x10]
// 00461e84: FMUL double ptr [EAX + 0x10]
// 00461e87: FADDP
// 00461e89: FSQRT
// 00461e8b: FSTP double ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (WRITE)
// 00461e8e: TEST dword ptr [EBP + -0x4],0x7fffffff
//   XREF to: Stack[-0x14] (READ)
// 00461e95: JNZ 0x00461eab
//   XREF to: 00461eab (CONDITIONAL_JUMP)
// 00461e97: CMP dword ptr [EBP + -0x8],0x0
//   XREF to: Stack[-0x18] (READ)
// 00461e9b: JNZ 0x00461eab
//   XREF to: 00461eab (CONDITIONAL_JUMP)
// 00461e9d: MOV dword ptr [EBP + -0x8],0x0
//   XREF to: Stack[-0x18] (WRITE)
// 00461ea4: MOV dword ptr [EBP + -0x4],0x3ff00000
//   XREF to: Stack[-0x14] (WRITE)
// 00461eab: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_00461eab
//   XREF to: Stack[0x4] (READ)
// 00461eae: FLD double ptr [EAX]
// 00461eb0: FDIV double ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00461eb3: FSTP double ptr [EAX]
// 00461eb5: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00461eb8: FLD double ptr [EAX + 0x8]
// 00461ebb: FDIV double ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00461ebe: FSTP double ptr [EAX + 0x8]
// 00461ec1: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00461ec4: FLD double ptr [EAX + 0x10]
// 00461ec7: FDIV double ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00461eca: FSTP double ptr [EAX + 0x10]
// 00461ecd: MOV ESP,EBP
// 00461ecf: POP EBP
// 00461ed0: POP EDI
// 00461ed1: POP ESI
// 00461ed2: POP EBX
// 00461ed3: RET
