// Name: FUN_004dba70
// Address: 004dba70
// Address Range: [[004dba70, 004dbcdb]]
// Convention: unknown
// Signature: void FUN_004dba70(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004dba70(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint *unaff_ESI;
  uint *puVar3;
  byte bVar4;
  byte local_d8 [48];
  uint local_a8 [12];
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  
  bVar4 = 0;
  iVar1 = param_2 * 0x44 + param_1;
  iVar2 = *(int *)(iVar1 + 0x24a4);
  if (param_2 == 1) {
    iVar1 = FUN_0040d890(*(uint *)(iVar1 + 0x24ac),_DAT_01bcde7c);
    if (iVar1 == 0) {
      local_78 = 0x3e698e54;
      local_74 = 0xbe0d3d86;
      local_70 = 0xbde5c704;
      if (&local_60 != &local_78) {
        local_58 = 0xbde5c704;
        local_5c = 0xbe0d3d86;
        local_60 = 0x3e698e54;
      }
      local_54 = 0xbe8ed8b2;
      local_4c = 0x3fc66a55;
      local_50 = 0x3fcad9be;
      if (&local_30 != &local_54) {
        local_2c = 0x3fcad9be;
        local_28 = 0x3fc66a55;
        local_30 = 0xbe8ed8b2;
      }
    }
    else {
      local_14 = 0xbdcccccd;
      local_10 = 0x3e9e353f;
      local_18 = 0x3ec18937;
      if (&local_60 != &local_18) {
        local_5c = 0xbdcccccd;
        local_58 = 0x3e9e353f;
        local_60 = 0x3ec18937;
      }
      local_1c = 0x3fbf3b64;
      local_20 = 0x3fcb4396;
      local_24 = 0xbe810625;
      if (&local_30 != &local_24) {
        local_2c = 0x3fcb4396;
        local_30 = 0xbe810625;
        local_28 = 0x3fbf3b64;
      }
    }
  }
  else {
    local_38 = 0xbe0f5c29;
    local_34 = 0xbe333333;
    local_3c = 0xbe7df3b6;
    if (&local_60 != &local_3c) {
      local_5c = 0xbe0f5c29;
      local_58 = 0xbe333333;
      local_60 = 0xbe7df3b6;
    }
    local_40 = 0xbfdac083;
    local_44 = 0xbfbbe76d;
    local_48 = 0xbee978d5;
    if (&local_30 != &local_48) {
      local_2c = 0xbfbbe76d;
      local_30 = 0xbee978d5;
      local_28 = 0xbfdac083;
    }
  }
  FUN_0055afb0(local_d8,&local_60,&local_30);
  FUN_0055aa00(local_d8,iVar2 * 0x30 + param_1 + 0xfd0);
  puVar3 = local_a8;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *unaff_ESI = *puVar3;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar4 * -2 + 1;
  }
  return;
}
