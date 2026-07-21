// Name: cockpit_pkbitmap.cpp_CPackedBitmap_loadAndCompressBitmap_FUN_004f46b0
// Address: 004f46b0
// Address Range: [[004f46b0, 004f46fb]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_loadAndCompressBitmap_FUN_004f46b0(int param_1,int param_2)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_loadAndCompressBitmap_FUN_004f46b0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = cockpit_ckptutil_c_readBitmapFile_FUN_0042d240
                    (param_1,0,*(int *)(param_1 + 0x18) * *(int *)(param_1 + 0x1c));
  if (iVar1 != 0) {
    cockpit_pkbitmap_cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_004f4700
              (param_1,iVar1,*(uint *)(param_1 + 0x18));
    FUN_005638d0(iVar1);
    if (param_2 != 0) {
      cockpit_pkbitmap_cpp_CPackedBitmap_applyPalette_FUN_004f4ab0(param_1);
      return;
    }
  }
  return;
}
