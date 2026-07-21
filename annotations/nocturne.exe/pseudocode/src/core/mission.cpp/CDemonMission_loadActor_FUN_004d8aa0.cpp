// Name: core_mission.cpp_CDemonMission_loadActor_FUN_004d8aa0
// Address: 004d8aa0
// Address Range: [[004d8aa0, 004d8bfe]]
// Convention: __cdecl
// Signature: int __cdecl core_mission_cpp_CDemonMission_loadActor_FUN_004d8aa0(undefined4 param_1,undefined4 param_2,char *param_3,char *param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_mission_cpp_CDemonMission_loadActor_FUN_004d8aa0(uint param_1,uint param_2,char *param_3,char *param_4)

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
    iVar1 = _fgetc(param_2);
  } while (((&DAT_005c168c)[(byte)((char)iVar1 + 1)] & 2) != 0);
  if (iVar1 == 0x22) {
    iVar1 = _fgetc(param_2);
    if (iVar1 != 0x22) {
      _ungetc(iVar1,param_2);
      iVar1 = _fscanf(param_2,"%[^\"]",local_dc);
      if (iVar1 == 1) {
        iVar1 = _stricmp(local_dc,"(none)");
        if (iVar1 == 0) {
          unaff_ESI = 0;
        }
        else {
          unaff_ESI = core_mission_cpp_CDemonMission_findActorByName_FUN_004d90a0(param_1,local_dc);
          if (unaff_ESI == 0) {
            FUN_0046fcd0(0x01BCD074,"WARNING.  Can't find actor '%s' in %s property %s.  (Please note this in a bug report...)",local_dc,param_3,
                         param_4);
          }
        }
        iVar2 = _fgetc(param_2);
        iVar1 = unaff_ESI;
        if (iVar2 == 0x22) goto LAB_004d8b28;
      }
    }
  }
  else {
    _ungetc(iVar1,param_2);
    iVar2 = _fscanf(param_2,&DAT_00589c44,&local_14);
    iVar1 = local_14;
    if (iVar2 == 1) goto LAB_004d8b28;
  }
  do {
    _DAT_01cc4800 = "..\\core\\mission.cpp";
    _DAT_01cc4804 = 0x22d;
    FUN_004c8440("Error reading actor pointer.\nOwner: %s\nDescription: %s\n",param_3,param_4);
    iVar1 = unaff_ESI;
LAB_004d8b28:
    while (unaff_ESI = iVar1, iVar2 = _fgetc(param_2), iVar2 != -1) {
      iVar1 = unaff_ESI;
      if (iVar2 == 10) {
        return unaff_ESI;
      }
    }
  } while( true );
}
