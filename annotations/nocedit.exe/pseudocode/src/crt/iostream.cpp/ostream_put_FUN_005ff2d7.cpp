// Name: crt_iostream.cpp_ostream_put_FUN_005ff2d7
// Address: 005ff2d7
// Address Range: [[005ff2d7, 005ff383]]
// Convention: __cdecl
// Signature: ostream * __cdecl crt_iostream_cpp_ostream_put_FUN_005ff2d7(ostream *this_ptr,int character)

#include "nocturne.h"

ostream * __cdecl crt_iostream_cpp_ostream_put_FUN_005ff2d7(ostream *this_ptr,int character)

{
  int iVar1;
  byte *pbVar2;
  BOOL BVar3;
  uint uVar4;
  byte local_c;
  
  if ((*(int *)((this_ptr->_ios).padding +
               ((this_ptr->_ostream_core).layout_info)->offset_to_base + -0x1d) == 0) &&
     (((iVar1 = ((this_ptr->_ostream_core).layout_info)->offset_to_base,
       *(int *)((this_ptr->_ios).padding + iVar1 + -0x25) == 0 &&
       ((*(uint *)((this_ptr->_ios).padding + iVar1 + -0x21) & 0x4000) == 0)) ||
      (BVar3 = prepare_stream_for_write((_FILE *)this_ptr), BVar3 != 0))))
  {
    iVar1 = *(int *)((this_ptr->_ios).padding +
                    ((this_ptr->_ostream_core).layout_info)->offset_to_base + -0x29);
    pbVar2 = *(byte **)(iVar1 + 0x20);
    if (pbVar2 < *(byte **)(iVar1 + 0x1c)) {
      *(byte **)(iVar1 + 0x20) = pbVar2 + 1;
      local_c = (byte)character;
      *pbVar2 = local_c;
      uVar4 = (uint)*pbVar2;
    }
    else {
      uVar4 = (**(code **)(*(int *)(iVar1 + 0x28) + 0xc))(iVar1,character & 0xff);
    }
    if (uVar4 == 0xffffffff) {
      reportStreamError
                ((FileEmbeddedData *)
                 ((this_ptr->_ios).padding +
                 ((this_ptr->_ostream_core).layout_info)->offset_to_base + -0x2d),2);
    }
    if ((*(uint *)((this_ptr->_ios).padding +
                  ((this_ptr->_ostream_core).layout_info)->offset_to_base + -0x21) & 0x2000) != 0) {
      stream_flush((_FILE *)this_ptr);
    }
  }
  return this_ptr;
}
