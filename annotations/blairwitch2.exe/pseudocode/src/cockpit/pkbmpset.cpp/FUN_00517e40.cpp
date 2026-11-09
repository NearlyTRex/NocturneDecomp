// Name: cockpit_pkbmpset.cpp_FUN_00517e40
// Address: 00517e40
// Address Range: [[00517e40, 00517e80]]
// Convention: unknown
// Signature: void cockpit_pkbmpset_cpp_FUN_00517e40(undefined4 param_1,char *param_2,CPackedBitmapSet *param_3)

#include "nocturne.h"

void cockpit_pkbmpset_cpp_FUN_00517e40(uint param_1,char *param_2,CPackedBitmapSet *param_3)

{
  char acStack_f8 [248];
  
  cockpit_ckptutil_c_loadACTToIndexedPalette_FUN_0042c6f0(param_2,&stack0xffffff00);
  cockpit_pkbmpset_cpp_CPackedBitmapSet_applyPaletteToAllBitmaps_FUN_00517e90(param_3,acStack_f8);
  return;
}
