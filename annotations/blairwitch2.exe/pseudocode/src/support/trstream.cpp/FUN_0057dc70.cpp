// Name: support_trstream.cpp_FUN_0057dc70
// Address: 0057dc70
// Address Range: [[0057dc70, 0057dc9a]]
// Convention: unknown
// Signature: uint support_trstream_cpp_FUN_0057dc70(int param_1,byte param_2)

#include "nocturne.h"

uint support_trstream_cpp_FUN_0057dc70(int param_1,byte param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    uVar2 = (uint)param_2;
    uVar1 = _fputc(uVar2,*(int *)(param_1 + 4));
    if (uVar1 == uVar2) {
      return uVar1 ^ uVar2;
    }
  }
  return 0xfffffffe;
}
