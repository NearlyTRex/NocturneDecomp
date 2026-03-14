// Name: crt_fstream.cpp_ifstream_dtor_FUN_005ff856
// Address: 005ff856
// Address Range: [[005ff856, 005ff8ef]]
// Convention: __cdecl
// Signature: ifstream * __cdecl crt_fstream_cpp_ifstream_dtor_FUN_005ff856(void *this_ptr,uint flags)

#include "nocturne.h"

ifstream * __cdecl crt_fstream_cpp_ifstream_dtor_FUN_005ff856(void *this_ptr,uint flags)

{
  _istream *p_Var1;
  void *ptr;
  ios *piVar2;
  
  if ((flags & 4) == 0) {
    *(int *)((int)this_ptr + *(int *)(*(int *)this_ptr + 4) + -4) = *(int *)(*(int *)this_ptr + 4);
    *(void ***)((int)this_ptr + 0x40) = &g_IFStream_FStreamBaseDestructor;
    *(void ***)((int)this_ptr + 0x4c) = &g_IFStream_IStreamDestructor;
    *(void ***)((int)this_ptr + *(int *)(*(int *)this_ptr + 4) + 0x28) = &g_IFStream_IOSDestructor;
    p_Var1 = crt_iostream_cpp_istream_dtor_FUN_006063e1((_istream *)((int)this_ptr + 0x44),1);
    this_ptr = crt_fstream_cpp_fstreambase_dtor_FUN_00606509
                         ((fstreambase *)&p_Var1[-2]._ios.__i_lock,1);
    if ((flags & 1) == 0) {
      piVar2 = crt_iostream_cpp_ios_dtor_FUN_0060632c(&((ifstream *)this_ptr)->_ios,1);
      this_ptr = &piVar2[-2].__tied_stream;
    }
    if ((flags & 2) == 0) {
      return this_ptr;
    }
    shape_memdbg_cpp_debugFree_FUN_0050f210(this_ptr);
  }
  else {
    ptr = __vec_delete(this_ptr,&g_IFStreamTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr);
  }
  return this_ptr;
}
