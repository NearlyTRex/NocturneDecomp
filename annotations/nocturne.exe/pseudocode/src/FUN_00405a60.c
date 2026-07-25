// Name: FUN_00405a60
// Address: 00405a60
// Address Range: [[00405a60, 00405a86]]
// Convention: unknown
// Signature: uint FUN_00405a60(int *param_1,int *param_2)

#include "nocturne.h"

uint FUN_00405a60(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(*param_2 + 0xc);
  uVar2 = *(uint *)(*param_1 + 0xc);
  if ((int)uVar2 < (int)uVar1) {
    return 1;
  }
  if (uVar1 == uVar2) {
    return uVar1 ^ uVar2;
  }
  return 0xffffffff;
}
