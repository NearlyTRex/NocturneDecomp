// Name: core_bugs.cpp_CBugs_archive_FUN_00421880
// Address: 00421880
// Address Range: [[00421880, 00421998]]
// Convention: unknown
// Signature: void core_bugs_cpp_CBugs_archive_FUN_00421880(CEnemy *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void core_bugs_cpp_CBugs_archive_FUN_00421880(CEnemy *param_1)

{
  CKeyFramedModelInstance *pCVar1;
  int iVar2;
  
  core_enemy_cpp_CEnemy_archive_FUN_004796c0(param_1);
  core_actor_cpp_archiveInteger_FUN_0040c900
            ((int *)(param_1[1].base.base.actor_name + 4),"count");
  core_actor_cpp_archiveInteger_FUN_0040c900
            ((int *)&param_1[1].base.flames[0x12].base.vtable,"modelCount");
  if (DAT_00763e88 == 1) {
    pCVar1 = (CKeyFramedModelInstance *)&param_1[1].base.flames[0x12].flame_size;
    do {
      core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(pCVar1,&CHAR_00h_00579c6e);
      pCVar1 = pCVar1 + 1;
    } while (pCVar1 != (CKeyFramedModelInstance *)(param_1[1].base.flames[0x14].on_event + 0x58));
  }
  iVar2 = 0;
  if (0 < (int)param_1[1].base.flames[0x12].base.vtable._ub) {
    pCVar1 = (CKeyFramedModelInstance *)&param_1[1].base.flames[0x12].flame_size;
    do {
      iVar2 = iVar2 + 1;
      core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00(pCVar1,"modelName");
      pCVar1 = pCVar1 + 1;
    } while (iVar2 < (int)param_1[1].base.flames[0x12].base.vtable._ub);
  }
  core_actor_cpp_archiveInteger_FUN_0040c900
            ((int *)&param_1[2].base.model.bone_transform.bone_world_matrices[0x44].m[2].y,
             "allowChase");
  core_actor_cpp_archiveInteger_FUN_0040c900
            ((int *)&param_1[2].base.model.bone_transform.bone_world_matrices[0x44].m[2].z,
             "allowSwarm");
  core_actor_cpp_archiveString_FUN_0040c6d0
            ((char *)(param_1[2].base.model.bone_transform.bone_world_matrices + 0x45),
             "allowChaseEvent");
  core_actor_cpp_archiveString_FUN_0040c6d0
            ((char *)&param_1[2].base.model.bone_transform.bone_world_matrices[0x47].m[0].x,
             "allowSwarmEvent");
  core_actor_cpp_archiveString_FUN_0040c6d0
            ((char *)&param_1[2].base.model.bone_transform.bone_world_matrices[0x49].m[0].y,
             "animateEvent");
  return;
}
