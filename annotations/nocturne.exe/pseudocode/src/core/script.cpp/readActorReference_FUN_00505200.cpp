// Name: core_script.cpp_readActorReference_FUN_00505200
// Address: 00505200
// Address Range: [[00505200, 0050527f]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_readActorReference_FUN_00505200(undefined4 param_1,undefined4 *param_2)

#include "nocturne.h"

void __cdecl core_script_cpp_readActorReference_FUN_00505200(uint param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint local_d0 [50];
  
  puVar4 = &DAT_005be230;
  puVar1 = local_d0;
  for (iVar3 = 0x32; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar1 = puVar1 + 1;
  }
  _fscanf(param_1,"\"%[^\"]\"\n",local_d0);
  iVar3 = _stricmp(local_d0,"(none)");
  if (iVar3 == 0) {
    *param_2 = 0;
    return;
  }
  uVar2 = core_mission_cpp_CDemonMission_findActorByName_FUN_004d90a0(0x01CC9450,local_d0);
  *param_2 = uVar2;
  return;
}
