// Name: FUN_004cd690
// Address: 004cd690
// Address Range: [[004cd690, 004cdb1c]]
// Convention: unknown
// Signature: void FUN_004cd690(undefined4 *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004cd690(uint *param_1,int param_2)

{
  int *piVar1;
  uint extraout_ECX;
  uint extraout_EDX;
  float10 fVar2;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  if (param_1[4] == *(int *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x2c)) {
    fVar2 = (float10)(float)param_1[10] * (float10)_DAT_005c4651 + (float10)_DAT_005c4659;
    FUN_005a3120();
    local_14 = (uint)ROUND(fVar2);
    if ((int)local_14 < 0) {
      local_14 = extraout_EDX ^ extraout_ECX;
    }
    else if ((0xf < (int)local_14) && (local_14 = 0xf, param_2 != 0)) {
      *param_1 = 1;
    }
    FUN_0046ce90(DAT_005f2afc,param_1 + 1);
    if (param_1[5] == 1) {
      _DAT_01d22e58 = 0xffff;
      _DAT_01d22e50 = 0;
      _DAT_01d22e54 = 0;
      _DAT_01d22e5c = 0;
      FUN_0046e5e0(DAT_005f2afc,&DAT_005fedac + local_14 * 0x18 + param_1[0xb] * 0x180);
      FUN_0046cf30(DAT_005f2afc,param_1 + 7,0);
      local_68 = 0xbf000000;
      local_60 = 0;
      local_64 = 0xbf000000;
      local_80 = (int)ROUND(_DAT_005e0e18 * -0.5);
      local_7c = (int)ROUND(_DAT_005e0e18 * -0.5);
      local_78 = (int)ROUND(_DAT_005e0e18 * 0.0);
      FUN_005632a3(*DAT_005f2afc,&local_80);
      local_68 = 0x3f000000;
      local_64 = 0xbf000000;
      local_60 = 0;
      local_38 = (int)ROUND(_DAT_005e0e18 * 0.5);
      local_34 = (int)ROUND(_DAT_005e0e18 * -0.5);
      local_30 = (int)ROUND(_DAT_005e0e18 * 0.0);
      FUN_005632a3(*DAT_005f2afc + 0x30,&local_38);
      local_68 = 0x3f000000;
      local_60 = 0;
      local_64 = 0x3f000000;
      local_74 = (int)ROUND(_DAT_005e0e18 * 0.5);
      local_70 = (int)ROUND(_DAT_005e0e18 * 0.5);
      local_6c = (int)ROUND(_DAT_005e0e18 * 0.0);
      FUN_005632a3(*DAT_005f2afc + 0x60,&local_74);
      local_68 = 0xbf000000;
      local_64 = 0x3f000000;
      local_60 = 0;
      local_44 = (int)ROUND(_DAT_005e0e18 * -0.5);
      local_40 = (int)ROUND(_DAT_005e0e18 * 0.5);
      local_3c = (int)ROUND(_DAT_005e0e18 * 0.0);
      piVar1 = &local_44;
    }
    else {
      if (param_2 != 0) {
        *param_1 = 1;
      }
      _DAT_01d22e54 = 0xffff;
      _DAT_01d22e50 = 0;
      _DAT_01d22e58 = 0;
      _DAT_01d22e5c = 0;
      FUN_0046e5e0(DAT_005f2afc,&DAT_005fed4c + param_1[0xb] * 0x18);
      local_20 = 0xbf000000;
      local_1c = 0;
      local_18 = 0xbf000000;
      local_50 = (int)ROUND(_DAT_005e0e18 * -0.5);
      local_4c = (int)ROUND(_DAT_005e0e18 * 0.0);
      local_48 = (int)ROUND(_DAT_005e0e18 * -0.5);
      FUN_005632a3(*DAT_005f2afc,&local_50);
      local_20 = 0x3f000000;
      local_1c = 0;
      local_18 = 0xbf000000;
      local_2c = (int)ROUND(_DAT_005e0e18 * 0.5);
      local_28 = (int)ROUND(_DAT_005e0e18 * 0.0);
      local_24 = (int)ROUND(_DAT_005e0e18 * -0.5);
      FUN_005632a3(*DAT_005f2afc + 0x30,&local_2c);
      local_20 = 0x3f000000;
      local_1c = 0;
      local_18 = 0x3f000000;
      local_8c = (int)ROUND(_DAT_005e0e18 * 0.5);
      local_88 = (int)ROUND(_DAT_005e0e18 * 0.0);
      local_84 = (int)ROUND(_DAT_005e0e18 * 0.5);
      FUN_005632a3(*DAT_005f2afc + 0x60,&local_8c);
      local_20 = 0xbf000000;
      local_1c = 0;
      local_18 = 0x3f000000;
      local_5c = (int)ROUND(_DAT_005e0e18 * -0.5);
      local_58 = (int)ROUND(_DAT_005e0e18 * 0.0);
      local_54 = (int)ROUND(_DAT_005e0e18 * 0.5);
      piVar1 = &local_5c;
    }
    FUN_005632a3(*DAT_005f2afc + 0x90,piVar1);
    FUN_004cc970(param_1[6],&DAT_0060b034,&DAT_0060b038,&DAT_0060b03c);
    FUN_004cc970(param_1[6],&DAT_0060b064,&DAT_0060b068,&DAT_0060b06c);
    FUN_004cc970(param_1[6],&DAT_0060b094,&DAT_0060b098,&DAT_0060b09c);
    FUN_004cc970(param_1[6],&DAT_0060b0c4,&DAT_0060b0c8,&DAT_0060b0cc);
    FUN_0046c730(DAT_005f2afc,0x1d22e48);
    if (param_1[5] == 1) {
      thunk_FUN_004e5ef0(DAT_005f2afc);
      return;
    }
  }
  return;
}
