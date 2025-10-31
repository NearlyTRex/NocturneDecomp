// Name: engine_2d.c_getTextWrapEnabled_FUN_004027f0
// Address: 004027f0
// Address Range: [[004027f0, 004027f5]]
// Convention: __cdecl
// Signature: int engine_2d.c_getTextWrapEnabled_FUN_004027f0(void)
// Cross-references:
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120 (00489120) at 004893ab [UNCONDITIONAL_CALL]
//   core_actor.cpp_CActorPropertyList_FUN_0040e850 (0040e850) at 0040e861 [UNCONDITIONAL_CALL]
// Globals:
//   int g_TextWrapEnabled = 0x1

#include "nocturne.h"

int __cdecl engine_2d_c_getTextWrapEnabled_FUN_004027f0(void)

{
  return g_TextWrapEnabled;
}


// Assembly code:
// 004027f0: MOV EAX,[0x0066df74]
//   Label: engine_2d.c_getTextWrapEnabled_FUN_004027f0
//   XREF to: 0066df74 (READ)
// 004027f5: RET
