// Name: cockpit_pkbmpset.cpp_FUN_00510e70
// Address: 00510e70
// Address Range: [[00510e70, 00510eb0]]
// Convention: unknown
// Signature: void cockpit_pkbmpset_cpp_FUN_00510e70(undefined4 param_1,char *param_2,CPackedBitmapSet *param_3)

#include "nocturne.h"

void cockpit_pkbmpset_cpp_FUN_00510e70(uint param_1,char *param_2,CPackedBitmapSet *param_3)

{
  char acStack_f8 [248];
  
  cockpit_ckptutil_c_loadACTToIndexedPalette_FUN_00435010(param_2,&stack0xffffff00);
  cockpit_pkbmpset_cpp_CPackedBitmapSet_applyPaletteToAllBitmaps_FUN_00510ec0(param_3,acStack_f8);
  return;
}
