// Name: core_actor.cpp_CDemonActor_load_FUN_0040c160
// Address: 0040c160
// Address Range: [[0040c160, 0040c319]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_load_FUN_0040c160(char *param_1,int param_2)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_load_FUN_0040c160(char *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  byte local_dc [100];
  char local_78 [100];
  uint local_14;
  
  uVar4 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00409fa0(param_1);
  local_dc[0] = 0;
  local_78[0] = '\0';
  _fscanf(param_2," { %s \"%[^\"]\"\n",local_dc,local_78);
  iVar5 = _stricmp(uVar4,local_dc);
  if (iVar5 != 0) {
    PTR_01cc4800 = "..\\core\\actor.cpp";
    INT_01cc4804 = 0x7c6;
    core_main_c_FUN_004c8440("Start of actor file tag mismatch for class %s",uVar4);
  }
  pcVar6 = local_78;
  pcVar7 = param_1;
  do {
    cVar1 = *pcVar6;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  uVar3 = DAT_00763e8c;
  uVar2 = DAT_00763e88;
  local_14 = DAT_00763e84;
  DAT_00763e84 = param_2;
  DAT_00763e88 = 1;
  DAT_00763e8c = param_1;
  (**(code **)(*(int *)(param_1 + 0x14c) + 0xcc))(param_1);
  local_dc[0] = 0;
  local_78[0] = '\0';
  _fscanf(param_2," } %s \"%[^\"]\"\n",local_dc,local_78);
  iVar5 = _stricmp(uVar4,local_dc);
  if ((iVar5 != 0) || (iVar5 = _stricmp(param_1,local_78), iVar5 != 0)) {
    PTR_01cc4800 = "..\\core\\actor.cpp";
    INT_01cc4804 = 0x7e3;
    core_main_c_FUN_004c8440("End of actor file tag mismatch for class %s name \"%s\"",uVar4,param_1);
  }
  if ((*(byte *)(param_2 + 0xc) & 0x20) != 0) {
    PTR_01cc4800 = "..\\core\\actor.cpp";
    INT_01cc4804 = 0x7e8;
    core_main_c_FUN_004c8440("IO Error after reading %s \"%s\"",uVar4,param_1);
  }
  DAT_00763e8c = (char *)uVar3;
  DAT_00763e88 = uVar2;
  DAT_00763e84 = local_14;
  return;
}
