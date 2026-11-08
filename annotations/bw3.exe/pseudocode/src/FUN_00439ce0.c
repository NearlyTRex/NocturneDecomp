// Name: FUN_00439ce0
// Address: 00439ce0
// Address Range: [[00439ce0, 00439d4b]]
// Convention: unknown
// Signature: void FUN_00439ce0(void)

#include "nocturne.h"

void FUN_00439ce0(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  if (0 < DAT_007e3e88) {
    piVar3 = &DAT_007e3e8c;
    do {
      if (piVar3[2] == 0) {
        piVar3[2] = 1;
        *piVar3 = 0;
        piVar3[1] = 0;
      }
      else {
        iVar1 = piVar3[2];
        if (iVar1 < *piVar3) {
          *piVar3 = iVar1;
        }
        else {
          iVar5 = -iVar1;
          if (-*piVar3 == iVar1 || iVar5 < *piVar3) {
            iVar2 = piVar3[1];
            if (piVar3[2] < iVar2) {
              piVar3[1] = piVar3[2];
            }
            else if (-iVar2 != iVar1 && iVar2 <= iVar5) {
              piVar3[1] = iVar5;
            }
          }
          else {
            *piVar3 = iVar5;
          }
        }
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 0xc;
    } while (iVar4 < DAT_007e3e88);
  }
  return;
}
