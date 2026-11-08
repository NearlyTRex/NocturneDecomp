// Name: FUN_004a24f0
// Address: 004a24f0
// Address Range: [[004a24f0, 004a2616]]
// Convention: unknown
// Signature: void FUN_004a24f0(int *param_1)

#include "nocturne.h"

void FUN_004a24f0(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  byte auStack_120 [256];
  int *piStack_20;
  int *piStack_1c;
  int iStack_18;
  int *piStack_14;
  
  iStack_18 = *param_1;
  piStack_20 = param_1 + 0x1e;
  piStack_1c = param_1 + 6;
  iVar3 = 0;
  piVar4 = param_1 + 0x36;
  piStack_14 = param_1;
  do {
    if ((char)piStack_14[6] != '\0') {
      piVar6 = piStack_20 + iVar3 * 8;
      piVar5 = piStack_1c + iVar3 * 8;
      iVar2 = FUN_005b8130(piVar5,piVar6);
      if (iVar2 != 0) {
        FUN_005b7790(auStack_120,0x5d5aab,piVar5);
        FUN_0040d5a0(piVar4,auStack_120,0x23,0x2f);
        do {
          iVar2 = *piVar5;
          *(char *)piVar6 = (char)iVar2;
          if ((char)iVar2 == '\0') break;
          cVar1 = *(char *)((int)piVar5 + 1);
          piVar5 = (int *)((int)piVar5 + 2);
          *(char *)((int)piVar6 + 1) = cVar1;
          piVar6 = (int *)((int)piVar6 + 2);
        } while (cVar1 != '\0');
      }
      FUN_0040d900(piVar4,iStack_18,param_1[1],0xffff);
    }
    piVar4 = piVar4 + 5;
    iVar3 = iVar3 + 1;
    piStack_14 = piStack_14 + 8;
    iStack_18 = iStack_18 + 0x23;
    if (2 < iVar3) {
      return;
    }
  } while( true );
}
