// Name: FUN_004fc820
// Address: 004fc820
// Address Range: [[004fc820, 004fc934]]
// Convention: unknown
// Signature: void FUN_004fc820(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004fc820(int *param_1)

{
  int iVar1;
  int iVar2;
  
  *(uint *)(0x01E661B8 + 0x14d164) = 0;
  iVar1 = param_1[0x445];
  do {
    if (iVar1 == 0) {
      FUN_00537fc0(0x01E661B8);
      FUN_00534820(0x01E661B8);
      return;
    }
    if (*param_1 == *(int *)(iVar1 + 0x2c)) {
      if (*(int *)(iVar1 + 0x70) == 0) {
        if (*(char *)(iVar1 + 0x78) != '\0') {
          iVar2 = FUN_005b8130(iVar1 + 0x78,&DAT_005de812);
          if ((iVar2 != 0) && (iVar2 = FUN_0048e340(0x01C38BC0,iVar1 + 0x78), iVar2 == 0))
          goto LAB_004fc91a;
        }
        iVar2 = FUN_0040d060(*(uint *)(iVar1 + 0x74));
        if (iVar2 == 0) {
          *(uint *)(iVar1 + 0x70) = 2;
        }
        else {
          *(uint *)(iVar1 + 0x70) = 1;
LAB_004fc89c:
          if (1999 < *(int *)(0x01E661B8 + 0x14d164)) {
            _DAT_01d046a0 = "..\\core\\mission.cpp";
            _DAT_01d046a4 = 0x48a;
            FUN_004e4500("CDemonMission::buildActiveSetActorList - Too many actors in current set!");
          }
          iVar2 = 0x01E661B8;
          *(int *)(0x01E661B8 + 0x14d168 + *(int *)(0x01E661B8 + 0x14d164) * 4) = iVar1;
          *(int *)(iVar2 + 0x14d164) = *(int *)(iVar2 + 0x14d164) + 1;
        }
      }
      else {
LAB_004fc91a:
        if (*(int *)(iVar1 + 0x70) == 1) goto LAB_004fc89c;
      }
    }
    iVar1 = *(int *)(iVar1 + 0x14c);
  } while( true );
}
