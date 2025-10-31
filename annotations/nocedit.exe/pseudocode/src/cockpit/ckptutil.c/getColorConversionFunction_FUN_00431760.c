// Name: cockpit_ckptutil.c_getColorConversionFunction_FUN_00431760
// Address: 00431760
// Address Range: [[00431760, 0043176f]]
// Convention: __cdecl
// Signature: ColorConversionFunc * cockpit_ckptutil.c_getColorConversionFunction_FUN_00431760(void)
// Cross-references:
//   cockpit_ckptutil.c_blitDualModeSprite_FUN_004326a0 (004326a0) at 004326c8 [UNCONDITIONAL_CALL]
//   cockpit_ckptutil.c_blitHorizontallyClippedSprite_FUN_004328d0 (004328d0) at 00432918 [UNCONDITIONAL_CALL]
//   cockpit_ckptutil.c_blitRectangleClipped_FUN_00432190 (00432190) at 004321d8 [UNCONDITIONAL_CALL]
//   cockpit_ckptutil.c_blitSimpleSprite_FUN_00432540 (00432540) at 00432578 [UNCONDITIONAL_CALL]
//   cockpit_ckptutil.c_blitSpanBasedSpriteClipped_FUN_00431f40 (00431f40) at 00431f9f [UNCONDITIONAL_CALL]
//   cockpit_ckptutil.c_blitSpanBasedSpriteVerticallyClipped_FUN_00432b60 (00432b60) at 00432b6b [UNCONDITIONAL_CALL]
//   cockpit_ckptutil.c_blitSpanBasedSprite_FUN_00431d00 (00431d00) at 00431d57 [UNCONDITIONAL_CALL]
//   cockpit_ckptutil.c_blitUnifiedSprite_FUN_00432300 (00432300) at 0043233c [UNCONDITIONAL_CALL]
//   cockpit_ckptutil.c_blitVerticalColumn_FUN_00432a10 (00432a10) at 00432a48 [UNCONDITIONAL_CALL]
//   cockpit_pkbitmap.cpp_CPackedBitmap_renderClippedRegion_FUN_0054ab30 (0054ab30) at 0054ab76 [UNCONDITIONAL_CALL]
//   cockpit_pkbitmap.cpp_CPackedBitmap_renderToScreenBuffer_FUN_0054aa20 (0054aa20) at 0054aa5e [UNCONDITIONAL_CALL]
// Globals:
//   int g_BitsPerPixel = 0x8

#include "nocturne.h"

ColorConversionFunc * __cdecl cockpit_ckptutil_c_getColorConversionFunction_FUN_00431760(void)

{
  if (g_BitsPerPixel == 8) {
    if (g_MMXSupported != 0) {
      return cockpit_ckptutil_c_mmxOptimizedMemcpy_FUN_00431622;
    }
    return cockpit_ckptutil_c_optimizedMemcpy_FUN_00431528;
  }
  if (g_BitsPerPixel != 0x10) {
    return cockpit_ckptutil_c_expandIndexedToRGB_FUN_004314fa;
  }
  return cockpit_ckptutil_c_basicIndexedTo16Bit_FUN_00431730;
}


// Assembly code:
// 00431760: MOV EDX,dword ptr [0x0067939c]
//   Label: cockpit_ckptutil.c_getColorConversionFunction_FUN_00431760
//   XREF to: 0067939c (READ)
// 00431766: CMP EDX,0x8
// 00431769: JZ 0x00431780
//   XREF to: 00431780 (CONDITIONAL_JUMP)
// 0043176b: CMP EDX,0x10
// 0043176e: JZ 0x004317a0
//   XREF to: 004317a0 (CONDITIONAL_JUMP)
