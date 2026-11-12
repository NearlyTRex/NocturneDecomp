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
  void *pvVar3;
  CKeyFramedModelInstance *this_ptr_00;
  char *pcVar4;
  char *pcVar5;
  
  pCVar2 = core_enemy_cpp_CEnemy_ctor_FUN_004a0410(&this_ptr->base);
  pvVar3 = __arrinit
                     (pCVar2[1].base.base.actor_name + 8,400,&g_SBugTypeInfo);
  this_ptr_00 = (CKeyFramedModelInstance *)__arrinit
                          ((void *)((int)pvVar3 + 0x6404),4,&g_CKeyFramedModelInstanceTypeInfo);
  *(CEnemy_full_vtable **)(this_ptr_00[-0xc6].model_name + 0x50) = &g_CBugsVTable;
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
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(this_ptr_00,(char *)0x5d4ffc);
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
            (this_ptr_00 + 1,(char *)0x5d5006);
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
            (this_ptr_00 + 2,(char *)0x5d5011);
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50
            ((CDeformableModelInstance *)(this_ptr_00[-0xc6].model_name + 0x54),(char *)0x5d501c);
  this_ptr_00[5].model_name[0x4c] = '\0';
  this_ptr_00[5].model_name[0x4d] = '\0';
  this_ptr_00[5].model_name[0x4e] = '\0';
  this_ptr_00[5].model_name[0x4f] = '\0';
  pcVar4 = (char *)0x5d5025;
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
  pcVar4 = (char *)0x5d502a;
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
  builtin_strncpy(this_ptr_00[-0xffffffff000000a7].model_name + 0xe4,")\\\x1f@",4);
  this_ptr_00[-0xffffffff000000a7].model_name[0xe8] = '\0';
  this_ptr_00[-0xffffffff000000a7].model_name[0xe9] = '\0';
  this_ptr_00[-0xffffffff000000a7].model_name[0xea] = ' ';
  this_ptr_00[-0xffffffff000000a7].model_name[0xeb] = '@';
  this_ptr_00[-0xffffffff000000a7].model_name[0xf4] = 'f';
  this_ptr_00[-0xffffffff000000a7].model_name[0xf5] = 'f';
  this_ptr_00[-0xffffffff000000a7].model_name[0xf6] = -0x5a;
  this_ptr_00[-0xffffffff000000a7].model_name[0xf7] = '?';
  this_ptr_00[-0xffffffff000000a7].model_name[0xf8] = '\0';
  this_ptr_00[-0xffffffff000000a7].model_name[0xf9] = '\0';
  this_ptr_00[-0xffffffff000000a7].model_name[0xfa] = -0x40;
  this_ptr_00[-0xffffffff000000a7].model_name[0xfb] = '?';
  return (CBugs *)(this_ptr_00[-199].model_name + 0x78);
}
