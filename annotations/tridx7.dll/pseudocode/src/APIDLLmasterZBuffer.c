// Name: APIDLLmasterZBuffer
// Address: 10004e10
// Address Range: [[10004e10, 10004e87]]
// Convention: unknown
// Signature: undefined4 APIDLLmasterZBuffer(int param_1)

#include "nocturne.h"

uint APIDLLmasterZBuffer(int param_1)

{
  int *piVar1;
  int iVar2;
  uint local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
                    /* 0x4e10  23  APIDLLmasterZBuffer */
  if ((-1 < param_1) && (param_1 < DAT_10226a48)) {
    piVar1 = (int *)(&DAT_10014198)[param_1];
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    local_10 = 0;
    local_c = 0;
    local_8 = DAT_10014174;
    local_4 = DAT_10014178;
    iVar2 = (**(code **)(*piVar1 + 0x14))(piVar1,&local_10,DAT_10014190,&local_10,0,0);
    if (iVar2 != 0) {
      FUN_10002340("masterZ blt failed");
    }
    return 1;
  }
  return 0;
}
