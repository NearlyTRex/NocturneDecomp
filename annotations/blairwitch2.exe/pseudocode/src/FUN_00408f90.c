// Name: FUN_00408f90
// Address: 00408f90
// Address Range: [[00408f90, 004090ec]]
// Convention: unknown
// Signature: undefined4 FUN_00408f90(int param_1,float *param_2,float *param_3,float *param_4)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

uint FUN_00408f90(int param_1,float *param_2,float *param_3,float *param_4)

{
  int iVar1;
  byte bVar2;
  float afStackY_1054 [1001];
  uint *puVar3;
  float *pfVar4;
  float *pfVar5;
  byte *puVar6;
  uint local_94;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  byte auStack_54 [12];
  float fStack_48;
  float afStack_44 [4];
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  bVar2 = 0;
  FUN_00537fa0(&stack0xffffff6c);
  local_94 = 0;
  iVar1 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x44))(param_1,&stack0xffffff6c);
  if (iVar1 == 2) {
    puVar6 = auStack_54;
    pfVar5 = &fStack_48;
    afStack_44[2] = *param_3 - *param_2;
    afStack_44[3] = param_3[1] - param_2[1];
    puVar3 = &stack0xffffff6c;
    fStack_34 = param_3[2] - param_2[2];
    fStack_48 = *param_3 - *param_2;
    afStack_44[(uint)bVar2 * -2] = afStack_44[(uint)bVar2 * -2 + 3];
    pfVar4 = param_2;
    afStack_44[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
         afStack_44[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4];
    fStack_18 = (float)FUN_00408290(puVar3,pfVar4,pfVar5,puVar6);
    if ((0.0 <= fStack_18) && (fStack_18 <= 1.0)) {
      if (param_4 != (float *)0x0) {
        fStack_60 = fStack_48 * fStack_18;
        fStack_5c = afStack_44[0] * fStack_18;
        fStack_58 = afStack_44[1] * fStack_18;
        fStack_30 = fStack_48 * fStack_18;
        afStack_44[(uint)bVar2 * -2 + 6] = afStack_44[(uint)bVar2 * -2 + -6];
        afStack_44[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 7] =
             *(float *)(auStack_54 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + -4);
        fStack_6c = *param_2 + fStack_30;
        fStack_68 = param_2[1] + fStack_2c;
        fStack_64 = param_2[2] + fStack_28;
        fStack_24 = *param_2 + fStack_30;
        afStack_44[(uint)bVar2 * -2 + 9] = (&stack0xffffff98)[(uint)bVar2 * 0xfffffffe];
        afStack_44[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 10] =
             afStack_44[(uint)bVar2 * -2 + (uint)bVar2 * -2 + -8];
        if (afStack_44 + 8 != param_4) {
          *param_4 = fStack_24;
          param_4[1] = fStack_20;
          param_4[2] = fStack_1c;
        }
      }
      return 1;
    }
  }
  return 0;
}
