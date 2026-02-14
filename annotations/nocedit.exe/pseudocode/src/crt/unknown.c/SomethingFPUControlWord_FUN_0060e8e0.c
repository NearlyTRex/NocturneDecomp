// Name: crt_unknown.c_SomethingFPUControlWord_FUN_0060e8e0
// Address: 0060e8e0
// Address Range: [[0060e8e0, 0060e92d]]
// Convention: unknown
// Signature: uint crt_unknown_c_SomethingFPUControlWord_FUN_0060e8e0(uint param_1,uint param_2)

#include "nocturne.h"

uint SomethingFPUControlWord(uint param_1,uint param_2)

{
  ushort in_FPUControlWord;
  uint local_c;
  
  local_c = 0;
  if ((BYTE_00684acc != 0) && (local_c = (uint)in_FPUControlWord, param_2 != 0)) {
    local_c = ~param_2 & local_c | param_1 & param_2 & 0xffff;
  }
  return local_c;
}
