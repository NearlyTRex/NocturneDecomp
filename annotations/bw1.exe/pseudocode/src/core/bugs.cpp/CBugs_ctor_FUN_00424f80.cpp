// Name: core_bugs.cpp_CBugs_ctor_FUN_00424f80
// Address: 00424f80
// Address Range: [[00424f80, 0042511f]]
// Convention: __cdecl
// Signature: CBugs * __cdecl core_bugs_cpp_CBugs_ctor_FUN_00424f80(CBugs *this_ptr)

#include "nocturne.h"

CBugs * __cdecl core_bugs_cpp_CBugs_ctor_FUN_00424f80(CBugs *this_ptr)

{
  char cVar1;
  CEnemy *pCVar2;
  int iVar3;
  CKeyFramedModelInstance *this_ptr_00;
  char *pcVar4;
  char *pcVar5;
  
  pCVar2 = core_enemy_cpp_CEnemy_ctor_FUN_004a0410((CEnemy *)this_ptr);
  iVar3 = __arrinit(&pCVar2[1].field_0x8,400,&g_SBugTypeInfo);
  this_ptr_00 = (CKeyFramedModelInstance *)
                __arrinit
                          (iVar3 + 0x6404,4,&g_CKeyFramedModelInstanceTypeInfo);
  *(byte ***)&this_ptr_00[-0xc6].field_0xc8 = &g_CBugsVTable;
  *(uint *)&this_ptr_00[-0x44].field_0xe4 = 0;
  *(uint *)&this_ptr_00[-0x44].field_0xe8 = 0x32;
  memset(&this_ptr_00[-0x44].field_0xec,0,0x6400);
  *(uint *)&this_ptr_00[-1].field_0x178 = 3;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(this_ptr_00,(char *)0x5d4ffc);
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
            (this_ptr_00 + 1,(char *)0x5d5006);
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
            (this_ptr_00 + 2,(char *)0x5d5011);
  core_skeleton_cpp_FUN_00569f50(&this_ptr_00[-0xc6].field_0xcc,0x5d501c);
  *(uint *)&this_ptr_00[5].field_0xc4 = 0;
  pcVar4 = (char *)0x5d5025;
  *(uint *)&this_ptr_00[5].field_0xc8 = 0;
  *(uint *)&this_ptr_00[5].field_0x100 = 0;
  pcVar5 = &this_ptr_00[0x4f].field_0x94;
  *(uint *)&this_ptr_00[0x4f].field_0x8c = 0;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  pcVar4 = (char *)0x5d502a;
  pcVar5 = &this_ptr_00[0x4f].field_0xf8;
  *(uint *)&this_ptr_00[0x4f].field_0x90 = 0;
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
  pcVar5 = &this_ptr_00[0x4f].field_0x15c;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  *(uint *)&this_ptr_00[-0xa7].field_0x15c = 0x401f5c29;
  *(uint *)&this_ptr_00[-0xa7].field_0x160 = 0x40200000;
  *(uint *)&this_ptr_00[-0xa7].field_0x16c = 0x3fa66666;
  *(uint *)&this_ptr_00[-0xa7].field_0x170 = 0x3fc00000;
  return (CBugs *)&this_ptr_00[-199].field_0xf0;
}
