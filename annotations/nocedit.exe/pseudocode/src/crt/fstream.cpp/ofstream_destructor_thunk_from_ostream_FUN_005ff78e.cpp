// Name: crt_fstream.cpp_ofstream_destructor_thunk_from_ostream_FUN_005ff78e
// Address: 005ff78e
// Address Range: [[005ff78e, 005ff7a3]]
// Convention: __cdecl
// Signature: void crt_fstream.cpp_ofstream_destructor_thunk_from_ostream_FUN_005ff78e(ostream * this_ptr, int dtor_flags)

#include "nocturne.h"

void __cdecl
crt_fstream_cpp_ofstream_destructor_thunk_from_ostream_FUN_005ff78e
          (ostream *this_ptr,int dtor_flags)

{
  uint unaff_retaddr;
  
  crt_fstream_cpp_ofstream_dtor_FUN_005ff7bc
            ((ofstream *)&this_ptr[-2].ios.__fill_character,dtor_flags,unaff_retaddr,(uint)this_ptr,
             dtor_flags);
  return;
}
