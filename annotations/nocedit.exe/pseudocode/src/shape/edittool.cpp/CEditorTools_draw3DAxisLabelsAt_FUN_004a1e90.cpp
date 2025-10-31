// Name: shape_edittool.cpp_CEditorTools_draw3DAxisLabelsAt_FUN_004a1e90
// Address: 004a1e90
// Address Range: [[004a1e90, 004a1f2c]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CEditorTools_draw3DAxisLabelsAt_FUN_004a1e90(CEditorTools * this_ptr, int param2, CQuaternion4f * world_position, CQuaternion4f * label_offset, void * param5)
// Cross-references:
//   core_emitter.cpp_FUN_004a8860 (004a8860) at 004a8a60 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 005396f3 [UNCONDITIONAL_CALL]
// Globals:
//   float g_WorldToScreenScale2 = 256
//   float g_LabelOffsetScale = 10430.38
// Function calls:
//   engine_3d.c_processCameraRelativePoint_FUN_004037e0
//   engine_matrix.c_matrixPushAndTransform_FUN_0050cee0
//   engine_matrix.c_pop_FUN_0050d720
//   shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CEditorTools_draw3DAxisLabelsAt_FUN_004a1e90
          (CEditorTools *this_ptr,int param2,CQuaternion4f *world_position,
          CQuaternion4f *label_offset,void *param5)

{
  BADSPACEBASE *in_ESP;
  float *in_stack_00000018;
  
  engine_3d_c_processCameraRelativePoint_FUN_004037e0((CQuaternion4f *)&stack0xffffffd8);
  engine_matrix_c_matrixPushAndTransform_FUN_0050cee0
            ((ushort)(int)ROUND(*in_stack_00000018 * g_LabelOffsetScale),
             (ushort)(int)ROUND(in_stack_00000018[2] * g_LabelOffsetScale),
             (ushort)(int)ROUND(in_stack_00000018[1] * g_LabelOffsetScale),0,0,0);
  shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0
            ((CEditorTools *)world_position,(float)label_offset,(int)param5);
  engine_matrix_c_pop_FUN_0050d720();
  return;
}


// Assembly code:
// 004a1e90: PUSH EBX
//   Label: shape_edittool.cpp_CEditorTools_draw3DAxisLabelsAt_FUN_004a1e90
// 004a1e91: PUSH ESI
// 004a1e92: PUSH EDI
// 004a1e93: SUB ESP,0x1c
// 004a1e96: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x10] (READ)
// 004a1e9a: LEA EBX,[ESP + 0x4]
//   XREF to: Stack[-0x24] (DATA)
// 004a1e9e: FLD float ptr [EAX]
// 004a1ea0: FMUL float ptr [0x0065d44c]
//   XREF to: 0065d44c (READ)
// 004a1ea6: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x24] (DATA)
// 004a1ea8: FLD float ptr [EAX + 0x4]
// 004a1eab: FMUL float ptr [0x0065d44c]
//   XREF to: 0065d44c (READ)
// 004a1eb1: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x20] (WRITE)
// 004a1eb4: FLD float ptr [EAX + 0x8]
// 004a1eb7: FMUL float ptr [0x0065d44c]
//   XREF to: 0065d44c (READ)
// 004a1ebd: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x1c] (WRITE)
// 004a1ec0: MOV EBX,ESP
// 004a1ec2: PUSH EBX
// 004a1ec3: CALL engine_3d.c_processCameraRelativePoint_FUN_004037e0
//   XREF to: 004037e0 (UNCONDITIONAL_CALL)
// 004a1ec8: ADD ESP,0x4
// 004a1ecb: LEA EBX,[ESP + 0x10]
//   XREF to: Stack[-0x18] (DATA)
// 004a1ecf: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x14] (READ)
// 004a1ed3: FLD float ptr [EAX]
// 004a1ed5: FMUL float ptr [0x0065d45c]
//   XREF to: 0065d45c (READ)
// 004a1edb: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x18] (DATA)
// 004a1edd: FLD float ptr [EAX + 0x8]
// 004a1ee0: FMUL float ptr [0x0065d45c]
//   XREF to: 0065d45c (READ)
// 004a1ee6: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x14] (WRITE)
// 004a1ee9: FLD float ptr [EAX + 0x4]
// 004a1eec: FMUL float ptr [0x0065d45c]
//   XREF to: 0065d45c (READ)
// 004a1ef2: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x10] (WRITE)
// 004a1ef5: PUSH 0x0
// 004a1ef7: PUSH 0x0
// 004a1ef9: PUSH 0x0
// 004a1efb: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x10] (READ)
// 004a1eff: PUSH EDX
// 004a1f00: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x14] (READ)
// 004a1f04: PUSH ECX
// 004a1f05: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x18] (DATA)
// 004a1f09: PUSH EBX
// 004a1f0a: CALL engine_matrix.c_matrixPushAndTransform_FUN_0050cee0
//   XREF to: 0050cee0 (UNCONDITIONAL_CALL)
// 004a1f0f: ADD ESP,0x18
// 004a1f12: MOV ESI,dword ptr [ESP + 0x34]
//   XREF to: Stack[0xc] (READ)
// 004a1f16: PUSH ESI
// 004a1f17: MOV EDI,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 004a1f1b: PUSH dword ptr [ESP + 0x34]
//   XREF to: Stack[0x8] (READ)
// 004a1f1f: PUSH EDI
// 004a1f20: CALL shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0
//   XREF to: 004a1ca0 (UNCONDITIONAL_CALL)
// 004a1f25: ADD ESP,0xc
// 004a1f28: CALL engine_matrix.c_pop_FUN_0050d720
//   XREF to: 0050d720 (UNCONDITIONAL_CALL)
