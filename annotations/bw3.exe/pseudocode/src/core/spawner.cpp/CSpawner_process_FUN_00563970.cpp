// Name: core_spawner.cpp_CSpawner_process_FUN_00563970
// Address: 00563970
// Address Range: [[00563970, 00563e37]]
// Convention: __cdecl
// Signature: void __cdecl core_spawner_cpp_CSpawner_process_FUN_00563970(CSpawner *this_ptr,float param_2)

#include "nocturne.h"

void __cdecl core_spawner_cpp_CSpawner_process_FUN_00563970(CSpawner *this_ptr,float param_2)

{
  UOrientationVector *pUVar1;
  char cVar2;
  CCharacter *this_ptr_00;
  EDeathState EVar3;
  CDemonActor *pCVar4;
  CDemonActor *pCVar5;
  CMotionList *this_ptr_01;
  int iVar6;
  uint *puVar7;
  char *pcVar8;
  CCharacter *pCVar9;
  char *pcVar10;
  uint *puVar11;
  byte bVar12;
  float in_stack_0000000c;
  CBoundingBox3D *this_ptr_02;
  int in_stack_ffffff58;
  CBoundingBox3D CStack_a4;
  uint auStack_8c [4];
  CVector3f CStack_7c;
  CVector3f CStack_70;
  CVector3f CStack_64;
  byte auStack_50 [8];
  float fStack_48;
  uint uStack_44;
  CVector3f CStack_38;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar12 = 0;
  if (ABS(this_ptr->spawn_timer) == 0.0) {
    this_ptr->reset_timer = this_ptr->reset_timer - param_2;
    if (0.0 < this_ptr->reset_timer) {
      return;
    }
    this_ptr->reset_timer = 0.5;
    if ((0 < this_ptr->max_number_of_spawns) &&
       (this_ptr->max_number_of_spawns <= this_ptr->number_of_spawns)) {
      return;
    }
    pCVar4 = core_mission_cpp_CDemonMission_findActorByName_FUN_004f6e90
                       (g_CDemonMission_PTR_00600530,this_ptr->spawn_name);
    this_ptr_00 = (CCharacter *)
                  core_actor_cpp_castToClassHash_FUN_0040c840(pCVar4,g_CEnemyClassInfo.name_hash);
    if ((this_ptr_00 == (CCharacter *)0x0) ||
       (EVar3 = (*(((this_ptr_00->base).vtable._uc)->_uc).getDeathState)(this_ptr_00),
       EVar3 == DEATH_STATE_ALIVE)) {
      if (pCVar4 != (CDemonActor *)0x0) {
        return;
      }
      this_ptr->spawn_timer = this_ptr->spawn_time;
    }
    else {
      pcVar8 = "_dead";
      iVar6 = -1;
      do {
        pCVar9 = this_ptr_00;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pCVar9 = (CCharacter *)((int)this_ptr_00 + (uint)bVar12 * -2 + 1);
        pCVar4 = &this_ptr_00->base;
        this_ptr_00 = pCVar9;
      } while (pCVar4->actor_name[0] != '\0');
      pcVar10 = (char *)((int)&pCVar9[-1].walk_immediate_pending + 3);
      do {
        cVar2 = *pcVar8;
        *pcVar10 = cVar2;
        if (cVar2 == '\0') break;
        cVar2 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        pcVar10[1] = cVar2;
        pcVar10 = pcVar10 + 2;
      } while (cVar2 != '\0');
      this_ptr->spawn_timer = this_ptr->spawn_time;
    }
  }
  this_ptr->spawn_timer = this_ptr->spawn_timer - in_stack_0000000c;
  if (this_ptr->spawn_timer <= 0.0) {
    this_ptr->reset_timer = 0.5;
    this_ptr->spawn_timer = 0.0;
    CStack_7c.x = 0.0;
    CStack_7c.y = 0.0;
    CStack_7c.z = 1.0;
    core_actor_cpp_CDemonActor_transformVector_FUN_00408b00(&this_ptr->base,&CStack_7c,&CStack_70);
    auStack_50._4_4_ = 0.0;
    fStack_48 = 0.0;
    uStack_44 = 0x3fc00000;
    core_actor_cpp_CDemonActor_transformVector_FUN_00408b00
              (&this_ptr->base,(CVector3f *)(auStack_50 + 4),&CStack_64);
    fStack_28 = core_setcolid_cpp_CDemonSet_testCylinderCollision_FUN_0053de10
                          (g_CDemonSetPtr,(this_ptr->base).location.position.x,
                           (this_ptr->base).location.position.z,0.0,0.0,1.0,
                           (this_ptr->base).location.position.y,
                           (this_ptr->base).location.position.y + 6.0f);
    core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
    if (1.0 <= fStack_28) {
      if (this_ptr->dont_spawn_when_in_view != 0) {
        (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
        this_ptr_02 = &CStack_a4;
        puVar7 = auStack_8c;
        puVar11 = (uint *)&stack0xffffff54;
        for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar11 = *puVar7;
          puVar7 = puVar7 + (uint)bVar12 * -2 + 1;
          puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
        }
        iVar6 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041daf0(this_ptr_02,in_stack_ffffff58);
        if (iVar6 != 0) {
          return;
        }
      }
      pCVar4 = core_actor_cpp_createActorByName_FUN_0040c4f0(this_ptr->actor_class_name);
      if (pCVar4 != (CDemonActor *)0x0) {
        pCVar5 = (CCharacter *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar4,g_CCharacterClassInfo.name_hash)
        ;
        core_actor_cpp_castToClassHash_FUN_0040c840(pCVar4,g_CBoxActorClassInfo.name_hash);
        if (pCVar5 != (CDemonActor *)0x0) {
          pcVar8 = (this_ptr->spawn_model).model_name;
          iVar6 = -1;
          pcVar10 = pcVar8;
          do {
            if (iVar6 == 0) break;
            iVar6 = iVar6 + -1;
            cVar2 = *pcVar10;
            pcVar10 = pcVar10 + (uint)bVar12 * -2 + 1;
          } while (cVar2 != '\0');
          if (iVar6 != -2) {
            core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
                      ((CDeformableModelInstance *)(pCVar5 + 1),pcVar8);
          }
        }
        pcVar8 = this_ptr->spawn_name;
        pCVar5 = pCVar4;
        do {
          cVar2 = *pcVar8;
          pCVar5->actor_name[0] = cVar2;
          if (cVar2 == '\0') break;
          cVar2 = pcVar8[1];
          pcVar8 = pcVar8 + 2;
          pCVar5->actor_name[1] = cVar2;
          pCVar5 = (CDemonActor *)(pCVar5->actor_name + 2);
        } while (cVar2 != '\0');
        (pCVar4->location).position.x = (this_ptr->base).location.position.x;
        (pCVar4->location).position.y = (this_ptr->base).location.position.y;
        (pCVar4->location).position.z = (this_ptr->base).location.position.z;
        (pCVar4->location).area_id = (this_ptr->base).location.area_id;
        pUVar1 = &(this_ptr->base).orient;
        if (&pCVar4->orient != pUVar1) {
          (pCVar4->orient).vec.x = (pUVar1->vec).x;
          (pCVar4->orient).vec.y = (this_ptr->base).orient.vec.y;
          (pCVar4->orient).vec.z = (this_ptr->base).orient.vec.z;
        }
        (*((pCVar4->vtable)._ub)->setup)(pCVar4);
        pCVar5 = (CCharacter *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar4,g_CCharacterClassInfo.name_hash)
        ;
        if ((pCVar5 != (CDemonActor *)0x0) && (this_ptr->starting_state[0] != '\0')) {
          iVar6 = 1;
          pcVar8 = this_ptr->starting_state;
          this_ptr_01 = core_motion_cpp_CMotionController_getMotionList_FUN_004fc310
                                  ((CMotionController *)(pCVar5 + 1));
          iVar6 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004fb9c0(this_ptr_01,pcVar8,iVar6)
          ;
          core_motion_cpp_CMotionController_jumpToMotion_FUN_004fc420
                    ((CMotionController *)(pCVar5 + 1),iVar6,0.0);
          (*((pCVar5->vtable)._ub)->setup)(pCVar5);
        }
        pCVar5 = (CZombie *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar4,g_CZombieClassInfo.name_hash);
        if (pCVar5 != (CDemonActor *)0x0) {
          *(float *)(pCVar5[0x9b].create_event + 0x24) = this_ptr->start_guard_dist;
        }
        core_mission_cpp_CDemonMission_addActorToList_FUN_004f6930
                  (g_CDemonMission_PTR_00600530,pCVar4);
        if ((CLocation *)&CStack_38 != &pCVar4->location) {
          CStack_38.x = (pCVar4->location).position.x;
          CStack_38.y = (pCVar4->location).position.y;
          CStack_38.z = (pCVar4->location).position.z;
        }
        CStack_38.y = CStack_38.y + 3.0f;
        iVar6 = 0;
        do {
          fStack_1c = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-20.0,20.0);
          fStack_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-20.0,20.0);
          fStack_2c = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-20.0,20.0);
          fStack_14 = fStack_18;
          fStack_28 = fStack_18;
          fStack_24 = fStack_1c;
          if ((float *)auStack_50 != &fStack_2c) {
            auStack_50._4_4_ = fStack_18;
            fStack_48 = fStack_1c;
            auStack_50._0_4_ = fStack_2c;
          }
          iVar6 = iVar6 + 1;
          core_fire_cpp_CFireEffect_createSpark_FUN_004a23c0
                    (g_CFireEffect_PTR_005fc5a0,&CStack_38,(CVector3f *)auStack_50,0x20000,0x10000,1
                     ,0xffff);
        } while (iVar6 < 0x20);
        this_ptr->number_of_spawns = this_ptr->number_of_spawns + 1;
        return;
      }
    }
  }
  return;
}
