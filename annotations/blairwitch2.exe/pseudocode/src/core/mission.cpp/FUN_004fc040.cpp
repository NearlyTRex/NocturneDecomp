// Name: FUN_004fc040
// Address: 004fc040
// Address Range: [[004fc040, 004fc19e]]
// Convention: unknown
// Signature: int FUN_004fc040(undefined4 param_1,undefined4 param_2,char *param_3,char *param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004fc040(uint param_1,uint param_2,char *param_3,char *param_4)

{
  int iVar1;
  int iVar2;
  int unaff_ESI;
  byte local_dc [200];
  int local_14;
  
  if (param_3 == (char *)0x0) {
    param_3 = "(unknown)";
  }
  if (param_4 == (char *)0x0) {
    param_4 = "(unknown)";
  }
  do {
    iVar1 = FUN_005b8180(param_2);
  } while (((&DAT_0061ed94)[(byte)((char)iVar1 + 1)] & 2) != 0);
  if (iVar1 == 0x22) {
    iVar1 = FUN_005b8180(param_2);
    if (iVar1 != 0x22) {
      FUN_005b8350(iVar1,param_2);
      iVar1 = FUN_005b8100(param_2,"%[^\"]",local_dc);
      if (iVar1 == 1) {
        iVar1 = FUN_005b8130(local_dc,"(none)");
        if (iVar1 == 0) {
          unaff_ESI = 0;
        }
        else {
          unaff_ESI = FUN_004fc740(param_1,local_dc);
          if (unaff_ESI == 0) {
            FUN_0047be40(0x01C25594,"WARNING.  Can't find actor '%s' in %s property %s.  (Please note this in a bug report...)",local_dc,param_3,param_4);
          }
        }
        iVar2 = FUN_005b8180(param_2);
        iVar1 = unaff_ESI;
        if (iVar2 == 0x22) goto LAB_004fc0c8;
      }
    }
  }
  else {
    FUN_005b8350(iVar1,param_2);
    iVar2 = FUN_005b8100(param_2,&DAT_005de654,&local_14);
    iVar1 = local_14;
    if (iVar2 == 1) goto LAB_004fc0c8;
  }
  do {
    _DAT_01d046a0 = "..\\core\\mission.cpp";
    _DAT_01d046a4 = 0x231;
    FUN_004e4500("Error reading actor pointer.\nOwner: %s\nDescription: %s\n",param_3,param_4);
    iVar1 = unaff_ESI;
LAB_004fc0c8:
    while (unaff_ESI = iVar1, iVar2 = FUN_005b8180(param_2), iVar2 != -1) {
      iVar1 = unaff_ESI;
      if (iVar2 == 10) {
        return unaff_ESI;
      }
    }
  } while( true );
}
