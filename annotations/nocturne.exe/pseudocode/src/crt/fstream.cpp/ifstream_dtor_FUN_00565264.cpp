// Name: crt_fstream.cpp_ifstream_dtor_FUN_00565264
// Address: 00565264
// Address Range: [[00565264, 005652fd]]
// Convention: __cdecl
// Signature: ifstream * __cdecl crt_fstream_cpp_ifstream_dtor_FUN_00565264(void *this_ptr,uint flags)

#include "nocturne.h"

ifstream * __cdecl crt_fstream_cpp_ifstream_dtor_FUN_00565264(void *this_ptr,uint flags)

{
  _istream *p_Var1;
  void *ptr;
  ios *piVar2;
  
  if ((flags & 4) == 0) {
    *(int *)((int)this_ptr + *(int *)(*(int *)this_ptr + 4) + -4) = *(int *)(*(int *)this_ptr + 4);
    *(byte ***)((int)this_ptr + 0x40) =
         &PTR_crt_fstream_cpp_ifstream_dtor_FUN_00565264_005a47b8;
    *(byte ***)((int)this_ptr + 0x4c) = &PTR_crt_unknown_c_FUN_005650f0_005a47c0;
    *(byte ***)((int)this_ptr + *(int *)(*(int *)this_ptr + 4) + 0x28) =
         &PTR_crt_unknown_c_FUN_00565106_005a47c8;
    p_Var1 = crt_iostream_cpp_istream_dtor_FUN_0056b6e8((_istream *)((int)this_ptr + 0x44),1);
    this_ptr = crt_fstream_cpp_fstreambase_dtor_FUN_0056b810
                         ((fstreambase *)&p_Var1[-2]._ios.__i_lock,1);
    if ((flags & 1) == 0) {
      piVar2 = crt_iostream_cpp_ios_dtor_FUN_0056b633(&((ifstream *)this_ptr)->_ios,1);
      this_ptr = &piVar2[-2].__tied_stream;
    }
    if ((flags & 2) == 0) {
      return this_ptr;
    }
    operator_delete(this_ptr);
  }
  else {
    ptr = __vec_delete(this_ptr,&g_ifstreamTypeInfo_0059b4d0);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
  }
  return this_ptr;
}
