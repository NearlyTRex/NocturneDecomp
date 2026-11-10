// Name: crt_unknown.c_FUN_005c5d10
// Address: 005c5d10
// Address Range: [[005c5d10, 005c5d59]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005c5d10(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

#include "nocturne.h"

void FUN_005c5d10(uint *param_1,uint *param_2,uint *param_3)

{
  byte *puVar1;
  
  if (param_1 != (uint *)0x0) {
    puVar1 = (byte *)*param_1;
    *param_1 = PTR_crt_unknown_c_FUN_005c67b0_0061f7f0;
    PTR_crt_unknown_c_FUN_005c67b0_0061f7f0 = puVar1;
  }
  if (param_2 != (uint *)0x0) {
    puVar1 = (byte *)*param_2;
    *param_2 = PTR_crt_unknown_c_FUN_005c68a8_0061f7f4;
    PTR_crt_unknown_c_FUN_005c68a8_0061f7f4 = puVar1;
  }
  if (param_3 != (uint *)0x0) {
    puVar1 = (byte *)*param_3;
    *param_3 = PTR_crt_unknown_c_FUN_005c5cd0_0061f7f8;
    PTR_crt_unknown_c_FUN_005c5cd0_0061f7f8 = puVar1;
  }
  return;
}
