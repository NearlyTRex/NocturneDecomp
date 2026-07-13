// Name: APIDLLrestoreZBuffer
// Address: 10004e90
// Address Range: [[10004e90, 10004efd]]
// Convention: unknown
// Signature: undefined4 APIDLLrestoreZBuffer(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

#include "nocturne.h"

uint APIDLLrestoreZBuffer(int param_1,uint param_2,uint param_3,int param_4,int param_5)

{
  int iVar1;
  uint local_10;
  uint local_c;
  int local_8;
  int local_4;
  
                    /* 0x4e90  25  APIDLLrestoreZBuffer */
  if ((&DAT_10014198)[param_1] == 0) {
    return 0;
  }
  local_10 = param_2;
  local_c = param_3;
  local_8 = param_4 + 1;
  local_4 = param_5 + 1;
  iVar1 = (**(code **)(*DAT_10014190 + 0x14))
                    (DAT_10014190,&local_10,(&DAT_10014198)[param_1],&local_10,0,0);
  if (iVar1 != 0) {
    FUN_10002340("restoreZBuffer failed!");
  }
  return 1;
}
