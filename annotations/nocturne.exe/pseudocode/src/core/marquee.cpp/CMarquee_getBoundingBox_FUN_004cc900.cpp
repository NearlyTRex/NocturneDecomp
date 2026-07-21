// Name: core_marquee.cpp_CMarquee_getBoundingBox_FUN_004cc900
// Address: 004cc900
// Address Range: [[004cc900, 004cc952]]
// Convention: unknown
// Signature: void core_marquee_cpp_CMarquee_getBoundingBox_FUN_004cc900(int param_1,undefined4 *param_2)

#include "nocturne.h"

void core_marquee_cpp_CMarquee_getBoundingBox_FUN_004cc900(int param_1,uint *param_2)

{
  if (param_2 == (uint *)(param_1 + 0x17c)) {
    if (param_2 + 3 == (uint *)(param_1 + 0x188)) {
      return;
    }
  }
  else {
    *param_2 = *(uint *)(param_1 + 0x17c);
    param_2[1] = *(uint *)(param_1 + 0x180);
    param_2[2] = *(uint *)(param_1 + 0x184);
    if (param_2 + 3 == (uint *)(param_1 + 0x188)) {
      return;
    }
  }
  param_2[3] = *(uint *)(param_1 + 0x188);
  param_2[4] = *(uint *)(param_1 + 0x18c);
  param_2[5] = *(uint *)(param_1 + 400);
  return;
}
