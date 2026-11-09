// Name: crt_unknown.c_FUN_005baf20
// Address: 005baf20
// Address Range: [[005baf20, 005baf7b]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_005baf20(byte *param_1,undefined4 param_2)

#include "nocturne.h"

int FUN_005baf20(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  byte local_24 [32];
  
  unkafter_morph_cpp_FUN_005c20d0(local_24,param_2);
  iVar2 = 0;
  uVar1 = (uint)*param_1;
  if (uVar1 == 0) {
    return 0;
  }
  do {
    if ((local_24[uVar1 >> 3] & (&DAT_00601428)[uVar1 & 7]) != 0) {
      return iVar2;
    }
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 1;
    uVar1 = (uint)*param_1;
  } while (uVar1 != 0);
  return iVar2;
}
