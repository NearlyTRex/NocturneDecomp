// Name: FUN_004d2b40
// Address: 004d2b40
// Address Range: [[004d2b40, 004d2c7d]]
// Convention: unknown
// Signature: undefined4 FUN_004d2b40(uint *param_1)

#include "nocturne.h"

uint FUN_004d2b40(uint *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(0x01C775EC + 0xbc);
  if (iVar1 == 0) {
    uVar2 = *param_1;
    if (uVar2 < 0x209) {
      if (((uVar2 < 0x204) && (uVar2 < 0x201)) && (uVar2 != 0x200)) {
        return 0;
      }
    }
    else if (0x209 < uVar2) {
      if (uVar2 < 0x252) {
        if ((((0x20a < uVar2) && (0x20b < uVar2)) && (0x20c < uVar2)) && (uVar2 != 0x251)) {
          return 0;
        }
      }
      else if (((0x252 < uVar2) && (0x253 < uVar2)) &&
              ((0x254 < uVar2 && ((0x255 < uVar2 && (uVar2 != 0x256)))))) {
        return 0;
      }
    }
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        uVar2 = *param_1;
        if (0x20b < uVar2) {
          if (uVar2 < 0x20d) {
            return 1;
          }
          if (uVar2 < 0x255) {
            return 0;
          }
          if (uVar2 < 0x256) {
            return 1;
          }
          if (uVar2 == 0x256) {
            return 1;
          }
          return 0;
        }
        if (0x1ff < uVar2) {
          if (uVar2 < 0x201) {
            return 1;
          }
          if (uVar2 == 0x201) {
            return 1;
          }
        }
      }
      return 0;
    }
    uVar2 = *param_1;
    if (uVar2 < 0x208) {
      if (uVar2 < 0x204) {
        if (uVar2 < 0x202) {
          return 0;
        }
        return 1;
      }
    }
    else if (0x208 < uVar2) {
      if (uVar2 < 0x251) {
        if (((0x209 < uVar2) && (0x20a < uVar2)) && (uVar2 != 0x20b)) {
          return 0;
        }
      }
      else if ((((0x251 < uVar2) && (0x252 < uVar2)) && (0x253 < uVar2)) && (uVar2 != 0x254)) {
        return 0;
      }
    }
  }
  return 1;
}
