// Name: core_mimic.cpp_CMimic_renderTransparent_FUN_005108f0
// Address: 005108f0
// Address Range: [[005108f0, 005108ff]]
// Convention: __cdecl
// Signature: int __cdecl core_mimic_cpp_CMimic_renderTransparent_FUN_005108f0(CMimic *this_ptr)

#include "nocturne.h"

int __cdecl core_mimic_cpp_CMimic_renderTransparent_FUN_005108f0(CMimic *this_ptr)

{
  int iVar1;
  
  if ((this_ptr->base).base.base.is_transparent == 0) {
    return 0;
  }
  iVar1 = core_mimic_cpp_CMimic_renderMirrored_FUN_00510620(this_ptr);
  return iVar1;
}
