// Name: engine_drender.cpp_CDemonRenderer_setProjectionScaleSimple_FUN_0048c670
// Address: 0048c670
// Address Range: [[0048c670, 0048c685]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_setProjectionScaleSimple_FUN_0048c670(CDemonRenderer * this_ptr, float scale_factor)
// Cross-references:
//   core_setdir.cpp_CZThumb_pushRenderingContext_FUN_00574e70 (00574e70) at 00574ed0 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_WriteActBackdrop_FUN_0057ce80 (0057ce80) at 0057d044 [UNCONDITIONAL_CALL]
// Globals:
//   double g_ProjectionScaleDivisor = 65536
//   int g_ProjectionScale = 0x10000
// Function calls:
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_setProjectionScaleSimple_FUN_0048c670
          (CDemonRenderer *this_ptr,float scale_factor)

{
  undefined4 in_EAX;
  undefined4 in_EDX;
  float10 fVar1;
  
  fVar1 = (float10)g_ProjectionScaleDivisor / (float10)scale_factor;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44(in_EDX,in_EAX));
  g_ProjectionScale = (int)ROUND(fVar1);
  return;
}


// Assembly code:
// 0048c670: FLD float ptr [ESP + 0x8]
//   Label: engine_drender.cpp_CDemonRenderer_setProjectionScaleSimple_FUN_0048c670
//   XREF to: Stack[0x8] (READ)
// 0048c674: FDIVR double ptr [0x00622045]
//   XREF to: 00622045 (READ)
// 0048c67a: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0048c67f: FISTP dword ptr [0x006793c0]
//   XREF to: 006793c0 (WRITE)
// 0048c685: RET
