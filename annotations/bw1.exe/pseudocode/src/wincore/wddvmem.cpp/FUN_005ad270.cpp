// Name: wincore_wddvmem.cpp_FUN_005ad270
// Address: 005ad270
// Address Range: [[005ad270, 005ad2b0]]
// Convention: unknown
// Signature: void wincore_wddvmem_cpp_FUN_005ad270(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wincore_wddvmem_cpp_FUN_005ad270(void)

{
  int iVar1;
  
  if ((_DAT_02c83370 != 0) && (_DAT_02c99318 != 0)) {
    iVar1 = _stricmp(&DAT_006257d0,"trigl.dll");
    if (iVar1 != 0) {
      engine_special_cpp_restoreVideoMode_FUN_00582310();
    }
    ShowWindow(_DAT_02c9be68,6);
    return;
  }
  return;
}
