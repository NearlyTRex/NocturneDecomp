// Name: engine_matrix.c_getCameraOrigin_FUN_0050e2c0
// Address: 0050e2c0
// Address Range: [[0050e2c0, 0050e2ee]]
// Convention: __cdecl
// Signature: void engine_matrix.c_getCameraOrigin_FUN_0050e2c0(CVector3i * output)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_saveAlphaTransform_FUN_00453950 (00453950) at 00453957 [UNCONDITIONAL_CALL]
//   core_ground.cpp_CGround_render_FUN_004efc90 (004efc90) at 004efc9c [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780 (0048c780) at 0048c790 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760 (0048c760) at 0048c76b [UNCONDITIONAL_CALL]
// Globals:
//   int g_CameraOriginX
//   int g_CameraOriginY
//   int g_CameraOriginZ

#include "nocturne.h"

void __cdecl engine_matrix_c_getCameraOrigin_FUN_0050e2c0(CVector3i *output)

{
  int iVar1;
  int iVar2;
  
  iVar2 = g_CameraOriginZ;
  iVar1 = g_CameraOriginY;
  output->x = g_CameraOriginX;
  output->y = iVar1;
  output->z = iVar2;
  return;
}


// Assembly code:
// 0050e2c0: PUSH EDI
//   Label: engine_matrix.c_getCameraOrigin_FUN_0050e2c0
// 0050e2c1: SUB ESP,0xc
// 0050e2c4: MOV EAX,ESI
// 0050e2c6: MOV EDX,dword ptr [0x02d052c4]
//   XREF to: 02d052c4 (READ)
// 0050e2cc: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x10] (DATA)
// 0050e2cf: MOV EDX,dword ptr [0x02d052c8]
//   XREF to: 02d052c8 (READ)
// 0050e2d5: MOV EDI,ESI
// 0050e2d7: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0xc] (WRITE)
// 0050e2db: MOV EDX,dword ptr [0x02d052cc]
//   XREF to: 02d052cc (READ)
// 0050e2e1: MOV ESI,ESP
// 0050e2e3: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x8] (WRITE)
// 0050e2e7: MOVSD ES:EDI,ESI
// 0050e2e8: MOVSD ES:EDI,ESI
// 0050e2e9: MOVSD ES:EDI,ESI
// 0050e2ea: ADD ESP,0xc
// 0050e2ed: POP EDI
// 0050e2ee: RET
