// Name: core_bugs.cpp_CBugs_setSwarmTarget_FUN_00423cd0
// Address: 00423cd0
// Address Range: [[00423cd0, 00423fac]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_setSwarmTarget_FUN_00423cd0(CBugs *this_ptr,CDemonActor *target)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_bugs_cpp_CBugs_setSwarmTarget_FUN_00423cd0(CBugs *this_ptr,CDemonActor *target)

{
  CDeformableModelInstance *this_ptr_00;
  CVector3i *pCVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  CDeformableModel *pCVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  CBugs *pCVar9;
  
  uVar3 = g_CHeroClassInfo.name_hash;
  this_ptr->deformable_model_ptr = (CDeformableModelInstance *)0x0;
  this_ptr->swarm_target = (CDemonActor *)0x0;
  iVar4 = core_actor_cpp_castToClassHash_FUN_0040c840(target,uVar3);
  if (iVar4 != 0) {
    this_ptr->deformable_model_ptr = (CDeformableModelInstance *)(iVar4 + 0x158);
  }
  iVar4 = (CEnemy *)core_actor_cpp_castToClassHash_FUN_0040c840(target,g_CEnemyClassInfo.name_hash);
  if ((iVar4 != 0) && (*(char *)(iVar4 + 0x24a8) != '\0')) {
    this_ptr->deformable_model_ptr = (CDeformableModelInstance *)(iVar4 + 0x158);
  }
  if (this_ptr->deformable_model_ptr != (CDeformableModelInstance *)0x0) {
    this_ptr->state = BUGS_STATE_ATTACK;
    this_ptr->swarm_target = target;
    iVar4 = this_ptr->swarm_target->health;
    this_ptr_00 = this_ptr->deformable_model_ptr;
    this_ptr->lod_index = 0;
    (this_ptr->base).base.base.health = iVar4 + 1;
    core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(this_ptr_00);
    do {
      pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
                         (this_ptr->deformable_model_ptr);
      iVar4 = this_ptr->lod_index;
      if (pCVar5->vertex_count[iVar4] < 0x353) {
        engine_console_cpp_FUN_00441ff0
                  (g_CConsolePtr,">%s swarming on %s at LOD %d\n" + 1,this_ptr,target,iVar4);
        pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
                           (this_ptr->deformable_model_ptr);
        core_bugs_cpp_CBugs_initializeSwarmGraph_FUN_00421b00
                  (this_ptr,pCVar5->tri_count[this_ptr->lod_index],
                   pCVar5->tri_data_ptr[this_ptr->lod_index]);
        core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0054e420
                  (this_ptr->deformable_model_ptr,this_ptr->lod_index);
        iVar4 = 0;
        pCVar1 = this_ptr->deformable_model_ptr->skinned_vertices_buffer;
        if (0 < this_ptr->swarm_vertex_count) {
          iVar7 = 0;
          do {
            *(int *)((int)&DAT_007e1c94 + iVar7) = iVar4;
            iVar4 = iVar4 + 1;
            iVar7 = iVar7 + 4;
          } while (iVar4 < this_ptr->swarm_vertex_count);
        }
        for (iVar4 = this_ptr->swarm_vertex_count + -2; -1 < iVar4; iVar4 = iVar4 + -1) {
          if (-1 < iVar4) {
            iVar7 = 0;
            do {
              if (pCVar1[*(int *)((int)&DAT_007e1c98 + iVar7)].y <
                  pCVar1[*(int *)((int)&DAT_007e1c94 + iVar7)].y) {
                uVar2 = *(uint *)((int)&DAT_007e1c94 + iVar7);
                *(uint *)((int)&DAT_007e1c94 + iVar7) =
                     *(uint *)((int)&DAT_007e1c98 + iVar7);
                *(uint *)((int)&DAT_007e1c98 + iVar7) = uVar2;
              }
              iVar7 = iVar7 + 4;
            } while (iVar7 <= iVar4 * 4);
          }
        }
        iVar4 = pCVar1[DAT_007e1c94].y;
        iVar8 = 0;
        iVar7 = 0;
        pCVar9 = this_ptr;
        if (this_ptr->count < 1) {
          return;
        }
        do {
          pCVar9->bugs[0].current_vertex = -1;
          pCVar9->bugs[0].dest_vertex = (&DAT_007e1c94)[iVar8];
          iVar6 = core_actor_cpp_getRandomInt_FUN_0040cea0
                            (0,(int)(CONCAT44(this_ptr->swarm_vertex_count >> 0x1f,
                                              this_ptr->swarm_vertex_count) / 0xf));
          pCVar9->bugs[0].downward_bias = iVar6;
          iVar8 = iVar8 + 1;
          if ((this_ptr->swarm_vertex_count <= iVar8) ||
             (iVar4 + 0x2a < pCVar1[(&DAT_007e1c94)[iVar8]].y)) {
            iVar8 = 0;
          }
          iVar7 = iVar7 + 1;
          pCVar9 = (CBugs *)&(pCVar9->base).base.base.orient_matrix.m[0].y;
        } while (iVar7 < this_ptr->count);
        return;
      }
      this_ptr->lod_index = iVar4 + 1;
      pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
                         (this_ptr->deformable_model_ptr);
    } while (this_ptr->lod_index < pCVar5->num_lods);
    this_ptr->deformable_model_ptr = (CDeformableModelInstance *)0x0;
  }
  return;
}
