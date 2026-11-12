// Name: core_spawner.cpp_FUN_00563970
// Address: 00563970
// Address Range: [[00563970, 00563e37]]
// Convention: unknown
// Signature: void core_spawner_cpp_FUN_00563970(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_spawner_cpp_FUN_00563970(int param_1,float param_2)

{
  char cVar1;
  CDemonActor *pCVar2;
  CMotionList *this_ptr;
  int iVar3;
  char *pcVar4;
  uint *puVar5;
  char *pcVar6;
  char *pcVar7;
  uint *puVar8;
  CDemonActor *pCVar9;
  byte bVar10;
  int iVar11;
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
  
  bVar10 = 0;
  if ((*(uint *)(param_1 + 0x1b4) & 0x7fffffff) == 0) {
    *(float *)(param_1 + 0x1b8) = *(float *)(param_1 + 0x1b8) - param_2;
    if (0.0 < *(float *)(param_1 + 0x1b8)) {
      return;
    }
    *(uint *)(param_1 + 0x1b8) = 0x3f000000;
    if ((0 < *(int *)(param_1 + 0x1c4)) && (*(int *)(param_1 + 0x1c4) <= *(int *)(param_1 + 0x1c0)))
    {
      return;
    }
    pCVar2 = core_mission_cpp_CDemonMission_findActorByName_FUN_004f6e90
                       (0x01D81080,(char *)(param_1 + 0x158));
    pcVar6 = (char *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar2,g_CEnemyClassInfo.name_hash)
    ;
    if ((pcVar6 == (char *)0x0) ||
       (iVar3 = (**(code **)(*(int *)(pcVar6 + 0x154) + 0x10c))(pcVar6), iVar3 == 0)) {
      if (pCVar2 != (CDemonActor *)0x0) {
        return;
      }
      *(uint *)(param_1 + 0x1b4) = *(uint *)(param_1 + 0x1bc);
    }
    else {
      pcVar4 = (char *)0x5d54af;
      iVar3 = -1;
      do {
        pcVar7 = pcVar6;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar7 = pcVar6 + (uint)bVar10 * -2 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar7;
      } while (cVar1 != '\0');
      pcVar7 = pcVar7 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar7 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar7[1] = cVar1;
        pcVar7 = pcVar7 + 2;
      } while (cVar1 != '\0');
      *(uint *)(param_1 + 0x1b4) = *(uint *)(param_1 + 0x1bc);
    }
  }
  *(float *)(param_1 + 0x1b4) = *(float *)(param_1 + 0x1b4) - param_2;
  if (*(float *)(param_1 + 0x1b4) <= 0.0) {
    *(uint *)(param_1 + 0x1b8) = 0x3f000000;
    *(uint *)(param_1 + 0x1b4) = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_78 = 0x3f800000;
    core_actor_cpp_FUN_00408b00(param_1,&uStack_80);
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0x3fc00000;
    core_actor_cpp_FUN_00408b00(param_1,&uStack_50);
    fStack_2c = (float)core_setcolid_cpp_FUN_0053de10
                                 (g_CDemonSetPtr,*(uint *)(param_1 + 0x20),
                                  *(uint *)(param_1 + 0x28),0,0,0x3f800000,
                                  *(uint *)(param_1 + 0x24),
                                  *(float *)(param_1 + 0x24) + _DAT_005d54b7);
    fStack_14 = fStack_2c;
    core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
    if (1.0 <= fStack_2c) {
      if (*(int *)(param_1 + 0x1c8) != 0) {
        (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
        puVar5 = auStack_98;
        puVar8 = auStack_b0;
        for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar8 = *puVar5;
          puVar5 = puVar5 + (uint)bVar10 * -2 + 1;
          puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
        }
        iVar3 = core_box_cpp_FUN_0041daf0(auStack_b0);
        if (iVar3 != 0) {
          return;
        }
      }
      pCVar2 = (CDemonActor *)core_actor_cpp_createActorByName_FUN_0040c4f0(param_1 + 0x176);
      if (pCVar2 != (CDemonActor *)0x0) {
        iVar3 = (CCharacter *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar2,g_CCharacterClassInfo.name_hash);
        core_actor_cpp_castToClassHash_FUN_0040c840(pCVar2,g_CBoxActorClassInfo.name_hash);
        if (iVar3 != 0) {
          iVar11 = -1;
          pcVar6 = (char *)(param_1 + 0x2520);
          do {
            if (iVar11 == 0) break;
            iVar11 = iVar11 + -1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + (uint)bVar10 * -2 + 1;
          } while (cVar1 != '\0');
          if (iVar11 != -2) {
            core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
                      ((CDeformableModelInstance *)(iVar3 + 0x158),(char *)(param_1 + 0x2520));
          }
        }
        pcVar6 = (char *)(param_1 + 0x158);
        pCVar9 = pCVar2;
        do {
          cVar1 = *pcVar6;
          pCVar9->actor_name[0] = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar6[1];
          pcVar6 = pcVar6 + 2;
          pCVar9->actor_name[1] = cVar1;
          pCVar9 = (CDemonActor *)(pCVar9->actor_name + 2);
        } while (cVar1 != '\0');
        (pCVar2->location).position.x = *(float *)(param_1 + 0x20);
        (pCVar2->location).position.y = *(float *)(param_1 + 0x24);
        (pCVar2->location).position.z = *(float *)(param_1 + 0x28);
        (pCVar2->location).area_id = *(int *)(param_1 + 0x2c);
        if (&pCVar2->orient != (UOrientationVector *)(param_1 + 0x30)) {
          (pCVar2->orient).vec.x = *(float *)(param_1 + 0x30);
          (pCVar2->orient).vec.y = *(float *)(param_1 + 0x34);
          (pCVar2->orient).vec.z = *(float *)(param_1 + 0x38);
        }
        (*((pCVar2->vtable)._ub)->setup)(pCVar2);
        iVar3 = (CCharacter *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar2,g_CCharacterClassInfo.name_hash);
        if ((iVar3 != 0) && (*(char *)(param_1 + 0x194) != '\0')) {
          iVar11 = 1;
          pcVar6 = (char *)(param_1 + 0x194);
          this_ptr = core_motion_cpp_CMotionController_getMotionList_FUN_004fc310
                               ((CMotionController *)(iVar3 + 0x158));
          iVar11 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004fb9c0(this_ptr,pcVar6,iVar11);
          core_motion_cpp_CMotionController_jumpToMotion_FUN_004fc420
                    ((CMotionController *)(iVar3 + 0x158),iVar11,0.0);
          (*(code *)**(uint **)(iVar3 + 0x154))(iVar3);
        }
        iVar3 = (CZombie *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar2,g_CZombieClassInfo.name_hash);
        if (iVar3 != 0) {
          *(uint *)(iVar3 + 0xd0e4) = *(uint *)(param_1 + 0x1cc);
        }
        core_mission_cpp_CDemonMission_addActorToList_FUN_004f6930(0x01D81080,pCVar2);
        if ((CLocation *)&CStack_44 != &pCVar2->location) {
          CStack_44.x = (pCVar2->location).position.x;
          CStack_44.y = (pCVar2->location).position.y;
          CStack_44.z = (pCVar2->location).position.z;
        }
        CStack_44.y = CStack_44.y + _DAT_005d54bb;
        iVar3 = 0;
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
          iVar3 = iVar3 + 1;
          fStack_18 = CStack_38.x;
          fStack_14 = CStack_38.x;
          core_fire_cpp_CFireEffect_createSpark_FUN_004a23c0
                    (0x01C73654,&CStack_44,&CStack_5c,0x20000,0x10000,1,0xffff);
        } while (iVar3 < 0x20);
        *(int *)(param_1 + 0x1c0) = *(int *)(param_1 + 0x1c0) + 1;
        return;
      }
    }
  }
  return;
}
