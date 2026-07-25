// Name: FUN_00572ea0
// Address: 00572ea0
// Address Range: [[00572ea0, 00572ee9]]
// Convention: unknown
// Signature: void FUN_00572ea0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

#include "nocturne.h"

void FUN_00572ea0(uint *param_1,uint *param_2,uint *param_3)

{
  byte *puVar1;
  
  if (param_1 != (uint *)0x0) {
    puVar1 = (byte *)*param_1;
    *param_1 = PTR_FUN_005c2168;
    PTR_FUN_005c2168 = puVar1;
  }
  if (param_2 != (uint *)0x0) {
    puVar1 = (byte *)*param_2;
    *param_2 = PTR_FUN_005c216c;
    PTR_FUN_005c216c = puVar1;
  }
  if (param_3 != (uint *)0x0) {
    puVar1 = (byte *)*param_3;
    *param_3 = PTR_FUN_005c2170;
    PTR_FUN_005c2170 = puVar1;
  }
  return;
}
