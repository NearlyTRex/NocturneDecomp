// Name: support_codec.cpp_CAsciiArmor_ctor_FUN_00443890
// Address: 00443890
// Address Range: [[00443890, 004438a3]]
// Convention: __cdecl
// Signature: CAsciiArmor * __cdecl support_codec_cpp_CAsciiArmor_ctor_FUN_00443890(CAsciiArmor *this_ptr)

#include "nocturne.h"

CAsciiArmor * __cdecl support_codec_cpp_CAsciiArmor_ctor_FUN_00443890(CAsciiArmor *this_ptr)

{
  CAsciiArmor *pCVar1;
  
  pCVar1 = (CAsciiArmor *)support_codec_cpp_CCodec_ctor_FUN_00442ba0(&this_ptr->base);
  (pCVar1->base).vtable = &g_CAsciiArmorVTable;
  return pCVar1;
}
