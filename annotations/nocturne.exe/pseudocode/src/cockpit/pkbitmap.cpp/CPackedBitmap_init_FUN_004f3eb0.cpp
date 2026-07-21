// Name: cockpit_pkbitmap.cpp_CPackedBitmap_init_FUN_004f3eb0
// Address: 004f3eb0
// Address Range: [[004f3eb0, 004f3ef6]]
// Convention: unknown
// Signature: undefined4 cockpit_pkbitmap_cpp_CPackedBitmap_init_FUN_004f3eb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

uint cockpit_pkbitmap_cpp_CPackedBitmap_init_FUN_004f3eb0(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  cockpit_pkbitmap_cpp_CPackedBitmap_reset_FUN_004f3f20(param_1);
  memset(param_1,0,0x14);
  cockpit_pkbitmap_cpp_CPackedBitmap_reloadFromBitmapFile_FUN_004f4630
            (param_1,param_2,param_3,param_4,param_5,param_6);
  return param_1;
}
