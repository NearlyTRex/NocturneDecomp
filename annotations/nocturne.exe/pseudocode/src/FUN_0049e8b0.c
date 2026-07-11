// Name: FUN_0049e8b0
// Address: 0049e8b0
// Address Range: [[0049e8b0, 0049ec7d]]
// Convention: unknown
// Signature: void FUN_0049e8b0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049e8b0(int param_1)

{
  uint uVar1;
  
  uVar1 = _DAT_01c03908;
  _DAT_01c0390c = 2;
  FUN_00559eb0();
  if ((_DAT_01c03908 & 1) == 0) {
    FUN_004c4200(0x01CC30E4,0x202);
  }
  else if ((uVar1 & 1) == 0) {
    FUN_004c41f0(0x01CC30E4,0x202);
  }
  if ((_DAT_01c03908 & 2) == 0) {
    FUN_004c4200(0x01CC30E4,0x203);
  }
  else if ((uVar1 & 2) == 0) {
    FUN_004c41f0(0x01CC30E4,0x203);
  }
  if ((_DAT_01c03908 & 4) == 0) {
    FUN_004c4200(0x01CC30E4,0x204);
  }
  else if ((uVar1 & 4) == 0) {
    FUN_004c41f0(0x01CC30E4,0x204);
  }
  if ((_DAT_01c03908 & 8) == 0) {
    FUN_004c4200(0x01CC30E4,0x205);
  }
  else if ((uVar1 & 8) == 0) {
    FUN_004c41f0(0x01CC30E4,0x205);
  }
  if ((_DAT_01c03908 & 0x10) == 0) {
    FUN_004c4200(0x01CC30E4,0x206);
  }
  else if ((uVar1 & 0x10) == 0) {
    FUN_004c41f0(0x01CC30E4,0x206);
  }
  if ((_DAT_01c03908 & 0x20) == 0) {
    FUN_004c4200(0x01CC30E4,0x207);
  }
  else if ((uVar1 & 0x20) == 0) {
    FUN_004c41f0(0x01CC30E4,0x207);
  }
  if ((_DAT_01c03908 & 0x40) == 0) {
    FUN_004c4200(0x01CC30E4,0x208);
  }
  else if ((uVar1 & 0x40) == 0) {
    FUN_004c41f0(0x01CC30E4,0x208);
  }
  if ((_DAT_01c03908 & 0x80) == 0) {
    FUN_004c4200(0x01CC30E4,0x209);
  }
  else if ((uVar1 & 0x80) == 0) {
    FUN_004c41f0(0x01CC30E4,0x209);
  }
  if ((_DAT_01c03908 & 0x100) == 0) {
    FUN_004c4200(0x01CC30E4,0x20a);
  }
  else if ((uVar1 & 0x100) == 0) {
    FUN_004c41f0(0x01CC30E4,0x20a);
  }
  if ((_DAT_01c03908 & 0x200) == 0) {
    FUN_004c4200(0x01CC30E4,0x20b);
  }
  else if ((uVar1 & 0x200) == 0) {
    FUN_004c41f0(0x01CC30E4,0x20b);
  }
  FUN_004c4200(0x01CC30E4,0x251);
  FUN_004c4200(0x01CC30E4,0x252);
  FUN_004c4200(0x01CC30E4,0x253);
  FUN_004c4200(0x01CC30E4,0x254);
  if (_DAT_01c038f8 <
      *(int *)(param_1 + 0xa4) - (*(int *)(param_1 + 0xa4) - *(int *)(param_1 + 0xac)) / 2) {
    FUN_004c41f0(0x01CC30E4,0x251);
  }
  if ((*(int *)(param_1 + 0xb0) - *(int *)(param_1 + 0xa4)) / 2 + *(int *)(param_1 + 0xa4) <
      _DAT_01c038f8) {
    FUN_004c41f0(0x01CC30E4,0x252);
  }
  if (_DAT_01c038fc <
      *(int *)(param_1 + 0xa8) - (*(int *)(param_1 + 0xa8) - *(int *)(param_1 + 0xb4)) / 2) {
    FUN_004c41f0(0x01CC30E4,0x253);
  }
  if ((*(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0xa8)) / 2 + *(int *)(param_1 + 0xa8) <
      _DAT_01c038fc) {
    FUN_004c41f0(0x01CC30E4,0x254);
    return;
  }
  return;
}
