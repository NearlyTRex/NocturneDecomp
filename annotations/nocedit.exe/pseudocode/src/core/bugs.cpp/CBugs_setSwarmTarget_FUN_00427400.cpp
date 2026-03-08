// Name: core_bugs.cpp_CBugs_setSwarmTarget_FUN_00427400
// Address: 00427400
// Address Range: [[00427400, 004276bc]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_setSwarmTarget_FUN_00427400(CBugs *this_ptr,CDemonActor *target)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_bugs_cpp_CBugs_setSwarmTarget_FUN_00427400(CBugs *this_ptr,CDemonActor *target)

{
  int iVar1;
  uint uVar2;
  uint class_name_hash;
  CDemonActor *pCVar4;
  CEnemy *pCVar3;
  CDeformableModel *pCVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  CBugs *pCVar11;
  
  class_name_hash = g_CHeroClassInfo.name_hash;
  this_ptr->deformable_model_ptr = (CKeyFramedModelInstance *)0x0;
  this_ptr->swarm_target = (CDemonActor *)0x0;
  pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c790(target,class_name_hash);
  if (pCVar4 != (CDemonActor *)0x0) {
    this_ptr->deformable_model_ptr = (CKeyFramedModelInstance *)(pCVar4 + 1);
  }
  pCVar3 = (CEnemy *)core_actor_cpp_castToClassHash_FUN_0040c790(target,g_CEnemyClassInfo.name_hash)
  ;
  if ((pCVar3 != (CEnemy *)0x0) && ((pCVar3->base).model.model_name[0] != '\0')) {
    this_ptr->deformable_model_ptr = (CKeyFramedModelInstance *)&(pCVar3->base).model;
  }
  if (this_ptr->deformable_model_ptr != (CKeyFramedModelInstance *)0x0) {
    this_ptr->state = BUGS_STATE_ATTACK;
    this_ptr->swarm_target = target;
    iVar1 = this_ptr->swarm_target->health;
    this_ptr->lod_index = 0;
    (this_ptr->base).base.base.health = iVar1 + 1;
    do {
      pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
                         ((CDeformableModelInstance *)this_ptr->deformable_model_ptr);
      iVar1 = this_ptr->lod_index;
      if (pCVar5->vertex_count[iVar1] < 0x2bd) {
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"%s swarming on %s at LOD %d\n",this_ptr,target,iVar1);
        pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
                           ((CDeformableModelInstance *)this_ptr->deformable_model_ptr);
        core_bugs_cpp_CBugs_initializeSwarmGraph_FUN_00425660
                  (this_ptr,pCVar5->tri_count[this_ptr->lod_index]);
        core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0
                  ((CDeformableModelInstance *)this_ptr->deformable_model_ptr,this_ptr->lod_index);
        iVar6 = 0;
        iVar1 = this_ptr->deformable_model_ptr[0x17].part_visibility_flags[4];
        if (0 < this_ptr->swarm_vertex_count) {
          iVar9 = 0;
          do {
            *(int *)((int)g_BugsSortedVertexIndices + iVar9) = iVar6;
            iVar6 = iVar6 + 1;
            iVar9 = iVar9 + 4;
          } while (iVar6 < this_ptr->swarm_vertex_count);
        }
        for (iVar6 = this_ptr->swarm_vertex_count + -2; -1 < iVar6; iVar6 = iVar6 + -1) {
          if (-1 < iVar6) {
            iVar9 = 0;
            do {
              if (*(int *)(*(int *)((int)g_BugsSortedVertexIndices + iVar9 + 4) * 0xc + 4 + iVar1) <
                  *(int *)(*(int *)((int)g_BugsSortedVertexIndices + iVar9) * 0xc + 4 + iVar1)) {
                puVar8 = (uint *)((int)g_BugsSortedVertexIndices + iVar9 + 4);
                uVar2 = *(uint *)((int)g_BugsSortedVertexIndices + iVar9);
                *(uint *)((int)g_BugsSortedVertexIndices + iVar9) = *puVar8;
                *puVar8 = uVar2;
              }
              iVar9 = iVar9 + 4;
            } while (iVar9 <= iVar6 * 4);
          }
        }
        iVar6 = *(int *)(iVar1 + 4 + g_BugsSortedVertexIndices[0] * 0xc);
        iVar10 = 0;
        iVar9 = 0;
        pCVar11 = this_ptr;
        if (this_ptr->count < 1) {
          return;
        }
        do {
          pCVar11->bugs[0].current_vertex = -1;
          pCVar11->bugs[0].dest_vertex = g_BugsSortedVertexIndices[iVar10];
          iVar7 = core_actor_cpp_getRandomInt_FUN_0040cc70
                            (0,(int)(CONCAT44(this_ptr->swarm_vertex_count >> 0x1f,
                                              this_ptr->swarm_vertex_count) / 0xf));
          pCVar11->bugs[0].downward_bias = iVar7;
          iVar10 = iVar10 + 1;
          if ((this_ptr->swarm_vertex_count <= iVar10) ||
             (iVar6 + 0x2a < *(int *)(iVar1 + 4 + g_BugsSortedVertexIndices[iVar10] * 0xc))) {
            iVar10 = 0;
          }
          iVar9 = iVar9 + 1;
          pCVar11 = (CBugs *)&(pCVar11->base).base.base.orient_matrix.m[0].y;
        } while (iVar9 < this_ptr->count);
        return;
      }
      this_ptr->lod_index = iVar1 + 1;
      pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
                         ((CDeformableModelInstance *)this_ptr->deformable_model_ptr);
    } while (this_ptr->lod_index < pCVar5->num_lods);
    this_ptr->deformable_model_ptr = (CKeyFramedModelInstance *)0x0;
  }
  return;
}
