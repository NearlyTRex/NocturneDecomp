// Name: FUN_004b7140
// Address: 004b7140
// Address Range: [[004b7140, 004b750d]]
// Convention: unknown
// Signature: void FUN_004b7140(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b7140(int param_1)

{
  uint uVar1;
  
  uVar1 = _DAT_01c38b00;
  _DAT_01c38b04 = 2;
  FUN_00590060();
  if ((_DAT_01c38b00 & 1) == 0) {
    FUN_004dfed0(0x01D02F84,0x202);
  }
  else if ((uVar1 & 1) == 0) {
    FUN_004dfec0(0x01D02F84,0x202);
  }
  if ((_DAT_01c38b00 & 2) == 0) {
    FUN_004dfed0(0x01D02F84,0x203);
  }
  else if ((uVar1 & 2) == 0) {
    FUN_004dfec0(0x01D02F84,0x203);
  }
  if ((_DAT_01c38b00 & 4) == 0) {
    FUN_004dfed0(0x01D02F84,0x204);
  }
  else if ((uVar1 & 4) == 0) {
    FUN_004dfec0(0x01D02F84,0x204);
  }
  if ((_DAT_01c38b00 & 8) == 0) {
    FUN_004dfed0(0x01D02F84,0x205);
  }
  else if ((uVar1 & 8) == 0) {
    FUN_004dfec0(0x01D02F84,0x205);
  }
  if ((_DAT_01c38b00 & 0x10) == 0) {
    FUN_004dfed0(0x01D02F84,0x206);
  }
  else if ((uVar1 & 0x10) == 0) {
    FUN_004dfec0(0x01D02F84,0x206);
  }
  if ((_DAT_01c38b00 & 0x20) == 0) {
    FUN_004dfed0(0x01D02F84,0x207);
  }
  else if ((uVar1 & 0x20) == 0) {
    FUN_004dfec0(0x01D02F84,0x207);
  }
  if ((_DAT_01c38b00 & 0x40) == 0) {
    FUN_004dfed0(0x01D02F84,0x208);
  }
  else if ((uVar1 & 0x40) == 0) {
    FUN_004dfec0(0x01D02F84,0x208);
  }
  if ((_DAT_01c38b00 & 0x80) == 0) {
    FUN_004dfed0(0x01D02F84,0x209);
  }
  else if ((uVar1 & 0x80) == 0) {
    FUN_004dfec0(0x01D02F84,0x209);
  }
  if ((_DAT_01c38b00 & 0x100) == 0) {
    FUN_004dfed0(0x01D02F84,0x20a);
  }
  else if ((uVar1 & 0x100) == 0) {
    FUN_004dfec0(0x01D02F84,0x20a);
  }
  if ((_DAT_01c38b00 & 0x200) == 0) {
    FUN_004dfed0(0x01D02F84,0x20b);
  }
  else if ((uVar1 & 0x200) == 0) {
    FUN_004dfec0(0x01D02F84,0x20b);
  }
  FUN_004dfed0(0x01D02F84,0x251);
  FUN_004dfed0(0x01D02F84,0x252);
  FUN_004dfed0(0x01D02F84,0x253);
  FUN_004dfed0(0x01D02F84,0x254);
  if (_DAT_01c38af0 <
      *(int *)(param_1 + 0xb8) - (*(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0xc0)) / 2) {
    FUN_004dfec0(0x01D02F84,0x251);
  }
  if ((*(int *)(param_1 + 0xc4) - *(int *)(param_1 + 0xb8)) / 2 + *(int *)(param_1 + 0xb8) <
      _DAT_01c38af0) {
    FUN_004dfec0(0x01D02F84,0x252);
  }
  if (_DAT_01c38af4 <
      *(int *)(param_1 + 0xbc) - (*(int *)(param_1 + 0xbc) - *(int *)(param_1 + 200)) / 2) {
    FUN_004dfec0(0x01D02F84,0x253);
  }
  if ((*(int *)(param_1 + 0xcc) - *(int *)(param_1 + 0xbc)) / 2 + *(int *)(param_1 + 0xbc) <
      _DAT_01c38af4) {
    FUN_004dfec0(0x01D02F84,0x254);
    return;
  }
  return;
}
