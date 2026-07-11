// Name: FUN_0045ab40
// Address: 0045ab40
// Address Range: [[0045ab40, 0045b011]]
// Convention: unknown
// Signature: void FUN_0045ab40(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045ab40(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  byte local_174 [200];
  byte local_ac [32];
  byte local_8c [12];
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  byte local_50 [12];
  byte local_44 [12];
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  byte local_20 [12];
  float local_14;
  
  local_14 = (float)FUN_0040dda0(0x3f800000,0x40e00000);
  *(float *)(param_1 + 0xbdb8) = local_14;
  iVar1 = FUN_00528490();
  if (iVar1 != 0) {
    puVar5 = (uint *)&DAT_01b4d280;
    iVar1 = 0;
    do {
      iVar2 = FUN_00526c50(*puVar5);
      uVar3 = _DAT_01b4d260;
      if (iVar2 == 0) {
        puVar5[7] = 0;
        uVar3 = FUN_0051d380(param_1 + 0x150,local_44,uVar3);
        puVar4 = (uint *)FUN_0040a240(param_1,local_50,uVar3);
        if (puVar5 + 0xb != puVar4) {
          puVar5[0xb] = *puVar4;
          puVar5[0xc] = puVar4[1];
          puVar5[0xd] = puVar4[2];
        }
        local_2c = (float)puVar5[0xb];
        local_28 = (float)puVar5[0xc];
        local_24 = (float)puVar5[0xd];
        local_14 = (float)FUN_0040dda0(0xc0a00000,0x40a00000);
        local_2c = local_14 + local_2c;
        local_14 = (float)FUN_0040dda0(0xc0000000,0x40000000);
        local_28 = local_14 + local_28;
        local_14 = (float)FUN_0040dda0(0xc0a00000,0x40a00000);
        local_6c = local_14 + local_24;
        local_74 = local_2c;
        local_70 = local_28;
        if ((float *)(puVar5 + 8) != &local_74) {
          puVar5[8] = local_2c;
          puVar5[9] = local_28;
          puVar5[10] = local_6c;
        }
        local_80 = (float)puVar5[0xb];
        local_7c = (float)puVar5[0xc];
        local_78 = (float)puVar5[0xd];
        local_24 = local_6c;
        local_14 = (float)FUN_0040dda0(0xc0a00000,0x40a00000);
        local_80 = local_14 + local_80;
        local_14 = (float)FUN_0040dda0(0xc0000000,0x40000000);
        local_7c = local_14 + local_7c;
        local_14 = (float)FUN_0040dda0(0xc0a00000,0x40a00000);
        local_78 = local_14 + local_78;
        local_5c = local_80;
        local_58 = local_7c;
        if ((float *)(puVar5 + 0xe) != &local_5c) {
          puVar5[0xe] = local_80;
          puVar5[0xf] = local_7c;
          puVar5[0x10] = local_78;
        }
        local_68 = _DAT_01fb860c;
        local_64 = _DAT_01fb8610;
        local_60 = _DAT_01fb8614;
        local_54 = local_78;
        local_14 = (float)FUN_0040dda0(0xc0a00000,0x40a00000);
        local_68 = local_14 + local_68;
        local_14 = (float)FUN_0040dda0(0xc0000000,0x40000000);
        local_64 = local_14 + local_64;
        local_14 = (float)FUN_0040dda0(0xc0a00000,0x40a00000);
        local_60 = local_14 + local_60;
        local_38 = local_68;
        local_34 = local_64;
        if ((float *)(puVar5 + 0x11) != &local_38) {
          puVar5[0x11] = local_68;
          puVar5[0x12] = local_64;
          puVar5[0x13] = local_60;
        }
        local_30 = local_60;
        FUN_00533ce0(local_ac,puVar5[7],0);
        puVar4 = (uint *)
                 FUN_00533f10(local_ac,local_8c,puVar5 + 8,puVar5 + 0xb,puVar5 + 0xe,puVar5 + 0x11);
        if (puVar5 + 1 != puVar4) {
          puVar5[1] = *puVar4;
          puVar5[2] = puVar4[1];
          puVar5[3] = puVar4[2];
        }
        puVar4 = (uint *)
                 FUN_005340d0(local_ac,local_20,puVar5 + 8,puVar5 + 0xb,puVar5 + 0xe,puVar5 + 0x11);
        if (puVar5 + 4 != puVar4) {
          puVar5[4] = *puVar4;
          puVar5[5] = puVar4[1];
          puVar5[6] = puVar4[2];
        }
        FUN_00526340();
        FUN_00525fc0(puVar5 + 1);
        FUN_00526090(puVar5 + 4);
        FUN_005260f0(param_3);
        FUN_0052d030(0x02DC9450,local_174,param_2);
        uVar3 = FUN_005265a0(local_174);
        *puVar5 = uVar3;
        FUN_005263c0();
        puVar5[0x14] = param_1;
        return;
      }
      iVar1 = iVar1 + 1;
      puVar5 = puVar5 + 0x15;
    } while (iVar1 < 6);
  }
  return;
}
