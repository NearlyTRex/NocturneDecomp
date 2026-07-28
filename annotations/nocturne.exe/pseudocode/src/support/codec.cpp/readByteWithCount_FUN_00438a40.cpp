// Name: support_codec.cpp_readByteWithCount_FUN_00438a40
// Address: 00438a40
// Address Range: [[00438a40, 00438a8a]]
// Convention: unknown
// Signature: uint support_codec_cpp_readByteWithCount_FUN_00438a40(_istream *param_1,int *param_2)

#include "nocturne.h"

uint support_codec_cpp_readByteWithCount_FUN_00438a40(_istream *param_1,int *param_2)

{
  byte local_14 [4];
  
  if (0 < *param_2) {
    crt_iostream_cpp_istream_get_FUN_00564c53(param_1,(char *)local_14);
    if (*(int *)((param_1->_ios).padding +
                ((param_1->_istream_core).layout_info)->offset_to_base + -0x21) == 0) {
      *param_2 = *param_2 + -1;
      return (uint)local_14[0];
    }
  }
  return 0xffffffff;
}
