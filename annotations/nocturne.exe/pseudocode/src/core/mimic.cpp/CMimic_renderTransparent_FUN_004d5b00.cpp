// Name: core_mimic.cpp_CMimic_renderTransparent_FUN_004d5b00
// Address: 004d5b00
// Address Range: [[004d5b00, 004d5b0f]]
// Convention: __cdecl
// Signature: int __cdecl core_mimic_cpp_CMimic_renderTransparent_FUN_004d5b00(CMimic *this_ptr)

#include "nocturne.h"

int __cdecl core_mimic_cpp_CMimic_renderTransparent_FUN_004d5b00(CMimic *this_ptr)

{
  int iVar1;
  
  if ((this_ptr->base).base.base.is_transparent == 0) {
    return 0;
  }
  iVar1 = core_mimic_cpp_CMimic_renderMirrored_FUN_004d5860(this_ptr);
  return iVar1;
}
