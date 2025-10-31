// Name: engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0048c420
// Address: 0048c420
// Address Range: [[0048c420, 0048c449]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0048c420(CDemonRenderer * this_ptr, CVector3f * input_point)
// Cross-references:
//   core_dtrace.cpp_CDemonRaytrace_renderFrustumCubes_FUN_00497e50 (00497e50) at 004983e2 [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_renderGridCube_FUN_00496e70 (00496e70) at 00496f00 [UNCONDITIONAL_CALL]
//   core_setdir.cpp_CZThumb_saveZBufferTable_FUN_00574910 (00574910) at 00574a4e [UNCONDITIONAL_CALL]
// Function calls:
//   engine_3d.c_processCameraRelativePoint_FUN_004037e0

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0048c420
          (CDemonRenderer *this_ptr,CVector3f *input_point)

{
  BADSPACEBASE *in_ESP;
  CQuaternion4f CStack_10;
  
  CStack_10.x = input_point->x;
  CStack_10.y = input_point->y;
  CStack_10.z = input_point->z;
  engine_3d_c_processCameraRelativePoint_FUN_004037e0(&CStack_10);
  return;
}


// Assembly code:
// 0048c420: SUB ESP,0x10
//   Label: engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0048c420
// 0048c423: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0048c427: MOV EAX,dword ptr [EDX]
// 0048c429: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 0048c42d: MOV EAX,dword ptr [EDX + 0x4]
// 0048c430: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x8] (WRITE)
// 0048c434: MOV EAX,dword ptr [EDX + 0x8]
// 0048c437: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x4] (WRITE)
// 0048c43b: MOV EAX,ESP
// 0048c43d: PUSH EAX
// 0048c43e: CALL engine_3d.c_processCameraRelativePoint_FUN_004037e0
//   XREF to: 004037e0 (UNCONDITIONAL_CALL)
// 0048c443: ADD ESP,0x4
// 0048c446: ADD ESP,0x10
// 0048c449: RET
