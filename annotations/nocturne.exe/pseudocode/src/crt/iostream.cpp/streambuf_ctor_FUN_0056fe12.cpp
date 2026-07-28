// Name: crt_iostream.cpp_streambuf_ctor_FUN_0056fe12
// Address: 0056fe12
// Address Range: [[0056fe12, 0056fe64]]
// Convention: __cdecl
// Signature: streambuf * __cdecl crt_iostream_cpp_streambuf_ctor_FUN_0056fe12(streambuf *this_ptr)

#include "nocturne.h"

streambuf * __cdecl crt_iostream_cpp_streambuf_ctor_FUN_0056fe12(streambuf *this_ptr)

{
  this_ptr[1].__b_lock = &PTR_crt_iostream_cpp_streambuf_do_sgetn_FUN_0056ff82_005a4ab0;
  this_ptr->__b_lock = (void *)0x0;
  this_ptr->__reserve_base = (char *)0x0;
  this_ptr->__reserve_end = (char *)0x0;
  this_ptr->__get_base = (char *)0x0;
  this_ptr->__get_end = (char *)0x0;
  this_ptr->__get_ptr = (char *)0x0;
  this_ptr->__put_base = (char *)0x0;
  this_ptr->__put_end = (char *)0x0;
  this_ptr->__put_ptr = (char *)0x0;
  *(byte *)&this_ptr->__flags = (byte)this_ptr->__flags & 0xfc;
  return this_ptr;
}
