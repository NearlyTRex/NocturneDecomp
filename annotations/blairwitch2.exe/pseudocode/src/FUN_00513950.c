// Name: FUN_00513950
// Address: 00513950
// Address Range: [[00513950, 00513d28]]
// Convention: unknown
// Signature: void FUN_00513950(int param_1,int param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00513950(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  uint *extraout_EDX;
  int *extraout_EDX_00;
  int *extraout_EDX_01;
  byte bVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  ulonglong uVar9;
  int aiStackY_105c [3];
  float afStackY_1050 [3];
  int aiStackY_1044 [6];
  float afStackY_102c [1001];
  float afStack_80 [3];
  int iStack_74;
  int aiStack_70 [2];
  float fStack_68;
  float afStack_64 [2];
  int iStack_5c;
  int aiStack_58 [4];
  int iStack_48;
  float fStack_44;
  float afStack_40 [4];
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  bVar3 = 0;
  iVar2 = FUN_0046b960(DAT_0060b280);
  if (iVar2 != 0) {
    return;
  }
  afStack_80[0] = (float)*(int *)(param_1 + 0x24) * _DAT_01fc9c9c + _DAT_01fc9c78;
  afStack_80[1] = 0.0;
  afStack_80[2] = (float)*(int *)(param_1 + 0x2c) * _DAT_01fc9ca4 + _DAT_01fc9c80;
  FUN_0046b2b0(DAT_0060b280,afStack_80);
  FUN_0046ca00(DAT_0060b280,0x61b2d0);
  _DAT_01e613f4 = 4;
  _DAT_01e613f8 = 0;
  _DAT_01e613fc = 0;
  _DAT_01e61400 = 0;
  _DAT_01e61404 = 0;
  _DAT_01e61408 = 0;
  _DAT_01e61414 = 1;
  _DAT_01e61420 = 2;
  _DAT_01e6140c = 0x800000;
  _DAT_01e61410 = 0x800000;
  _DAT_01e61418 = 0x800000;
  _DAT_01e6141c = 0x800000;
  _DAT_01e61424 = 0x800000;
  _DAT_01e61428 = 0x800000;
  _DAT_01e61430 = 0x800000;
  _DAT_01e61434 = 0x800000;
  _DAT_01e6142c = 3;
  FUN_0046b870(DAT_0060b280,0);
  iStack_28 = param_2 << 8;
  iStack_24 = param_3 << 8;
  iStack_20 = param_4 << 8;
  iStack_74 = 0;
  iStack_30 = 0;
  iStack_2c = param_5 << 8;
  do {
    aiStack_70[1] = 0;
    iStack_1c = iStack_30 + param_1;
    do {
      if ((-1000 < *(int *)(iStack_1c + 0x9c70)) && (*(int *)(iStack_1c + 0x9c70) < 1000)) {
        fVar4 = (float10)_DAT_005e1841;
        fVar5 = (float10)_DAT_01fc9c7c * fVar4;
        aiStack_70[0] = *(int *)(iStack_1c + 0x30);
        fStack_44 = _DAT_01fc9c9c * _DAT_005e1839;
        iStack_5c = iStack_74;
        aiStack_58[(uint)bVar3 * -2] = aiStack_70[(uint)bVar3 * -2];
        aiStack_58[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
             aiStack_70[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
        afStack_40[0] = _DAT_01fc9ca0 * _DAT_005e1839;
        afStack_40[1] = _DAT_01fc9ca4 * _DAT_005e1839;
        iStack_18 = iStack_5c;
        fStack_68 = fStack_44;
        afStack_64[(uint)bVar3 * -2] = afStack_40[(uint)bVar3 * -2];
        afStack_64[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
             afStack_40[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
        fVar6 = (float10)iStack_18 * (float10)fStack_68;
        fVar7 = (float10)aiStack_58[0] * (float10)afStack_64[0];
        iStack_18 = aiStack_58[1];
        fVar8 = (float10)aiStack_58[1] * (float10)afStack_64[1];
        FUN_005b7ff0();
        aiStack_58[2] = (int)ROUND(fVar6);
        fVar7 = fVar7 + fVar5;
        FUN_005b7ff0(aiStack_58 + 2);
        fVar7 = fVar7 + fVar4;
        iStack_48 = (int)ROUND(fVar8);
        FUN_005b7ff0();
        aiStack_58[3] = (int)ROUND(fVar7);
        FUN_0055d723(*extraout_EDX);
        iStack_18 = aiStack_58[2];
        fVar4 = (float10)aiStack_58[2] + (float10)fStack_68;
        FUN_005b7ff0(aiStack_58 + 2);
        aiStack_58[2] = (int)ROUND(fVar4);
        FUN_0055d723(*extraout_EDX_00 + 0x30);
        iStack_18 = iStack_48;
        fVar4 = (float10)iStack_48 + (float10)afStack_64[1];
        FUN_005b7ff0(aiStack_58 + 2);
        iStack_48 = (int)ROUND(fVar4);
        FUN_0055d723(*extraout_EDX_01 + 0x60);
        iStack_18 = aiStack_58[2];
        fVar4 = (float10)aiStack_58[2] - (float10)fStack_68;
        uVar9 = FUN_005b7ff0();
        aiStack_58[2] = (int)ROUND(fVar4);
        FUN_0055d723(*(int *)uVar9 + 0x90,(int)((ulonglong)uVar9 >> 0x20));
        piVar1 = DAT_0060b280;
        *(int *)(*DAT_0060b280 + 0x20) = iStack_28;
        *(int *)(*piVar1 + 0x24) = iStack_24;
        *(int *)(*piVar1 + 0x28) = iStack_20;
        *(int *)(*piVar1 + 0x2c) = iStack_2c;
        *(int *)(*piVar1 + 0x50) = iStack_28;
        *(int *)(*piVar1 + 0x54) = iStack_24;
        *(int *)(*piVar1 + 0x58) = iStack_20;
        *(int *)(*piVar1 + 0x5c) = iStack_2c;
        *(int *)(*piVar1 + 0x80) = iStack_28;
        *(int *)(*piVar1 + 0x84) = iStack_24;
        *(int *)(*piVar1 + 0x88) = iStack_20;
        *(int *)(*piVar1 + 0x8c) = iStack_2c;
        *(int *)(*piVar1 + 0xb0) = iStack_28;
        *(int *)(*piVar1 + 0xb4) = iStack_24;
        *(int *)(*piVar1 + 0xb8) = iStack_20;
        *(int *)(*piVar1 + 0xbc) = iStack_2c;
        FUN_0046aa00(piVar1,0x1e613f0);
      }
      aiStack_70[1] = aiStack_70[1] + 1;
      iStack_1c = iStack_1c + 400;
    } while (aiStack_70[1] < 100);
    iStack_74 = iStack_74 + 1;
    iStack_30 = iStack_30 + 4;
  } while (iStack_74 < 100);
  FUN_0046b870(DAT_0060b280,1);
  return;
}
