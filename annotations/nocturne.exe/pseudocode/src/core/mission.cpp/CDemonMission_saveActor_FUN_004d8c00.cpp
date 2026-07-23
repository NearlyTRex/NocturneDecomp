// Name: core_mission.cpp_CDemonMission_saveActor_FUN_004d8c00
// Address: 004d8c00
// Address Range: [[004d8c00, 004d8c5b]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_saveActor_FUN_004d8c00(undefined4 param_1,char *param_2,undefined4 param_3,undefined4 param_4,int param_5)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_saveActor_FUN_004d8c00(uint param_1,char *param_2,uint param_3,uint param_4,int param_5)

{
  char *pcVar1;
  char *pcVar2;
  
  if (param_2 < (char *)0xff000000) {
    pcVar1 = "(none)";
    if (param_2 != (char *)0x0) {
      pcVar1 = param_2;
    }
    pcVar2 = "\"%s\"";
    param_2 = pcVar1;
  }
  else {
    pcVar2 = "%08x";
  }
  _fprintf(param_3,pcVar2,param_2);
  if (param_5 != 0) {
    _fprintf(param_3,"\t\t// %s\n",param_5);
    return;
  }
  _fprintf(param_3,"\n");
  return;
}
