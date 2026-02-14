// Name: crt_fstream.cpp_ofstream_destructor_thunk_from_ostream_FUN_005ff78e
// Address: 005ff78e
// Address Range: [[005ff78e, 005ff7a3]]
// Convention: __cdecl
// Signature: void __cdecl crt_fstream_cpp_ofstream_destructor_thunk_from_ostream_FUN_005ff78e(ostream *this_ptr,int dtor_flags)

#include "nocturne.h"

void __cdecl crt_fstream_cpp_ofstream_destructor_thunk_from_ostream_FUN_005ff78e(ostream *this_ptr,int dtor_flags)

{
  crt_fstream_cpp_ofstream_dtor_FUN_005ff7bc
            ((ofstream *)&this_ptr[-2]._ios.__fill_character,dtor_flags);
  return;
}
