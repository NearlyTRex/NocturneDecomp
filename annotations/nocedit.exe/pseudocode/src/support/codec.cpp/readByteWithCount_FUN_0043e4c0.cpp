// Name: support_codec.cpp_readByteWithCount_FUN_0043e4c0
// Address: 0043e4c0
// Address Range: [[0043e4c0, 0043e50a]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_readByteWithCount_FUN_0043e4c0(_FILE *file,int *remaining_count)

#include "nocturne.h"

int __cdecl support_codec_cpp_readByteWithCount_FUN_0043e4c0(_FILE *file,int *remaining_count)

{
  byte local_14 [4];
  
  if (0 < *remaining_count) {
    istream_get((istream *)file,(char *)local_14);
    if (*(int *)((int)&file->_handle + *(int *)(file->_ptr + 4)) == 0) {
      *remaining_count = *remaining_count + -1;
      return (uint)local_14[0];
    }
  }
  return -1;
}
