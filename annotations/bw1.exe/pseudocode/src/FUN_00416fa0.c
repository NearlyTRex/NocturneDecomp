// Name: FUN_00416fa0
// Address: 00416fa0
// Address Range: [[00416fa0, 0041722c]]
// Convention: unknown
// Signature: void FUN_00416fa0(int param_1,int param_2,int param_3,undefined4 param_4,int param_5)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00416fa0(int param_1,int param_2,int param_3,uint param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  float afStackY_1028 [1001];
  uint uVar8;
  uint uVar9;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  iVar1 = 0x01E82168;
  bVar7 = 0;
  iVar4 = 0xfc;
  if (0x280 < DAT_0061b498) {
    param_2 = (param_2 * 0x280) / DAT_0061b498;
    param_3 = (param_3 * 0x1e0) / DAT_0061b49c;
    iVar4 = (int)(0x27600 / (longlong)DAT_0061b498);
  }
  *(uint *)(0x01E82168 + 0x15ae84) = 1;
  *(uint *)(iVar1 + 0x15ae88) = 0xffffb7d5;
  *(uint *)(iVar1 + 0x15ae8c) = 0xffffb7d5;
  *(uint *)(iVar1 + 0x15ae90) = 0x482b;
  *(uint *)(iVar1 + 0x15ae94) = 32000;
  FUN_0057dd92(param_2,param_2 + iVar4 + -1,param_3,param_3 + iVar4 + -1);
  iVar3 = param_1 + 0x8f8;
  iVar1 = FUN_00468900(iVar3);
  puVar5 = *(uint **)(iVar1 + 0x350);
  puVar6 = &stack0xffffff90;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  FUN_00483c10(DAT_00612560,param_2,param_3,iVar4,iVar4);
  uStack_50 = 0xc0000000;
  uStack_58 = 0;
  uStack_54 = 0;
  FUN_004834b0(DAT_00612560,&stack0xffffffa8);
  FUN_004839b0(DAT_00612560,0x42100000);
  FUN_00483530(DAT_00612560,&DAT_02c8af28);
  FUN_004837b0(DAT_00612560,&DAT_02c8af28);
  fStack_40 = fStack_70 + fStack_64;
  fStack_3c = fStack_6c + fStack_60;
  fStack_38 = fStack_68 + fStack_5c;
  fStack_34 = fStack_70 + fStack_64;
  *(float *)((int)&stack0xffffffd0 + (uint)bVar7 * -8) =
       (&stack0xffffffc4)[(uint)bVar7 * 0xfffffffe];
  *(uint *)((int)&stack0xffffffd4 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
       *(uint *)((int)&stack0xffffffc8 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
  _DAT_01c51cac = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uVar9 = 0;
  uStack_44 = param_4;
  puVar5 = &stack0xffffffb4;
  fStack_28 = fStack_34 * _DAT_005d3ffe;
  fStack_24 = fStack_30 * _DAT_005d3ffe;
  fStack_20 = fStack_2c * _DAT_005d3ffe;
  fStack_1c = fStack_34 * _DAT_005d3ffe;
  *(uint *)((int)&stack0xffffffe8 + (uint)bVar7 * 0xfffffffe * 4) =
       *(uint *)((int)&stack0xffffffdc + (uint)bVar7 * -8);
  uVar8 = DAT_00612560;
  *(uint *)(&stack0xffffffec + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
       *(uint *)((int)&stack0xffffffe0 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
  FUN_00483850(uVar8,puVar5,uVar9);
  FUN_00483850(DAT_00612560,&DAT_02c8af28,&stack0xffffffe4);
  if (param_5 == 0) {
    iVar3 = param_1 + 0xa74;
  }
  FUN_004688a0(iVar3,0,0xffffffff);
  thunk_FUN_005084b0(DAT_00612560);
  thunk_FUN_005084b0(DAT_00612560);
  thunk_FUN_00509210(DAT_00612560);
  *(uint *)(0x01E82168 + 0x15ae84) = 0;
  return;
}
