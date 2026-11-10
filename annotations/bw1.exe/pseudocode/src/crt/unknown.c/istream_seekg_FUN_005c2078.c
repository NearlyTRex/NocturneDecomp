// Name: crt_unknown.c_istream_seekg_FUN_005c2078
// Address: 005c2078
// Address Range: [[005c2078, 005c20c6]]
// Convention: __cdecl
// Signature: _istream * __cdecl crt_unknown_c_istream_seekg_FUN_005c2078(void *this_ptr,int offset)

#include "nocturne.h"

_istream * __cdecl istream_seekg(void *this_ptr,int offset)

{
  int iVar1;
  
  iVar1 = FUN_005c8f5f(this_ptr,1);
  if (iVar1 != 0) {
    iVar1 = *(int *)((int)this_ptr + *(int *)(*(int *)this_ptr + 4) + 4);
    iVar1 = (**(code **)(*(int *)(iVar1 + 0x28) + 0x18))(iVar1,offset,0,1);
    if (iVar1 == -1) {
      FUN_005c8e45(*(int *)(*(int *)this_ptr + 4) + (int)this_ptr,2);
      return this_ptr;
    }
  }
  return this_ptr;
}
