// Name: crt_strstream.cpp_ostrstream_dtor_FUN_00564e98
// Address: 00564e98
// Address Range: [[00564e98, 00564f31]]
// Convention: __cdecl
// Signature: _ostrstream * __cdecl crt_strstream_cpp_ostrstream_dtor_FUN_00564e98(void *this_ptr,uint flags)

#include "nocturne.h"

_ostrstream * __cdecl crt_strstream_cpp_ostrstream_dtor_FUN_00564e98(void *this_ptr,uint flags)

{
  _ostream *p_Var1;
  void *ptr;
  ios *piVar2;
  
  if ((flags & 4) == 0) {
    *(int *)((int)this_ptr + *(int *)(*(int *)this_ptr + 4) + -4) = *(int *)(*(int *)this_ptr + 4);
    *(byte ***)((int)this_ptr + 0x44) =
         &PTR_crt_strstream_cpp_ostrstream_dtor_FUN_00564e98_005a46cc;
    *(byte ***)((int)this_ptr + 0x4c) = &PTR_crt_unknown_c_FUN_00564e3d_005a46d4;
    *(byte ***)((int)this_ptr + *(int *)(*(int *)this_ptr + 4) + 0x28) =
         &PTR_crt_unknown_c_FUN_00564e53_005a46dc;
    p_Var1 = crt_iostream_cpp_ostream_dtor_FUN_0056b538((_ostream *)((int)this_ptr + 0x48),1);
    this_ptr = crt_strstream_cpp_strstreambase_dtor_FUN_0056b5ad
                         ((strstreambase *)&p_Var1[-2]._ios.__xalloc_list,1);
    if ((flags & 1) == 0) {
      piVar2 = crt_iostream_cpp_ios_dtor_FUN_0056b633
                         ((ios *)&(((_ostrstream *)this_ptr)->_ios).__tied_stream,1);
      this_ptr = &piVar2[-2].__tied_stream;
    }
    if ((flags & 2) == 0) {
      return this_ptr;
    }
    FUN_00564494(this_ptr);
  }
  else {
    ptr = __vec_delete(this_ptr,&g_ostrstreamTypeInfo_0059b490);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
  }
  return this_ptr;
}
