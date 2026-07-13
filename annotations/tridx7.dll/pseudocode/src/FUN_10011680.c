// Name: FUN_10011680
// Address: 10011680
// Address Range: [[10011680, 100116ee]]
// Convention: unknown
// Signature: LPVOID FUN_10011680(LPVOID param_1,uint param_2)

#include "nocturne.h"

LPVOID FUN_10011680(LPVOID param_1,uint param_2)

{
  LPVOID pvVar1;
  int iVar2;
  
  if (param_1 == (LPVOID)0x0) {
    pvVar1 = (LPVOID)FUN_10008830(param_2);
    return pvVar1;
  }
  if (param_2 != 0) {
    do {
      if (param_2 < 0xffffffe1) {
        pvVar1 = HeapReAlloc(DAT_10241974,0,param_1,param_2);
      }
      else {
        pvVar1 = (LPVOID)0x0;
      }
      if (pvVar1 != (LPVOID)0x0) {
        return pvVar1;
      }
      if (DAT_10017780 == 0) {
        return (LPVOID)0x0;
      }
      iVar2 = __callnewh(param_2);
    } while (iVar2 != 0);
    return (LPVOID)0x0;
  }
  FUN_10005b30(param_1);
  return (LPVOID)0x0;
}
