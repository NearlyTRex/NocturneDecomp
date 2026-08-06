// Name: crt_fstream.cpp_ofstream_dtor_FUN_005651ca
// Address: 005651ca
// Address Range: [[005651ca, 00565263]]
// Convention: __cdecl
// Signature: ofstream * __cdecl crt_fstream_cpp_ofstream_dtor_FUN_005651ca(void *this_ptr,uint flags)

#include "nocturne.h"

ofstream * __cdecl crt_fstream_cpp_ofstream_dtor_FUN_005651ca(void *this_ptr,uint flags)

{
  _ostream *p_Var1;
  void *ptr;
  ios *piVar2;
  
  if ((flags & 4) == 0) {
    *(int *)((int)this_ptr + *(int *)(*(int *)this_ptr + 4) + -4) = *(int *)(*(int *)this_ptr + 4);
    *(byte ***)((int)this_ptr + 0x40) =
         &PTR_crt_fstream_cpp_ofstream_dtor_FUN_005651ca_005a4824;
    *(byte ***)((int)this_ptr + 0x48) = &PTR_crt_unknown_c_FUN_0056519c_005a482c;
    *(byte ***)((int)this_ptr + *(int *)(*(int *)this_ptr + 4) + 0x28) =
         &PTR_crt_unknown_c_FUN_005651b2_005a4834;
    p_Var1 = crt_iostream_cpp_ostream_dtor_FUN_0056b538((_ostream *)((int)this_ptr + 0x44),1);
    this_ptr = crt_fstream_cpp_fstreambase_dtor_FUN_0056b810
                         ((fstreambase *)&p_Var1[-2]._ios.__fill_character,1);
    if ((flags & 1) == 0) {
      piVar2 = crt_iostream_cpp_ios_dtor_FUN_0056b633(&((ofstream *)this_ptr)->_ios,1);
      this_ptr = &piVar2[-2].__format_flags;
    }
    if ((flags & 2) == 0) {
      return this_ptr;
    }
    operator_delete(this_ptr);
  }
  else {
    ptr = __vec_delete(this_ptr,&g_ofstreamTypeInfo_0059b4f0);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
  }
  return this_ptr;
}
