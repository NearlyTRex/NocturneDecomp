// Name: crt_iostream.cpp_ostream_dtor_FUN_00606231
// Address: 00606231
// Address Range: [[00606231, 006062a5]]
// Convention: __cdecl
// Signature: _ostream * __cdecl crt_iostream_cpp_ostream_dtor_FUN_00606231(_ostream *this_ptr,uint flags)

#include "nocturne.h"

_ostream * __cdecl crt_iostream_cpp_ostream_dtor_FUN_00606231(_ostream *this_ptr,uint flags)

{
  int iVar1;
  void *ptr;
  ios *piVar2;
  
  if ((flags & 4) == 0) {
    iVar1 = ((this_ptr->_ostream_core).layout_info)->offset_to_base;
    *(int *)((this_ptr->_ios).padding + iVar1 + -0x31) = iVar1;
    (this_ptr->_ostream_core).destructor_vtable = (WatcomThunkedDestructor *)&g_OStream_Destructor;
    *(void ***)
     ((this_ptr->_ios).padding + ((this_ptr->_ostream_core).layout_info)->offset_to_base + -5) =
         &g_OStream_IOSDestructor;
    if ((flags & 1) == 0) {
      piVar2 = crt_iostream_cpp_ios_dtor_FUN_0060632c(&this_ptr->_ios,1);
      this_ptr = (_ostream *)&piVar2[-1].__fill_character;
    }
    if ((flags & 2) == 0) {
      return this_ptr;
    }
    shape_memdbg_cpp_debugFreeChecked_FUN_0050f210(this_ptr);
  }
  else {
    __vec_delete(this_ptr,&g_OStreamTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr);
  }
  return this_ptr;
}
