// Name: crt_iostream.cpp_istream_ctor_FUN_00606376
// Address: 00606376
// Address Range: [[00606376, 006063c8]]
// Convention: __cdecl
// Signature: _istream * __cdecl crt_iostream_cpp_istream_ctor_FUN_00606376(_istream *this_ptr,uint c1)

#include "nocturne.h"

_istream * __cdecl crt_iostream_cpp_istream_ctor_FUN_00606376(_istream *this_ptr,uint c1)

{
  char *pcVar1;
  int iVar2;
  ios *piVar3;
  
  if ((c1 & 1) == 0) {
    (this_ptr->_istream_core).layout_info = &DAT_00665e68;
    piVar3 = crt_iostream_cpp_ios_ctor_FUN_006061fc(&this_ptr->_ios);
    this_ptr = (_istream *)&piVar3[-1].__xalloc_list;
  }
  iVar2 = ((this_ptr->_istream_core).layout_info)->offset_to_base;
  *(int *)((this_ptr->_ios).padding + iVar2 + -0x35) = iVar2;
  (this_ptr->_istream_core).destructor_vtable = &PTR_unk_OtherFreeMemory2_FUN_006063e1_00665e74;
  *(void ***)
   ((this_ptr->_ios).padding + ((this_ptr->_istream_core).layout_info)->offset_to_base + -9) =
       &PTR_FUN_00665e7c;
  (this_ptr->_istream_core).__last_read_length = 0;
  pcVar1 = (this_ptr->_ios).padding +
           ((this_ptr->_istream_core).layout_info)->offset_to_base + -0x25;
  *pcVar1 = *pcVar1 | 1;
  return this_ptr;
}
