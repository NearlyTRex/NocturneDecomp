// Name: core_bugs.cpp_CBugs_ctor_FUN_0041ef50
// Address: 0041ef50
// Address Range: [[0041ef50, 0041f0ef]]
// Convention: __cdecl
// Signature: CBugs * __cdecl core_bugs_cpp_CBugs_ctor_FUN_0041ef50(CBugs *this_ptr)

#include "nocturne.h"

CBugs * __cdecl core_bugs_cpp_CBugs_ctor_FUN_0041ef50(CBugs *this_ptr)

{
  char cVar1;
  CEnemy *pCVar2;
  void *pvVar3;
  CKeyFramedModelInstance *this_ptr_00;
  char *pcVar4;
  char *pcVar5;
  
  pCVar2 = core_enemy_cpp_CEnemy_ctor_FUN_00487db0(&this_ptr->base);
  pvVar3 = __arrinit
                     (pCVar2[1].base.base.actor_name + 8,400,&g_SBugTypeInfo);
  this_ptr_00 = (CKeyFramedModelInstance *)__arrinit
                          ((void *)((int)pvVar3 + 0x6404),4,&g_CKeyFramedModelInstanceTypeInfo);
  *(CEnemy_full_vtable **)(this_ptr_00[-0xf6].model_name + 0x5c) = &g_CBugsVTable;
  this_ptr_00[-0xffffffff00000044].model_name[0x6c] = '\0';
  this_ptr_00[-0xffffffff00000044].model_name[0x6d] = '\0';
  this_ptr_00[-0xffffffff00000044].model_name[0x6e] = '\0';
  this_ptr_00[-0xffffffff00000044].model_name[0x6f] = '\0';
  this_ptr_00[-0xffffffff00000044].model_name[0x70] = '2';
  this_ptr_00[-0xffffffff00000044].model_name[0x71] = '\0';
  this_ptr_00[-0xffffffff00000044].model_name[0x72] = '\0';
  this_ptr_00[-0xffffffff00000044].model_name[0x73] = '\0';
  memset(this_ptr_00[-0x44].model_name + 0x74,0,0x6400);
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)0x3;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(this_ptr_00,(char *)0x5cc90d);
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            (this_ptr_00 + 1,(char *)0x5cc917);
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            (this_ptr_00 + 2,(char *)0x5cc922);
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)(this_ptr_00[-0xf6].model_name + 0x60),(char *)0x5cc92d);
  this_ptr_00[5].model_name[0x4c] = '\0';
  this_ptr_00[5].model_name[0x4d] = '\0';
  this_ptr_00[5].model_name[0x4e] = '\0';
  this_ptr_00[5].model_name[0x4f] = '\0';
  pcVar4 = (char *)0x5cc936;
  this_ptr_00[5].model_name[0x50] = '\0';
  this_ptr_00[5].model_name[0x51] = '\0';
  this_ptr_00[5].model_name[0x52] = '\0';
  this_ptr_00[5].model_name[0x53] = '\0';
  this_ptr_00[5].model_name[0x88] = '\0';
  this_ptr_00[5].model_name[0x89] = '\0';
  this_ptr_00[5].model_name[0x8a] = '\0';
  this_ptr_00[5].model_name[0x8b] = '\0';
  pcVar5 = this_ptr_00[0x4f].model_name + 0x1c;
  this_ptr_00[0x4f].model_name[0x14] = '\0';
  this_ptr_00[0x4f].model_name[0x15] = '\0';
  this_ptr_00[0x4f].model_name[0x16] = '\0';
  this_ptr_00[0x4f].model_name[0x17] = '\0';
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  pcVar4 = (char *)0x5cc93b;
  pcVar5 = this_ptr_00[0x4f].model_name + 0x80;
  this_ptr_00[0x4f].model_name[0x18] = '\0';
  this_ptr_00[0x4f].model_name[0x19] = '\0';
  this_ptr_00[0x4f].model_name[0x1a] = '\0';
  this_ptr_00[0x4f].model_name[0x1b] = '\0';
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
  pcVar5 = this_ptr_00[0x4f].model_name + 0xe4;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  builtin_strncpy(this_ptr_00[-0xffffffff000000d5].model_name + 0xe0,")\\\x1f@",4);
  this_ptr_00[-0xffffffff000000d5].model_name[0xe4] = '\0';
  this_ptr_00[-0xffffffff000000d5].model_name[0xe5] = '\0';
  this_ptr_00[-0xffffffff000000d5].model_name[0xe6] = ' ';
  this_ptr_00[-0xffffffff000000d5].model_name[0xe7] = '@';
  this_ptr_00[-0xffffffff000000d5].model_name[0xf0] = 'f';
  this_ptr_00[-0xffffffff000000d5].model_name[0xf1] = 'f';
  this_ptr_00[-0xffffffff000000d5].model_name[0xf2] = -0x5a;
  this_ptr_00[-0xffffffff000000d5].model_name[0xf3] = '?';
  this_ptr_00[-0xffffffff000000d5].model_name[0xf4] = '\0';
  this_ptr_00[-0xffffffff000000d5].model_name[0xf5] = '\0';
  this_ptr_00[-0xffffffff000000d5].model_name[0xf6] = -0x40;
  this_ptr_00[-0xffffffff000000d5].model_name[0xf7] = '?';
  return (CBugs *)(this_ptr_00[-0xf8].model_name + 0xa4);
}
