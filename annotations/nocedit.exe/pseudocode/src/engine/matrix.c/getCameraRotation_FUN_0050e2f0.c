// Name: engine_matrix.c_getCameraRotation_FUN_0050e2f0
// Address: 0050e2f0
// Address Range: [[0050e2f0, 0050e31e]]
// Convention: __cdecl
// Signature: void engine_matrix.c_getCameraRotation_FUN_0050e2f0(CVector3i * output)
// Cross-references:
//   engine_drender.cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800 (0048c800) at 0048c810 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0 (0048c7e0) at 0048c7eb [UNCONDITIONAL_CALL]
// Globals:
//   int g_CameraRotationPitch
//   int g_CameraRotationYaw
//   int g_CameraRotationRoll

#include "nocturne.h"

void __cdecl engine_matrix_c_getCameraRotation_FUN_0050e2f0(CVector3i *output)

{
  int iVar1;
  int iVar2;
  
  iVar2 = g_CameraRotationRoll;
  iVar1 = g_CameraRotationYaw;
  output->x = g_CameraRotationPitch;
  output->y = iVar1;
  output->z = iVar2;
  return;
}


// Assembly code:
// 0050e2f0: PUSH EDI
//   Label: engine_matrix.c_getCameraRotation_FUN_0050e2f0
// 0050e2f1: SUB ESP,0xc
// 0050e2f4: MOV EAX,ESI
// 0050e2f6: MOV EDX,dword ptr [0x02d052d0]
//   XREF to: 02d052d0 (READ)
// 0050e2fc: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x10] (DATA)
// 0050e2ff: MOV EDX,dword ptr [0x02d052d4]
//   XREF to: 02d052d4 (READ)
// 0050e305: MOV EDI,ESI
// 0050e307: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0xc] (WRITE)
// 0050e30b: MOV EDX,dword ptr [0x02d052d8]
//   XREF to: 02d052d8 (READ)
// 0050e311: MOV ESI,ESP
// 0050e313: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x8] (WRITE)
// 0050e317: MOVSD ES:EDI,ESI
// 0050e318: MOVSD ES:EDI,ESI
// 0050e319: MOVSD ES:EDI,ESI
// 0050e31a: ADD ESP,0xc
// 0050e31d: POP EDI
// 0050e31e: RET
