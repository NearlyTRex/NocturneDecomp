// Name: crt_iostream.cpp_ostream_destructor_thunk_FUN_0056b4eb
// Address: 0056b4eb
// Address Range: [[0056b4eb, 0056b502]]
// Convention: __cdecl
// Signature: void __cdecl crt_iostream_cpp_ostream_destructor_thunk_FUN_0056b4eb(ios *this_ptr,int dtor_flags)

#include "nocturne.h"

void __cdecl crt_iostream_cpp_ostream_destructor_thunk_FUN_0056b4eb(ios *this_ptr,int dtor_flags)

{
  crt_iostream_cpp_ostream_dtor_FUN_0056b538
            ((_ostream *)((int)this_ptr - (int)this_ptr[-1].cleanup_vtable),dtor_flags);
  return;
}
