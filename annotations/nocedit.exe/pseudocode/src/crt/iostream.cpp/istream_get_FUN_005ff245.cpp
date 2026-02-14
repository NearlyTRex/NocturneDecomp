// Name: crt_iostream.cpp_istream_get_FUN_005ff245
// Address: 005ff245
// Address Range: [[005ff245, 005ff2d6]]
// Convention: __cdecl
// Signature: istream * __cdecl crt_iostream_cpp_istream_get_FUN_005ff245(istream *this_ptr,char *c)

#include "nocturne.h"

istream * __cdecl crt_iostream_cpp_istream_get_FUN_005ff245(istream *this_ptr,char *c)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  if (((*(int *)((this_ptr->_ios).padding +
                ((this_ptr->_istream_core).layout_info)->offset_to_base + -0x21) != 0) ||
      (*(int *)((this_ptr->_ios).padding +
               ((this_ptr->_istream_core).layout_info)->offset_to_base + -0x29) != 0)) &&
     (iVar3 = stream_setup((_FILE *)this_ptr,1), iVar3 == 0)) {
    (this_ptr->_istream_core).__last_read_length = 0;
    return this_ptr;
  }
  iVar3 = *(int *)((this_ptr->_ios).padding +
                  ((this_ptr->_istream_core).layout_info)->offset_to_base + -0x2d);
  if (*(uint *)(iVar3 + 0x10) != *(uint *)(iVar3 + 0x14)) {
    if ((*(uint *)(iVar3 + 0x14) < *(uint *)(iVar3 + 0x10)) ||
       (iVar4 = (**(code **)(*(int *)(iVar3 + 0x28) + 0x10))(iVar3), iVar4 != -1)) {
      pcVar1 = *(char **)(iVar3 + 0x14);
      *(char **)(iVar3 + 0x14) = pcVar1 + 1;
      cVar2 = *pcVar1;
    }
    else {
      cVar2 = -1;
    }
    *c = cVar2;
    return this_ptr;
  }
  fgetcInternal((_FILE *)this_ptr,(byte *)c);
  return this_ptr;
}
