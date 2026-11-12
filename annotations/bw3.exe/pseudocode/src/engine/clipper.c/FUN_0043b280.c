// Name: engine_clipper.c_FUN_0043b280
// Address: 0043b280
// Address Range: [[0043b280, 0043b2eb]]
// Convention: unknown
// Signature: void engine_clipper_c_FUN_0043b280(void)

#include "nocturne.h"

void engine_clipper_c_FUN_0043b280(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  piVar3 = &DAT_007e3e8c;
  iVar4 = 0;
  if (0 < DAT_007e3e88) {
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
