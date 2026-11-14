// Name: support_codec.cpp_CAsciiArmor_ctor_FUN_00434b70
// Address: 00434b70
// Address Range: [[00434b70, 00434b83]]
// Convention: __cdecl
// Signature: CAsciiArmor * __cdecl support_codec_cpp_CAsciiArmor_ctor_FUN_00434b70(CAsciiArmor *this_ptr)

#include "nocturne.h"

CAsciiArmor * __cdecl support_codec_cpp_CAsciiArmor_ctor_FUN_00434b70(CAsciiArmor *this_ptr)

{
  CAsciiArmor *pCVar1;
  
  pCVar1 = (CAsciiArmor *)support_codec_cpp_CCodec_ctor_FUN_00433e80(&this_ptr->base);
  (pCVar1->base).vtable = &g_CAsciiArmorVTable;
  return pCVar1;
}
