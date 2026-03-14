// Name: crt_fstream.cpp_ofstream_dtor_FUN_005ff7bc
// Address: 005ff7bc
// Address Range: [[005ff7bc, 005ff855]]
// Convention: __cdecl
// Signature: ofstream * __cdecl crt_fstream_cpp_ofstream_dtor_FUN_005ff7bc(void *this_ptr,uint flags)

#include "nocturne.h"

ofstream * __cdecl crt_fstream_cpp_ofstream_dtor_FUN_005ff7bc(void *this_ptr,uint flags)

{
  _ostream *p_Var1;
  void *ptr;
  ios *piVar2;
  
  if ((flags & 4) == 0) {
    *(int *)((int)this_ptr + *(int *)(*(int *)this_ptr + 4) + -4) = *(int *)(*(int *)this_ptr + 4);
    *(void ***)((int)this_ptr + 0x40) = &g_OFStream_FStreamBaseDestructor;
    *(void ***)((int)this_ptr + 0x48) = &g_OFStream_OStream;
    *(void ***)((int)this_ptr + *(int *)(*(int *)this_ptr + 4) + 0x28) = &g_OFStream_IOS;
    p_Var1 = crt_iostream_cpp_ostream_dtor_FUN_00606231((_ostream *)((int)this_ptr + 0x44),1);
    this_ptr = crt_fstream_cpp_fstreambase_dtor_FUN_00606509
                         ((fstreambase *)&p_Var1[-2]._ios.__fill_character,1);
    if ((flags & 1) == 0) {
      piVar2 = crt_iostream_cpp_ios_dtor_FUN_0060632c(&((ofstream *)this_ptr)->_ios,1);
      this_ptr = &piVar2[-2].__format_flags;
    }
    if ((flags & 2) == 0) {
      return this_ptr;
    }
    shape_memdbg_cpp_debugFree_FUN_0050f210(this_ptr);
  }
  else {
    ptr = __vec_delete(this_ptr,&g_OFStreamTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr);
  }
  return this_ptr;
}
