// Name: FUN_0044ce80
// Address: 0044ce80
// Address Range: [[0044ce80, 0044d050]]
// Convention: unknown
// Signature: void FUN_0044ce80(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044ce80(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  byte local_64 [4];
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  int local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  float local_3c;
  float local_38;
  float local_34;
  int local_30;
  int local_2c;
  int local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  FUN_00460a00(0x01B4D738,(float *)(param_1 + 0x24));
  FUN_00460d30(DAT_005ae704,&local_18);
  local_24 = local_18 - *(float *)(param_1 + 0x24);
  local_20 = local_14 - *(float *)(param_1 + 0x28);
  local_1c = local_10 - *(float *)(param_1 + 0x2c);
  if (&local_18 != &local_24) {
    local_18 = local_24;
    local_14 = local_20;
    local_10 = local_1c;
  }
  if (*(float *)(param_1 + 0x18) <= local_10 * local_10 + local_18 * local_18 + local_14 * local_14)
  {
    local_c = *(float *)(param_1 + 0x30) * (float)_DAT_0057c389;
    iVar3 = 0;
    iVar2 = 0;
    do {
      local_3c = (float)*(int *)((int)&DAT_005ad594 + iVar2) * local_c;
      local_38 = (float)*(int *)((int)&DAT_005ad598 + iVar2) * local_c;
      local_34 = (float)*(int *)((int)&DAT_005ad59c + iVar2) * local_c;
      local_30 = (int)ROUND(local_3c * _DAT_0059bff0);
      local_2c = (int)ROUND(local_38 * _DAT_0059bff0);
      local_28 = (int)ROUND(local_34 * _DAT_0059bff0);
      iVar2 = iVar2 + 0xc;
      FUN_0053075c(*0x01B4D738 + iVar3,&local_30);
      iVar3 = iVar3 + 0x30;
    } while (iVar2 != 0x2e8);
    iVar2 = 0;
    do {
      piVar1 = 0x01B4D738;
      local_60 = *(uint *)((int)&DAT_005ad87c + iVar2);
      local_5c = *(uint *)((int)&DAT_005ad880 + iVar2);
      local_58 = *(uint *)((int)&DAT_005ad884 + iVar2);
      local_54 = *(uint *)((int)&DAT_005ad888 + iVar2);
      local_4c = *(uint *)((int)&DAT_005ad890 + iVar2);
      fVar4 = (float10)*(int *)((int)&DAT_005ad88c + iVar2) * (float10)*(float *)(param_1 + 0x30);
      local_48 = *(uint *)((int)&DAT_005ad894 + iVar2);
      local_44 = *(uint *)((int)&DAT_005ad898 + iVar2);
      local_40 = *(uint *)((int)&DAT_005ad89c + iVar2);
      iVar2 = iVar2 + 0x24;
      FUN_00563a30(local_64,&LAB_00444180);
      local_50 = (int)ROUND(fVar4);
      FUN_00460e80(piVar1);
    } while (iVar2 != 0xbd0);
    return;
  }
  FUN_00444140();
  return;
}
