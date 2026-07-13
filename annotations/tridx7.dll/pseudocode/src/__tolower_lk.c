// Name: __tolower_lk
// Address: 10009be0
// Address Range: [[10009be0, 10009cc4]]
// Convention: unknown
// Signature: uint __tolower_lk(uint param_1)

#include "nocturne.h"

/* Library Function - Single Match
uint __tolower_lk(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ushort local_8 [2];
  byte local_4;
  byte local_3;
  byte local_2;
  
  if (DAT_10017760 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      param_1 = param_1 + 0x20;
    }
    return param_1;
  }
  if ((int)param_1 < 0x100) {
    if (DAT_10017690 < 2) {
      uVar1 = *(ushort *)(PTR_DAT_10017480 + param_1 * 2) & 1;
    }
    else {
      uVar1 = __isctype(param_1,1);
    }
    if (uVar1 == 0) {
      return param_1;
    }
  }
  local_4 = (byte)(param_1 >> 8);
  if ((PTR_DAT_10017480[(uint)local_4 * 2 + 1] & 0x80) == 0) {
    uVar2 = 1;
    local_3 = 0;
    local_4 = (byte)param_1;
  }
  else {
    uVar2 = 2;
    local_2 = 0;
    local_3 = (byte)param_1;
  }
  iVar3 = FUN_1000c340(DAT_10017760,0x100,&local_4,uVar2,local_8,3,0);
  if (iVar3 == 0) {
    return param_1;
  }
  if (iVar3 == 1) {
    return (uint)(byte)local_8[0];
  }
  return (uint)local_8[0];
}
