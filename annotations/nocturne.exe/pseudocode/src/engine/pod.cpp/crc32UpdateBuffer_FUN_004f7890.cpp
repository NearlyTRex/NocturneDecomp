// Name: engine_pod.cpp_crc32UpdateBuffer_FUN_004f7890
// Address: 004f7890
// Address Range: [[004f7890, 004f78c3]]
// Convention: unknown
// Signature: uint engine_pod_cpp_crc32UpdateBuffer_FUN_004f7890(uchar *param_1,uint param_2,uint param_3)

#include "nocturne.h"

uint engine_pod_cpp_crc32UpdateBuffer_FUN_004f7890(uchar *param_1,uint param_2,uint param_3)

{
  uchar data_byte;
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    do {
      data_byte = *param_1;
      param_1 = param_1 + 1;
      uVar1 = uVar1 + 1;
      param_3 = engine_pod_cpp_crc32UpdateByte_FUN_004f77d0(param_3,data_byte);
    } while (uVar1 < param_2);
  }
  return param_3;
}
