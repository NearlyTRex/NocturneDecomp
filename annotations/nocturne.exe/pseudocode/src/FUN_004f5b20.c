// Name: FUN_004f5b20
// Address: 004f5b20
// Address Range: [[004f5b20, 004f5b60]]
// Convention: unknown
// Signature: undefined4 FUN_004f5b20(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_004f5b20(uint param_1,uint param_2)

{
  uint uVar1;
  byte auStack_100 [256];
  
  cockpit_ckptutil_c_loadACTToIndexedPalette_FUN_0042d3f0(param_2,auStack_100);
  uVar1 = FUN_004f5b70(param_1,auStack_100);
  return uVar1;
}
