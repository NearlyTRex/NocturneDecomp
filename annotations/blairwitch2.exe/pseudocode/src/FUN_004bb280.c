// Name: FUN_004bb280
// Address: 004bb280
// Address Range: [[004bb280, 004bb2bf]]
// Convention: unknown
// Signature: int FUN_004bb280(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004bb280(void)

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
  _DAT_01cb80e0 = 3;
  _DAT_01cb8110 = DAT_006141b8 / 2;
  iVar1 = DAT_006141bc / 2;
  _DAT_01cb810c = (float)DAT_006141b8;
  iVar2 = *(int *)(0x01E65CD0 + 0xc);
  _DAT_01cb8114 = iVar1;
  if (iVar2 != 0) {
    (**(code **)(*(int *)(iVar2 + 0x2b0) + 0x24))(iVar2);
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
    fStack_58 = afStack_24[2] * _DAT_005d83eb;
    afStack_54[0] = afStack_24[3] * _DAT_005d83eb;
    afStack_54[1] = fStack_14 * _DAT_005d83eb;
    afStack_54[2] = afStack_24[2] * _DAT_005d83eb;
    afStack_54[(uint)bVar5 * -2 + 3] = afStack_54[(uint)bVar5 * -2];
    afStack_54[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
         afStack_54[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    FUN_00408d70(*(uint *)(0x01E65CD0 + 0xc),pfVar6);
    fStack_70 = fStack_34;
    afStack_6c[(uint)bVar5 * -2] = afStack_54[(uint)bVar5 * -2 + 9];
    afStack_6c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         afStack_54[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
    iStack_7c = (int)ROUND(fStack_70 * _DAT_005f7550);
    iStack_78 = (int)ROUND(afStack_6c[0] * _DAT_005f7550);
    iStack_74 = (int)ROUND(afStack_6c[1] * _DAT_005f7550);
    iVar1 = FUN_0043cbe0(0x1fc7838,&iStack_7c);
    iStack_64 = iStack_28;
    (&fStack_60)[(uint)bVar5 * -2] = afStack_24[(uint)bVar5 * -2];
    (&fStack_60)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         afStack_24[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    if (iStack_5c != 0) {
      _DAT_01cb8110 =
           (int)((iStack_64 + (iStack_64 >> 0x1f) * -0x10000) -
                (uint)((iStack_64 >> 0x1f) << 0xf < 0)) >> 0x10;
      iVar1 = (int)(((int)fStack_60 + ((int)fStack_60 >> 0x1f) * -0x10000) -
                   (uint)(((int)fStack_60 >> 0x1f) << 0xf < 0)) >> 0x10;
      _DAT_01cb8114 = iVar1;
      if (0x1e0 < DAT_006141bc) {
        _DAT_01cb8110 = (_DAT_01cb8110 * DAT_006141b8) / 0x280;
        _DAT_01cb8114 = (iVar1 * DAT_006141bc) / 0x1e0;
        return _DAT_01cb8114;
      }
    }
  }
  return iVar1;
}
