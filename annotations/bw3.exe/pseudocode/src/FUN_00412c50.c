// Name: FUN_00412c50
// Address: 00412c50
// Address Range: [[00412c50, 00412ed0]]
// Convention: unknown
// Signature: void FUN_00412c50(int param_1,int param_2,int param_3,undefined4 param_4,int param_5)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00412c50(int param_1,int param_2,int param_3,uint param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  float afStackY_1040 [1007];
  uint uVar8;
  byte *puVar9;
  uint uVar10;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
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
  byte auStack_1c [8];
  uint uStack_14;
  
  iVar1 = 0x01ED78C8;
  bVar7 = 0;
  iVar4 = 0xfc;
  if (0x280 < DAT_005fba18) {
    param_2 = (param_2 * 0x280) / DAT_005fba18;
    param_3 = (param_3 * 0x1e0) / DAT_005fba1c;
    iVar4 = (int)(0x27600 / (longlong)DAT_005fba18);
  }
  *(uint *)(0x01ED78C8 + 0x15ae84) = 1;
  *(uint *)(iVar1 + 0x15ae88) = 0xffffb7d5;
  *(uint *)(iVar1 + 0x15ae8c) = 0xffffb7d5;
  *(uint *)(iVar1 + 0x15ae90) = 0x482b;
  *(uint *)(iVar1 + 0x15ae94) = 32000;
  FUN_00560ec2(param_2,param_2 + iVar4 + -1,param_3,param_3 + iVar4 + -1);
  iVar3 = param_1 + 0x8ec;
  iVar1 = FUN_004625a0(iVar3);
  puVar5 = *(uint **)(iVar1 + 0x350);
  puVar6 = &stack0xffffff90;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  FUN_0046d2f0(DAT_005f2afc,param_2,param_3,iVar4,iVar4);
  uStack_44 = 0xc0000000;
  uStack_4c = 0;
  uStack_48 = 0;
  FUN_0046cb90(DAT_005f2afc,&stack0xffffffb4);
  FUN_0046d090(DAT_005f2afc,0x42100000);
  FUN_0046cc10(DAT_005f2afc,&DAT_02cfd900);
  FUN_0046ce90(DAT_005f2afc,&DAT_02cfd900);
  fStack_34 = fStack_70 + fStack_64;
  fStack_30 = fStack_6c + fStack_60;
  fStack_2c = fStack_68 + fStack_5c;
  fStack_28 = fStack_70 + fStack_64;
  *(uint *)((int)&stack0xffffffdc + (uint)bVar7 * -8) =
       *(uint *)((int)&stack0xffffffd0 + (uint)bVar7 * -8);
  *(uint *)(auStack_1c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + -4) =
       *(uint *)((int)&stack0xffffffd4 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
  uVar10 = 0;
  uStack_14 = param_4;
  puVar9 = auStack_1c;
  _DAT_01c6e24c = 0;
  fStack_40 = fStack_28 * _DAT_005b67c6;
  fStack_3c = fStack_24 * _DAT_005b67c6;
  fStack_38 = fStack_20 * _DAT_005b67c6;
  fStack_58 = fStack_28 * _DAT_005b67c6;
  *(float *)((int)&stack0xffffffac + (uint)bVar7 * 0xfffffffe * 4) =
       (&stack0xffffffc4)[(uint)bVar7 * 0xfffffffe];
  uVar8 = DAT_005f2afc;
  *(uint *)(&stack0xffffffb0 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
       *(uint *)(auStack_1c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + -0x1c);
  FUN_0046cf30(uVar8,puVar9,uVar10);
  FUN_0046cf30(DAT_005f2afc,&DAT_02cfd900,&stack0xffffffa8);
  if (param_5 == 0) {
    iVar3 = param_1 + 0xa68;
  }
  FUN_00462540(iVar3,0,0xffffffff);
  thunk_FUN_004e5ef0(DAT_005f2afc);
  thunk_FUN_004e5ef0(DAT_005f2afc);
  thunk_FUN_004e6c50(DAT_005f2afc);
  *(uint *)(0x01ED78C8 + 0x15ae84) = 0;
  return;
}
