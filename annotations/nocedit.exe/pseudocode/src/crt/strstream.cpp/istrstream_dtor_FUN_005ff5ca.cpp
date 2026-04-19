// Name: crt_strstream.cpp_istrstream_dtor_FUN_005ff5ca
// Address: 005ff5ca
// Address Range: [[005ff5ca, 005ff663]]
// Convention: __cdecl
// Signature: _istrstream * __cdecl crt_strstream_cpp_istrstream_dtor_FUN_005ff5ca(void *this_ptr,uint flags)

#include "nocturne.h"

_istrstream * __cdecl crt_strstream_cpp_istrstream_dtor_FUN_005ff5ca(void *this_ptr,uint flags)

{
  _istream *p_Var1;
  void *ptr;
  ios *piVar2;
  
  if ((flags & 4) == 0) {
    *(int *)((int)this_ptr + *(int *)(*(int *)this_ptr + 4) + -4) = *(int *)(*(int *)this_ptr + 4);
    *(WatcomThunkedDestructor **)((int)this_ptr + 0x44) = &PTR_FUN_00665bf4;
    *(WatcomThunkedDestructor **)((int)this_ptr + 0x50) = &PTR_FUN_00665bfc;
    *(WatcomThunkedDestructorDirect **)((int)this_ptr + *(int *)(*(int *)this_ptr + 4) + 0x28) =
         &PTR_FUN_00665c04;
    p_Var1 = crt_iostream_cpp_istream_dtor_FUN_006063e1((_istream *)((int)this_ptr + 0x48),1);
    this_ptr = crt_strstream_cpp_strstreambase_dtor_FUN_006062a6
                         ((strstreambase *)&p_Var1[-2]._ios.__fill_character,1);
    if ((flags & 1) == 0) {
      piVar2 = crt_iostream_cpp_ios_dtor_FUN_0060632c(&((_istrstream *)this_ptr)->_ios,1);
      this_ptr = piVar2 + -2;
    }
    if ((flags & 2) == 0) {
      return this_ptr;
    }
    shape_memdbg_cpp_debugFreeChecked_FUN_0050f210(this_ptr);
  }
  else {
    ptr = __vec_delete(this_ptr,&g_IStrStreamTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr);
  }
  return this_ptr;
}
