// Name: crt_unknown.c_FUN_005ce010
// Address: 005ce010
// Address Range: [[005ce010, 005ce059]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005ce010(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

#include "nocturne.h"

void FUN_005ce010(uint *param_1,uint *param_2,uint *param_3)

{
  byte *puVar1;
  
  if (param_1 != (uint *)0x0) {
    puVar1 = (byte *)*param_1;
    *param_1 = PTR_crt_unknown_c_FUN_005ceab0_00626b70;
    PTR_crt_unknown_c_FUN_005ceab0_00626b70 = puVar1;
  }
  if (param_2 != (uint *)0x0) {
    puVar1 = (byte *)*param_2;
    *param_2 = PTR_crt_unknown_c_FUN_005ceba8_00626b74;
    PTR_crt_unknown_c_FUN_005ceba8_00626b74 = puVar1;
  }
  if (param_3 != (uint *)0x0) {
    puVar1 = (byte *)*param_3;
    *param_3 = PTR_crt_unknown_c_FUN_005cdfd0_00626b78;
    PTR_crt_unknown_c_FUN_005cdfd0_00626b78 = puVar1;
  }
  return;
}
