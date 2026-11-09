// Name: unkaddr_004a76f0.cpp_FUN_004a7950
// Address: 004a7950
// Address Range: [[004a7950, 004a79e6]]
// Convention: unknown
// Signature: undefined4 unkaddr_004a76f0_cpp_FUN_004a7950(byte *param_1,byte *param_2,byte *param_3)

#include "nocturne.h"

uint unkaddr_004a76f0_cpp_FUN_004a7950(byte *param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  
  while (((&DAT_006074b8)[(byte)(*param_1 + 1)] & 2) != 0) {
    param_1 = param_1 + 1;
  }
  if (*param_1 == 0x5c) {
    bVar2 = *param_2;
    while (param_1 = param_1 + 1, bVar2 != 0) {
      iVar3 = toupper((uint)*param_1);
      iVar4 = toupper((uint)*param_2);
      if (iVar3 != iVar4) {
        return 0;
      }
      pbVar1 = param_2 + 1;
      param_2 = param_2 + 1;
      bVar2 = *pbVar1;
    }
    while (((&DAT_006074b8)[(byte)(*param_1 + 1)] & 2) != 0) {
      param_1 = param_1 + 1;
    }
    do {
      bVar2 = *param_1;
      *param_3 = bVar2;
      if (bVar2 == 0) {
        return 1;
      }
      bVar2 = param_1[1];
      param_1 = param_1 + 2;
      param_3[1] = bVar2;
      param_3 = param_3 + 2;
    } while (bVar2 != 0);
    return 1;
  }
  return 0;
}
