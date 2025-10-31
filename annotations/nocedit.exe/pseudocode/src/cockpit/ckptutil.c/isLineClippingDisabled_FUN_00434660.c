// Name: cockpit_ckptutil.c_isLineClippingDisabled_FUN_00434660
// Address: 00434660
// Address Range: [[00434660, 00434665]]
// Convention: __cdecl
// Signature: int cockpit_ckptutil.c_isLineClippingDisabled_FUN_00434660(void)
// Cross-references:
//   cockpit_drawsurf.cpp_CDrawSurface_drawAntiAliasedLine_FUN_00488410 (00488410) at 0048845a [UNCONDITIONAL_CALL]
// Globals:
//   int g_LineClippingDisabled = 0x1

#include "nocturne.h"

int __cdecl cockpit_ckptutil_c_isLineClippingDisabled_FUN_00434660(void)

{
  return g_LineClippingDisabled;
}


// Assembly code:
// 00434660: MOV EAX,[0x0066e800]
//   Label: cockpit_ckptutil.c_isLineClippingDisabled_FUN_00434660
//   XREF to: 0066e800 (READ)
// 00434665: RET
