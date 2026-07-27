// Name: cockpit_pkbmpset.cpp_FUN_004f5b70
// Address: 004f5b70
// Address Range: [[004f5b70, 004f5ba3]]
// Convention: unknown
// Signature: void cockpit_pkbmpset_cpp_FUN_004f5b70(int *param_1,undefined4 param_2)

#include "nocturne.h"

void cockpit_pkbmpset_cpp_FUN_004f5b70(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (0 < *param_1) {
    iVar2 = 0;
    do {
      iVar1 = iVar1 + 1;
      cockpit_pkbitmap_cpp_CPackedBitmap_applyPaletteToPackedData_FUN_004f4a50
                (param_1[1] + iVar2,param_2);
      iVar2 = iVar2 + 0x24;
    } while (iVar1 < *param_1);
  }
  return;
}
