// Name: cockpit_pkbitmap.cpp_CPackedBitmap_applyACTPalette_FUN_004f4a00
// Address: 004f4a00
// Address Range: [[004f4a00, 004f4a40]]
// Convention: __cdecl
// Signature: undefined4 __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_applyACTPalette_FUN_004f4a00(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

uint __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_applyACTPalette_FUN_004f4a00(uint param_1,uint param_2)

{
  uint uVar1;
  byte auStack_100 [256];
  
  cockpit_ckptutil_c_loadACTToIndexedPalette_FUN_0042d3f0(param_2,auStack_100);
  uVar1 = cockpit_pkbitmap_cpp_CPackedBitmap_applyPaletteToPackedData_FUN_004f4a50
                    (param_1,auStack_100);
  return uVar1;
}
