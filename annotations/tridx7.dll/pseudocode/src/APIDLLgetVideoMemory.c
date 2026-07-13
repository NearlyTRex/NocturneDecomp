// Name: APIDLLgetVideoMemory
// Address: 10005280
// Address Range: [[10005280, 100052b8]]
// Convention: unknown
// Signature: undefined4 APIDLLgetVideoMemory(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

#include "nocturne.h"

uint APIDLLgetVideoMemory(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  
                    /* 0x5280  18  APIDLLgetVideoMemory */
  uVar1 = DAT_10014208;
  if (((param_1 != (uint *)0x0) && (param_2 != (uint *)0x0)) &&
     (param_3 != (uint *)0x0)) {
    *param_3 = 0;
    *param_1 = uVar1;
    *param_2 = DAT_1001420c;
    return 1;
  }
  return 0;
}
