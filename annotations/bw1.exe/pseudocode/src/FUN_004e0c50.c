// Name: FUN_004e0c50
// Address: 004e0c50
// Address Range: [[004e0c50, 004e0f1d]]
// Convention: unknown
// Signature: int FUN_004e0c50(int param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004e0c50(int param_1,float *param_2)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  byte bVar4;
  float afStackY_1088 [1016];
  float fStack_a0;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_7c;
  float afStack_78 [4];
  float fStack_68;
  float fStack_64;
  float afStack_60 [5];
  float fStack_4c;
  float afStack_48 [4];
  float fStack_38;
  float fStack_34;
  float fStack_28;
  float afStack_24 [2];
  int iStack_1c;
  int iStack_18;
  
  bVar4 = 0;
  FUN_00569130(param_1 + 0x158,_DAT_01cd0dbc);
  fStack_7c = fStack_88;
  *(uint *)((int)afStack_78 + (uint)bVar4 * -8) =
       *(uint *)(&stack0xffffff7c + (uint)bVar4 * -8);
  afStack_78[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 1] =
       (float)*(uint *)(&stack0xffffff80 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  if (&fStack_7c != param_2) {
    *param_2 = fStack_7c;
    param_2[1] = afStack_78[0];
    param_2[2] = afStack_78[1];
  }
  iVar3 = 1;
  iStack_18 = param_1 + 0x158;
  iStack_1c = 0;
  do {
    switch((iStack_1c + *(int *)(param_1 + 0x6c)) % 4) {
    case 0:
      if (*(int *)(*(int *)(param_1 + 0xc28c) * 4 + param_1 + 0x2298) != 0) {
        FUN_00569130(iStack_18,_DAT_01cd0dac);
        afStack_48[2] = fStack_64;
        afStack_48[(uint)bVar4 * 0xfffffffe + 3] = afStack_60[(uint)bVar4 * 0xfffffffe];
        afStack_48[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 4] =
             afStack_60[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 1];
        if (afStack_78 + 2 != afStack_48 + 2) {
          afStack_78[2] = afStack_48[2];
          afStack_78[3] = afStack_48[3];
          fStack_68 = fStack_38;
        }
LAB_004e0d43:
        afStack_78[3] = afStack_78[0] * (float)_DAT_005e3e19 + afStack_78[3] * (float)_DAT_005e3e11;
        afStack_78[2] = fStack_7c * (float)_DAT_005e3e09 + afStack_78[2] * (float)_DAT_005e3e09;
        pfVar2 = param_2 + iVar3 * 3;
        if (pfVar2 != afStack_78 + 2) {
          *pfVar2 = afStack_78[2];
          pfVar2[1] = afStack_78[3];
          fVar1 = fStack_68;
          goto LAB_004e0d9a;
        }
LAB_004e0d9d:
        iVar3 = iVar3 + 1;
      }
      break;
    case 1:
      if (*(int *)(*(int *)(param_1 + 0xc294) * 4 + param_1 + 0x2298) != 0) {
        FUN_00569130(iStack_18,_DAT_01cd0db0);
        fStack_94 = fStack_34;
        (&stack0xffffff70)[(uint)bVar4 * 0xfffffffe] = afStack_48[(uint)bVar4 * 0xfffffffe + 6];
        *(float *)((int)&stack0xffffff74 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
             afStack_48[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 7];
        if (afStack_78 + 2 != &stack0xffffff6c) {
          afStack_78[2] = fStack_94;
          afStack_78[3] = fStack_90;
          fStack_68 = fStack_8c;
        }
        goto LAB_004e0d43;
      }
      break;
    case 2:
      if (*(int *)(*(int *)(param_1 + 0xc2b4) * 4 + param_1 + 0x2298) != 0) {
        FUN_00569130(iStack_18,_DAT_01cd0d98);
        pfVar2 = param_2 + iVar3 * 3;
        fStack_28 = fStack_a0;
        *(uint *)((int)afStack_24 + (uint)bVar4 * -8) =
             *(uint *)(&stack0xffffff64 + (uint)bVar4 * -8);
        afStack_24[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 1] =
             (float)*(uint *)(&stack0xffffff68 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
        if (pfVar2 == &fStack_28) goto LAB_004e0d9d;
        *pfVar2 = fStack_28;
        pfVar2[1] = afStack_24[0];
        fVar1 = afStack_24[1];
LAB_004e0d9a:
        pfVar2[2] = fVar1;
        goto LAB_004e0d9d;
      }
      break;
    case 3:
      if (*(int *)(*(int *)(param_1 + 0xc2b0) * 4 + param_1 + 0x2298) != 0) {
        FUN_00569130(iStack_18,_DAT_01cd0dc0);
        pfVar2 = param_2 + iVar3 * 3;
        fStack_4c = afStack_60[2];
        *(float *)((int)afStack_48 + (uint)bVar4 * -8) = afStack_60[(uint)bVar4 * 0xfffffffe + 3];
        afStack_48[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 1] =
             afStack_60[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 4];
        if (pfVar2 != &fStack_4c) {
          *pfVar2 = fStack_4c;
          pfVar2[1] = afStack_48[0];
          fVar1 = afStack_48[1];
          goto LAB_004e0d9a;
        }
        goto LAB_004e0d9d;
      }
    }
    iStack_1c = iStack_1c + 1;
    if (3 < iStack_1c) {
      return iVar3;
    }
  } while( true );
}
