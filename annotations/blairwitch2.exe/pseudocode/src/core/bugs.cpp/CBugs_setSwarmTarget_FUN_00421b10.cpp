// Name: core_bugs.cpp_CBugs_setSwarmTarget_FUN_00421b10
// Address: 00421b10
// Address Range: [[00421b10, 00421dcc]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_setSwarmTarget_FUN_00421b10(CBugs *this_ptr,CDemonActor *target)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_bugs_cpp_CBugs_setSwarmTarget_FUN_00421b10(CBugs *this_ptr,CDemonActor *target)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  CDeformableModel *pCVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  CBugs *pCVar9;
  
  uVar2 = g_CHeroClassInfo.name_hash;
  this_ptr->deformable_model_ptr = (CDeformableModelInstance *)0x0;
  this_ptr->swarm_target = (CDemonActor *)0x0;
  iVar3 = core_actor_cpp_castToClassHash_FUN_0040c8f0(target,uVar2);
  if (iVar3 != 0) {
    this_ptr->deformable_model_ptr = (CDeformableModelInstance *)(iVar3 + 0x2b4);
  }
  iVar3 = (CEnemy *)core_actor_cpp_castToClassHash_FUN_0040c8f0(target,g_CEnemyClassInfo.name_hash);
  if ((iVar3 != 0) && (*(char *)(iVar3 + 0x2514) != '\0')) {
    this_ptr->deformable_model_ptr = (CDeformableModelInstance *)(iVar3 + 0x2b4);
  }
  if (this_ptr->deformable_model_ptr != (CDeformableModelInstance *)0x0) {
    this_ptr->state = BUGS_STATE_ATTACK;
    this_ptr->swarm_target = target;
    iVar3 = this_ptr->swarm_target->health;
    this_ptr->lod_index = 0;
    (this_ptr->base).base.base.health = iVar3 + 1;
    do {
      pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
                         (this_ptr->deformable_model_ptr);
      iVar3 = this_ptr->lod_index;
      if (pCVar4->vertex_count[iVar3] < 0x2bd) {
        engine_console_cpp_FUN_00436710
                  (g_CConsolePtr,">%s swarming on %s at LOD %d\n" + 1,this_ptr,target,iVar3);
        pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
                           (this_ptr->deformable_model_ptr);
        core_bugs_cpp_CBugs_initializeSwarmGraph_FUN_0041f940
                  (this_ptr,pCVar4->tri_count[this_ptr->lod_index],
                   pCVar4->tri_data_ptr[this_ptr->lod_index]);
        core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005471f0
                  (this_ptr->deformable_model_ptr,this_ptr->lod_index);
        iVar5 = 0;
        iVar3 = *(int *)&this_ptr->deformable_model_ptr->field_0x2234;
        if (0 < this_ptr->swarm_vertex_count) {
          iVar7 = 0;
          do {
            *(int *)((int)&DAT_007bcf48 + iVar7) = iVar5;
            iVar5 = iVar5 + 1;
            iVar7 = iVar7 + 4;
          } while (iVar5 < this_ptr->swarm_vertex_count);
        }
        for (iVar5 = this_ptr->swarm_vertex_count + -2; -1 < iVar5; iVar5 = iVar5 + -1) {
          if (-1 < iVar5) {
            iVar7 = 0;
            do {
              if (*(int *)(*(int *)((int)&DAT_007bcf4c + iVar7) * 0xc + 4 + iVar3) <
                  *(int *)(*(int *)((int)&DAT_007bcf48 + iVar7) * 0xc + 4 + iVar3)) {
                uVar1 = *(uint *)((int)&DAT_007bcf48 + iVar7);
                *(uint *)((int)&DAT_007bcf48 + iVar7) =
                     *(uint *)((int)&DAT_007bcf4c + iVar7);
                *(uint *)((int)&DAT_007bcf4c + iVar7) = uVar1;
              }
              iVar7 = iVar7 + 4;
            } while (iVar7 <= iVar5 * 4);
          }
        }
        iVar5 = *(int *)(iVar3 + 4 + DAT_007bcf48 * 0xc);
        iVar8 = 0;
        iVar7 = 0;
        pCVar9 = this_ptr;
        if (this_ptr->count < 1) {
          return;
        }
        do {
          *(uint *)&pCVar9->bugs[0].field_0x2c = 0xffffffff;
          *(int *)&pCVar9->bugs[0].field_0x30 = (&DAT_007bcf48)[iVar8];
          iVar6 = core_actor_cpp_getRandomInt_FUN_0040cfc0
                            (0,(int)(CONCAT44(this_ptr->swarm_vertex_count >> 0x1f,
                                              this_ptr->swarm_vertex_count) / 0xf));
          *(int *)&pCVar9->bugs[0].field_0x3c = iVar6;
          iVar8 = iVar8 + 1;
          if ((this_ptr->swarm_vertex_count <= iVar8) ||
             (iVar5 + 0x2a < *(int *)(iVar3 + 4 + (&DAT_007bcf48)[iVar8] * 0xc))) {
            iVar8 = 0;
          }
          iVar7 = iVar7 + 1;
          pCVar9 = (CBugs *)&(pCVar9->base).base.base.orient_matrix.m[0].y;
        } while (iVar7 < this_ptr->count);
        return;
      }
      this_ptr->lod_index = iVar3 + 1;
      pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
                         (this_ptr->deformable_model_ptr);
    } while (this_ptr->lod_index < pCVar4->num_lods);
    this_ptr->deformable_model_ptr = (CDeformableModelInstance *)0x0;
  }
  return;
}
