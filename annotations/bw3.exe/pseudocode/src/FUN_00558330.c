// Name: FUN_00558330
// Address: 00558330
// Address Range: [[00558330, 00558363]]
// Convention: unknown
// Signature: void FUN_00558330(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

#include "nocturne.h"

void FUN_00558330(uint *param_1,uint *param_2,uint *param_3)

{
  if (param_1 != (uint *)0x0) {
    *param_1 = DAT_00604228;
  }
  if (param_2 != (uint *)0x0) {
    *param_2 = DAT_0060422c;
  }
  if (param_3 == (uint *)0x0) {
    return;
  }
  *param_3 = DAT_00604230;
  return;
}
