// Name: engine_3d.c_processCameraRelativePoint_FUN_004037e0
// Address: 004037e0
// Address Range: [[004037e0, 00403839]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_processCameraRelativePoint_FUN_004037e0(CQuaternion4f * input_point)
// Cross-references:
//   engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0048c420 (0048c420) at 0048c43e [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 (0048c450) at 0048c487 [UNCONDITIONAL_CALL]
//   shape_design.c_showFacetPartEditor_FUN_0045f1d0 (0045f1d0) at 0045f46e [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_draw3DAxisLabelsAt_FUN_004a1e90 (004a1e90) at 004a1ec3 [UNCONDITIONAL_CALL]
// Globals:
//   int g_StoredX
//   int g_StoredY
//   int g_StoredZ
//   int g_RelativeX
//   int g_RelativeY
//   int g_RelativeZ
//   int g_CameraOriginX
//   int g_CameraOriginY
//   int g_CameraOriginZ

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_3d_c_processCameraRelativePoint_FUN_004037e0(CQuaternion4f *input_point)

{
  g_StoredX = (int)input_point->x;
  g_StoredY = (int)input_point->y;
  g_StoredZ = (int)input_point->z;
  g_RelativeX = g_CameraOriginX - (int)input_point->x;
  g_RelativeY = g_CameraOriginY - (int)input_point->y;
  g_RelativeZ = g_CameraOriginZ - (int)input_point->z;
  return (SMRGLHeaderExtended *)(input_point + 1);
}


// Assembly code:
// 004037e0: PUSH EBX
//   Label: engine_3d.c_processCameraRelativePoint_FUN_004037e0
// 004037e1: PUSH ESI
// 004037e2: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004037e6: MOV EDX,dword ptr [EAX + 0x4]
// 004037e9: MOV dword ptr [0x00772a88],EDX
//   XREF to: 00772a88 (WRITE)
// 004037ef: MOV EDX,dword ptr [EAX + 0x8]
// 004037f2: MOV dword ptr [0x00772a8c],EDX
//   XREF to: 00772a8c (WRITE)
// 004037f8: MOV EDX,dword ptr [EAX + 0xc]
// 004037fb: MOV ECX,dword ptr [EAX + 0x4]
// 004037fe: MOV dword ptr [0x00772a90],EDX
//   XREF to: 00772a90 (WRITE)
// 00403804: MOV EDX,dword ptr [0x02d052c4]
//   XREF to: 02d052c4 (READ)
// 0040380a: SUB EDX,ECX
// 0040380c: MOV EBX,dword ptr [EAX + 0x8]
// 0040380f: MOV dword ptr [0x02d052b8],EDX
//   XREF to: 02d052b8 (WRITE)
// 00403815: MOV EDX,dword ptr [0x02d052c8]
//   XREF to: 02d052c8 (READ)
// 0040381b: SUB EDX,EBX
// 0040381d: MOV ESI,dword ptr [EAX + 0xc]
// 00403820: MOV dword ptr [0x02d052bc],EDX
//   XREF to: 02d052bc (WRITE)
// 00403826: MOV EDX,dword ptr [0x02d052cc]
//   XREF to: 02d052cc (READ)
// 0040382c: SUB EDX,ESI
// 0040382e: ADD EAX,0x10
// 00403831: MOV dword ptr [0x02d052c0],EDX
//   XREF to: 02d052c0 (WRITE)
// 00403837: POP ESI
// 00403838: POP EBX
// 00403839: RET
