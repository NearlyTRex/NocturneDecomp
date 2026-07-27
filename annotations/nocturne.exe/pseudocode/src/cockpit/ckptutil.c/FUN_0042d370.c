// Name: cockpit_ckptutil.c_FUN_0042d370
// Address: 0042d370
// Address Range: [[0042d370, 0042d3e3]]
// Convention: unknown
// Signature: undefined8 cockpit_ckptutil_c_FUN_0042d370(undefined4 param_1,byte *param_2,uint param_3,int param_4)

#include "nocturne.h"

ulonglong cockpit_ckptutil_c_FUN_0042d370(uint param_1,byte *param_2,uint param_3,int param_4)

{
  byte *pbVar1;
  uint uVar2;
  byte abStack_104 [256];
  
  pbVar1 = (byte *)cockpit_ckptutil_c_loadACTToIndexedPalette_FUN_0042d3f0(param_1,abStack_104);
  if ((-1 < param_4) && (param_4 < 0x100)) {
    abStack_104[param_4] = (byte)param_4;
  }
  uVar2 = 0;
  if (param_3 != 0) {
    do {
      pbVar1 = param_2 + 1;
      uVar2 = uVar2 + 1;
      *param_2 = abStack_104[*param_2];
      param_2 = pbVar1;
    } while (uVar2 < param_3);
  }
  return CONCAT44(uVar2,pbVar1);
}
