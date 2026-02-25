// Name: crt_iostream.cpp_ostream_destructor_thunk_FUN_006061e4
// Address: 006061e4
// Address Range: [[006061e4, 006061fb]]
// Convention: __cdecl
// Signature: void __cdecl crt_iostream_cpp_ostream_destructor_thunk_FUN_006061e4(ios *this_ptr,int dtor_flags)

#include "nocturne.h"

void __cdecl crt_iostream_cpp_ostream_destructor_thunk_FUN_006061e4(ios *this_ptr,int dtor_flags)

{
  crt_iostream_cpp_ostream_dtor_FUN_00606231
            ((_ostream *)((int)this_ptr - (int)this_ptr[-1].cleanup_vtable),dtor_flags);
  return;
}
