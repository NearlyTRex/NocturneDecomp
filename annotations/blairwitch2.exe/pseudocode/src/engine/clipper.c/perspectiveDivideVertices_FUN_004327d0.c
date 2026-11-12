// Name: engine_clipper.c_perspectiveDivideVertices_FUN_004327d0
// Address: 004327d0
// Address Range: [[004327d0, 0043283b]]
// Convention: __cdecl
// Signature: void __cdecl engine_clipper_c_perspectiveDivideVertices_FUN_004327d0(void)

#include "nocturne.h"

void __cdecl engine_clipper_c_perspectiveDivideVertices_FUN_004327d0(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  piVar3 = &DAT_007bee34;
  iVar4 = 0;
  if (0 < DAT_007bee30) {
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
    } while (iVar4 < DAT_007bee30);
  }
  return;
}
