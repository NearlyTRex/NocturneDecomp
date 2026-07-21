// Name: cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_004f4630
// Address: 004f4630
// Address Range: [[004f4630, 004f46a0]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_reloadFromBitmapFile_FUN_004f4630(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,int param_6)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_reloadFromBitmapFile_FUN_004f4630(uint param_1,uint param_2,int param_3,int param_4,uint param_5,int param_6)

{
  uint uVar1;
  
  FUN_004f3f50(param_1);
  cockpit_pkbitmap_cpp_CPackedBitmap_setFilename_FUN_004f3fc0(param_1,param_2);
  uVar1 = cockpit_ckptutil_c_readBitmapFile_FUN_0042d240(param_1,0,param_4 * param_3);
  cockpit_pkbitmap_cpp_CPackedBitmap_load_FUN_004f47b0
            (param_1,uVar1,param_3,param_4,param_5,param_3);
  FUN_005638d0(uVar1);
  if (param_6 == 0) {
    return;
  }
  cockpit_pkbitmap_cpp_CPackedBitmap_applyPalette_FUN_004f4ab0(param_1);
  return;
}
