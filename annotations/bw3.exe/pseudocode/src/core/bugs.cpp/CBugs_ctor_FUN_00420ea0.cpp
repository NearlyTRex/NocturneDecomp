// Name: core_bugs.cpp_CBugs_ctor_FUN_00420ea0
// Address: 00420ea0
// Address Range: [[00420ea0, 00421051]]
// Convention: unknown
// Signature: CBugs * core_bugs_cpp_CBugs_ctor_FUN_00420ea0(CBugs *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CBugs * core_bugs_cpp_CBugs_ctor_FUN_00420ea0(CBugs *this_ptr)

{
  char cVar1;
  CEnemy *pCVar2;
  int iVar3;
  CKeyFramedModelInstance *this_ptr_00;
  char *pcVar4;
  char *pcVar5;
  
  pCVar2 = core_enemy_cpp_CEnemy_ctor_FUN_00488fd0((CEnemy *)this_ptr);
  iVar3 = __arrinit(&pCVar2[1].field_0x8,400,&g_SBugTypeInfo);
  this_ptr_00 = (CKeyFramedModelInstance *)
                __arrinit
                          (iVar3 + 0x6404,1,&g_CKeyFramedModelInstanceTypeInfo);
  *(byte ***)&this_ptr_00[-0xcf].field_0x38 = &g_CBugsVTable;
  *(uint *)&this_ptr_00[-0x44].field_0xe4 = 0;
  iVar3 = core_actor_cpp_getRandomInt_FUN_0040cea0(0x1e,0x2d);
  *(int *)&this_ptr_00[-0x44].field_0xe8 = iVar3;
  memset(&this_ptr_00[-0x44].field_0xec,0,0x6400);
  *(uint *)&this_ptr_00[-1].field_0x178 = 0;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(this_ptr_00,(char *)0x5b7705);
  core_skeleton_cpp_FUN_0054eae0(&this_ptr_00[-0xcf].field_0x3c,0x5b7710);
  *(uint *)&this_ptr_00[2].field_0xc4 = 0;
  pcVar4 = (char *)0x5b7719;
  *(uint *)&this_ptr_00[2].field_0xc8 = 0;
  *(uint *)&this_ptr_00[2].field_0x100 = 0;
  pcVar5 = &this_ptr_00[0x5c].field_0x4c;
  *(uint *)&this_ptr_00[0x5c].field_0x3c = 0;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  pcVar4 = (char *)0x5b771e;
  pcVar5 = &this_ptr_00[0x5c].field_0xb0;
  *(uint *)&this_ptr_00[0x5c].field_0x40 = 0;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  pcVar4 = "false";
  pcVar5 = &this_ptr_00[0x5c].field_0x114;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  *(uint *)&this_ptr_00[-0xae].field_0x54 = 0x401f5c29;
  *(uint *)&this_ptr_00[-0xae].field_0x58 = 0x40200000;
  *(uint *)&this_ptr_00[-0xae].field_0x64 = 0x3fa66666;
  *(uint *)&this_ptr_00[-0xae].field_0x68 = 0x3fc00000;
  *(uint *)&this_ptr_00[0x5d].field_0x28 = 0;
  *(uint *)&this_ptr_00[0x5c].field_0x44 = 0;
  *(uint *)&this_ptr_00[0x5c].field_0x48 = 0x41f00000;
  *(uint *)&this_ptr_00[0x5d].field_0x30 = 0;
  *(uint *)&this_ptr_00[0x5d].field_0x34 = 0;
  return (CBugs *)&this_ptr_00[-0xd0].field_0x60;
}
