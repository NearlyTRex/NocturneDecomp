// Name: cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_004f4630
// Address: 004f4630
// Address Range: [[004f4630, 004f46a0]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_reloadFromBitmapFile_FUN_004f4630(CPackedBitmap *param_1,char *param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6,undefined4 param_7,int param_8)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_reloadFromBitmapFile_FUN_004f4630(CPackedBitmap *param_1,char *param_2,int param_3,uint param_4,uint param_5,int param_6,uint param_7,int param_8)

{
  void *pvVar1;
  
  cockpit_pkbitmap_cpp_FUN_004f3f50(param_1);
  cockpit_pkbitmap_cpp_CPackedBitmap_setFilename_FUN_004f3fc0(param_1,param_2);
  pvVar1 = cockpit_ckptutil_c_readBitmapFile_FUN_0042d240
                     (param_1->filename,(void *)0x0,param_6 * param_3);
  cockpit_pkbitmap_cpp_CPackedBitmap_load_FUN_004f47b0
            (param_1,pvVar1,param_3,param_6,param_7,param_3);
  FUN_005638d0(pvVar1);
  if (param_8 == 0) {
    return;
  }
  cockpit_pkbitmap_cpp_CPackedBitmap_applyPalette_FUN_004f4ab0(param_1);
  return;
}
