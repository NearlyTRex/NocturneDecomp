// Name: FUN_00425480
// Address: 00425480
// Address Range: [[00425480, 0042564e]]
// Convention: unknown
// Signature: int FUN_00425480(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int FUN_00425480(int param_1)

{
  int iVar1;
  float *pfVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint auStackY_1028 [1000];
  uint auStack_58 [6];
  float fStack_40;
  float afStack_3c [4];
  float fStack_2c;
  float fStack_28;
  uint uStack_24;
  uint uStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  float *pfStack_8;
  
  bVar5 = 0;
  if (*(int *)(param_1 + 0x24fc) == 0) {
    iVar1 = FUN_00483e60(DAT_00612560);
    if (iVar1 == 0) {
      FUN_004087b0(param_1);
      (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
      puVar3 = (uint *)&stack0xffffff90;
      puVar4 = auStack_58;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
      }
      iStack_1c = FUN_004207b0(auStack_58);
      if (iStack_1c != 0) {
        iVar1 = 0;
        if (0 < *(int *)(param_1 + 0xc26c)) {
          iStack_18 = param_1 + 0x12674;
          iStack_14 = param_1 + 0xc270;
          pfStack_8 = (float *)(param_1 + 0x20);
          iStack_c = param_1 + 0xc284;
          pfVar2 = (float *)(param_1 + 0xc278);
          do {
            iStack_10 = iStack_14 + iVar1 * 0x40;
            FUN_00483850(DAT_00612560,iStack_c,pfVar2);
            afStack_3c[2] = *pfStack_8 + *pfVar2;
            afStack_3c[3] = pfStack_8[1] + pfVar2[1];
            fStack_2c = pfStack_8[2] + pfVar2[2];
            fStack_40 = *pfStack_8 + *pfVar2;
            *(float *)((int)afStack_3c + (uint)bVar5 * 0xfffffff8) =
                 afStack_3c[(uint)bVar5 * 0xfffffffe + 3];
            afStack_3c[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 1] =
                 afStack_3c[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 4];
            if (&fStack_28 != &fStack_40) {
              fStack_28 = fStack_40;
              uStack_24 = afStack_3c[0];
              uStack_20 = afStack_3c[1];
            }
            FUN_005557a0(0x01E82168,&fStack_28);
            FUN_00483de0(DAT_00612560,0xffff);
            FUN_004688a0(*(int *)(iStack_10 + 4) * 0x17c + iStack_18,0,0x2e7);
            thunk_FUN_005084b0(DAT_00612560);
            iStack_c = iStack_c + 0x40;
            iVar1 = iVar1 + 1;
            pfVar2 = pfVar2 + 0x10;
          } while (iVar1 < *(int *)(param_1 + 0xc26c));
        }
        FUN_005557a0(0x01E82168,0);
      }
      FUN_004087f0(param_1);
      return iStack_1c;
    }
  }
  return 0;
}
