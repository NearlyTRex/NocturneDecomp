// Name: core_bugs.cpp_CBugs_ctor_FUN_00420ea0
// Address: 00420ea0
// Address Range: [[00420ea0, 00421051]]
// Convention: __cdecl
// Signature: CBugs * __cdecl core_bugs_cpp_CBugs_ctor_FUN_00420ea0(CBugs *this_ptr)

#include "nocturne.h"

CBugs * __cdecl core_bugs_cpp_CBugs_ctor_FUN_00420ea0(CBugs *this_ptr)

{
  char cVar1;
  CEnemy *pCVar2;
  void *pvVar3;
  CKeyFramedModelInstance *this_ptr_00;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  int *piVar7;
  
  pCVar2 = core_enemy_cpp_CEnemy_ctor_FUN_00488fd0(&this_ptr->base);
  pvVar3 = __arrinit
                     (pCVar2[1].base.base.actor_name + 8,400,&g_SBugTypeInfo);
  this_ptr_00 = (CKeyFramedModelInstance *)__arrinit
                          ((void *)((int)pvVar3 + 0x6404),1,&g_CKeyFramedModelInstanceTypeInfo);
  this_ptr_00[-0xcf].part_visibility_flags[0xe] = (int)&g_CBugsVTable;
  this_ptr_00[-0xffffffff00000044].model_name[0x6c] = '\0';
  this_ptr_00[-0xffffffff00000044].model_name[0x6d] = '\0';
  this_ptr_00[-0xffffffff00000044].model_name[0x6e] = '\0';
  this_ptr_00[-0xffffffff00000044].model_name[0x6f] = '\0';
  iVar4 = core_actor_cpp_getRandomInt_FUN_0040cea0(0x1e,0x2d);
  *(int *)(this_ptr_00[-0x44].model_name + 0x70) = iVar4;
  memset(this_ptr_00[-0x44].model_name + 0x74,0,0x6400);
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)0x0;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(this_ptr_00,(char *)0x5b7705);
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            ((CDeformableModelInstance *)(this_ptr_00[-0xcf].part_visibility_flags + 0xf),
             (char *)0x5b7710);
  this_ptr_00[2].model_name[0x4c] = '\0';
  this_ptr_00[2].model_name[0x4d] = '\0';
  this_ptr_00[2].model_name[0x4e] = '\0';
  this_ptr_00[2].model_name[0x4f] = '\0';
  pcVar5 = (char *)0x5b7719;
  this_ptr_00[2].model_name[0x50] = '\0';
  this_ptr_00[2].model_name[0x51] = '\0';
  this_ptr_00[2].model_name[0x52] = '\0';
  this_ptr_00[2].model_name[0x53] = '\0';
  this_ptr_00[2].model_name[0x88] = '\0';
  this_ptr_00[2].model_name[0x89] = '\0';
  this_ptr_00[2].model_name[0x8a] = '\0';
  this_ptr_00[2].model_name[0x8b] = '\0';
  piVar7 = this_ptr_00[0x5c].part_visibility_flags + 0x13;
  this_ptr_00[0x5c].part_visibility_flags[0xf] = 0;
  do {
    cVar1 = *pcVar5;
    *(char *)piVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    *(char *)((int)piVar7 + 1) = cVar1;
    piVar7 = (int *)((int)piVar7 + 2);
  } while (cVar1 != '\0');
  pcVar6 = (char *)0x5b771e;
  pcVar5 = this_ptr_00[0x5c].model_name + 0x38;
  this_ptr_00[0x5c].part_visibility_flags[0x10] = 0;
  do {
    cVar1 = *pcVar6;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  pcVar6 = "false";
  pcVar5 = this_ptr_00[0x5c].model_name + 0x9c;
  do {
    cVar1 = *pcVar6;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  this_ptr_00[-0xae].part_visibility_flags[0x15] = 0x401f5c29;
  this_ptr_00[-0xae].part_visibility_flags[0x16] = 0x40200000;
  this_ptr_00[-0xae].part_visibility_flags[0x19] = 0x3fa66666;
  this_ptr_00[-0xae].part_visibility_flags[0x1a] = 0x3fc00000;
  this_ptr_00[0x5d].part_visibility_flags[10] = 0;
  this_ptr_00[0x5c].part_visibility_flags[0x11] = 0;
  this_ptr_00[0x5c].part_visibility_flags[0x12] = 0x41f00000;
  this_ptr_00[0x5d].part_visibility_flags[0xc] = 0;
  this_ptr_00[0x5d].part_visibility_flags[0xd] = 0;
  return (CBugs *)(this_ptr_00[-0xd0].part_visibility_flags + 0x18);
}
