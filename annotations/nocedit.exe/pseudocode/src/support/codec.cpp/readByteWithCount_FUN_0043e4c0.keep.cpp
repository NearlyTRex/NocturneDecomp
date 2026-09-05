// Name: support_codec.cpp_readByteWithCount_FUN_0043e4c0
// Address: 0043e4c0
// MANUAL RECONSTRUCTION
// Address Range: [[0043e4c0, 0043e50a]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_readByteWithCount_FUN_0043e4c0(_istream *istream,int *remaining_count)

#include "nocturne.h"
#include "core/stream_compat.h"

int __cdecl support_codec_cpp_readByteWithCount_FUN_0043e4c0(_istream *istream,int *remaining_count)

{
  byte local_14 [4];

  if (0 < *remaining_count) {
    crt_iostream_cpp_istream_get_FUN_005ff245(istream,(char *)local_14);
    if (!std_istream_from(istream).fail()) {
      *remaining_count = *remaining_count + -1;
      return (uint)local_14[0];
    }
  }
  return -1;
}
