// Name: crt_iostream.cpp_ostream_dtor_FUN_0056b538
// Address: 0056b538
// Address Range: [[0056b538, 0056b5ac]]
// Convention: __cdecl
// Signature: _ostream * __cdecl crt_iostream_cpp_ostream_dtor_FUN_0056b538(_ostream *this_ptr,uint flags)

#include "nocturne.h"

_ostream * __cdecl crt_iostream_cpp_ostream_dtor_FUN_0056b538(_ostream *this_ptr,uint flags)

{
  int iVar1;
  void *ptr;
  ios *piVar2;
  
  if ((flags & 4) == 0) {
    iVar1 = ((this_ptr->_ostream_core).layout_info)->offset_to_base;
    *(int *)((this_ptr->_ios).padding + iVar1 + -0x31) = iVar1;
    (this_ptr->_ostream_core).destructor_vtable =
         (WatcomThunkedDestructor *)&PTR_crt_iostream_cpp_ostream_dtor_FUN_0056b538_005a4914;
    *(byte ***)
     ((this_ptr->_ios).padding + ((this_ptr->_ostream_core).layout_info)->offset_to_base + -5) =
         &PTR_FUN_005a491c;
    if ((flags & 1) == 0) {
      piVar2 = crt_iostream_cpp_ios_dtor_FUN_0056b633(&this_ptr->_ios,1);
      this_ptr = (_ostream *)&piVar2[-1].__fill_character;
    }
    if ((flags & 2) == 0) {
      return this_ptr;
    }
    FUN_00564494(this_ptr);
  }
  else {
    ptr = __vec_delete(this_ptr,&g_ostreamTypeInfo_005a4960);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
  }
  return this_ptr;
}
