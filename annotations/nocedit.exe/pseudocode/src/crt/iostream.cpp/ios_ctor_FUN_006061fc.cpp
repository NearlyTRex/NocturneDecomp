// Name: crt_iostream.cpp_ios_ctor_FUN_006061fc
// Address: 006061fc
// Address Range: [[006061fc, 00606207]]
// Convention: __cdecl
// Signature: ios * crt_iostream.cpp_ios_ctor_FUN_006061fc(ios * this_ptr)

#include "nocturne.h"

ios * __cdecl crt_iostream_cpp_ios_ctor_FUN_006061fc(ios *this_ptr)

{
  this_ptr->cleanup_vtable = &g_IOS_Destructor;
  return this_ptr;
}
