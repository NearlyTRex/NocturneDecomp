// Name: FUN_005320b0
// Address: 005320b0
// Address Range: [[005320b0, 0053220a]]
// Convention: unknown
// Signature: undefined4 FUN_005320b0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005320b0(int param_1,int param_2)

{
  byte bVar1;
  float afStackY_1064 [1012];
  float *pfVar2;
  int iVar3;
  uint uStack_7c;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  uint uStack_40;
  float fStack_3c;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_1c;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  bVar1 = 0;
  if (param_2 == 0) {
    return 0;
  }
  FUN_00583260(&DAT_02cfd900,_DAT_01ed7860 * 0x30 + param_1 + 0xfd8);
  fStack_34 = fStack_1c;
  *(uint *)((int)&stack0xffffffd0 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffe8 + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffd4 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffec + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  FUN_00583260(&DAT_02cfd900,_DAT_01ed7864 * 0x30 + param_1 + 0xfd8);
  fStack_10 = fStack_28;
  *(uint *)((int)&stack0xfffffff4 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffdc + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xfffffff8 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffe0 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  fStack_4c = fStack_10 + fStack_34;
  fStack_48 = fStack_c + fStack_30;
  fStack_44 = fStack_8 + fStack_2c;
  fStack_70 = fStack_10 + fStack_34;
  *(uint *)((int)&stack0xffffff94 + (uint)bVar1 * -8) =
       *(uint *)((int)&stack0xffffffb8 + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffff98 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)((int)&stack0xffffffbc + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  pfVar2 = &stack0xffffffa8;
  fStack_64 = fStack_70 * _DAT_005d00b2;
  fStack_60 = fStack_6c * _DAT_005d00b2;
  fStack_5c = fStack_68 * _DAT_005d00b2;
  fStack_58 = fStack_70 * _DAT_005d00b2;
  *(uint *)((int)&stack0xffffffac + (uint)bVar1 * 0xfffffffe * 4) =
       *(uint *)((int)&stack0xffffffa0 + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffb0 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)((int)&stack0xffffffa4 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  fStack_50 = fStack_50 + _DAT_005d00b6;
  FUN_00408b80(param_1,pfVar2);
  iVar3 = param_2 + 0x30;
  uStack_40 = uStack_7c;
  (&stack0xffffffc4)[(uint)bVar1 * 0xfffffffe] =
       (float)*(uint *)(&stack0xffffff88 + (uint)bVar1 * -8);
  *(uint *)(&stack0xffffffc8 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffff8c + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  fStack_3c = fStack_3c + _DAT_005d00ba;
  (**(code **)(*(int *)(param_2 + 0x154) + 0x68))(param_2,&stack0xffffffc0,iVar3);
  return 1;
}
