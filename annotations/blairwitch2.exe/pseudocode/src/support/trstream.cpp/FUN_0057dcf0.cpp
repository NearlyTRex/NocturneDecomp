// Name: support_trstream.cpp_FUN_0057dcf0
// Address: 0057dcf0
// Address Range: [[0057dcf0, 0057dd1d]]
// Convention: unknown
// Signature: bool support_trstream_cpp_FUN_0057dcf0(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

bool support_trstream_cpp_FUN_0057dcf0(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    return false;
  }
  iVar1 = _fseek(*(int *)(param_1 + 4),param_2,param_3);
  return iVar1 == 0;
}
