// Name: FUN_00545aa0
// Address: 00545aa0
// Address Range: [[00545aa0, 00545acf]]
// Convention: unknown
// Signature: void FUN_00545aa0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FUN_00545aa0(void)

{
  if (_DAT_01c02594 == 0) {
    return;
  }
  wincore_wddvmem_cpp_openScreenDevice_FUN_00553470();
  FUN_00545700(_DAT_02dd0f84);
  wincore_windll_cpp_clearScreen_FUN_0052ee70();
  wincore_wddvmem_cpp_closeScreenDevice_FUN_00553520();
  wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
  return;
}
