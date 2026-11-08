// Name: FUN_004215f0
// Address: 004215f0
// Address Range: [[004215f0, 004217be]]
// Convention: unknown
// Signature: int FUN_004215f0(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int FUN_004215f0(int param_1)

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
    iVar1 = FUN_0046d540(DAT_005f2afc);
    if (iVar1 == 0) {
      FUN_004087f0(param_1);
      (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
      puVar3 = (uint *)&stack0xffffff90;
      puVar4 = auStack_58;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
      }
      iStack_1c = FUN_0041daf0(auStack_58);
      if (iStack_1c != 0) {
        iVar1 = 0;
        if (0 < *(int *)(param_1 + 0xd058)) {
          iStack_18 = param_1 + 0x13460;
          iStack_14 = param_1 + 0xd05c;
          pfStack_8 = (float *)(param_1 + 0x20);
          iStack_c = param_1 + 0xd070;
          pfVar2 = (float *)(param_1 + 0xd064);
          do {
            iStack_10 = iStack_14 + iVar1 * 0x40;
            FUN_0046cf30(DAT_005f2afc,iStack_c,pfVar2);
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
            FUN_0053b130(0x01ED78C8,&fStack_28);
            FUN_0046d4c0(DAT_005f2afc,0xffff);
            FUN_00462540(*(int *)(iStack_10 + 4) * 0x17c + iStack_18,0,0x2e7);
            thunk_FUN_004e5ef0(DAT_005f2afc);
            iStack_c = iStack_c + 0x40;
            iVar1 = iVar1 + 1;
            pfVar2 = pfVar2 + 0x10;
          } while (iVar1 < *(int *)(param_1 + 0xd058));
        }
        FUN_0053b130(0x01ED78C8,0);
      }
      FUN_00408830(param_1);
      return iStack_1c;
    }
  }
  return 0;
}
