// Name: FUN_00438780
// Address: 00438780
// Address Range: [[00438780, 00438877]]
// Convention: unknown
// Signature: void FUN_00438780(int param_1,float *param_2)

#include "nocturne.h"

void FUN_00438780(int param_1,float *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  byte auStack_5c [40];
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  byte auStack_28 [12];
  byte auStack_1c [12];
  
  fStack_34 = *param_2 - *(float *)(param_1 + 0x3ab14);
  fStack_30 = param_2[1] - *(float *)(param_1 + 0x3ab18);
  fStack_2c = param_2[2] - *(float *)(param_1 + 0x3ab1c);
  if ((float *)(param_1 + 0x3ab14) != param_2) {
    *(float *)(param_1 + 0x3ab14) = *param_2;
    *(float *)(param_1 + 0x3ab18) = param_2[1];
    *(float *)(param_1 + 0x3ab1c) = param_2[2];
  }
  FUN_0044d7a0(auStack_5c,&fStack_34);
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x104)) {
    puVar2 = (uint *)(param_1 + 0x3bc);
    do {
      puVar3 = (uint *)(iVar4 * 0x11c + param_1 + 0x398);
      puVar1 = (uint *)FUN_0044daa0(auStack_5c,auStack_28,puVar3);
      if (puVar3 != puVar1) {
        *puVar3 = *puVar1;
        puVar3[1] = puVar1[1];
        puVar3[2] = puVar1[2];
      }
      puVar1 = (uint *)FUN_0044daa0(auStack_5c,auStack_1c,iVar4 * 0x11c + param_1 + 0x398);
      if (puVar2 != puVar1) {
        *puVar2 = *puVar1;
        puVar2[1] = puVar1[1];
        puVar2[2] = puVar1[2];
      }
      iVar4 = iVar4 + 1;
      puVar2 = puVar2 + 0x47;
    } while (iVar4 < *(int *)(param_1 + 0x104));
  }
  return;
}
