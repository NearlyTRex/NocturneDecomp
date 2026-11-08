// Name: FUN_004f9670
// Address: 004f9670
// Address Range: [[004f9670, 004f99ab]]
// Convention: unknown
// Signature: void FUN_004f9670(int param_1)

#include "nocturne.h"

void FUN_004f9670(int param_1)

{
  int iVar1;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  FUN_00559120();
  FUN_00560d70();
  local_50 = 0x3ee1f6a9;
  local_4c = 0x3f290d17;
  local_48 = 0xbf1b8a5d;
  local_44 = 0xbe8f4c90;
  local_40 = 0x3f3e9ec3;
  local_3c = 0x3f1b2218;
  local_38 = 0x3f5a429e;
  local_20 = 0xc0e128b7;
  local_34 = 0xbdc77681;
  local_30 = 0x3f037100;
  local_28 = 0x404a54de;
  local_24 = 0x40f41b09;
  FUN_0046cb90(DAT_005f2afc,&local_28);
  FUN_0046d090(DAT_005f2afc,0x422c9ce4);
  FUN_0046cc40(DAT_005f2afc,&local_50);
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  FUN_0046ce90(DAT_005f2afc,&local_1c);
  iVar1 = 0x01ED78C8;
  *(uint *)(0x01ED78C8 + 0x15ae84) = 1;
  *(uint *)(iVar1 + 0x15ae88) = 0xffff6f78;
  *(uint *)(iVar1 + 0x15ae8c) = 0xffff6f78;
  *(uint *)(iVar1 + 0x15ae90) = 37000;
  FUN_0053b100(iVar1,50000,50000,0x10000);
  iVar1 = 0x01ED78C8;
  DAT_00600774 = DAT_00600774 + 1;
  *(uint *)(0x01ED78C8 + 0x15ae94) = 0x1964;
  DAT_00600778 = DAT_00600778 + 1;
  *(uint *)(iVar1 + 0x15ae84) = 0;
  DAT_0060077c = DAT_0060077c + 1;
  if (0x3c < DAT_00600774) {
    DAT_00600774 = 0;
  }
  if (0x2d < DAT_00600778) {
    DAT_00600778 = 0;
  }
  if (0x4b < DAT_0060077c) {
    DAT_0060077c = 0;
  }
  iVar1 = *(int *)(param_1 + 0xad0) + 2;
  *(int *)(param_1 + 0xad0) = iVar1;
  if (0x27f < iVar1) {
    *(uint *)(param_1 + 0xad0) = 0xfffffd80;
  }
  iVar1 = *(int *)(param_1 + 0xad4) + 2;
  *(int *)(param_1 + 0xad4) = iVar1;
  if (0x27f < iVar1) {
    *(uint *)(param_1 + 0xad4) = 0xfffffd80;
  }
  iVar1 = *(int *)(param_1 + 0xad8) + -1;
  *(int *)(param_1 + 0xad8) = iVar1;
  if (iVar1 < -0x1df) {
    *(uint *)(param_1 + 0xad8) = 0x1df;
  }
  iVar1 = *(int *)(param_1 + 0xadc) + -1;
  *(int *)(param_1 + 0xadc) = iVar1;
  if (iVar1 < -0x1df) {
    *(uint *)(param_1 + 0xadc) = 0x1df;
  }
  if (*(int *)(param_1 + 0xae4) == 0) {
    iVar1 = *(int *)(param_1 + 0xae0) + -500;
    *(int *)(param_1 + 0xae0) = iVar1;
    if (iVar1 < 5000) {
      *(uint *)(param_1 + 0xae0) = 5000;
      *(uint *)(param_1 + 0xae4) = 1;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0xae0) + 500;
    *(int *)(param_1 + 0xae0) = iVar1;
    if (0xffff < iVar1) {
      *(uint *)(param_1 + 0xae0) = 0xffff;
      *(uint *)(param_1 + 0xae4) = 0;
    }
  }
  FUN_0040d6f0(0x1d883a8,*(uint *)(param_1 + 0xad0),*(uint *)(param_1 + 0xad8),0xffff);
  FUN_0040d6f0(0x1d883a8,*(uint *)(param_1 + 0xad4),*(uint *)(param_1 + 0xad8),0xffff);
  FUN_0040d6f0(0x1d883a8,*(uint *)(param_1 + 0xad0),*(uint *)(param_1 + 0xadc),0xffff);
  FUN_0040d6f0(0x1d883a8,*(uint *)(param_1 + 0xad4),*(uint *)(param_1 + 0xadc),0xffff);
  FUN_0040d6f0(0x1d88628,0x40,0x40,*(uint *)(param_1 + 0xae0));
  FUN_0040d6f0(0x1d88614,0,0,0xffff);
  return;
}
