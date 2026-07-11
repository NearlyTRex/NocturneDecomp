// Name: FUN_0051f930
// Address: 0051f930
// Address Range: [[0051f930, 0051f970]]
// Convention: unknown
// Signature: undefined8 FUN_0051f930(undefined4 *param_1)

#include "nocturne.h"

ulonglong FUN_0051f930(uint *param_1)

{
  param_1[2] = 0;
  param_1[1] = param_1[2];
  *param_1 = param_1[1];
  param_1[5] = 0;
  param_1[4] = param_1[5];
  param_1[3] = param_1[4];
  param_1[6] = 0x41e00000;
  return CONCAT44(param_1,param_1 + 3);
}
