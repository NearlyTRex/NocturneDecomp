// Name: core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_004528e0
// Address: 004528e0
// Address Range: [[004528e0, 004528f9]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_004528e0(CDemonCamera * this_ptr, float intensity)
// Cross-references:
//   core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0 (004ddaf0) at 004dfae4 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_00570e20 (00570e20) at 00570e4d [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_initScene_FUN_0056aa10 (0056aa10) at 0056aad9 [UNCONDITIONAL_CALL]
//   core_setutil.cpp_C3DSCamera_apply_FUN_00585870 (00585870) at 005858e5 [UNCONDITIONAL_CALL]
//   core_weather.cpp_CWeather_SomethingWithLightingThunder_FUN_005eeaf0 (005eeaf0) at 005eed5c [UNCONDITIONAL_CALL]
// Globals:
//   double g_CameraEffectIntensityScaleFactor = 65535
// Function calls:
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_004528e0
          (CDemonCamera *this_ptr,float intensity)

{
  undefined4 in_EDX;
  float10 fVar1;
  double dVar2;
  
  fVar1 = (float10)intensity * (float10)g_CameraEffectIntensityScaleFactor;
  dVar2 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(in_EDX,this_ptr));
  *(int *)(SUB84(dVar2,0) + 0x11e8) = (int)ROUND(fVar1);
  return;
}


// Assembly code:
// 004528e0: FLD float ptr [ESP + 0x8]
//   Label: core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_004528e0
//   XREF to: Stack[0x8] (READ)
// 004528e4: FMUL double ptr [0x0061a33a]
//   XREF to: 0061a33a (READ)
// 004528ea: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 004528ee: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004528f3: FISTP dword ptr [EAX + 0x11e8]
// 004528f9: RET
