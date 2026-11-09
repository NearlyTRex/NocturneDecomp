// Name: wincore_wddvmem.cpp_FUN_0057ab20
// Address: 0057ab20
// Address Range: [[0057ab20, 0057ab60]]
// Convention: unknown
// Signature: void wincore_wddvmem_cpp_FUN_0057ab20(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wincore_wddvmem_cpp_FUN_0057ab20(void)

{
  int iVar1;
  
  if ((_DAT_02cf5fcc != 0) && (_DAT_02d0bcf8 != 0)) {
    iVar1 = _stricmp(&DAT_00606730,"trigl.dll");
    if (iVar1 != 0) {
      engine_special_cpp_restoreVideoMode_FUN_00565be0();
    }
    ShowWindow(_DAT_02d21b78,6);
    return;
  }
  return;
}
