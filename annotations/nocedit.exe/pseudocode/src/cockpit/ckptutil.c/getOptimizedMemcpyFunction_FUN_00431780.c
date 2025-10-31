// Name: cockpit_ckptutil.c_getOptimizedMemcpyFunction_FUN_00431780
// Address: 00431780
// Address Range: [[00431780, 00431794]]
// Convention: __cdecl
// Signature: OptimizedMemcpyFunc * cockpit_ckptutil.c_getOptimizedMemcpyFunction_FUN_00431780(void)
// Cross-references:
//   cockpit_ckptutil.c_copyBitmapRegion_FUN_00432860 (00432860) at 00432888 [UNCONDITIONAL_CALL]
//   cockpit_ckptutil.c_getColorConversionFunction_FUN_00431760 (00431760) at 00431769 [CONDITIONAL_JUMP]
//   cockpit_pkbitmap.cpp_CPackedBitmap_copyNoClip_FUN_0054ae70 (0054ae70) at 0054aeb7 [UNCONDITIONAL_CALL]
// Globals:
//   BOOL g_MMXSupported

#include "nocturne.h"

OptimizedMemcpyFunc * __cdecl cockpit_ckptutil_c_getOptimizedMemcpyFunction_FUN_00431780(void)

{
  if (g_MMXSupported != 0) {
    return cockpit_ckptutil_c_mmxOptimizedMemcpy_FUN_00431622;
  }
  return cockpit_ckptutil_c_optimizedMemcpy_FUN_00431528;
}


// Assembly code:
// 00431780: CMP dword ptr [0x02d05248],0x0
//   Label: cockpit_ckptutil.c_getOptimizedMemcpyFunction_FUN_00431780
//   XREF to: 02d05248 (READ)
// 00431787: JZ 0x0043178f
//   XREF to: 0043178f (CONDITIONAL_JUMP)
// 00431789: MOV EAX,0x431622
//   XREF to: 00431622 (DATA)
// 0043178e: RET
// 0043178f: MOV EAX,0x431528
//   Label: LAB_0043178f
//   XREF to: 00431528 (DATA)
// 00431794: RET
