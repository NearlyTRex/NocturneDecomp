// Name: support_codec.cpp_CAsciiUnarmor_dtor_FUN_00444170
// Address: 00444170
// Address Range: [[00444170, 004441bd]]
// Convention: __cdecl
// Signature: CAsciiUnarmor * __cdecl support_codec_cpp_CAsciiUnarmor_dtor_FUN_00444170(CAsciiUnarmor *this_ptr,uint flags)

#include "nocturne.h"

CAsciiUnarmor * __cdecl support_codec_cpp_CAsciiUnarmor_dtor_FUN_00444170(CAsciiUnarmor *this_ptr,uint flags)

{
  CAsciiUnarmor *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CAsciiUnarmorTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CAsciiUnarmor *)support_codec_cpp_CCodec_dtor_FUN_00442bb0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
