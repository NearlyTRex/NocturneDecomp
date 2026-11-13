// Name: core_spawner.cpp_CSpawner_process_FUN_00563970
// Address: 00563970
// Address Range: [[00563970, 00563e37]]
// Convention: __cdecl
// Signature: void __cdecl core_spawner_cpp_CSpawner_process_FUN_00563970(CSpawner *this_ptr,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
  uint auStack_b0 [6];
  uint auStack_98 [6];
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  CVector3f CStack_5c;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  CVector3f CStack_44;
  CVector3f CStack_38;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
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
                       (0x01D81080,this_ptr->spawn_name);
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
      pcVar8 = (char *)0x5d54af;
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
  this_ptr->spawn_timer = this_ptr->spawn_timer - param_2;
  if (this_ptr->spawn_timer <= 0.0) {
    this_ptr->reset_timer = 0.5;
    this_ptr->spawn_timer = 0.0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_78 = 0x3f800000;
    core_actor_cpp_FUN_00408b00(this_ptr,&uStack_80);
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0x3fc00000;
    core_actor_cpp_FUN_00408b00(this_ptr,&uStack_50);
    fStack_2c = (float)core_setcolid_cpp_FUN_0053de10
                                 (g_CDemonSetPtr,(this_ptr->base).location.position.x,
                                  (this_ptr->base).location.position.z,0,0,0x3f800000,
                                  (this_ptr->base).location.position.y,
                                  (this_ptr->base).location.position.y + _DAT_005d54b7);
    fStack_14 = fStack_2c;
    core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
    if (1.0 <= fStack_2c) {
      if (this_ptr->dont_spawn_when_in_view != 0) {
        (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
        puVar7 = auStack_98;
        puVar11 = auStack_b0;
        for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar11 = *puVar7;
          puVar7 = puVar7 + (uint)bVar12 * -2 + 1;
          puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
        }
        iVar6 = core_box_cpp_FUN_0041daf0(auStack_b0);
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
        core_mission_cpp_CDemonMission_addActorToList_FUN_004f6930(0x01D81080,pCVar4);
        if ((CLocation *)&CStack_44 != &pCVar4->location) {
          CStack_44.x = (pCVar4->location).position.x;
          CStack_44.y = (pCVar4->location).position.y;
          CStack_44.z = (pCVar4->location).position.z;
        }
        CStack_44.y = CStack_44.y + _DAT_005d54bb;
        iVar6 = 0;
        do {
          fStack_28 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-20.0,20.0);
          fStack_24 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-20.0,20.0);
          CStack_38.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-20.0,20.0);
          fStack_20 = fStack_24;
          fStack_1c = fStack_28;
          CStack_38.y = fStack_24;
          CStack_38.z = fStack_28;
          if (&CStack_5c != &CStack_38) {
            CStack_5c.y = fStack_24;
            CStack_5c.z = fStack_28;
            CStack_5c.x = CStack_38.x;
          }
          iVar6 = iVar6 + 1;
          fStack_18 = CStack_38.x;
          fStack_14 = CStack_38.x;
          core_fire_cpp_CFireEffect_createSpark_FUN_004a23c0
                    (0x01C73654,&CStack_44,&CStack_5c,0x20000,0x10000,1,0xffff);
        } while (iVar6 < 0x20);
        this_ptr->number_of_spawns = this_ptr->number_of_spawns + 1;
        return;
      }
    }
  }
  return;
}
