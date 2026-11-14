// Name: support_codec.cpp_CAsciiArmor_ctor_FUN_004414f0
// Address: 004414f0
// Address Range: [[004414f0, 00441503]]
// Convention: __cdecl
// Signature: CAsciiArmor * __cdecl support_codec_cpp_CAsciiArmor_ctor_FUN_004414f0(CAsciiArmor *this_ptr)

#include "nocturne.h"

CAsciiArmor * __cdecl support_codec_cpp_CAsciiArmor_ctor_FUN_004414f0(CAsciiArmor *this_ptr)

{
  CAsciiArmor *pCVar1;
  
  pCVar1 = (CAsciiArmor *)support_codec_cpp_CCodec_ctor_FUN_00440800(&this_ptr->base);
  (pCVar1->base).vtable = &g_CAsciiArmorVTable;
  return pCVar1;
}
