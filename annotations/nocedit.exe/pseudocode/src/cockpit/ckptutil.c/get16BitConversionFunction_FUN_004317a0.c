// Name: cockpit_ckptutil.c_get16BitConversionFunction_FUN_004317a0
// Address: 004317a0
// Address Range: [[004317a0, 004317a5]]
// Convention: __cdecl
// Signature: ColorConversionFunc * cockpit_ckptutil.c_get16BitConversionFunction_FUN_004317a0(void)
// Cross-references:
//   cockpit_ckptutil.c_getColorConversionFunction_FUN_00431760 (00431760) at 0043176e [CONDITIONAL_JUMP]
//   cockpit_pkbitmap.cpp_CPackedBitmap_copyNoClip_FUN_0054ae70 (0054ae70) at 0054af5b [UNCONDITIONAL_CALL]

#include "nocturne.h"

ColorConversionFunc * __cdecl cockpit_ckptutil_c_get16BitConversionFunction_FUN_004317a0(void)

{
  return cockpit_ckptutil_c_basicIndexedTo16Bit_FUN_00431730;
}


// Assembly code:
// 004317a0: MOV EAX,0x431730
//   Label: cockpit_ckptutil.c_get16BitConversionFunction_FUN_004317a0
//   XREF to: 00431730 (DATA)
// 004317a5: RET
