// Name: crt_strstream.cpp_istrstream_destructor_thunk_from_istream_FUN_005ff59c
// Address: 005ff59c
// Address Range: [[005ff59c, 005ff5b1]]
// Convention: __cdecl
// Signature: void crt_strstream.cpp_istrstream_destructor_thunk_from_istream_FUN_005ff59c(istream * this_ptr, int dtor_flags)

#include "nocturne.h"

void __cdecl
crt_strstream_cpp_istrstream_destructor_thunk_from_istream_FUN_005ff59c
          (istream *this_ptr,int dtor_flags)

{
  crt_strstream_cpp_istrstream_dtor_FUN_005ff5ca
            ((istrstream *)&this_ptr[-2].ios.__fill_character,dtor_flags);
  return;
}
