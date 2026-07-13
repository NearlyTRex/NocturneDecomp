// Name: APIDLLclear
// Address: 10004840
// Address Range: [[10004840, 1000490d]]
// Convention: unknown
// Signature: undefined4 APIDLLclear(void)

#include "nocturne.h"

uint APIDLLclear(void)

{
  uint *puVar1;
  int iVar2;
  uint local_c0 [4];
  uint local_b0;
  uint local_ac;
  uint local_88;
  int local_80;
  uint local_7c;
  uint local_58;
  int local_50;
  int local_4c;
  uint local_28;
  uint local_20;
  int local_1c;
  
                    /* 0x4840  8  APIDLLclear */
  if (DAT_10014204 == 0) {
    puVar1 = local_c0;
    for (iVar2 = 0x19; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    local_c0[0] = 100;
    (**(code **)(*DAT_10014180 + 0x14))(DAT_10014180,0,0,0,0x1000400,local_c0);
  }
  else {
    puVar1 = local_c0;
    for (iVar2 = 0x30; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    local_b0 = 0;
    local_80 = DAT_10014174 << 0x10;
    local_ac = 0;
    local_7c = 0;
    local_4c = DAT_10014178 << 0x10;
    local_20 = 0;
    local_c0[2] = *DAT_10226908;
    local_88 = *DAT_10226908;
    local_58 = *DAT_10226908;
    local_28 = *DAT_10226908;
    *DAT_102268e8 = 0;
    local_50 = local_80;
    local_1c = local_4c;
    APIDLLdrawPolygon(local_c0,4,0x10);
  }
  return 1;
}
