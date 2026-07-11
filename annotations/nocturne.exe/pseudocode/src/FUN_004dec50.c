// Name: FUN_004dec50
// Address: 004dec50
// Address Range: [[004dec50, 004df03f]]
// Convention: unknown
// Signature: void FUN_004dec50(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004dec50(int param_1)

{
  int iVar1;
  uint uVar2;
  int extraout_EDX;
  int iVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  float10 fVar6;
  float local_5c;
  float local_58;
  uint local_54;
  byte local_50 [4];
  float local_4c;
  float local_44;
  float local_40;
  float local_3c;
  double local_38;
  int local_30;
  int local_2c;
  uint local_28;
  int local_24;
  ulonglong *local_20;
  int local_1c;
  float local_18;
  int local_14;
  
  FUN_005288f0();
  FUN_0052ee70();
  FUN_0052eed4();
  FUN_00460700(DAT_005ae704,&DAT_02dd1184);
  FUN_00460c00(DAT_005ae704,0x42e00000);
  FUN_00460780(DAT_005ae704,&DAT_02dd1184);
  local_5c = (*(float *)(param_1 + 4) + (float)_DAT_0058a936) * (float)_DAT_0058a93e;
  local_58 = (float)_DAT_0058a93e * (*(float *)(param_1 + 4) + (float)_DAT_0058a936);
  local_54 = 0x42900000;
  FUN_00460a00(DAT_005ae704,&local_5c);
  iVar3 = 0x01E57284;
  *(uint *)(0x01E57284 + 0x15aa88) = 1;
  *(uint *)(iVar3 + 0x15aa8c) = 0xffff6f78;
  *(uint *)(iVar3 + 0x15aa90) = 0xffff6f78;
  *(uint *)(iVar3 + 0x15aa94) = 37000;
  *(uint *)(iVar3 + 0x15aa98) = 0x280;
  FUN_0050e340(iVar3,0x10000,0x10000,0x10000);
  FUN_00453040(param_1 + 8,0,0,0x205);
  iVar1 = 0x01E57284;
  *(uint *)(0x01E57284 + 0x15aa8c) = 0xffffb7bc;
  *(uint *)(iVar1 + 0x15aa90) = 0xffffb7bc;
  iVar3 = DAT_005bb210;
  *(uint *)(iVar1 + 0x15aa94) = 0x4844;
  *(uint *)(iVar1 + 0x15aa98) = 0x2000;
  if (iVar3 != 0) {
    iVar3 = 0;
    do {
      if (0.0 <= *(float *)(iVar3 + 0x1ccdef0)) {
        FUN_0043b800(*(int *)(iVar3 + 0x1ccdeec) * 0xc + 0x1ccdec8,
                     *(uint *)(iVar3 + 0x1ccdef0),&local_44,local_50);
        local_44 = local_44 + *(float *)(iVar3 + 0x1ccdef8);
        local_40 = local_40 + *(float *)(iVar3 + 0x1ccdefc);
        local_3c = local_3c + *(float *)(iVar3 + 0x1ccdf00);
        local_4c = local_4c + _DAT_0058a956;
        FUN_00460a00(DAT_005ae704,&local_44);
        FUN_00460aa0(DAT_005ae704,local_50,0);
        fVar6 = (float10)*(float *)(iVar3 + 0x1ccdef4);
        FUN_00563a30(0xffffffff);
        local_14 = (int)ROUND(fVar6);
        FUN_00453040(0x1cce1bc,local_14,0);
        thunk_FUN_004cdbc0(DAT_005ae704);
        local_14 = *(int *)(*(int *)(iVar3 + 0x1ccdeec) * 0xc + 0x1ccdec8);
        local_18 = *(float *)(iVar3 + 0x1ccdef0) / (float)local_14;
        local_38 = (double)local_18;
        if ((float)_DAT_0058a95e <= local_18) {
          fVar6 = ((float10)local_18 + (float10)_DAT_0058a936) * (float10)_DAT_0058a946;
        }
        else {
          fVar6 = (float10)_DAT_0058a952 - (float10)local_18 * (float10)_DAT_0058a94e;
        }
        FUN_00563a30();
        local_14 = (int)ROUND(fVar6);
        *(int *)(extraout_EDX + 0x15aa98) = local_14;
      }
      iVar3 = iVar3 + 0x18;
    } while (iVar3 != 0x2d0);
  }
  *(uint *)(0x01E57284 + 0x15aa88) = 0;
  FUN_0040eab0(&DAT_01ccdc50);
  iVar3 = _DAT_01ccdc50;
  local_30 = _DAT_01ccdebc >> 0x10;
  local_24 = _DAT_01ccdec0 >> 0x10;
  local_2c = _DAT_01ccdc50;
  local_28 = 0;
  do {
    local_20 = *(ulonglong **)(&DAT_01bd2fa0 + local_28 * 4);
    uVar2 = 0;
    puVar4 = local_20;
    do {
      uVar5 = paddusb(*puVar4,CONCAT44(*(uint *)
                                        (&DAT_01c00024 +
                                        (uint)(*(byte *)(((uVar2 >> 1) + local_30 & 0xff) * 0x100 +
                                                         ((local_28 >> 1) + local_24 & 0xff) + iVar3
                                                        ) >> 2) * 4),
                                       *(uint *)
                                        (&DAT_01c00024 +
                                        (uint)(*(byte *)(((uVar2 >> 1) + local_30 & 0xff) * 0x100 +
                                                         ((local_28 >> 1) + local_24 & 0xff) + iVar3
                                                        ) >> 2) * 4)));
      uVar5 = paddusb(uVar5,CONCAT44(*(uint *)
                                      (&DAT_01c00024 +
                                      (uint)(*(byte *)(((uVar2 >> 2) + local_30 & 0xff) * 0x100 +
                                                       ((local_28 >> 2) + local_24 & 0xff) + iVar3)
                                            >> 2) * 4),
                                     *(uint *)
                                      (&DAT_01c00024 +
                                      (uint)(*(byte *)(((uVar2 >> 2) + local_30 & 0xff) * 0x100 +
                                                       ((local_28 >> 2) + local_24 & 0xff) + iVar3)
                                            >> 2) * 4)));
      *puVar4 = uVar5;
      puVar4 = puVar4 + 1;
      uVar2 = uVar2 + 2;
    } while (uVar2 < 0x280);
    local_28 = local_28 + 1;
  } while ((int)local_28 < 0x1e0);
  FUN_004083c0(1);
  fVar6 = (float10)_DAT_01ccdec4;
  FUN_00563a30();
  local_1c = (int)ROUND(fVar6);
  if (0x1d < local_1c) {
    local_1c = 0;
  }
  FUN_0040e710(local_1c * 0x14 + 0x1ccdc64,0,0,48000);
  FUN_004083c0(0);
  return;
}
