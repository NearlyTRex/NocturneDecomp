// Name: ___addl
// Address: 1000c5a0
// Address Range: [[1000c5a0, 1000c5c2]]
// Convention: unknown
// Signature: undefined4 ___addl(uint param_1,uint param_2,uint *param_3)

#include "nocturne.h"

/* Library Function - Single Match
uint ___addl(uint param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  uVar1 = param_1 + param_2;
  if ((uVar1 < param_1) || (uVar1 < param_2)) {
    uVar2 = 1;
  }
  *param_3 = uVar1;
  return uVar2;
}
