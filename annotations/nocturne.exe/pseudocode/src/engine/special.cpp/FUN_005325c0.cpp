// Name: engine_special.cpp_FUN_005325c0
// Address: 005325c0
// Address Range: [[005325c0, 005325ee]]
// Convention: unknown
// Signature: int engine_special_cpp_FUN_005325c0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int engine_special_cpp_FUN_005325c0(void)

{
  int iVar1;
  
  if (_DAT_01c02594 == 0) {
    return 0;
  }
  iVar1 = (*_DAT_02dc9ddc)(g_SourcePaletteData,&DAT_01bff720);
  if (iVar1 != 0) {
    wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004b63f0();
  }
  return iVar1;
}
