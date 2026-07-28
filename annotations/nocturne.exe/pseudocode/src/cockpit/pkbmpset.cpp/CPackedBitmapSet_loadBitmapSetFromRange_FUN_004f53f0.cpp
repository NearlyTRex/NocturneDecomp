// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_004f53f0
// Address: 004f53f0
// Address Range: [[004f53f0, 004f54b7]]
// Convention: unknown
// Signature: int cockpit_pkbmpset_cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_004f53f0(CPackedBitmapSet *param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6,undefined4 param_7,undefined4 param_8)

#include "nocturne.h"

int cockpit_pkbmpset_cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_004f53f0(CPackedBitmapSet *param_1,uint param_2,int param_3,int param_4,int param_5,int param_6,uint param_7,uint param_8)

{
  int iVar1;
  int iVar2;
  byte local_74 [100];
  
  cockpit_pkbitmap_cpp_FUN_004f5320(param_1);
  cockpit_pkbitmap_cpp_FUN_004f5290(param_1);
  cockpit_pkbmpset_cpp_CPackedBitmapSet_alloc_FUN_004f5350(param_1,(param_6 - param_5) + 1);
  param_1->height = param_4;
  param_1->width = param_3;
  iVar1 = param_3;
  if (param_5 <= param_6) {
    iVar2 = 0;
    do {
      _sprintf(local_74,param_2,param_5);
      param_5 = param_5 + 1;
      iVar1 = cockpit_pkbitmap_cpp_CPackedBitmap_reloadFromBitmapFile_FUN_004f4630
                        (param_1->bitmap_array->filename + iVar2,local_74,param_3,param_4,param_7,
                         param_8);
      iVar2 = iVar2 + 0x24;
    } while (param_5 <= param_6);
  }
  return iVar1;
}
