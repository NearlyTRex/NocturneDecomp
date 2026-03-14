// Name: crt_strstream.cpp_ostrstream_dtor_FUN_005ff48a
// Address: 005ff48a
// Address Range: [[005ff48a, 005ff523]]
// Convention: __cdecl
// Signature: _ostrstream * __cdecl crt_strstream_cpp_ostrstream_dtor_FUN_005ff48a(void *this_ptr,uint flags)

#include "nocturne.h"

_ostrstream * __cdecl crt_strstream_cpp_ostrstream_dtor_FUN_005ff48a(void *this_ptr,uint flags)

{
  _ostream *p_Var1;
  void *ptr;
  ios *piVar2;
  
  if ((flags & 4) == 0) {
    *(int *)((int)this_ptr + *(int *)(*(int *)this_ptr + 4) + -4) = *(int *)(*(int *)this_ptr + 4);
    *(void ***)((int)this_ptr + 0x44) = &PTR_FUN_00665b7c;
    *(void ***)((int)this_ptr + 0x4c) = &PTR_LAB_00665b84;
    *(void ***)((int)this_ptr + *(int *)(*(int *)this_ptr + 4) + 0x28) = &PTR_FUN_00665b8c;
    p_Var1 = crt_iostream_cpp_ostream_dtor_FUN_00606231((_ostream *)((int)this_ptr + 0x48),1);
    this_ptr = crt_strstream_cpp_strstreambase_dtor_FUN_006062a6
                         ((strstreambase *)&p_Var1[-2]._ios.__xalloc_list,1);
    if ((flags & 1) == 0) {
      piVar2 = crt_iostream_cpp_ios_dtor_FUN_0060632c
                         ((ios *)&(((_ostrstream *)this_ptr)->_ios).__tied_stream,1);
      this_ptr = &piVar2[-2].__tied_stream;
    }
    if ((flags & 2) == 0) {
      return this_ptr;
    }
    shape_memdbg_cpp_debugFree_FUN_0050f210(this_ptr);
  }
  else {
    ptr = __vec_delete(this_ptr,&g_OStrStreamTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr);
  }
  return this_ptr;
}
