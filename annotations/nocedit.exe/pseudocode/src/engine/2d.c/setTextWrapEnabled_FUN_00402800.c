// Name: engine_2d.c_setTextWrapEnabled_FUN_00402800
// Address: 00402800
// Address Range: [[00402800, 00402809]]
// Convention: __cdecl
// Signature: void engine_2d.c_setTextWrapEnabled_FUN_00402800(int enabled)
// Cross-references:
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120 (00489120) at 00489353 [UNCONDITIONAL_CALL]
//   core_actor.cpp_CActorPropertyList_FUN_0040e850 (0040e850) at 0040e86f [UNCONDITIONAL_CALL]
//   engine_2d.c_disableTextWrap_FUN_00402820 (00402820) at 00402822 [UNCONDITIONAL_CALL]
//   engine_2d.c_enableTextWrap_FUN_00402810 (00402810) at 00402812 [UNCONDITIONAL_CALL]
// Globals:
//   int g_TextWrapEnabled = 0x1

#include "nocturne.h"

void __cdecl engine_2d_c_setTextWrapEnabled_FUN_00402800(int enabled)

{
  g_TextWrapEnabled = enabled;
  return;
}


// Assembly code:
// 00402800: MOV EAX,dword ptr [ESP + 0x4]
//   Label: engine_2d.c_setTextWrapEnabled_FUN_00402800
//   XREF to: Stack[0x4] (READ)
// 00402804: MOV [0x0066df74],EAX
//   XREF to: 0066df74 (WRITE)
// 00402809: RET
