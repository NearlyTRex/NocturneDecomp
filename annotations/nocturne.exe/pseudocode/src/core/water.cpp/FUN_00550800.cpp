// Name: FUN_00550800
// Address: 00550800
// Address Range: [[00550800, 0055085f] [00550861, 00550cae]]
// Convention: unknown
// Signature: undefined8 FUN_00550800(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_00550800(int param_1)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  ulonglong uVar10;
  float local_8c;
  float local_88;
  float local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  int local_38;
  int local_34;
  int local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar6 = 0;
  iVar7 = 0;
  iVar8 = 0;
  do {
    iVar4 = iVar8 + 1;
    iVar1 = iVar7 + iVar6;
    iVar6 = iVar6 + 0x20;
    iVar7 = iVar7 + 0x400;
    *(byte *)(iVar8 + 0x2dd9238) = *(byte *)(iVar1 + 0x1bf771f + iVar4);
    iVar8 = iVar4;
  } while (iVar4 < 0x20);
  *(uint *)(param_1 + 0xc) = 0;
  if ((*(uint *)(param_1 + 4) & 0x7fffffff) != 0) {
    FUN_0046b9c0(&DAT_01fba938,&local_44);
    FUN_0046b9f0(&DAT_01fba938,&local_8c);
    fVar2 = (float)_DAT_0059758f;
    _DAT_02dd1220 = (local_44 + local_8c) * fVar2;
    _DAT_02dd1228 = (local_3c + local_84) * fVar2;
    local_28 = (local_8c - local_44) * fVar2 * (float)_DAT_00597597;
    _DAT_02dd1224 = 0.0;
    local_20 = 0.0;
    if (0.0 < local_28) {
      local_20 = local_28;
    }
    local_24 = local_88 - local_40;
    if (local_20 < local_24) {
      local_20 = local_24;
    }
    local_2c = (local_84 - local_3c) * (float)_DAT_0059758f * (float)_DAT_00597597;
    if (local_20 < local_2c) {
      local_20 = local_2c;
    }
    fVar9 = (float10)1 + (float10)local_20 / (float10)*(float *)(param_1 + 8);
    FUN_00563a30();
    local_1c = (int)ROUND(fVar9);
    _DAT_02dd1234 = 0;
    iVar8 = -local_1c;
    local_18 = local_1c;
    if (SBORROW4(iVar8,local_1c) != local_1c * -2 < 0) {
      do {
        iVar6 = -local_18;
        if (iVar6 < local_18) {
          do {
            local_50 = (float)iVar8 * *(float *)(param_1 + 8) + _DAT_02dd1220;
            local_4c = *(float *)(param_1 + 4) + _DAT_02dd1224;
            local_48 = (float)iVar6 * *(float *)(param_1 + 8) + _DAT_02dd1228;
            local_14 = iVar6;
            FUN_00460a00(DAT_005ae704,&local_50);
            local_74 = (int)ROUND(local_50 * _DAT_005a3e8c);
            local_70 = (int)ROUND(local_4c * _DAT_005a3e8c);
            local_6c = (int)ROUND(local_48 * _DAT_005a3e8c);
            local_50 = 0.0;
            local_4c = 0.0;
            local_48 = 0.0;
            local_5c = (int)ROUND(_DAT_005a3e8c * 0.0);
            local_58 = (int)ROUND(_DAT_005a3e8c * 0.0);
            local_54 = (int)ROUND(_DAT_005a3e8c * 0.0);
            FUN_0053075c(*DAT_005ae704);
            local_50 = *(float *)(param_1 + 8);
            local_80 = (int)ROUND(local_50 * _DAT_005a3e8c);
            local_7c = (int)ROUND(local_4c * _DAT_005a3e8c);
            local_78 = (int)ROUND(local_48 * _DAT_005a3e8c);
            FUN_0053075c(*DAT_005ae704 + 0x30);
            local_48 = *(float *)(param_1 + 8);
            local_38 = (int)ROUND(local_50 * _DAT_005a3e8c);
            local_34 = (int)ROUND(local_4c * _DAT_005a3e8c);
            local_30 = (int)ROUND(local_48 * _DAT_005a3e8c);
            FUN_0053075c(*DAT_005ae704 + 0x60);
            local_50 = 0.0;
            local_68 = (int)ROUND(_DAT_005a3e8c * 0.0);
            local_64 = (int)ROUND(local_4c * _DAT_005a3e8c);
            local_60 = (int)ROUND(local_48 * _DAT_005a3e8c);
            FUN_0053075c();
            uVar3 = DAT_005ae708;
            uVar5 = DAT_005c5024 & DAT_005c5054 & DAT_005c5084 & DAT_005c50b4;
            if (((uVar5 & 0x80000000) == 0) || ((char)uVar5 == '\0')) {
              DAT_005ae708 = 0x10;
              iVar7 = FUN_0045f190();
              if (iVar7 != 0) {
                if (0xfff < _DAT_02dd1234) {
                  _DAT_01cc4800 = "?..\\core\\water.cpp" + 1;
                  _DAT_01cc4804 = 0x136;
                  FUN_004c8440();
                }
                *(int *)(&DAT_02dd1238 + _DAT_02dd1234 * 4) = iVar8;
                *(int *)(&DAT_02dd5238 + _DAT_02dd1234 * 4) = iVar6;
                _DAT_02dd1234 = _DAT_02dd1234 + 1;
              }
            }
            iVar6 = iVar6 + 1;
            DAT_005ae708 = uVar3;
          } while (iVar6 < local_18);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < local_1c);
    }
    iVar8 = _DAT_02dd1234;
    fVar2 = (float)_DAT_02dd1234 * *(float *)(param_1 + 8) * *(float *)(param_1 + 8);
    *(float *)(param_1 + 0xc) = fVar2;
    uVar10 = FUN_0043ac60(PTR_DAT_005ad350,"Vis water tiles : %d, SqFt : %f",iVar8,
                          (double)fVar2);
    return uVar10;
  }
  return CONCAT44(*(uint *)(param_1 + 4),iVar4);
}
