// Name: crt_strstream.cpp_ostrstream_tellp_FUN_005ff45d
// Address: 005ff45d
// Address Range: [[005ff45d, 005ff489]]
// Convention: __cdecl
// Signature: int crt_strstream.cpp_ostrstream_tellp_FUN_005ff45d(ostrstream * this_ptr)

#include "nocturne.h"

int __cdecl crt_strstream_cpp_ostrstream_tellp_FUN_005ff45d(ostrstream *this_ptr)

{
  int iVar1;
  
  iVar1 = ((this_ptr->_strstreambase_core).layout_info)->offset_to_vbase;
  if ((*(uint *)((this_ptr->_ios).padding + iVar1 + -0x61) & 3) != 0) {
    return -1;
  }
  iVar1 = (**(code **)(*(int *)(*(int *)((this_ptr->_ios).padding + iVar1 + -0x6d) + 0x28) + 0x18))
                    ();
  return iVar1;
}
