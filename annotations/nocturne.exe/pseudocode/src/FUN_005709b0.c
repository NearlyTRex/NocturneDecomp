// Name: FUN_005709b0
// Address: 005709b0
// Address Range: [[005709b0, 00570a21]]
// Convention: unknown
// Signature: void FUN_005709b0(uint param_1,uint param_2)

#include "nocturne.h"

void FUN_005709b0(uint param_1,uint param_2)

{
  int local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  int local_14;
  uint local_8;
  
  local_14 = ((param_1 & 0xfe00) >> 9) + 0x50;
  local_18 = ((param_1 & 0x1e0) >> 5) - 1;
  local_20 = (param_2 & 0xf800) >> 0xb;
  local_24 = (param_2 & 0x7e0) >> 5;
  local_28 = (param_2 & 0x1f) * 2;
  local_1c = param_1 & 0x1f;
  local_8 = 0xffffffff;
  FUN_00565fb0(&local_28);
  return;
}
