// Name: crt_iostream.cpp_istream_ctor_FUN_0056b67d
// Address: 0056b67d
// Address Range: [[0056b67d, 0056b6cf]]
// Convention: __cdecl
// Signature: _istream * __cdecl crt_iostream_cpp_istream_ctor_FUN_0056b67d(_istream *this_ptr,uint c1)

#include "nocturne.h"

_istream * __cdecl crt_iostream_cpp_istream_ctor_FUN_0056b67d(_istream *this_ptr,uint c1)

{
  char *pcVar1;
  int iVar2;
  ios *piVar3;
  
  if ((c1 & 1) == 0) {
    (this_ptr->_istream_core).layout_info = (WatcomInheritanceLayout *)&DAT_005a49b8;
    piVar3 = crt_iostream_cpp_ios_ctor_FUN_0056b503(&this_ptr->_ios);
    this_ptr = (_istream *)&piVar3[-1].__xalloc_list;
  }
  iVar2 = ((this_ptr->_istream_core).layout_info)->offset_to_base;
  *(int *)((this_ptr->_ios).padding + iVar2 + -0x35) = iVar2;
  (this_ptr->_istream_core).destructor_vtable =
       (WatcomThunkedDestructor *)&PTR_crt_iostream_cpp_istream_dtor_FUN_0056b6e8_005a49c4;
  *(byte ***)
   ((this_ptr->_ios).padding + ((this_ptr->_istream_core).layout_info)->offset_to_base + -9) =
       &PTR_crt_unknown_c_FUN_0056b6d0_005a49cc;
  (this_ptr->_istream_core).__last_read_length = 0;
  pcVar1 = (this_ptr->_ios).padding +
           ((this_ptr->_istream_core).layout_info)->offset_to_base + -0x25;
  *pcVar1 = *pcVar1 | 1;
  return this_ptr;
}
