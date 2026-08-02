// Name: crt_unknown.c_FUN_0056f573
// Address: 0056f573
// Address Range: [[0056f573, 0056f68f]]
// Convention: unknown
// Signature: undefined8 crt_unknown_c_FUN_0056f573(int param_1,int *param_2,int param_3)

#include "nocturne.h"

ulonglong FUN_0056f573(int param_1,int *param_2,int param_3)

{
  double *pdVar1;
  int iVar2;
  byte bVar3;
  int extraout_EDX;
  int iVar4;
  ushort in_DS;
  int aiStack_50 [4];
  uint uStack_40;
  int iStack_3c;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  float10 fStack_24;
  uint uStack_18;
  uint uStack_14;
  
  aiStack_50[3] = (int)*(byte *)(param_3 + 0x15);
  bVar3 = *(byte *)(param_3 + 0x15) & 0x5f;
  aiStack_50[0] = *(int *)(param_3 + 8);
  if (bVar3 == 0x47) {
    if (aiStack_50[0] == 0) {
      aiStack_50[0] = 1;
    }
    aiStack_50[2] = 4;
    aiStack_50[3] = aiStack_50[3] - 2;
    aiStack_50[1] = 1;
  }
  else if (bVar3 == 0x45) {
    aiStack_50[2] = 1;
    aiStack_50[1] = 1;
  }
  else {
    aiStack_50[2] = 2;
    aiStack_50[1] = 0;
  }
  if ((*(byte *)(param_3 + 0x1e) & 1) != 0) {
    aiStack_50[2] = aiStack_50[2] | 0x10;
  }
  pdVar1 = (double *)*param_2;
  *param_2 = (int)(pdVar1 + 1);
  uStack_18 = *(uint *)pdVar1;
  uStack_14 = *(uint *)((int)pdVar1 + 4);
  fStack_24 = (float10)*pdVar1;
  if (aiStack_50[0] == -1) {
    aiStack_50[0] = 6;
  }
  uStack_40 = 0;
  FUN_0056a388(&fStack_24,aiStack_50,param_1 + 1);
  *(uint *)(param_3 + 0x28) = uStack_34;
  *(uint *)(param_3 + 0x2c) = uStack_30;
  *(uint *)(param_3 + 0x30) = uStack_2c;
  *(uint *)(param_3 + 0x34) = uStack_28;
  if (iStack_3c < 0) {
    iVar2 = *(int *)(param_3 + 0x20);
    iVar4 = iVar2 + 1;
    *(int *)(param_3 + 0x20) = iVar4;
    *(byte *)(param_1 + iVar2) = 0x2d;
  }
  else if ((*(byte *)(param_3 + 0x1e) & 4) == 0) {
    iVar4 = extraout_EDX;
    if ((*(byte *)(param_3 + 0x1e) & 2) != 0) {
      iVar2 = *(int *)(param_3 + 0x20);
      iVar4 = iVar2 + 1;
      *(int *)(param_3 + 0x20) = iVar4;
      *(byte *)(param_1 + iVar2) = 0x20;
    }
  }
  else {
    iVar2 = *(int *)(param_3 + 0x20);
    iVar4 = iVar2 + 1;
    *(int *)(param_3 + 0x20) = iVar4;
    *(byte *)(param_1 + iVar2) = 0x2b;
  }
  return CONCAT44(CONCAT22((short)((uint)iVar4 >> 0x10),in_DS),param_1);
}
