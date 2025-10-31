// Name: core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_0044d1c0
// Address: 0044d1c0
// Address Range: [[0044d1c0, 0044d295]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_0044d1c0(CDemonCamera * this_ptr)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430 (0044c430) at 0044c671 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_beginScene_FUN_00472a80 (00472a80) at 00472be1 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
//   int g_ViewportCenterXFixed
//   int g_ViewportCenterYFixed
//   int g_ViewportRightFixed
//   int g_ViewportBottomFixed
//   CMatrix3x3i g_TransformMatrix
//   undefined4 g_TransformMatrix[0][1]
//   undefined4 g_TransformMatrix[0][2]
//   undefined4 g_TransformMatrix[1][0]
//   undefined4 g_TransformMatrix[1][1]
//   undefined4 g_TransformMatrix[1][2]
//   undefined4 g_TransformMatrix[2][0]
//   undefined4 g_TransformMatrix[2][1]
//   undefined4 g_TransformMatrix[2][2]
// Function calls:
//   core_dcamera.cpp_CDemonCamera_calculateInverseTransform_FUN_0044cf20
//   engine_drender.cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_CDemonCamera_updateTransformMatrices_FUN_0044d1c0(CDemonCamera *this_ptr)

{
  CDemonRenderer *this_ptr_00;
  BADSPACEBASE *in_ESP;
  undefined4 *puVar1;
  byte bVar2;
  int aiStackY_ffc [1016];
  CVector3i *in_stack_ffffffe8;
  int iStack_14;
  
  bVar2 = 0;
  (this_ptr->source_matrix).m[0][0] = g_TransformMatrix.m[0][0];
  (this_ptr->source_matrix).m[0][1] = g_TransformMatrix.m[0][1];
  (this_ptr->source_matrix).m[0][2] = g_TransformMatrix.m[0][2];
  (this_ptr->source_matrix).m[1][0] = g_TransformMatrix.m[1][0];
  (this_ptr->source_matrix).m[1][1] = g_TransformMatrix.m[1][1];
  (this_ptr->source_matrix).m[1][2] = g_TransformMatrix.m[1][2];
  (this_ptr->source_matrix).m[2][0] = g_TransformMatrix.m[2][0];
  this_ptr_00 = g_CDemonRendererPtr;
  (this_ptr->source_matrix).m[2][1] = g_TransformMatrix.m[2][1];
  (this_ptr->source_matrix).m[2][2] = g_TransformMatrix.m[2][2];
  engine_drender_cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760
            (this_ptr_00,in_stack_ffffffe8);
  puVar1 = (undefined4 *)((int)this_ptr + (uint)bVar2 * -8 + 0x170);
  (this_ptr->camera_origin).x = iStack_14;
  *puVar1 = *(undefined4 *)(&stack0xfffffff0 + (uint)bVar2 * -8);
  puVar1[(uint)bVar2 * -2 + 1] =
       *(undefined4 *)(&stack0xfffffff4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  (this_ptr->saved_viewport_rect).left = g_ViewportCenterXFixed;
  (this_ptr->saved_viewport_rect).top = g_ViewportCenterYFixed;
  (this_ptr->saved_viewport_rect).right = g_ViewportRightFixed;
  (this_ptr->saved_viewport_rect).bottom = g_ViewportBottomFixed;
  core_dcamera_cpp_CDemonCamera_calculateInverseTransform_FUN_0044cf20(this_ptr);
  return;
}


// Assembly code:
// 0044d1c0: PUSH EBX
//   Label: core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_0044d1c0
// 0044d1c1: PUSH ESI
// 0044d1c2: PUSH EDI
// 0044d1c3: SUB ESP,0xc
// 0044d1c6: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0044d1ca: MOV ESI,dword ptr [0x02d052e8]
//   XREF to: 02d052e8 (READ)
// 0044d1d0: MOV dword ptr [EBX + 0x178],ESI
// 0044d1d6: MOV ESI,dword ptr [0x02d052ec]
//   XREF to: 02d052ec (READ)
// 0044d1dc: MOV dword ptr [EBX + 0x17c],ESI
// 0044d1e2: MOV ESI,dword ptr [0x02d052f0]
//   XREF to: 02d052f0 (READ)
// 0044d1e8: MOV dword ptr [EBX + 0x180],ESI
// 0044d1ee: MOV ESI,dword ptr [0x02d052f4]
//   XREF to: 02d052f4 (READ)
// 0044d1f4: MOV dword ptr [EBX + 0x184],ESI
// 0044d1fa: MOV ESI,dword ptr [0x02d052f8]
//   XREF to: 02d052f8 (READ)
// 0044d200: MOV dword ptr [EBX + 0x188],ESI
// 0044d206: MOV ESI,dword ptr [0x02d052fc]
//   XREF to: 02d052fc (READ)
// 0044d20c: MOV dword ptr [EBX + 0x18c],ESI
// 0044d212: MOV ESI,dword ptr [0x02d05300]
//   XREF to: 02d05300 (READ)
// 0044d218: MOV dword ptr [EBX + 0x190],ESI
// 0044d21e: MOV ESI,dword ptr [0x02d05304]
//   XREF to: 02d05304 (READ)
// 0044d224: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0044d22a: MOV dword ptr [EBX + 0x194],ESI
// 0044d230: MOV ESI,dword ptr [0x02d05308]
//   XREF to: 02d05308 (READ)
// 0044d236: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 0044d237: MOV dword ptr [EBX + 0x198],ESI
// 0044d23d: LEA ESI,[ESP + 0x4]
//   XREF to: Stack[-0x18] (DATA)
// 0044d241: CALL engine_drender.cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760
//   XREF to: 0048c760 (UNCONDITIONAL_CALL)
// 0044d246: LEA ESI,[ESP + 0x4]
//   XREF to: Stack[-0x18] (DATA)
// 0044d24a: LEA EDI,[EBX + 0x16c]
// 0044d250: ADD ESP,0x4
// 0044d253: MOVSD ES:EDI,ESI
// 0044d254: MOVSD ES:EDI,ESI
// 0044d255: MOVSD ES:EDI,ESI
// 0044d256: MOV ESI,dword ptr [0x02d02548]
//   XREF to: 02d02548 (READ)
// 0044d25c: MOV dword ptr [EBX + 0x1c0],ESI
// 0044d262: MOV ESI,dword ptr [0x02d0254c]
//   XREF to: 02d0254c (READ)
// 0044d268: MOV dword ptr [EBX + 0x1c4],ESI
// 0044d26e: MOV ESI,dword ptr [0x02d02550]
//   XREF to: 02d02550 (READ)
// 0044d274: MOV dword ptr [EBX + 0x1c8],ESI
// 0044d27a: MOV ESI,dword ptr [0x02d02554]
//   XREF to: 02d02554 (READ)
// 0044d280: PUSH EBX
// 0044d281: MOV dword ptr [EBX + 0x1cc],ESI
// 0044d287: CALL core_dcamera.cpp_CDemonCamera_calculateInverseTransform_FUN_0044cf20
//   XREF to: 0044cf20 (UNCONDITIONAL_CALL)
// 0044d28c: ADD ESP,0x4
// 0044d28f: ADD ESP,0xc
// 0044d292: POP EDI
// 0044d293: POP ESI
// 0044d294: POP EBX
// 0044d295: RET
