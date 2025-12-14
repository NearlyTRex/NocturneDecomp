// Name: core_bugs.cpp_CBugs_ctor_FUN_00424cb0
// Address: 00424cb0
// Address Range: [[00424cb0, 00424e4f]]
// Convention: __cdecl
// Signature: CBugs * core_bugs.cpp_CBugs_ctor_FUN_00424cb0(CBugs * this_ptr)

#include "nocturne.h"

CBugs * __cdecl core_bugs_cpp_CBugs_ctor_FUN_00424cb0(CBugs *this_ptr)

{
  char cVar1;
  CEnemy *pCVar2;
  void *pvVar3;
  CKeyFramedModelInstance *this_ptr_00;
  char *pcVar4;
  char *pcVar5;
  
  pCVar2 = core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base_enemy);
  pvVar3 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     (pCVar2[1].base_character.base_actor.actor_name + 0x10,400,&g_SBugTypeInfo);
  this_ptr_00 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                          ((void *)((int)pvVar3 + 0x6404),4,&g_CKeyFramedModelInstanceTypeInfo);
  this_ptr_00[-0xc3].part_visibility_flags[0] = (int)&g_CBugsVTable;
  this_ptr_00[-0xffffffff00000044].animation_state[8] = '\0';
  this_ptr_00[-0xffffffff00000044].animation_state[9] = '\0';
  this_ptr_00[-0xffffffff00000044].animation_state[10] = '\0';
  this_ptr_00[-0xffffffff00000044].animation_state[0xb] = '\0';
  this_ptr_00[-0xffffffff00000044].animation_state[0xc] = '2';
  this_ptr_00[-0xffffffff00000044].animation_state[0xd] = '\0';
  this_ptr_00[-0xffffffff00000044].animation_state[0xe] = '\0';
  this_ptr_00[-0xffffffff00000044].animation_state[0xf] = '\0';
  crt_memory_c_memset_FUN_005fde40(this_ptr_00[-0x44].animation_state + 0x10,0,0x6400);
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)0x3;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (this_ptr_00,"roach.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (this_ptr_00 + 1,"hroach.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (this_ptr_00 + 2,"mroach.kfm");
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            ((CDeformableModelInstance *)(this_ptr_00[-0xc3].part_visibility_flags + 1),
             "guul.dfm");
  this_ptr_00[5].model_name[0x4c] = '\0';
  this_ptr_00[5].model_name[0x4d] = '\0';
  this_ptr_00[5].model_name[0x4e] = '\0';
  this_ptr_00[5].model_name[0x4f] = '\0';
  pcVar4 = "true";
  this_ptr_00[5].model_name[0x50] = '\0';
  this_ptr_00[5].model_name[0x51] = '\0';
  this_ptr_00[5].model_name[0x52] = '\0';
  this_ptr_00[5].model_name[0x53] = '\0';
  this_ptr_00[5].animation_state[0x24] = '\0';
  this_ptr_00[5].animation_state[0x25] = '\0';
  this_ptr_00[5].animation_state[0x26] = '\0';
  this_ptr_00[5].animation_state[0x27] = '\0';
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
  pcVar4 = "true";
  pcVar5 = this_ptr_00[0x4f].animation_state + 0x1c;
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
  pcVar5 = this_ptr_00[0x4f].animation_state + 0x80;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  this_ptr_00[-0xa5].part_visibility_flags[0] = 0x401f5c29;
  this_ptr_00[-0xa5].part_visibility_flags[1] = 0x40200000;
  this_ptr_00[-0xa5].part_visibility_flags[4] = 0x3fa66666;
  this_ptr_00[-0xa5].part_visibility_flags[5] = 0x3fc00000;
  return (CBugs *)(this_ptr_00[-0xc4].part_visibility_flags + 10);
}
