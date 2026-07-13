// Name: FUN_004bc7e0
// Address: 004bc7e0
// Address Range: [[004bc7e0, 004bc9af]]
// Convention: unknown
// Signature: void FUN_004bc7e0(int param_1,int param_2)

#include "nocturne.h"

void FUN_004bc7e0(int param_1,int param_2)

{
  int iVar1;
  uint *unaff_ESI;
  uint *puVar2;
  byte bVar3;
  uint local_c0 [12];
  byte local_90 [48];
  uint local_60;
  uint local_5c;
  uint local_58;
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
  
  bVar3 = 0;
  iVar1 = *(int *)(param_2 * 0x44 + param_1 + 0x24a4);
  if (param_2 == 1) {
    local_5c = 0xbf0147ae;
    local_58 = 0x3ec72b02;
    local_60 = 0x3e52f1aa;
    if (&local_18 != &local_60) {
      local_18 = 0x3e52f1aa;
      local_14 = 0xbf0147ae;
      local_10 = 0x3ec72b02;
    }
    local_30 = 0xbf2ed917;
    local_28 = 0x3f7e353f;
    local_2c = 0x3ee0c49c;
    if (&local_3c != &local_30) {
      local_38 = 0x3ee0c49c;
      local_34 = 0x3f7e353f;
      local_3c = 0xbf2ed917;
    }
  }
  else {
    local_20 = 0xbf07ae14;
    local_1c = 0x3ed1eb85;
    local_24 = 0xbed58106;
    if (&local_18 != &local_24) {
      local_14 = 0xbf07ae14;
      local_10 = 0x3ed1eb85;
      local_18 = 0xbed58106;
    }
    local_40 = 0x3f7e353f;
    local_44 = 0x3ee0c49c;
    local_48 = 0xbf2ed917;
    if (&local_3c != &local_48) {
      local_34 = 0x3f7e353f;
      local_3c = 0xbf2ed917;
      local_38 = 0x3ee0c49c;
    }
  }
  FUN_0055afb0(local_90,&local_18,&local_3c);
  FUN_0055aa00(local_90,iVar1 * 0x30 + param_1 + 0xfd0);
  puVar2 = local_c0;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar2;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar3 * -2 + 1;
  }
  return;
}
