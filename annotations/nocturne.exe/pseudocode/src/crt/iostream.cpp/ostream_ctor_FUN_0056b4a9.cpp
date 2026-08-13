// Name: crt_iostream.cpp_ostream_ctor_FUN_0056b4a9
// Address: 0056b4a9
// Address Range: [[0056b4a9, 0056b4ea]]
// Convention: __cdecl
// Signature: _ostream * __cdecl crt_iostream_cpp_ostream_ctor_FUN_0056b4a9(_ostream *this_ptr,uint c1)

#include "nocturne.h"

_ostream * __cdecl crt_iostream_cpp_ostream_ctor_FUN_0056b4a9(_ostream *this_ptr,uint c1)

{
  int iVar1;
  ios *piVar2;
  
  if ((c1 & 1) == 0) {
    (this_ptr->_ostream_core).layout_info = (WatcomInheritanceLayout *)&DAT_005a4908;
    piVar2 = crt_iostream_cpp_ios_ctor_FUN_0056b503(&this_ptr->_ios);
    this_ptr = (_ostream *)&piVar2[-1].__fill_character;
  }
  iVar1 = ((this_ptr->_ostream_core).layout_info)->offset_to_base;
  *(int *)((this_ptr->_ios).padding + iVar1 + -0x31) = iVar1;
  (this_ptr->_ostream_core).destructor_vtable =
       (WatcomThunkedDestructor *)&PTR_crt_iostream_cpp_ostream_dtor_FUN_0056b538_005a4914;
  *(byte ***)
   ((this_ptr->_ios).padding + ((this_ptr->_ostream_core).layout_info)->offset_to_base + -5) =
       &PTR_crt_iostream_cpp_ostream_destructor_thunk_FUN_0056b4eb_005a491c;
  return this_ptr;
}
