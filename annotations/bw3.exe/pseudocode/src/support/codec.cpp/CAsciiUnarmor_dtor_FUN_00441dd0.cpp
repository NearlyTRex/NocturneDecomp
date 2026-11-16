// Name: support_codec.cpp_CAsciiUnarmor_dtor_FUN_00441dd0
// Address: 00441dd0
// Address Range: [[00441dd0, 00441e1d]]
// Convention: __cdecl
// Signature: CAsciiUnarmor * __cdecl support_codec_cpp_CAsciiUnarmor_dtor_FUN_00441dd0(CAsciiUnarmor *this_ptr,uint flags)

#include "nocturne.h"

CAsciiUnarmor * __cdecl support_codec_cpp_CAsciiUnarmor_dtor_FUN_00441dd0(CAsciiUnarmor *this_ptr,uint flags)

{
  CAsciiUnarmor *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CAsciiUnarmorTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CAsciiUnarmor *)support_codec_cpp_CCodec_dtor_FUN_00440810(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
