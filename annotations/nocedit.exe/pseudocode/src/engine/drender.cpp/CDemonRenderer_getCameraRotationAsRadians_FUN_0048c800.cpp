// Name: engine_drender.cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
// Address: 0048c800
// Address Range: [[0048c800, 0048c861]]
// Convention: __cdecl
// Signature: float * engine_drender.cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800(CDemonRenderer * this_ptr, float * output)
// Cross-references:
//   core_dlight.cpp_CDemonLight_renderLightBloomQuad_FUN_00473a20 (00473a20) at 00473a64 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_renderLightGlowSprites_FUN_00473f90 (00473f90) at 004743d2 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_renderVolumetricLightShaft_FUN_00474ad0 (00474ad0) at 00474ebd [UNCONDITIONAL_CALL]
//   core_fire.cpp_CExplosion_FUN_004c3b10 (004c3b10) at 004c3b8a [UNCONDITIONAL_CALL]
//   core_fire.cpp_CGunFlame_FUN_004c50b0 (004c50b0) at 004c512a [UNCONDITIONAL_CALL]
//   core_fire.cpp_CLaserBeam_render_FUN_004c25c0 (004c25c0) at 004c29eb [UNCONDITIONAL_CALL]
//   core_fire.cpp_CLightningBolt_FUN_004c5720 (004c5720) at 004c5893 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CTrail_FUN_004c5e90 (004c5e90) at 004c5f37 [UNCONDITIONAL_CALL]
//   core_flame.cpp_FUN_004ca110 (004ca110) at 004ca6a5 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005709e0 (005709e0) at 00570a2a [UNCONDITIONAL_CALL]
//   core_weather.cpp_CWeather_FUN_005ef190 (005ef190) at 005ef1bb [UNCONDITIONAL_CALL]
// Globals:
//   double g_AngleToRadianScale = 0.000030517578125
//   double g_PiConstant = 3.14159265350000
// Function calls:
//   engine_matrix.c_getCameraRotation_FUN_0050e2f0

#include "nocturne.h"

float * __cdecl
engine_drender_cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
          (CDemonRenderer *this_ptr,float *output)

{
  float fVar1;
  float fVar2;
  BADSPACEBASE *in_ESP;
  CVector3i local_20;
  int local_14;
  
  engine_matrix_c_getCameraRotation_FUN_0050e2f0(&local_20);
  fVar2 = (float)g_AngleToRadianScale;
  fVar1 = (float)g_PiConstant;
  *output = (float)local_20.y * fVar2 * fVar1;
  output[2] = (float)local_20.z * fVar2 * fVar1;
  output[1] = fVar1 * (float)local_14 * fVar2;
  return output;
}


// Assembly code:
// 0048c800: PUSH EBX
//   Label: engine_drender.cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
// 0048c801: PUSH ESI
// 0048c802: PUSH EBP
// 0048c803: MOV EBP,ESP
// 0048c805: SUB ESP,0x10
// 0048c808: AND ESP,0xfffffff8
// 0048c80b: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0048c80e: MOV ESI,ESP
// 0048c810: CALL engine_matrix.c_getCameraRotation_FUN_0050e2f0
//   XREF to: 0050e2f0 (UNCONDITIONAL_CALL)
// 0048c815: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 0048c818: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0048c81c: FLD double ptr [0x00622065]
//   XREF to: 00622065 (READ)
// 0048c822: FILD dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 0048c826: FMUL ST1
// 0048c828: FLD double ptr [0x0062206d]
//   XREF to: 0062206d (READ)
// 0048c82e: FXCH
// 0048c830: FMUL ST1
// 0048c832: FSTP float ptr [EBX]
// 0048c834: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x1c] (READ)
// 0048c838: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0048c83c: FILD dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 0048c840: FMUL ST2
// 0048c842: FMUL ST1
// 0048c844: FSTP float ptr [EBX + 0x8]
// 0048c847: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (READ)
// 0048c84b: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0048c84f: FILD dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 0048c853: FMULP ST2
// 0048c855: FMULP
// 0048c857: MOV EAX,EBX
// 0048c859: FSTP float ptr [EBX + 0x4]
// 0048c85c: MOV ESP,EBP
// 0048c85e: POP EBP
// 0048c85f: POP ESI
// 0048c860: POP EBX
// 0048c861: RET
