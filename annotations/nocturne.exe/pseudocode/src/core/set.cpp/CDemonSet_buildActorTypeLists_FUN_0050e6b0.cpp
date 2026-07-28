// Name: core_set.cpp_CDemonSet_buildActorTypeLists_FUN_0050e6b0
// Address: 0050e6b0
// Address Range: [[0050e6b0, 0050e81f]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_buildActorTypeLists_FUN_0050e6b0(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_buildActorTypeLists_FUN_0050e6b0(CDemonSet *this_ptr)

{
  int iVar1;
  CEnemy *actor_ptr;
  uint class_name_hash;
  CDemonActor *pCVar2;
  CCharacter *pCVar3;
  int iVar4;
  CDemonSet *pCVar5;
  
  this_ptr->characters[0x6d6] = (CCharacter *)0x0;
  this_ptr->enemies[0x6d6] = (CEnemy *)0x0;
  this_ptr->threats[0x6d6] = (CDemonActor *)0x0;
  this_ptr->collidable_actors[0x6d6] = (CDemonActor *)0x0;
  iVar1 = *(int *)this_ptr->lights[199].filter_names[0x14];
  this_ptr->actors[0x6d6] = (CDemonActor *)0x0;
  iVar4 = 0;
  pCVar5 = this_ptr;
  if (0 < iVar1) {
    do {
      actor_ptr = *(CEnemy **)(pCVar5->lights[199].filter_names[0x14] + 4);
      if (((actor_ptr->base).base.is_transparent != 0) ||
         ((actor_ptr->base).base.is_renderable != 0)) {
        this_ptr->collidable_actors
        [(int)((int)&this_ptr->collidable_actors[0x6d6][5].orient_matrix.m[0].z + 3)] =
             (CDemonActor *)actor_ptr;
        this_ptr->collidable_actors[0x6d6] =
             (CDemonActor *)(this_ptr->collidable_actors[0x6d6]->actor_name + 1);
      }
      pCVar2 = core_actor_cpp_castToClassHash_FUN_0040d890
                         ((CDemonActor *)actor_ptr,g_CCharacterActorType_00765a60.name_hash);
      this_ptr->actors[(int)((int)&this_ptr->actors[0x6d6][5].orient_matrix.m[0].z + 3)] = pCVar2;
      class_name_hash = g_CEnemyActorType_01bcdebc.name_hash;
      if (this_ptr->actors[(int)((int)&this_ptr->actors[0x6d6][5].orient_matrix.m[0].z + 3)] ==
          (CDemonActor *)0x0) {
        pCVar2 = core_actor_cpp_castToClassHash_FUN_0040d890
                           ((CDemonActor *)actor_ptr,g_CWayPointActorType_02ddf514.name_hash);
        this_ptr->threats[(int)((int)&this_ptr->threats[0x6d6][5].orient_matrix.m[0].z + 3)] =
             pCVar2;
        if (this_ptr->threats[(int)((int)&this_ptr->threats[0x6d6][5].orient_matrix.m[0].z + 3)] !=
            (CDemonActor *)0x0) {
          this_ptr->threats[0x6d6] = (CDemonActor *)(this_ptr->threats[0x6d6]->actor_name + 1);
        }
        pCVar2 = core_actor_cpp_castToClassHash_FUN_0040d890
                           ((CDemonActor *)actor_ptr,g_CTriggerActorType_02dd1084.name_hash);
        if (((pCVar2 != (CDemonActor *)0x0) && (*(int *)(pCVar2[1].actor_name + 0x1c) == 4)) &&
           (pCVar2[2].orient_matrix.m[2].y != 0.0)) goto LAB_0050e795;
      }
      else {
        this_ptr->actors[0x6d6] = (CDemonActor *)(this_ptr->actors[0x6d6]->actor_name + 1);
        pCVar3 = (CCharacter *)
                 core_actor_cpp_castToClassHash_FUN_0040d890
                           ((CDemonActor *)actor_ptr,class_name_hash);
        this_ptr->characters[(int)((int)(this_ptr->characters[0x6d6]->model).rest_pose_data + 0x73)]
             = pCVar3;
        if (this_ptr->characters
            [(int)((int)(this_ptr->characters[0x6d6]->model).rest_pose_data + 0x73)] !=
            (CCharacter *)0x0) {
          this_ptr->characters[0x6d6] =
               (CCharacter *)((this_ptr->characters[0x6d6]->base).actor_name + 1);
LAB_0050e795:
          this_ptr->enemies
          [(int)((int)(this_ptr->enemies[0x6d6]->base).model.rest_pose_data + 0x73)] = actor_ptr;
          this_ptr->enemies[0x6d6] =
               (CEnemy *)((this_ptr->enemies[0x6d6]->base).base.actor_name + 1);
        }
      }
      iVar4 = iVar4 + 1;
      pCVar5 = (CDemonSet *)pCVar5->cameras;
    } while (iVar4 < *(int *)this_ptr->lights[199].filter_names[0x14]);
  }
  return;
}
