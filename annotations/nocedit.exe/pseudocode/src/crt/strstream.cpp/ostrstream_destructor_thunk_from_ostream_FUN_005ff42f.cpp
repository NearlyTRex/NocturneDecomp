// Name: crt_strstream.cpp_ostrstream_destructor_thunk_from_ostream_FUN_005ff42f
// Address: 005ff42f
// Address Range: [[005ff42f, 005ff444]]
// Convention: __cdecl
// Signature: void __cdecl crt_strstream_cpp_ostrstream_destructor_thunk_from_ostream_FUN_005ff42f(_ostream *this_ptr,int dtor_flags)

#include "nocturne.h"

void __cdecl crt_strstream_cpp_ostrstream_destructor_thunk_from_ostream_FUN_005ff42f(_ostream *this_ptr,int dtor_flags)

{
  crt_strstream_cpp_ostrstream_dtor_FUN_005ff48a(&this_ptr[-2]._ios.__xalloc_list,dtor_flags);
  return;
}
