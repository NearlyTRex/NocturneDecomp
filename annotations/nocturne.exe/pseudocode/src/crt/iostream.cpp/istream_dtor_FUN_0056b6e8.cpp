// Name: crt_iostream.cpp_istream_dtor_FUN_0056b6e8
// Address: 0056b6e8
// Address Range: [[0056b6e8, 0056b75c]]
// Convention: __cdecl
// Signature: _istream * __cdecl crt_iostream_cpp_istream_dtor_FUN_0056b6e8(_istream *this_ptr,uint flags)

#include "nocturne.h"

_istream * __cdecl crt_iostream_cpp_istream_dtor_FUN_0056b6e8(_istream *this_ptr,uint flags)

{
  int iVar1;
  void *ptr;
  ios *piVar2;
  
  if ((flags & 4) == 0) {
    iVar1 = ((this_ptr->_istream_core).layout_info)->offset_to_base;
    *(int *)((this_ptr->_ios).padding + iVar1 + -0x35) = iVar1;
    (this_ptr->_istream_core).destructor_vtable =
         (WatcomThunkedDestructor *)&PTR_crt_iostream_cpp_istream_dtor_FUN_0056b6e8_005a49c4;
    *(byte ***)
     ((this_ptr->_ios).padding + ((this_ptr->_istream_core).layout_info)->offset_to_base + -9) =
         &PTR_crt_unknown_c_FUN_0056b6d0_005a49cc;
    if ((flags & 1) == 0) {
      piVar2 = crt_iostream_cpp_ios_dtor_FUN_0056b633(&this_ptr->_ios,1);
      this_ptr = (_istream *)&piVar2[-1].__xalloc_list;
    }
    if ((flags & 2) == 0) {
      return this_ptr;
    }
    FUN_00564494(this_ptr);
  }
  else {
    ptr = __vec_delete(this_ptr,&g_istreamTypeInfo_005a4a00);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
  }
  return this_ptr;
}
