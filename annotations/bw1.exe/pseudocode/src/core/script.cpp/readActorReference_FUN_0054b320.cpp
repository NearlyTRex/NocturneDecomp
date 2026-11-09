// Name: core_script.cpp_readActorReference_FUN_0054b320
// Address: 0054b320
// Address Range: [[0054b320, 0054b39f]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_readActorReference_FUN_0054b320(undefined4 param_1,undefined4 *param_2)

#include "nocturne.h"

void __cdecl core_script_cpp_readActorReference_FUN_0054b320(uint param_1,uint *param_2)

{
  char *pcVar1;
  CDemonActor *pCVar2;
  int iVar3;
  uint *puVar4;
  char local_d0 [200];
  
  puVar4 = &DAT_00622ae0;
  pcVar1 = local_d0;
  for (iVar3 = 0x32; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(uint *)pcVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    pcVar1 = (char *)((int)pcVar1 + 4);
  }
  _fscanf(param_1,"\"%[^\"]\"\n",local_d0);
  iVar3 = _stricmp(local_d0,"(none)");
  if (iVar3 == 0) {
    *param_2 = 0;
    return;
  }
  pCVar2 = core_mission_cpp_FUN_0051b6c0(0x01D2C900,local_d0);
  *param_2 = pCVar2;
  return;
}
