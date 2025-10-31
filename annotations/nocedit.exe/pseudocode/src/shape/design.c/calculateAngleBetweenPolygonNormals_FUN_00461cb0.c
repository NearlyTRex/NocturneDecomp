// Name: shape_design.c_calculateAngleBetweenPolygonNormals_FUN_00461cb0
// Address: 00461cb0
// Address Range: [[00461cb0, 00461d22]]
// Convention: __cdecl
// Signature: double shape_design.c_calculateAngleBetweenPolygonNormals_FUN_00461cb0(SShapeEditorPolygon * normal1_ptr, SShapeEditorPolygon * normal2_ptr)
// Cross-references:
//   shape_design.c_isAngleBelowThreshold_FUN_00461d30 (00461d30) at 00461d44 [UNCONDITIONAL_CALL]
//   shape_design.c_polygonToolModeManager_FUN_00464c90 (00464c90) at 004650f8 [UNCONDITIONAL_CALL]
// Globals:
//   double g_RadiansToDegrees1 = 57.2957795130800
// Function calls:
//   shape_design.c_clampedArccos_FUN_00461c50

#include "nocturne.h"

double __cdecl
shape_design_c_calculateAngleBetweenPolygonNormals_FUN_00461cb0
          (SShapeEditorPolygon *normal1_ptr,SShapeEditorPolygon *normal2_ptr)

{
  double dVar1;
  int in_stack_00000004;
  undefined4 in_stack_ffffffe0;
  
  dVar1 = shape_design_c_clampedArccos_FUN_00461c50
                    ((double)CONCAT44(in_stack_ffffffe0,
                                      (int)((ulonglong)
                                            (double)(*(float *)(in_stack_00000004 + 0xb0) *
                                                     (normal1_ptr->normal).z +
                                                    *(float *)(in_stack_00000004 + 0xac) *
                                                    (normal1_ptr->normal).y +
                                                    *(float *)(in_stack_00000004 + 0xa8) *
                                                    (normal1_ptr->normal).x) >> 0x20)));
  return dVar1 * g_RadiansToDegrees1;
}


// Assembly code:
// 00461cb0: PUSH EBX
//   Label: shape_design.c_calculateAngleBetweenPolygonNormals_FUN_00461cb0
// 00461cb1: PUSH ESI
// 00461cb2: PUSH EDI
// 00461cb3: PUSH EBP
// 00461cb4: MOV EBP,ESP
// 00461cb6: SUB ESP,0x10
// 00461cbc: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00461cbf: FLD float ptr [EAX + 0xa8]
// 00461cc5: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00461cc8: FMUL float ptr [EAX + 0xa8]
// 00461cce: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00461cd1: FLD float ptr [EAX + 0xac]
// 00461cd7: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00461cda: FMUL float ptr [EAX + 0xac]
// 00461ce0: FADDP
// 00461ce2: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00461ce5: FLD float ptr [EAX + 0xb0]
// 00461ceb: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00461cee: FMUL float ptr [EAX + 0xb0]
// 00461cf4: FADDP
// 00461cf6: SUB ESP,0x8
// 00461cf9: FSTP double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 00461cfc: CALL shape_design.c_clampedArccos_FUN_00461c50
//   XREF to: 00461c50 (UNCONDITIONAL_CALL)
// 00461d01: MOV dword ptr [EBP + -0x10],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00461d04: MOV dword ptr [EBP + -0xc],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 00461d07: FLD double ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 00461d0a: ADD ESP,0x8
// 00461d0d: FMUL double ptr [0x0061bfb6]
//   XREF to: 0061bfb6 (READ)
// 00461d13: FSTP double ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (WRITE)
// 00461d16: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00461d19: MOV EDX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00461d1c: MOV ESP,EBP
// 00461d1e: POP EBP
// 00461d1f: POP EDI
// 00461d20: POP ESI
// 00461d21: POP EBX
// 00461d22: RET
