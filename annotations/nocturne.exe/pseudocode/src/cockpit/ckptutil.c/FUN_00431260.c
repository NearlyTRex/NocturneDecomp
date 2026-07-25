// Name: FUN_00431260
// Address: 00431260
// Address Range: [[00431260, 004314ae]]
// Convention: unknown
// Signature: void FUN_00431260(byte *param_1,undefined4 param_2,int *param_3,int param_4,int param_5,uint param_6 )

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00431260(byte *param_1,uint param_2,int *param_3,int param_4,int param_5,uint param_6 )

{
  bool bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  byte local_130 [256];
  int local_30;
  int local_2c;
  int local_28;
  byte *local_24;
  int local_20;
  int *local_1c;
  int local_18;
  int local_14;
  
  if (0xff < param_6) {
    _sprintf(local_130,"Invalid transparent color index: %d",param_6);
    _DAT_01cc4800 = "..\\cockpit\\ckptutil.c";
    _DAT_01cc4804 = 0x93a;
    FUN_004c8440(local_130);
  }
  local_20 = 0;
  if (0 < param_5) {
    local_30 = param_4 + -1;
    local_2c = param_4;
    local_24 = param_1;
    local_28 = 0;
    local_1c = param_3;
    do {
      bVar1 = false;
      iVar3 = 0;
      local_14 = 0;
      if (0 < param_4) {
        iVar5 = -1;
        iVar6 = 0;
        local_18 = local_28;
        pbVar4 = local_24;
        do {
          iVar2 = iVar6 + local_28;
          if (bVar1) {
            if (*pbVar4 == param_6) {
              *(int *)((int)param_3 + iVar2 + 0x44) =
                   (iVar5 - *(int *)((int)param_3 + iVar2 + 4)) + 1;
              iVar6 = iVar6 + 4;
              local_14 = local_14 + 1;
              bVar1 = false;
            }
          }
          else if (*pbVar4 != param_6) {
            bVar1 = true;
            *(int *)((int)param_3 + iVar2 + 4) = iVar3;
          }
          pbVar4 = pbVar4 + 1;
          iVar3 = iVar3 + 1;
          iVar5 = iVar5 + 1;
        } while (iVar3 < param_4);
      }
      if (0xf < local_14) {
        _sprintf(local_130,"Too many spans: bitmap %s, spans %d, scanline %d",param_2,local_14,local_20);
        _DAT_01cc4800 = "..\\cockpit\\ckptutil.c";
        _DAT_01cc4804 = 0x96a;
        FUN_004c8440(local_130);
      }
      if (bVar1) {
        local_1c[local_14 + 0x11] = (local_30 - local_1c[local_14 + 1]) + 1;
        local_14 = local_14 + 1;
      }
      local_28 = local_28 + 0x84;
      local_20 = local_20 + 1;
      *local_1c = local_14;
      local_24 = local_24 + local_2c;
      local_1c = local_1c + 0x21;
    } while (local_20 < param_5);
  }
  return;
}
