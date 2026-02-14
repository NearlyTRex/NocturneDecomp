// Name: crt_fstream.cpp_ifstream_destructor_thunk_from_istream_FUN_005ff6e2
// Address: 005ff6e2
// Address Range: [[005ff6e2, 005ff6f7]]
// Convention: __cdecl
// Signature: void __cdecl crt_fstream_cpp_ifstream_destructor_thunk_from_istream_FUN_005ff6e2(istream *this_ptr,int dtor_flags)

#include "nocturne.h"

void __cdecl crt_fstream_cpp_ifstream_destructor_thunk_from_istream_FUN_005ff6e2(istream *this_ptr,int dtor_flags)

{
  crt_fstream_cpp_ifstream_dtor_FUN_005ff856((ifstream *)&this_ptr[-2]._ios.__i_lock,dtor_flags);
  return;
}
