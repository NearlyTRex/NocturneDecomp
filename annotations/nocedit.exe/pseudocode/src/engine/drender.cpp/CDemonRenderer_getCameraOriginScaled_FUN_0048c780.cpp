// Name: engine_drender.cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
// Address: 0048c780
// Address Range: [[0048c780, 0048c7d3]]
// Convention: __cdecl
// Signature: float * engine_drender.cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780(CDemonRenderer * this_ptr, float * output)
// Cross-references:
//   core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_00471400 (00471400) at 00471428 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_renderCoronaGeometry_FUN_004736c0 (004736c0) at 0047382e [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_renderExternalVolumetricShafts_FUN_004758d0 (004758d0) at 00475a13 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_renderLightGlowSprites_FUN_00473f90 (00473f90) at 00473fc1 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_renderVolumetricLightShaft_FUN_00474ad0 (00474ad0) at 00474b0c [UNCONDITIONAL_CALL]
//   core_fire.cpp_CGunFlame_render_FUN_004c50b0 (004c50b0) at 004c5190 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CLaserBeam_render_FUN_004c25c0 (004c25c0) at 004c268a [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056fbd0 (0056fbd0) at 0056fc15 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005709e0 (005709e0) at 005709f7 [UNCONDITIONAL_CALL]
//   core_terrain.cpp_CTerrain_render_FUN_005e1f50 (005e1f50) at 005e1f76 [UNCONDITIONAL_CALL]
// Globals:
//   double g_CameraOriginScale = 0.00390625
// Function calls:
//   engine_matrix.c_getCameraOrigin_FUN_0050e2c0

#include "nocturne.h"

float * __cdecl
engine_drender_cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
          (CDemonRenderer *this_ptr,float *output)

{
  float fVar1;
  BADSPACEBASE *in_ESP;
  CVector3i local_20;
  int local_14;
  
  engine_matrix_c_getCameraOrigin_FUN_0050e2c0(&local_20);
  fVar1 = (float)g_CameraOriginScale;
  *output = (float)local_20.y * fVar1;
  output[1] = (float)local_20.z * fVar1;
  output[2] = (float)local_14 * fVar1;
  return output;
}


// Assembly code:
// 0048c780: PUSH EBX
//   Label: engine_drender.cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
// 0048c781: PUSH ESI
// 0048c782: PUSH EBP
// 0048c783: MOV EBP,ESP
// 0048c785: SUB ESP,0x10
// 0048c788: AND ESP,0xfffffff8
// 0048c78b: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0048c78e: MOV ESI,ESP
// 0048c790: CALL engine_matrix.c_getCameraOrigin_FUN_0050e2c0
//   XREF to: 0050e2c0 (UNCONDITIONAL_CALL)
// 0048c795: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 0048c798: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0048c79c: FLD double ptr [0x0062205d]
//   XREF to: 0062205d (READ)
// 0048c7a2: FILD dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 0048c7a6: FMUL ST1
// 0048c7a8: FSTP float ptr [EBX]
// 0048c7aa: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x1c] (READ)
// 0048c7ae: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0048c7b2: FILD dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 0048c7b6: FMUL ST1
// 0048c7b8: FSTP float ptr [EBX + 0x4]
// 0048c7bb: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (READ)
// 0048c7bf: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0048c7c3: FILD dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 0048c7c7: FMULP
// 0048c7c9: MOV EAX,EBX
// 0048c7cb: FSTP float ptr [EBX + 0x8]
// 0048c7ce: MOV ESP,EBP
// 0048c7d0: POP EBP
// 0048c7d1: POP ESI
// 0048c7d2: POP EBX
// 0048c7d3: RET
