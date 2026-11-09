// Name: support_trstream.cpp_FUN_00574230
// Address: 00574230
// Address Range: [[00574230, 00574271]]
// Convention: unknown
// Signature: uint support_trstream_cpp_FUN_00574230(int param_1)

#include "nocturne.h"

uint support_trstream_cpp_FUN_00574230(int param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if (*(int *)(param_1 + 8) <= iVar2) {
    return 0xffffffff;
  }
  if (*(int *)(param_1 + 4) == 0) {
    return 0xfffffffe;
  }
  bVar1 = *(byte *)(iVar2 + *(int *)(param_1 + 4));
  *(int *)(param_1 + 0xc) = iVar2 + 1;
  return (uint)bVar1;
}
