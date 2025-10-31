// Name: engine_drender.cpp_CDemonRenderer_setLightIntensity_FUN_0048c690
// Address: 0048c690
// Address Range: [[0048c690, 0048c6b4]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_setLightIntensity_FUN_0048c690(CDemonRenderer * this_ptr, float intensity)
// Cross-references:
//   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190 (0056a190) at 0056a1bf [UNCONDITIONAL_CALL]
// Globals:
//   double g_LightIntensityScale = 65536
// Function calls:
//   crt_math.c_round_FUN_005fe6b0
//   engine_light.cpp_setAmbientLightLevel_FUN_00505490

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_setLightIntensity_FUN_0048c690
          (CDemonRenderer *this_ptr,float intensity)

{
  undefined4 in_EAX;
  undefined4 in_EDX;
  float10 fVar1;
  
  fVar1 = (float10)intensity * (float10)g_LightIntensityScale;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44(in_EDX,in_EAX));
  engine_light_cpp_setAmbientLightLevel_FUN_00505490((int)ROUND(fVar1));
  return;
}


// Assembly code:
// 0048c690: SUB ESP,0x4
//   Label: engine_drender.cpp_CDemonRenderer_setLightIntensity_FUN_0048c690
// 0048c693: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0048c697: FMUL double ptr [0x0062204d]
//   XREF to: 0062204d (READ)
// 0048c69d: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0048c6a2: FISTP dword ptr [ESP]
//   XREF to: Stack[-0x4] (DATA)
// 0048c6a5: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x4] (DATA)
// 0048c6a8: PUSH EDX
// 0048c6a9: CALL engine_light.cpp_setAmbientLightLevel_FUN_00505490
//   XREF to: 00505490 (UNCONDITIONAL_CALL)
// 0048c6ae: ADD ESP,0x4
// 0048c6b1: ADD ESP,0x4
// 0048c6b4: RET
