// Name: FUN_00528160
// Address: 00528160
// Address Range: [[00528160, 00528193]]
// Convention: unknown
// Signature: void FUN_00528160(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

#include "nocturne.h"

void FUN_00528160(uint *param_1,uint *param_2,uint *param_3)

{
  if (param_1 != (uint *)0x0) {
    *param_1 = DAT_005bea64;
  }
  if (param_2 != (uint *)0x0) {
    *param_2 = DAT_005bea68;
  }
  if (param_3 == (uint *)0x0) {
    return;
  }
  *param_3 = DAT_005bea6c;
  return;
}
