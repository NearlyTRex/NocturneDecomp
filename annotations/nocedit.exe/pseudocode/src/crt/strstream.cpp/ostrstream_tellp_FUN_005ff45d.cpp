// Name: crt_strstream.cpp_ostrstream_tellp_FUN_005ff45d
// Address: 005ff45d
// Address Range: [[005ff45d, 005ff489]]
// Convention: __cdecl
// Signature: int __cdecl crt_strstream_cpp_ostrstream_tellp_FUN_005ff45d(void *this_ptr)

#include "nocturne.h"

int __cdecl crt_strstream_cpp_ostrstream_tellp_FUN_005ff45d(void *this_ptr)

{
  int iVar1;
  
  if ((*(uint *)((int)this_ptr + *(int *)(*(int *)this_ptr + 4) + 0x10) & 3) != 0) {
    return -1;
  }
  iVar1 = *(int *)((int)this_ptr + *(int *)(*(int *)this_ptr + 4) + 4);
  iVar1 = (**(code **)(*(int *)(iVar1 + 0x28) + 0x18))(iVar1,0,1,2);
  return iVar1;
}
