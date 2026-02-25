// Name: crt_fstream.cpp_istream_seekg_FUN_00600ee4
// Address: 00600ee4
// Address Range: [[00600ee4, 00600f32]]
// Convention: __cdecl
// Signature: _istream * __cdecl crt_fstream_cpp_istream_seekg_FUN_00600ee4(void *this_ptr,int offset)

#include "nocturne.h"

_istream * __cdecl crt_fstream_cpp_istream_seekg_FUN_00600ee4(void *this_ptr,int offset)

{
  int iVar1;
  
  iVar1 = stream_valid(this_ptr,1);
  if (iVar1 != 0) {
    iVar1 = *(int *)((int)this_ptr + *(int *)(*(int *)this_ptr + 4) + 4);
    iVar1 = (**(code **)(*(int *)(iVar1 + 0x28) + 0x18))(iVar1,offset,0,1);
    if (iVar1 == -1) {
      reportStreamError
                ((FileEmbeddedData *)(*(int *)(*(int *)this_ptr + 4) + (int)this_ptr),2);
      return this_ptr;
    }
  }
  return this_ptr;
}
