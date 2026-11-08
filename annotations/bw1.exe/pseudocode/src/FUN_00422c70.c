// Name: FUN_00422c70
// Address: 00422c70
// Address Range: [[00422c70, 00422cc6]]
// Convention: unknown
// Signature: void FUN_00422c70(int param_1,int param_2)

#include "nocturne.h"

void FUN_00422c70(int param_1,int param_2)

{
  uint uStack_10;
  uint uStack_c;
  uint uStack_8;
  
  *(uint *)(param_1 + 0x318) = 0;
  FUN_00421e80(param_1);
  if (param_2 == 0) {
    return;
  }
  uStack_8 = 0;
  uStack_c = 0;
  uStack_10 = 0x4116cbe4;
  FUN_00420450(param_1 + 0x394,param_2,&uStack_10);
  return;
}
