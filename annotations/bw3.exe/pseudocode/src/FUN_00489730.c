// Name: FUN_00489730
// Address: 00489730
// Address Range: [[00489730, 00489b5e]]
// Convention: unknown
// Signature: void FUN_00489730(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00489730(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  float afStackY_1044 [1013];
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  byte auStack_50 [12];
  float fStack_44;
  float afStack_40 [2];
  int iStack_38;
  float fStack_34;
  float fStack_30;
  float *pfStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  float fStack_18;
  uint uStack_14;
  
  bVar5 = 0;
  fStack_60 = *(float *)(param_1 + 0xce58);
  iVar1 = *(int *)(param_1 + 0xd04c);
  if (iVar1 == 0) {
    if (((*(int *)(0x01D2130C + 0x1f8) != 0) || (*(int *)(0x01D2130C + 0x254) == 0)) ||
       (iVar1 = FUN_00491aa0(0x01C6E360,"?Capture" + 1), iVar1 != 0)) {
      *(uint *)(param_1 + 0xcdd8) = 0;
      *(uint *)(param_1 + 0xcde8) = 0;
      *(uint *)(param_1 + 0xcde4) = 0;
      return;
    }
    param_2 = *(float *)(param_1 + 0xcde8) - param_2;
    *(float *)(param_1 + 0xcde8) = param_2;
    if (param_2 <= 0.0) {
      *(uint *)(param_1 + 0xcdd8) = 0;
      uStack_14 = FUN_0040ce40(0x3f000000,0x3fc00000);
      fStack_34 = *(float *)(param_1 + 0xcdec) * *(float *)(param_1 + 0xcdec);
      iStack_1c = 0;
      *(uint *)(param_1 + 0xcde8) = uStack_14;
      if ((*(int *)(param_1 + 0xcde4) == 0) &&
         (*(float *)(param_1 + 0xcddc) < *(float *)(param_1 + 0xcdec))) {
        fStack_34 = *(float *)(param_1 + 0xcddc) * *(float *)(param_1 + 0xcddc);
      }
      pfStack_2c = (float *)(param_1 + 0x20);
      iStack_24 = 0;
      iStack_20 = 0;
      for (iStack_28 = 0; iStack_28 < *(int *)(0x01ED78C8 + 0x14f0a8); iStack_28 = iStack_28 + 1)
      {
        iVar1 = *(int *)(0x01ED78C8 + iStack_20 + 0x14f0ac);
        iVar4 = (**(code **)(*(int *)(iVar1 + 0x154) + 0xe4))(iVar1,param_1);
        if (((iVar4 != 0) &&
            (iVar4 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x10c))(iVar1), iVar4 == 0)) &&
           ((iVar4 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x70))(iVar1), iVar4 == 0 &&
            ((*(float *)(iVar1 + 0x27b4) <= 0.0 && (iVar1 != param_1)))))) {
          fStack_44 = *(float *)(iVar1 + 0x20) - *pfStack_2c;
          afStack_40[0] = *(float *)(iVar1 + 0x24) - pfStack_2c[1];
          afStack_40[1] = *(float *)(iVar1 + 0x28) - pfStack_2c[2];
          fStack_5c = fStack_44;
          *(float *)((int)&stack0xffffffa8 + (uint)bVar5 * -8) = afStack_40[(uint)bVar5 * -2];
          *(float *)(auStack_50 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + -4) =
               afStack_40[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
          if (ABS(fStack_58) <= fStack_60) {
            fStack_58 = fStack_58 * _DAT_005bdc9b;
            fStack_30 = fStack_54 * fStack_54 + fStack_5c * fStack_5c + fStack_58 * fStack_58;
            if (fStack_30 <= fStack_34) {
              *(int *)(&DAT_01c5bc4c + iStack_24) = iVar1;
              *(float *)(&DAT_01c5db8c + iStack_24) = fStack_30;
              iStack_24 = iStack_24 + 4;
              iStack_1c = iStack_1c + 1;
            }
          }
        }
        iStack_20 = iStack_20 + 4;
      }
      iStack_38 = param_1 + 0x20;
      iVar1 = *(int *)(param_1 + 0xcde4);
      *(uint *)(param_1 + 0xcde4) = 0;
      while( true ) {
        iVar4 = -1;
        iVar3 = 0;
        fStack_18 = 1e+20;
        if (0 < iStack_1c) {
          iVar2 = 0;
          do {
            if (*(float *)(&DAT_01c5db8c + iVar2) < fStack_18) {
              fStack_18 = *(float *)(&DAT_01c5db8c + iVar2);
              iVar4 = iVar3;
            }
            iVar3 = iVar3 + 1;
            iVar2 = iVar2 + 4;
          } while (iVar3 < iStack_1c);
        }
        if (iVar4 < 0) break;
        iVar3 = *(int *)(&DAT_01c5bc4c + iVar4 * 4);
        iVar2 = FUN_00489600(param_1,iVar3);
        if (iVar2 != 0) {
          *(int *)(param_1 + 0xcde4) = iVar3;
          FUN_00441ff0(PTR_DAT_005f1690,"%s can see hero\n",param_1);
          return;
        }
        if ((((*(int *)(param_1 + 0xd050) != 0) || (iVar3 == iVar1)) &&
            (iVar2 = (**(code **)(*(int *)(iVar3 + 0x154) + 0xc4))(iVar3), iVar2 != 0)) &&
           (iVar2 = FUN_0050c680(iVar2,iStack_38,auStack_50,*(uint *)(param_1 + 0x6c)),
           iVar2 == 1)) {
          *(int *)(param_1 + 0xcde4) = iVar3;
          return;
        }
        *(uint *)(&DAT_01c5db8c + iVar4 * 4) = 0x7149f2ca;
        if (iVar3 == iVar1) {
          *(int *)(param_1 + 0xcde4) = iVar1;
        }
      }
    }
    else {
      iVar1 = *(int *)(param_1 + 0xcde4);
      if ((iVar1 != 0) &&
         (iVar1 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x10c))(iVar1), iVar1 != 0)) {
        *(uint *)(param_1 + 0xcde8) = 0;
        *(uint *)(param_1 + 0xcdd8) = 0;
        *(uint *)(param_1 + 0xcde4) = 0;
        return;
      }
    }
  }
  else {
    if (iVar1 == 0xFFFFFFFF) {
      *(uint *)(param_1 + 0xcde4) = 0;
    }
    else {
      *(int *)(param_1 + 0xcde4) = iVar1;
    }
    *(uint *)(param_1 + 0xcdd8) = 0;
    *(uint *)(param_1 + 0xcde8) = 0;
  }
  return;
}
