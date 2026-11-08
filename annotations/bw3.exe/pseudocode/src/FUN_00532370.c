// Name: FUN_00532370
// Address: 00532370
// Address Range: [[00532370, 005324f8]]
// Convention: unknown
// Signature: undefined4 FUN_00532370(int param_1,undefined4 *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00532370(int param_1,uint *param_2)

{
  byte bVar1;
  uint auStackY_1074 [1016];
  uint uStack_8c;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_20;
  uint uStack_14;
  
  bVar1 = 0;
  uStack_14 = 5;
  FUN_0054dcc0(param_1 + 0x158,_DAT_01ed785c);
  uStack_50 = uStack_44;
  *(uint *)((int)&stack0xffffffb4 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffc0 + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffb8 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffc4 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (param_2 != &stack0xffffffb0) {
    *param_2 = uStack_50;
    param_2[1] = uStack_4c;
    param_2[2] = uStack_48;
  }
  FUN_0054dcc0(param_1 + 0x158,_DAT_01ed7870);
  uStack_80 = uStack_8c;
  *(uint *)((int)&stack0xffffff84 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffff78 + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffff88 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffff7c + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (param_2 + 3 != &stack0xffffff80) {
    param_2[3] = uStack_80;
    param_2[4] = uStack_7c;
    param_2[5] = uStack_78;
  }
  FUN_0054dcc0(param_1 + 0x158,_DAT_01ed7874);
  uStack_74 = uStack_20;
  *(uint *)((int)&stack0xffffff90 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffe4 + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffff94 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffe8 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (param_2 + 6 != &stack0xffffff8c) {
    param_2[6] = uStack_74;
    param_2[7] = uStack_70;
    param_2[8] = uStack_6c;
  }
  FUN_0054dcc0(param_1 + 0x158,_DAT_01ed7880);
  uStack_38 = uStack_5c;
  *(uint *)((int)&stack0xffffffcc + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffa8 + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffd0 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffac + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (param_2 + 9 != &stack0xffffffc8) {
    param_2[9] = uStack_38;
    param_2[10] = uStack_34;
    param_2[0xb] = uStack_30;
  }
  FUN_0054dcc0(param_1 + 0x158,_DAT_01ed7888);
  uStack_68 = uStack_2c;
  *(uint *)((int)&stack0xffffff9c + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffd8 + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffa0 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffdc + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (param_2 + 0xc == &stack0xffffff98) {
    return uStack_14;
  }
  param_2[0xc] = uStack_68;
  param_2[0xd] = uStack_64;
  param_2[0xe] = uStack_60;
  return uStack_14;
}
