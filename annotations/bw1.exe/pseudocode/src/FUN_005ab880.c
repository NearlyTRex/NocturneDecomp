// Name: FUN_005ab880
// Address: 005ab880
// Address Range: [[005ab880, 005ab980]]
// Convention: unknown
// Signature: bool FUN_005ab880(float *param_1,float *param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_005ab880(float *param_1,float *param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  float local_40;
  float fStack_3c;
  float fStack_38;
  byte local_34 [12];
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_28 = *param_1 - *param_2;
  local_24 = param_1[1] - param_2[1];
  local_20 = param_1[2] - param_2[2];
  if (param_3 == 0) {
    if ((((float)_DAT_005f93fb < ABS(local_24)) || ((float)_DAT_005f9403 < ABS(local_28))) ||
       ((float)_DAT_005f9403 < ABS(local_20))) {
      return false;
    }
  }
  else if ((((float)_DAT_005f940b < ABS(local_24)) || ((float)_DAT_005f9413 < ABS(local_28))) ||
          ((float)_DAT_005f9413 < ABS(local_20))) {
    return false;
  }
  if (param_4 != 0) {
    return true;
  }
  local_40 = *param_1;
  fStack_3c = param_1[1];
  fStack_38 = param_1[2];
  local_1c = local_28;
  local_18 = local_24;
  local_14 = local_20;
  uVar1 = FUN_005351f0(param_2);
  iVar2 = FUN_005349a0(uVar1,&local_40,local_34,0);
  return iVar2 == 1;
}
