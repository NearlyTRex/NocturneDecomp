// Name: FUN_0041b590
// Address: 0041b590
// Address Range: [[0041b590, 0041b601] [0041b68f, 0041b748]]
// Convention: unknown
// Signature: void FUN_0041b590(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041b590(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *unaff_ESI;
  byte bVar4;
  float10 fVar5;
  float afStackY_1034 [1011];
  float fStack_48;
  float fStack_44;
  double dStack_40;
  int iStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar4 = 0;
  fVar1 = *param_1;
  fVar2 = param_1[2];
  if (0.0 < param_1[1]) {
    fStack_30 = param_1[1] * (float)_DAT_005d4589;
    fVar3 = (float)_DAT_005d4591;
    dStack_40 = (double)FUN_005c0880((double)(fVar1 * fVar3));
    fVar5 = (float10)dStack_40;
    FUN_005c03a0();
    iStack_34 = (int)ROUND(fVar5);
    iStack_18 = iStack_34;
    fStack_28 = (1.0 - fStack_30) * fVar2;
    fVar1 = fVar1 * fVar3 - (float)iStack_34;
    fStack_2c = (1.0 - fStack_30 * fVar1) * fVar2;
    fStack_20 = (1.0 - (1.0 - fVar1) * fStack_30) * fVar2;
    switch((iStack_34 + 600) % 6) {
    case 0:
      fStack_1c = fVar2;
      fStack_14 = fStack_20;
      break;
    case 1:
      fStack_1c = fStack_2c;
      fStack_14 = fVar2;
      break;
    case 2:
      fStack_1c = fStack_28;
      fStack_14 = fVar2;
      fStack_28 = fStack_20;
      break;
    case 3:
      fStack_1c = fStack_28;
      fStack_14 = fStack_2c;
      fStack_28 = fVar2;
      break;
    case 4:
      fStack_1c = fStack_20;
      fStack_14 = fStack_28;
      fStack_28 = fVar2;
      break;
    case 5:
      fStack_1c = fVar2;
      fStack_14 = fStack_28;
      fStack_28 = fStack_2c;
      break;
    default:
      goto LAB_0041b5d9;
    }
  }
  else {
    fStack_14 = fVar2;
    fStack_1c = fVar2;
    fStack_28 = fVar2;
  }
  fStack_24 = fStack_28;
LAB_0041b5d9:
  fStack_48 = fStack_14;
  fStack_44 = fStack_24;
  *unaff_ESI = fStack_1c;
  unaff_ESI[(uint)bVar4 * -2 + 1] = *(float *)((int)&stack0xffffffb8 + (uint)bVar4 * -8);
  (unaff_ESI + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1] =
       *(float *)((int)&stack0xffffffbc + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  return;
}
