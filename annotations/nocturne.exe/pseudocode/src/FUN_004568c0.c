// Name: FUN_004568c0
// Address: 004568c0
// Address Range: [[004568c0, 0045690b]]
// Convention: unknown
// Signature: undefined4 FUN_004568c0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_004568c0(uint param_1,uint param_2)

{
  int iVar1;
  byte local_214 [516];
  uint local_10;
  
  FUN_00456700(local_214,param_1,param_2);
  iVar1 = FUN_004567a0(local_214);
  if (iVar1 != 0) {
    return local_10;
  }
  return 0xffffffff;
}
