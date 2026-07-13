// Name: __CopyMan
// Address: 10009e60
// Address Range: [[10009e60, 10009e7c]]
// Convention: unknown
// Signature: void __CopyMan(undefined4 *param_1,undefined4 *param_2)

#include "nocturne.h"

/* Library Function - Single Match
void __CopyMan(uint *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 3;
  do {
    uVar1 = *param_2;
    param_2 = param_2 + 1;
    *param_1 = uVar1;
    param_1 = param_1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}
