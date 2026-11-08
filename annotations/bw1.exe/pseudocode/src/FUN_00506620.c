// Name: FUN_00506620
// Address: 00506620
// Address Range: [[00506620, 00506663]]
// Convention: unknown
// Signature: void FUN_00506620(int param_1,undefined4 *param_2)

#include "nocturne.h"

void FUN_00506620(int param_1,uint *param_2)

{
  uint uVar1;
  
  FUN_00409d20(param_1,param_2);
  *param_2 = 1;
  uVar1 = *(uint *)(param_1 + 0x2d4);
  param_2[4] = 0x40c90fdb;
  param_2[5] = 0xc0c90fdb;
  param_2[2] = 0xbf800000;
  param_2[3] = 0;
  param_2[1] = uVar1;
  return;
}
