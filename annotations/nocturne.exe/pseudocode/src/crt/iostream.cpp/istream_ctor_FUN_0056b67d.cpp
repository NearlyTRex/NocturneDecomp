// Name: crt_iostream.cpp_istream_ctor_FUN_0056b67d
// Address: 0056b67d
// Address Range: [[0056b67d, 0056b6cf]]
// Convention: unknown
// Signature: void crt_iostream_cpp_istream_ctor_FUN_0056b67d(void **param_1,byte param_2)

#include "nocturne.h"

void crt_iostream_cpp_istream_ctor_FUN_0056b67d(void **param_1,byte param_2)

{
  byte *pbVar1;
  ios *piVar2;
  
  if ((param_2 & 1) == 0) {
    *param_1 = &DAT_005a49b8;
    piVar2 = crt_iostream_cpp_ios_ctor_FUN_0056b503((ios *)(param_1 + 4));
    param_1 = &piVar2[-1].__xalloc_list;
  }
  *(int *)((int)param_1 + *(int *)((int)*param_1 + 4) + -4) = *(int *)((int)*param_1 + 4);
  param_1[2] = &PTR_crt_iostream_cpp_istream_dtor_FUN_0056b6e8_005a49c4;
  *(byte ***)(*(int *)((int)*param_1 + 4) + 0x28 + (int)param_1) = &PTR_FUN_005a49cc;
  param_1[1] = (void *)0x0;
  pbVar1 = (byte *)(*(int *)((int)*param_1 + 4) + 0xc + (int)param_1);
  *pbVar1 = *pbVar1 | 1;
  return;
}
