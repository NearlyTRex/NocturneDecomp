// Name: FUN_00420420
// Address: 00420420
// Address Range: [[00420420, 004207e8]]
// Convention: unknown
// Signature: void FUN_00420420(int param_1,float param_2)

#include "nocturne.h"

void FUN_00420420(int param_1,float param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  float10 fVar9;
  float afStackY_1040 [965];
  byte auStack_118 [48];
  byte auStack_e8 [48];
  uint auStack_b8 [12];
  uint auStack_88 [12];
  float fStack_58;
  float afStack_54 [5];
  float fStack_40;
  uint uStack_34;
  float fStack_28;
  float fStack_24;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar8 = 0;
  FUN_0041f360(param_1,param_2);
  if ((*(int *)(param_1 + 0x6e8) == 2) &&
     (param_2 = *(float *)(param_1 + 14000) - param_2, *(float *)(param_1 + 14000) = param_2,
     param_2 <= 0.0)) {
    iVar3 = FUN_0040cea0(0,7,0,0,0);
    FUN_0045db40(param_1 + 0x6ec,iVar3 * 0x4c + 0x7e17b8);
    fStack_14 = (float)FUN_0040ce40(0,0x3e19999a);
    *(float *)(param_1 + 14000) = fStack_14;
  }
  if (*(int *)(param_1 + 0x6e8) == 3) {
    iVar3 = param_1 + 0x36b4;
    FUN_0045aae0(iVar3,param_1 + 0x20);
    uVar2 = FUN_005a35cc();
    *(uint *)(param_1 + 0x36f0) = uVar2 & 0x7fff;
    *(char *)(param_1 + 0x36d0) = (char)((int)(uVar2 & 0x7fff) >> 10);
    FUN_0045ab30(iVar3,0x40000000);
    uVar1 = 0x01ED78C8;
    *(uint *)(param_1 + 0x36d4) = 0;
    FUN_005372f0(uVar1,iVar3);
    return;
  }
  if (*(int *)(param_1 + 0x23a0) != 0) {
    FUN_00408b80(param_1,param_1 + 0x3698);
    fStack_58 = fStack_40;
    afStack_54[(uint)bVar8 * -2] = afStack_54[(uint)bVar8 * -2 + 6];
    afStack_54[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
         afStack_54[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
    if ((float *)(param_1 + 0x6f0) != &fStack_58) {
      *(float *)(param_1 + 0x6f0) = fStack_58;
      *(float *)(param_1 + 0x6f4) = afStack_54[0];
      *(float *)(param_1 + 0x6f8) = afStack_54[1];
    }
    FUN_00583940(auStack_118,&DAT_02cfd900,param_1 + 0x36a4);
    FUN_00583940(auStack_e8,&DAT_02cfd900,param_1 + 0x30);
    FUN_005833e0(auStack_118,auStack_e8);
    puVar6 = auStack_88;
    puVar7 = auStack_b8;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
    }
    FUN_00583b10(auStack_b8);
    afStack_54[2] = (float)uStack_34;
    afStack_54[(uint)bVar8 * -2 + 3] = afStack_54[(uint)bVar8 * -2 + 9];
    afStack_54[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
         afStack_54[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10];
    FUN_0045b550(param_1 + 0x6fc,afStack_54 + 2);
    if (*(int *)(param_1 + 0x6e8) == 2) {
      *(uint *)(param_1 + 0x82c) = 0;
      FUN_0045fab0(param_1 + 0x6ec,0);
      FUN_00537270(0x01ED78C8,param_1 + 0x6ec);
      fStack_28 = (float)FUN_0040ce40(0xbe800000,0x3e800000);
      fStack_24 = (float)FUN_0040ce40(0xbe800000,0x3e800000);
      fStack_14 = (float)FUN_0040ce40(0xbe800000,0x3e800000);
      iVar5 = param_1 + 0x36b4;
      fStack_58 = fStack_58 + fStack_14;
      fStack_1c = fStack_24;
      afStack_54[0] = afStack_54[0] + fStack_24;
      fStack_18 = fStack_28;
      afStack_54[1] = afStack_54[1] + fStack_28;
      FUN_0045aae0(iVar5,&fStack_58);
      fStack_14 = (float)FUN_0040ce40(0x476a6000,0x477de800);
      fVar9 = (float10)fStack_14;
      FUN_005a3120();
      fStack_14 = (float)(int)ROUND(fVar9);
      *(float *)(param_1 + 0x36f0) = fStack_14;
      iVar3 = ((int)fStack_14 + ((int)fStack_14 >> 0x1f) * -0x100) -
              (uint)(((int)fStack_14 >> 0x1f) << 7 < 0);
      iVar4 = iVar3 >> 0x1f;
      *(char *)(param_1 + 0x36d0) =
           (char)((int)(((iVar3 >> 8) + iVar4 * -4) - (uint)(iVar4 << 1 < 0)) >> 2);
      fStack_14 = (float)FUN_0040ce40(0x416c0000,0x41740000);
      FUN_0045ab30(iVar5,fStack_14);
      uVar1 = 0x01ED78C8;
      *(uint *)(param_1 + 0x36d4) = 1;
      FUN_005372f0(uVar1,iVar5);
      return;
    }
  }
  return;
}
