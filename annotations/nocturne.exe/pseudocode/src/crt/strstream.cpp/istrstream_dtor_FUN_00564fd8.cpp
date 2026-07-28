// Name: crt_strstream.cpp_istrstream_dtor_FUN_00564fd8
// Address: 00564fd8
// Address Range: [[00564fd8, 00565071]]
// Convention: __cdecl
// Signature: _istrstream * __cdecl crt_strstream_cpp_istrstream_dtor_FUN_00564fd8(void *this_ptr,uint flags)

#include "nocturne.h"

_istrstream * __cdecl crt_strstream_cpp_istrstream_dtor_FUN_00564fd8(void *this_ptr,uint flags)

{
  _istream *p_Var1;
  void *ptr;
  ios *piVar2;
  
  if ((flags & 4) == 0) {
    *(int *)((int)this_ptr + *(int *)(*(int *)this_ptr + 4) + -4) = *(int *)(*(int *)this_ptr + 4);
    *(byte ***)((int)this_ptr + 0x44) =
         &PTR_crt_strstream_cpp_istrstream_dtor_FUN_00564fd8_005a4744;
    *(byte ***)((int)this_ptr + 0x50) = &PTR_crt_unknown_c_FUN_00564faa_005a474c;
    *(byte ***)((int)this_ptr + *(int *)(*(int *)this_ptr + 4) + 0x28) =
         &PTR_crt_unknown_c_FUN_00564fc0_005a4754;
    p_Var1 = crt_iostream_cpp_istream_dtor_FUN_0056b6e8((_istream *)((int)this_ptr + 0x48),1);
    this_ptr = crt_strstream_cpp_strstreambase_dtor_FUN_0056b5ad
                         ((strstreambase *)&p_Var1[-2]._ios.__fill_character,1);
    if ((flags & 1) == 0) {
      piVar2 = crt_iostream_cpp_ios_dtor_FUN_0056b633(&((_istrstream *)this_ptr)->_ios,1);
      this_ptr = piVar2 + -2;
    }
    if ((flags & 2) == 0) {
      return this_ptr;
    }
    FUN_00564494(this_ptr);
  }
  else {
    ptr = __vec_delete(this_ptr,(WatcomTypeInfo *)&DAT_0059b4b0);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
  }
  return this_ptr;
}
