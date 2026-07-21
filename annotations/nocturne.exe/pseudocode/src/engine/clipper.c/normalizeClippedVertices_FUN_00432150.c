// Name: engine_clipper.c_normalizeClippedVertices_FUN_00432150
// Address: 00432150
// Address Range: [[00432150, 004321bb]]
// Convention: unknown
// Signature: void engine_clipper_c_normalizeClippedVertices_FUN_00432150(void)

#include "nocturne.h"

void engine_clipper_c_normalizeClippedVertices_FUN_00432150(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  if (0 < DAT_00766c70) {
    piVar3 = &DAT_00766c74;
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
    } while (iVar4 < DAT_00766c70);
  }
  return;
}
