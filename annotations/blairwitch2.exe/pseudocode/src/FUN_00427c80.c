// Name: FUN_00427c80
// Address: 00427c80
// Address Range: [[00427c80, 00427faf]]
// Convention: unknown
// Signature: undefined4 FUN_00427c80(int param_1,float *param_2,float *param_3,int param_4,float *param_5)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00427c80(int param_1,float *param_2,float *param_3,int param_4,float *param_5)

{
  float fVar1;
  int iVar2;
  byte bVar3;
  float10 fVar4;
  float afStackY_10d8 [1011];
  float *pfVar5;
  byte *puVar6;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  uint uStack_9c;
  float fStack_90;
  float afStack_8c [5];
  float fStack_78;
  byte auStack_6c [12];
  float fStack_60;
  float afStack_5c [4];
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float afStack_3c [3];
  float afStack_30 [3];
  int iStack_24;
  int iStack_1c;
  float fStack_18;
  
  bVar3 = 0;
  if (*(int *)(param_1 + 0x281c) != 0) {
    return 0;
  }
  FUN_00408de0(param_1,param_2);
  fStack_c0 = fStack_78;
  (&stack0xffffff44)[(uint)bVar3 * 0xfffffffe] = afStack_5c[(uint)bVar3 * -2 + -6];
  *(float *)((int)&stack0xffffff48 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       afStack_5c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + -5];
  FUN_00408de0(param_1,param_3);
  puVar6 = auStack_6c;
  pfVar5 = &stack0xffffff58;
  fStack_a8 = afStack_8c[2];
  (&stack0xffffff5c)[(uint)bVar3 * 0xfffffffe] = afStack_8c[(uint)bVar3 * 0xfffffffe + 3];
  *(float *)((int)&stack0xffffff60 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       afStack_5c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + -8];
  iVar2 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0xb8))(param_1,&stack0xffffff40,pfVar5,puVar6);
  if (iVar2 != 0) {
    if (param_5 != (float *)0x0) {
      FUN_00408d70(param_1,auStack_6c);
      afStack_5c[2] = fStack_60;
      afStack_5c[(uint)bVar3 * -2 + 3] = afStack_5c[(uint)bVar3 * -2];
      afStack_5c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4] =
           afStack_5c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
      if (afStack_5c + 2 != param_5) {
        *param_5 = afStack_5c[2];
        param_5[1] = afStack_5c[3];
        param_5[2] = fStack_4c;
      }
    }
    if (0.0 < *(float *)(param_4 + 4)) {
      fVar4 = (float10)*(float *)(param_4 + 4) * (float10)_DAT_005ccdde;
      FUN_005b7ff0();
      iStack_24 = (int)ROUND(fVar4);
      iStack_1c = (int)ROUND(fVar4) + 1;
      fStack_b4 = *param_3 - *param_2;
      fStack_b0 = param_3[1] - param_2[1];
      fStack_ac = param_3[2] - param_2[2];
      fStack_d8 = *param_3 - *param_2;
      *(uint *)((int)&stack0xffffff2c + (uint)bVar3 * -8) =
           *(uint *)((int)&stack0xffffff50 + (uint)bVar3 * -8);
      *(uint *)((int)&stack0xffffff30 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           *(uint *)((int)&stack0xffffff54 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      fStack_18 = SQRT(fStack_d0 * fStack_d0 + fStack_d8 * fStack_d8 + fStack_d4 * fStack_d4);
      if (fStack_18 <= 0.0) {
        fStack_d4 = 0.0;
        fStack_d8 = 0.0;
        fStack_d0 = 0.0;
      }
      else {
        fVar1 = 1.0 / fStack_18;
        fStack_d8 = fStack_d8 * fVar1;
        fStack_d4 = fStack_d4 * fVar1;
        fStack_d0 = fStack_d0 * fVar1;
      }
      puVar6 = auStack_6c;
      fStack_ec = fStack_d4 * _DAT_005ccde6;
      fStack_e8 = fStack_d0 * _DAT_005ccde6;
      afStack_30[0] = fStack_d8 * _DAT_005ccde6;
      afStack_5c[(uint)bVar3 * -2 + 0xc] = *(float *)((int)&stack0xffffff14 + (uint)bVar3 * -8);
      afStack_5c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xd] =
           *(float *)((int)&stack0xffffff18 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      FUN_00408d70(param_1,puVar6);
      afStack_3c[0] = (float)uStack_9c;
      afStack_5c[(uint)bVar3 * -2 + 9] = *(float *)(&stack0xffffff68 + (uint)bVar3 * -8);
      afStack_5c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 10] =
           *(float *)(&stack0xffffff6c + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      FUN_004c9850(0x01CB8284,afStack_5c + 8,afStack_5c + 0xb,iStack_1c,
                   *(uint *)(param_1 + 0x280c));
    }
    fStack_cc = fStack_c0 + fStack_a8;
    fStack_c8 = fStack_bc + fStack_a4;
    fStack_c4 = fStack_b8 + fStack_a0;
    fStack_48 = fStack_c0 + fStack_a8;
    afStack_5c[(uint)bVar3 * -2 + 6] = *(float *)((int)&stack0xffffff38 + (uint)bVar3 * -8);
    afStack_5c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 7] =
         *(float *)((int)&stack0xffffff3c + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    fStack_e4 = fStack_48 * _DAT_005ccdea;
    fStack_e0 = fStack_44 * _DAT_005ccdea;
    fStack_dc = fStack_40 * _DAT_005ccdea;
    fStack_90 = fStack_48 * _DAT_005ccdea;
    *(uint *)(auStack_6c + (uint)bVar3 * -8 + -0x20) =
         *(uint *)((int)&stack0xffffff20 + (uint)bVar3 * -8);
    *(uint *)(auStack_6c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + -0x1c) =
         *(uint *)((int)&stack0xffffff24 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    if ((float *)(param_4 + 0x1c) != &fStack_90) {
      *(float *)(param_4 + 0x1c) = fStack_90;
      *(float *)(param_4 + 0x20) = afStack_8c[0];
      *(float *)(param_4 + 0x24) = afStack_8c[1];
    }
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0x110))(param_1,param_4);
    return 1;
  }
  *(uint *)(param_4 + 4) = 0;
  return 0;
}
