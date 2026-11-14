// Name: core_bugs.cpp_CBugs_setSwarmTarget_FUN_00427b40
// Address: 00427b40
// Address Range: [[00427b40, 00427dfc]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_setSwarmTarget_FUN_00427b40(CBugs *this_ptr,CDemonActor *target)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_bugs_cpp_CBugs_setSwarmTarget_FUN_00427b40(CBugs *this_ptr,CDemonActor *target)

{
  CVector3i *pCVar1;
  uint uVar2;
  uint class_name_hash;
  CDemonActor *pCVar3;
  CDeformableModel *pCVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  CBugs *pCVar9;
  
  class_name_hash = g_CHeroClassInfo.name_hash;
  this_ptr->deformable_model_ptr = (CDeformableModelInstance *)0x0;
  this_ptr->swarm_target = (CDemonActor *)0x0;
  pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c600(target,class_name_hash);
  if (pCVar3 != (CDemonActor *)0x0) {
    this_ptr->deformable_model_ptr = (CDeformableModelInstance *)(pCVar3 + 1);
  }
  pCVar3 = (CEnemy *)core_actor_cpp_castToClassHash_FUN_0040c600(target,g_CEnemyClassInfo.name_hash);
  if ((pCVar3 != (CDemonActor *)0x0) && ((char)pCVar3[0x1b].runtime_state != '\0')) {
    this_ptr->deformable_model_ptr = (CDeformableModelInstance *)(pCVar3 + 1);
  }
  if (this_ptr->deformable_model_ptr != (CDeformableModelInstance *)0x0) {
    this_ptr->state = BUGS_STATE_ATTACK;
    this_ptr->swarm_target = target;
    iVar5 = this_ptr->swarm_target->health;
    this_ptr->lod_index = 0;
    (this_ptr->base).base.base.health = iVar5 + 1;
    do {
      pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
                         (this_ptr->deformable_model_ptr);
      if (pCVar4->vertex_count[this_ptr->lod_index] < 0x2bd) {
        engine_console_cpp_CConsole_printf_FUN_00445430
                  (g_CConsolePtr,">%s swarming on %s at LOD %d\n" + 1);
        pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
                           (this_ptr->deformable_model_ptr);
        core_bugs_cpp_CBugs_initializeSwarmGraph_FUN_00425970
                  (this_ptr,pCVar4->tri_count[this_ptr->lod_index],
                   pCVar4->tri_data_ptr[this_ptr->lod_index]);
        core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_00569890
                  (this_ptr->deformable_model_ptr,this_ptr->lod_index);
        iVar5 = 0;
        pCVar1 = this_ptr->deformable_model_ptr->skinned_vertices_buffer;
        if (0 < this_ptr->swarm_vertex_count) {
          iVar7 = 0;
          do {
            *(int *)((int)&DAT_007c55f4 + iVar7) = iVar5;
            iVar5 = iVar5 + 1;
            iVar7 = iVar7 + 4;
          } while (iVar5 < this_ptr->swarm_vertex_count);
        }
        for (iVar5 = this_ptr->swarm_vertex_count + -2; -1 < iVar5; iVar5 = iVar5 + -1) {
          if (-1 < iVar5) {
            iVar7 = 0;
            do {
              if (pCVar1[*(int *)((int)&DAT_007c55f8 + iVar7)].y <
                  pCVar1[*(int *)((int)&DAT_007c55f4 + iVar7)].y) {
                uVar2 = *(uint *)((int)&DAT_007c55f4 + iVar7);
                *(uint *)((int)&DAT_007c55f4 + iVar7) =
                     *(uint *)((int)&DAT_007c55f8 + iVar7);
                *(uint *)((int)&DAT_007c55f8 + iVar7) = uVar2;
              }
              iVar7 = iVar7 + 4;
            } while (iVar7 <= iVar5 * 4);
          }
        }
        iVar5 = pCVar1[DAT_007c55f4].y;
        iVar8 = 0;
        iVar7 = 0;
        pCVar9 = this_ptr;
        if (this_ptr->count < 1) {
          return;
        }
        do {
          pCVar9->bugs[0].current_vertex = -1;
          pCVar9->bugs[0].dest_vertex = (&DAT_007c55f4)[iVar8];
          iVar6 = core_actor_cpp_getRandomInt_FUN_0040cc60
                            (0,(int)(CONCAT44(this_ptr->swarm_vertex_count >> 0x1f,
                                              this_ptr->swarm_vertex_count) / 0xf));
          pCVar9->bugs[0].downward_bias = iVar6;
          iVar8 = iVar8 + 1;
          if ((this_ptr->swarm_vertex_count <= iVar8) ||
             (iVar5 + 0x2a < pCVar1[(&DAT_007c55f4)[iVar8]].y)) {
            iVar8 = 0;
          }
          iVar7 = iVar7 + 1;
          pCVar9 = (CBugs *)&(pCVar9->base).base.base.orient_matrix.m[0].y;
        } while (iVar7 < this_ptr->count);
        return;
      }
      this_ptr->lod_index = this_ptr->lod_index + 1;
      pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
                         (this_ptr->deformable_model_ptr);
    } while (this_ptr->lod_index < pCVar4->num_lods);
    this_ptr->deformable_model_ptr = (CDeformableModelInstance *)0x0;
  }
  return;
}
