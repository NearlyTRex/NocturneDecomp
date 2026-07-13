// Name: FUN_0045b020
// Address: 0045b020
// Address Range: [[0045b020, 0045b30e]]
// Convention: unknown
// Signature: void FUN_0045b020(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045b020(int param_1,float param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  byte *puVar5;
  int iVar6;
  uint *puVar7;
  byte local_88 [32];
  float local_68;
  float local_64;
  float local_60;
  byte local_5c [12];
  byte local_50 [12];
  float local_44;
  float local_40;
  float local_3c;
  byte *local_38;
  byte *local_34;
  float *local_30;
  float *local_2c;
  float *local_28;
  float *local_24;
  byte *local_20;
  float *local_1c;
  float local_18;
  
  fVar4 = *(float *)(param_1 + 0xbdb8) - param_2;
  *(float *)(param_1 + 0xbdb8) = fVar4;
  if (fVar4 < 0.0) {
    *(uint *)(param_1 + 0xbdb8) = 0;
  }
  local_24 = (float *)&DAT_01fb8610;
  local_28 = (float *)&DAT_01fb8614;
  local_30 = &local_64;
  local_2c = &local_60;
  local_34 = &DAT_01b4d280;
  local_38 = &DAT_01b4d478;
  do {
    local_20 = local_34;
    if (param_1 == *(int *)(local_34 + 0x50)) {
      iVar6 = FUN_00526c50();
      puVar5 = local_34;
      if (iVar6 == 0) {
        *(uint *)(local_34 + 0x50) = 0;
      }
      else {
        pfVar1 = (float *)(local_34 + 0x44);
        pfVar2 = (float *)(local_34 + 0x38);
        pfVar3 = (float *)(local_34 + 0x2c);
        local_1c = (float *)(local_34 + 0x20);
        *(float *)(local_34 + 0x1c) = *(float *)(local_34 + 0x1c) + param_2;
        while (1.0 < *(float *)(local_20 + 0x1c)) {
          *(float *)(local_20 + 0x1c) = *(float *)(local_20 + 0x1c) + ram0x0057d882;
          if (pfVar3 != local_1c) {
            *local_1c = *pfVar3;
            local_1c[1] = *(float *)(puVar5 + 0x30);
            local_1c[2] = *(float *)(puVar5 + 0x34);
          }
          if (pfVar3 != pfVar2) {
            *pfVar3 = *pfVar2;
            *(uint *)(puVar5 + 0x30) = *(uint *)(puVar5 + 0x3c);
            *(uint *)(puVar5 + 0x34) = *(uint *)(puVar5 + 0x40);
          }
          if (pfVar2 != pfVar1) {
            *pfVar2 = *pfVar1;
            *(uint *)(puVar5 + 0x3c) = *(uint *)(puVar5 + 0x48);
            *(uint *)(puVar5 + 0x40) = *(uint *)(puVar5 + 0x4c);
          }
          local_68 = _DAT_01fb860c;
          local_64 = *local_24;
          local_60 = *local_28;
          local_18 = (float)FUN_0040dda0(0xc0a00000);
          local_68 = local_18 + local_68;
          local_18 = (float)FUN_0040dda0(0xc0000000);
          local_64 = local_18 + local_64;
          local_18 = (float)FUN_0040dda0(0xc0a00000);
          local_44 = local_68;
          local_60 = local_18 + local_60;
          local_40 = *local_30;
          local_3c = *local_2c;
          if (pfVar1 != &local_44) {
            *pfVar1 = local_68;
            *(float *)(puVar5 + 0x48) = local_40;
            *(float *)(puVar5 + 0x4c) = local_3c;
          }
        }
        FUN_00533ce0();
        puVar7 = (uint *)
                 FUN_00533f10(local_88,local_50,local_1c,pfVar3,local_20 + 0x38,local_20 + 0x44);
        if ((uint *)(local_20 + 4) != puVar7) {
          *(uint *)(local_20 + 4) = *puVar7;
          *(uint *)(local_20 + 8) = puVar7[1];
          *(uint *)(local_20 + 0xc) = puVar7[2];
        }
        FUN_0043ac60(PTR_DAT_005ad350,"@%5.2f %5.2f %5.2f\n" + 1,
                     (double)*(float *)(local_20 + 4),(double)*(float *)(local_20 + 8),
                     (double)*(float *)(local_20 + 0xc));
        puVar7 = (uint *)
                 FUN_005340d0(local_88,local_5c,local_20 + 0x20,local_20 + 0x2c,local_20 + 0x38);
        if ((uint *)(local_20 + 0x10) != puVar7) {
          *(uint *)(local_20 + 0x10) = *puVar7;
          *(uint *)(local_20 + 0x14) = puVar7[1];
          *(uint *)(local_20 + 0x18) = puVar7[2];
        }
      }
    }
    local_34 = local_34 + 0x54;
  } while (local_34 != local_38);
  return;
}
