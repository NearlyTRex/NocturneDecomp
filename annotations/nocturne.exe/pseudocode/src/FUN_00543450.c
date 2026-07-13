// Name: FUN_00543450
// Address: 00543450
// Address Range: [[00543450, 005435e2]]
// Convention: unknown
// Signature: void FUN_00543450(int param_1,int param_2)

#include "nocturne.h"

void FUN_00543450(int param_1,int param_2)

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
  if (param_2 == 0) {
    local_5c = 0xbde353f8;
    local_58 = 0xbe322d0e;
    local_60 = 0x3f228f5c;
    if (&local_18 != &local_60) {
      local_18 = 0x3f228f5c;
      local_14 = 0xbde353f8;
      local_10 = 0xbe322d0e;
    }
    local_28 = 0;
    local_2c = 0;
    local_30 = 0;
    if (&local_3c == &local_30) goto LAB_0054350c;
  }
  else {
    local_20 = 0xbde353f8;
    local_1c = 0xbe322d0e;
    local_24 = 0xbf228f5c;
    if (&local_18 != &local_24) {
      local_14 = 0xbde353f8;
      local_10 = 0xbe322d0e;
      local_18 = 0xbf228f5c;
    }
    local_40 = 0;
    local_44 = 0;
    local_48 = 0;
    if (&local_3c == &local_48) goto LAB_0054350c;
  }
  local_38 = 0;
  local_34 = 0;
  local_3c = 0;
LAB_0054350c:
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
