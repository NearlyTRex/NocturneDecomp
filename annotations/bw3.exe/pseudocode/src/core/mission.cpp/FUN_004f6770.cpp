// Name: FUN_004f6770
// Address: 004f6770
// Address Range: [[004f6770, 004f68ce]]
// Convention: unknown
// Signature: int FUN_004f6770(undefined4 param_1,undefined4 param_2,char *param_3,char *param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004f6770(uint param_1,uint param_2,char *param_3,char *param_4)

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
    iVar1 = FUN_005a32b0(param_2);
  } while (((&DAT_006074b8)[(byte)((char)iVar1 + 1)] & 2) != 0);
  if (iVar1 == 0x22) {
    iVar1 = FUN_005a32b0(param_2);
    if (iVar1 != 0x22) {
      FUN_005a3480(iVar1,param_2);
      iVar1 = FUN_005a3230(param_2,"%[^\"]",local_dc);
      if (iVar1 == 1) {
        iVar1 = FUN_005a3260(local_dc,"(none)");
        if (iVar1 == 0) {
          unaff_ESI = 0;
        }
        else {
          unaff_ESI = FUN_004f6e90(param_1,local_dc);
          if (unaff_ESI == 0) {
            FUN_0047cf40(0x01C5B0E4,"WARNING.  Can't find actor '%s' in %s property %s.  (Please note this in a bug report...)",local_dc,param_3,param_4);
          }
        }
        iVar2 = FUN_005a32b0(param_2);
        iVar1 = unaff_ESI;
        if (iVar2 == 0x22) goto LAB_004f67f8;
      }
    }
  }
  else {
    FUN_005a3480(iVar1,param_2);
    iVar2 = FUN_005a3230(param_2,&DAT_005c8999,&local_14);
    iVar1 = local_14;
    if (iVar2 == 1) goto LAB_004f67f8;
  }
  do {
    _DAT_01d71de0 = "..\\core\\mission.cpp";
    _DAT_01d71de4 = 0x234;
    FUN_004e4330("Error reading actor pointer.\nOwner: %s\nDescription: %s\n",param_3,param_4);
    iVar1 = unaff_ESI;
LAB_004f67f8:
    while (unaff_ESI = iVar1, iVar2 = FUN_005a32b0(param_2), iVar2 != -1) {
      iVar1 = unaff_ESI;
      if (iVar2 == 10) {
        return unaff_ESI;
      }
    }
  } while( true );
}
