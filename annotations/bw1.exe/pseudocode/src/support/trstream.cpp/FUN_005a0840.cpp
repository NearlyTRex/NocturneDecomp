// Name: support_trstream.cpp_FUN_005a0840
// Address: 005a0840
// Address Range: [[005a0840, 005a08ad]]
// Convention: unknown
// Signature: int support_trstream_cpp_FUN_005a0840(int *param_1)

#include "nocturne.h"

int support_trstream_cpp_FUN_005a0840(int *param_1)

{
  int iVar1;
  char cStack_8;
  
  iVar1 = (**(code **)(*param_1 + 4))(param_1);
  while( true ) {
    if (iVar1 < 0) {
      return iVar1;
    }
    cStack_8 = (char)iVar1;
    if (((&DAT_00626114)[(byte)(cStack_8 + 1)] & 2) == 0) break;
    iVar1 = (**(code **)(*param_1 + 4))(param_1);
    if (iVar1 == -1) {
      return 0;
    }
  }
  iVar1 = (**(code **)(*param_1 + 8))(param_1,iVar1);
  if (iVar1 != 0) {
    return 0;
  }
  return -2;
}
