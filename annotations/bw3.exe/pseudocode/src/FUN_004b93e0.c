// Name: FUN_004b93e0
// Address: 004b93e0
// Address Range: [[004b93e0, 004b97ad]]
// Convention: unknown
// Signature: void FUN_004b93e0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b93e0(int param_1)

{
  uint uVar1;
  
  uVar1 = _DAT_01c6e260;
  _DAT_01c6e264 = 2;
  FUN_00581d10();
  if ((_DAT_01c6e260 & 1) == 0) {
    FUN_004df5c0(0x01D70A78,0x202);
  }
  else if ((uVar1 & 1) == 0) {
    FUN_004df5b0(0x01D70A78,0x202);
  }
  if ((_DAT_01c6e260 & 2) == 0) {
    FUN_004df5c0(0x01D70A78,0x203);
  }
  else if ((uVar1 & 2) == 0) {
    FUN_004df5b0(0x01D70A78,0x203);
  }
  if ((_DAT_01c6e260 & 4) == 0) {
    FUN_004df5c0(0x01D70A78,0x204);
  }
  else if ((uVar1 & 4) == 0) {
    FUN_004df5b0(0x01D70A78,0x204);
  }
  if ((_DAT_01c6e260 & 8) == 0) {
    FUN_004df5c0(0x01D70A78,0x205);
  }
  else if ((uVar1 & 8) == 0) {
    FUN_004df5b0(0x01D70A78,0x205);
  }
  if ((_DAT_01c6e260 & 0x10) == 0) {
    FUN_004df5c0(0x01D70A78,0x206);
  }
  else if ((uVar1 & 0x10) == 0) {
    FUN_004df5b0(0x01D70A78,0x206);
  }
  if ((_DAT_01c6e260 & 0x20) == 0) {
    FUN_004df5c0(0x01D70A78,0x207);
  }
  else if ((uVar1 & 0x20) == 0) {
    FUN_004df5b0(0x01D70A78,0x207);
  }
  if ((_DAT_01c6e260 & 0x40) == 0) {
    FUN_004df5c0(0x01D70A78,0x208);
  }
  else if ((uVar1 & 0x40) == 0) {
    FUN_004df5b0(0x01D70A78,0x208);
  }
  if ((_DAT_01c6e260 & 0x80) == 0) {
    FUN_004df5c0(0x01D70A78,0x209);
  }
  else if ((uVar1 & 0x80) == 0) {
    FUN_004df5b0(0x01D70A78,0x209);
  }
  if ((_DAT_01c6e260 & 0x100) == 0) {
    FUN_004df5c0(0x01D70A78,0x20a);
  }
  else if ((uVar1 & 0x100) == 0) {
    FUN_004df5b0(0x01D70A78,0x20a);
  }
  if ((_DAT_01c6e260 & 0x200) == 0) {
    FUN_004df5c0(0x01D70A78,0x20b);
  }
  else if ((uVar1 & 0x200) == 0) {
    FUN_004df5b0(0x01D70A78,0x20b);
  }
  FUN_004df5c0(0x01D70A78,0x251);
  FUN_004df5c0(0x01D70A78,0x252);
  FUN_004df5c0(0x01D70A78,0x253);
  FUN_004df5c0(0x01D70A78,0x254);
  if (_DAT_01c6e250 <
      *(int *)(param_1 + 0xbc) - (*(int *)(param_1 + 0xbc) - *(int *)(param_1 + 0xc4)) / 2) {
    FUN_004df5b0(0x01D70A78,0x251);
  }
  if ((*(int *)(param_1 + 200) - *(int *)(param_1 + 0xbc)) / 2 + *(int *)(param_1 + 0xbc) <
      _DAT_01c6e250) {
    FUN_004df5b0(0x01D70A78,0x252);
  }
  if (_DAT_01c6e254 <
      *(int *)(param_1 + 0xc0) - (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xcc)) / 2) {
    FUN_004df5b0(0x01D70A78,0x253);
  }
  if ((*(int *)(param_1 + 0xd0) - *(int *)(param_1 + 0xc0)) / 2 + *(int *)(param_1 + 0xc0) <
      _DAT_01c6e254) {
    FUN_004df5b0(0x01D70A78,0x254);
    return;
  }
  return;
}
