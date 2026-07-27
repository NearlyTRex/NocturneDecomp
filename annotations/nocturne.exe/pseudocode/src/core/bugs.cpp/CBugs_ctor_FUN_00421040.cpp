// Name: core_bugs.cpp_CBugs_ctor_FUN_00421040
// Address: 00421040
// Address Range: [[00421040, 004211df]]
// Convention: unknown
// Signature: int core_bugs_cpp_CBugs_ctor_FUN_00421040(undefined4 param_1)

#include "nocturne.h"

int core_bugs_cpp_CBugs_ctor_FUN_00421040(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = core_enemy_cpp_CEnemy_ctor_FUN_00479560(param_1);
  iVar2 = __arrinit(iVar2 + 0xbd2c,400,&g_SBugsTypeInfo_0059b010);
  iVar2 = __arrinit
                    (iVar2 + 0x6404,4,&g_CKeyFramedModelInstanceTypeInfo_0059b030);
  *(byte ***)(iVar2 + -0x11fe4) = &PTR_core_bugs_cpp_CBugs_setup_FUN_004211e0_0059aec4;
  *(uint *)(iVar2 + -0x640c) = 0;
  *(uint *)(iVar2 + -0x6408) = 0x32;
  memset(iVar2 + -0x6404,0,0x6400);
  *(uint *)(iVar2 + -4) = 3;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(iVar2,"roach.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            (iVar2 + 0x17c,"hroach.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            (iVar2 + 0x2f8,"mroach.kfm");
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0(iVar2 + -0x11fe0,"guul.dfm")
  ;
  *(uint *)(iVar2 + 0x830) = 0;
  pcVar3 = "true";
  *(uint *)(iVar2 + 0x834) = 0;
  *(uint *)(iVar2 + 0x86c) = 0;
  pcVar4 = (char *)(iVar2 + 0x75d8);
  *(uint *)(iVar2 + 0x75d0) = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = "true";
  pcVar4 = (char *)(iVar2 + 0x763c);
  *(uint *)(iVar2 + 0x75d4) = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = "false";
  pcVar4 = (char *)(iVar2 + 0x76a0);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + -0xf35c) = 0x401f5c29;
  *(uint *)(iVar2 + -0xf358) = 0x40200000;
  *(uint *)(iVar2 + -0xf34c) = 0x3fa66666;
  *(uint *)(iVar2 + -0xf348) = 0x3fc00000;
  return iVar2 + -0x12130;
}
