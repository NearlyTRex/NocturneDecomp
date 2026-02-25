// Name: crt_iostream.cpp_ostream_ctor_FUN_006061a2
// Address: 006061a2
// Address Range: [[006061a2, 006061e3]]
// Convention: __cdecl
// Signature: _ostream * __cdecl crt_iostream_cpp_ostream_ctor_FUN_006061a2(_ostream *this_ptr,uint c1)

#include "nocturne.h"

_ostream * __cdecl crt_iostream_cpp_ostream_ctor_FUN_006061a2(_ostream *this_ptr,uint c1)

{
  int iVar1;
  ios *piVar2;
  
  if ((c1 & 1) == 0) {
    (this_ptr->_ostream_core).layout_info = (WatcomInheritanceLayout *)&DAT_00665db8;
    piVar2 = crt_iostream_cpp_ios_ctor_FUN_006061fc(&this_ptr->_ios);
    this_ptr = (_ostream *)&piVar2[-1].__fill_character;
  }
  iVar1 = ((this_ptr->_ostream_core).layout_info)->offset_to_base;
  *(int *)((this_ptr->_ios).padding + iVar1 + -0x31) = iVar1;
  (this_ptr->_ostream_core).destructor_vtable = (WatcomThunkedDestructor *)&g_OStream_Destructor;
  *(void ***)
   ((this_ptr->_ios).padding + ((this_ptr->_ostream_core).layout_info)->offset_to_base + -5) =
       &g_OStream_IOSDestructor;
  return this_ptr;
}
