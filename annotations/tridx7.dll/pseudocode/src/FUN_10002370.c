// Name: FUN_10002370
// Address: 10002370
// Address Range: [[10002370, 1000245a]]
// Convention: unknown
// Signature: void FUN_10002370(void)

#include "nocturne.h"

void FUN_10002370(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  FUN_10002ea0();
  if (DAT_100141b8 != (int *)0x0) {
    (**(code **)(*DAT_100141b8 + 8))(DAT_100141b8);
    DAT_100141b8 = (int *)0x0;
  }
  if (DAT_100141e4 != (int *)0x0) {
    (**(code **)(*DAT_100141e4 + 8))(DAT_100141e4);
    DAT_100141e4 = (int *)0x0;
  }
  if (DAT_100141e0 != (int *)0x0) {
    (**(code **)(*DAT_100141e0 + 8))(DAT_100141e0);
    DAT_100141e0 = (int *)0x0;
  }
  if (DAT_100141dc != (int *)0x0) {
    (**(code **)(*DAT_100141dc + 8))(DAT_100141dc);
    DAT_100141dc = (int *)0x0;
  }
  if (DAT_10014190 != (int *)0x0) {
    (**(code **)(*DAT_10014190 + 8))(DAT_10014190);
    DAT_10014190 = (int *)0x0;
  }
  iVar2 = 0;
  if (0 < DAT_10226a48) {
    piVar3 = &DAT_10014198;
    do {
      piVar1 = (int *)*piVar3;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        *piVar3 = 0;
      }
      piVar3 = piVar3 + 1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_10226a48);
  }
  if (DAT_1001418c != (int *)0x0) {
    (**(code **)(*DAT_1001418c + 8))(DAT_1001418c);
    DAT_1001418c = (int *)0x0;
  }
  return;
}
