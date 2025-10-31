// Name: engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca70
// Address: 0048ca70
// Address Range: [[0048ca70, 0048ca94]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca70(CDemonRenderer * this_ptr, float render_alpha)
// Cross-references:
//   core_batman.cpp_CBatman_FUN_004173b0 (004173b0) at 004174f5 [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_00485be0 (00485be0) at 00485d34 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CTrail_FUN_004c5e90 (004c5e90) at 004c5f03 [UNCONDITIONAL_CALL]
// Globals:
//   double g_RenderAlphaFixedScale = 65535
// Function calls:
//   crt_math.c_round_FUN_005fe6b0
//   engine_3d.c_setRenderAlpha_FUN_00406d80

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca70
          (CDemonRenderer *this_ptr,float render_alpha)

{
  undefined4 in_EAX;
  undefined4 in_EDX;
  float10 fVar1;
  
  fVar1 = (float10)render_alpha * (float10)g_RenderAlphaFixedScale;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44(in_EDX,in_EAX));
  engine_3d_c_setRenderAlpha_FUN_00406d80((int)ROUND(fVar1));
  return;
}


// Assembly code:
// 0048ca70: SUB ESP,0x4
//   Label: engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca70
// 0048ca73: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0048ca77: FMUL double ptr [0x00622085]
//   XREF to: 00622085 (READ)
// 0048ca7d: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0048ca82: FISTP dword ptr [ESP]
//   XREF to: Stack[-0x4] (DATA)
// 0048ca85: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x4] (DATA)
// 0048ca88: PUSH EDX
// 0048ca89: CALL engine_3d.c_setRenderAlpha_FUN_00406d80
//   XREF to: 00406d80 (UNCONDITIONAL_CALL)
// 0048ca8e: ADD ESP,0x4
// 0048ca91: ADD ESP,0x4
// 0048ca94: RET
