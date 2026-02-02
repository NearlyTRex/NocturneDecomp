// Name: core_bugs.cpp_CBugs_load_FUN_004254f0
// Address: 004254f0
// Address Range: [[004254f0, 00425608]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_load_FUN_004254f0(void)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* Signature: int actors_enemy_bugs.cpp_CBugs_load(CBugs* pBugs) */

void __cdecl core_bugs_cpp_CBugs_load_FUN_004254f0(void)

{
  CKeyFramedModelInstance *pCVar1;
  int iVar2;
  CEnemy *in_stack_00000004;
  
  core_enemy_cpp_CEnemy_archive_FUN_004a9660(in_stack_00000004);
  core_actor_cpp_archiveInteger_FUN_0040b7f0
            ((int *)(in_stack_00000004[1].base.base.actor_name + 0xc),"count");
  core_actor_cpp_archiveInteger_FUN_0040b7f0
            ((int *)(in_stack_00000004[1].base.cloth_data + 0x3978),"modelCount");
  if (g_ActorReadingMode == 1) {
    pCVar1 = (CKeyFramedModelInstance *)(in_stack_00000004[1].base.cloth_data + 0x397c);
    do {
      core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(pCVar1,&DAT_00616d44);
      pCVar1 = pCVar1 + 1;
    } while (pCVar1 != (CKeyFramedModelInstance *)(in_stack_00000004[1].base.cloth_data + 0x3f6c));
  }
  iVar2 = 0;
  if (0 < *(int *)(in_stack_00000004[1].base.cloth_data + 0x3978)) {
    pCVar1 = (CKeyFramedModelInstance *)(in_stack_00000004[1].base.cloth_data + 0x397c);
    do {
      iVar2 = iVar2 + 1;
      core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b8f0(pCVar1,"modelName");
      pCVar1 = pCVar1 + 1;
    } while (iVar2 < *(int *)(in_stack_00000004[1].base.cloth_data + 0x3978));
  }
  core_actor_cpp_archiveInteger_FUN_0040b7f0
            ((int *)&in_stack_00000004[2].base.model.bone_transform.bone_world_matrices[0x3c].m[1].y
             ,"allowChase");
  core_actor_cpp_archiveInteger_FUN_0040b7f0
            ((int *)&in_stack_00000004[2].base.model.bone_transform.bone_world_matrices[0x3c].m[1].z
             ,"allowSwarm");
  core_actor_cpp_archiveString_FUN_0040b5c0
            ((char *)(in_stack_00000004[2].base.model.bone_transform.bone_world_matrices[0x3c].m + 2
                     ),"allowChaseEvent");
  core_actor_cpp_archiveString_FUN_0040b5c0
            ((char *)&in_stack_00000004[2].base.model.bone_transform.bone_world_matrices[0x3e].m[2].
                      x,"allowSwarmEvent");
  core_actor_cpp_archiveString_FUN_0040b5c0
            ((char *)&in_stack_00000004[2].base.model.bone_transform.bone_world_matrices[0x40].m[2].
                      y,"animateEvent");
  return;
}
