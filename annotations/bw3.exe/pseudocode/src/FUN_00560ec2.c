// Name: FUN_00560ec2
// Address: 00560ec2
// Address Range: [[00560ec2, 00560f30]]
// Convention: unknown
// Signature: uint FUN_00560ec2(int param_1,int param_2,uint param_3,uint param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00560ec2(int param_1,int param_2,uint param_3,uint param_4)

{
  bool bVar1;
  ulonglong uVar2;
  uint in_EAX;
  uint uVar3;
  ulonglong *puVar4;
  
  uVar2 = DAT_00604d1c;
  if (_DAT_01c6cee8 != 0) {
    FUN_00566230(param_1,param_2,param_3);
    return param_4;
  }
  do {
    puVar4 = (ulonglong *)(*(int *)(&DAT_01c60dac + param_3 * 4) + param_1 * 4 & 0xfffffff8);
    uVar3 = (param_2 - param_1) + 1U >> 1;
    do {
      *puVar4 = uVar2;
      puVar4 = puVar4 + 1;
      bVar1 = 0 < (int)uVar3;
      uVar3 = uVar3 - 1;
    } while (bVar1);
    param_3 = param_3 + 1;
  } while (param_3 <= param_4);
  _DAT_00604d24 = uVar2;
  return in_EAX;
}
