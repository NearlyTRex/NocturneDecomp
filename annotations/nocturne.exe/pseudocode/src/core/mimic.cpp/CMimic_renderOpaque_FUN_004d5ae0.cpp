// Name: core_mimic.cpp_CMimic_renderOpaque_FUN_004d5ae0
// Address: 004d5ae0
// Address Range: [[004d5ae0, 004d5af9]]
// Convention: __cdecl
// Signature: int __cdecl core_mimic_cpp_CMimic_renderOpaque_FUN_004d5ae0(CMimic *this_ptr)

#include "nocturne.h"

int __cdecl core_mimic_cpp_CMimic_renderOpaque_FUN_004d5ae0(CMimic *this_ptr)

{
  int iVar1;
  
  if ((this_ptr->base).base.base.is_transparent != 0) {
    return 0;
  }
  iVar1 = core_mimic_cpp_CMimic_renderMirrored_FUN_004d5860(this_ptr);
  return iVar1;
}
