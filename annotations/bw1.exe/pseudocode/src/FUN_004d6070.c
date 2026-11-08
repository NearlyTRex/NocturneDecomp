// Name: FUN_004d6070
// Address: 004d6070
// Address Range: [[004d6070, 004d60af]]
// Convention: unknown
// Signature: int FUN_004d6070(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004d6070(void)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_1058 [1001];
  float *pfVar6;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  float fStack_70;
  float afStack_6c [2];
  int iStack_64;
  float fStack_60;
  int iStack_5c;
  float fStack_58;
  float afStack_54 [5];
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  int iStack_28;
  float afStack_24 [4];
  float fStack_14;
  
  bVar5 = 0;
  _DAT_01cd0c7c = 3;
  _DAT_01cd0c84 = DAT_0061b498 / 2;
  iVar1 = DAT_0061b49c / 2;
  _DAT_01cd0c80 = (float)DAT_0061b498;
  iVar2 = *(int *)(0x01E81C80 + 0xc);
  _DAT_01cd0c88 = iVar1;
  if (iVar2 != 0) {
    (**(code **)(*(int *)(iVar2 + 0x154) + 0x1c))(iVar2);
    puVar3 = (uint *)&stack0xffffff6c;
    puVar4 = &stack0xffffff54;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    fStack_40 = fStack_ac + fStack_a0;
    fStack_3c = fStack_a8 + fStack_9c;
    fStack_38 = fStack_a4 + fStack_98;
    afStack_24[2] = fStack_ac + fStack_a0;
    afStack_24[(uint)bVar5 * -2 + 3] = afStack_54[(uint)bVar5 * -2 + 6];
    afStack_24[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
         afStack_54[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
    pfVar6 = afStack_54 + 2;
    fStack_58 = afStack_24[2] * _DAT_005e2e94;
    afStack_54[0] = afStack_24[3] * _DAT_005e2e94;
    afStack_54[1] = fStack_14 * _DAT_005e2e94;
    afStack_54[2] = afStack_24[2] * _DAT_005e2e94;
    afStack_54[(uint)bVar5 * -2 + 3] = afStack_54[(uint)bVar5 * -2];
    afStack_54[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
         afStack_54[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    FUN_00408b40(*(uint *)(0x01E81C80 + 0xc),pfVar6);
    fStack_70 = fStack_34;
    afStack_6c[(uint)bVar5 * -2] = afStack_54[(uint)bVar5 * -2 + 9];
    afStack_6c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         afStack_54[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
    iStack_7c = (int)ROUND(fStack_70 * _DAT_00600f6c);
    iStack_78 = (int)ROUND(afStack_6c[0] * _DAT_00600f6c);
    iStack_74 = (int)ROUND(afStack_6c[1] * _DAT_00600f6c);
    iVar1 = FUN_0044e2a0(0x1fe37ec,&iStack_7c);
    iStack_64 = iStack_28;
    (&fStack_60)[(uint)bVar5 * -2] = afStack_24[(uint)bVar5 * -2];
    (&fStack_60)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         afStack_24[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    if (iStack_5c != 0) {
      _DAT_01cd0c84 =
           (int)((iStack_64 + (iStack_64 >> 0x1f) * -0x10000) -
                (uint)((iStack_64 >> 0x1f) << 0xf < 0)) >> 0x10;
      iVar1 = (int)(((int)fStack_60 + ((int)fStack_60 >> 0x1f) * -0x10000) -
                   (uint)(((int)fStack_60 >> 0x1f) << 0xf < 0)) >> 0x10;
      _DAT_01cd0c88 = iVar1;
      if (0x1e0 < DAT_0061b49c) {
        _DAT_01cd0c84 = (_DAT_01cd0c84 * DAT_0061b498) / 0x280;
        _DAT_01cd0c88 = (iVar1 * DAT_0061b49c) / 0x1e0;
        return _DAT_01cd0c88;
      }
    }
  }
  return iVar1;
}
