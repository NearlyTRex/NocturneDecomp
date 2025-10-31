// Name: engine_matrix.c_setCameraRotation_FUN_0050e290
// Address: 0050e290
// Address Range: [[0050e290, 0050e2b8]]
// Convention: __cdecl
// Signature: void engine_matrix.c_setCameraRotation_FUN_0050e290(ushort pitch, ushort yaw, ushort roll)
// Cross-references:
//   engine_drender.cpp_CDemonRenderer_setCameraRotationFromPoint_FUN_0048c1b0 (0048c1b0) at 0048c1c0 [UNCONDITIONAL_CALL]
//   shape_design.c_showFacetPartEditor_FUN_0045f1d0 (0045f1d0) at 0045f439 [UNCONDITIONAL_CALL]
// Globals:
//   int g_CameraRotationPitch
//   int g_CameraRotationYaw
//   int g_CameraRotationRoll
// Function calls:
//   engine_matrix.c_buildRotationMatrix_FUN_0050c920

#include "nocturne.h"

void __cdecl engine_matrix_c_setCameraRotation_FUN_0050e290(ushort pitch,ushort yaw,ushort roll)

{
  undefined2 in_stack_00000006;
  undefined2 in_stack_0000000a;
  undefined2 in_stack_0000000e;
  
  g_CameraRotationPitch = _pitch;
  g_CameraRotationYaw = _yaw;
  g_CameraRotationRoll = _roll;
  engine_matrix_c_buildRotationMatrix_FUN_0050c920(pitch,yaw,roll);
  return;
}


// Assembly code:
// 0050e290: MOV EAX,dword ptr [ESP + 0x4]
//   Label: engine_matrix.c_setCameraRotation_FUN_0050e290
//   XREF to: Stack[0x4] (READ)
// 0050e294: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 0050e298: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 0050e29c: PUSH EDX
// 0050e29d: PUSH ECX
// 0050e29e: MOV [0x02d052d0],EAX
//   XREF to: 02d052d0 (WRITE)
// 0050e2a3: PUSH EAX
// 0050e2a4: MOV dword ptr [0x02d052d4],ECX
//   XREF to: 02d052d4 (WRITE)
// 0050e2aa: MOV dword ptr [0x02d052d8],EDX
//   XREF to: 02d052d8 (WRITE)
// 0050e2b0: CALL engine_matrix.c_buildRotationMatrix_FUN_0050c920
//   XREF to: 0050c920 (UNCONDITIONAL_CALL)
// 0050e2b5: ADD ESP,0xc
// 0050e2b8: RET
