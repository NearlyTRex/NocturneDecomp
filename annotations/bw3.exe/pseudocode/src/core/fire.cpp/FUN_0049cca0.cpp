// Name: core_fire.cpp_FUN_0049cca0
// Address: 0049cca0
// Address Range: [[0049cca0, 0049ce8e]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_0049cca0(float *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_FUN_0049cca0(float *param_1)

{
  CDemonActor_vtable *pCVar1;
  CDemonActor *actor;
  float fVar2;
  int iVar3;
  byte bVar4;
  float afStackY_1040 [1015];
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  CDemonActor *local_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  int iStack_24;
  CLocation *pCStack_20;
  int iStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar4 = 0;
  actor = (CDemonActor *)core_actor_cpp_createActorByName_FUN_0040c4f0("CBugs");
  local_34 = actor;
  core_mission_cpp_CDemonMission_generateActorName_FUN_004f7530(0x01D81080,actor);
  iVar3 = _DAT_01d5ba14;
  (actor->location).position.x = *param_1;
  (actor->location).position.y = param_1[1];
  (actor->location).position.z = param_1[2];
  (actor->location).area_id = *(int *)(*(int *)(iVar3 * 4 + 0x1d5ba04) + 0x2c);
  fStack_14 = (*((actor->vtable)._ub)->cylinderGroundCheck)(actor,0.5,(CVector3f *)0x0);
  pCVar1 = (actor->vtable)._ub;
  (actor->location).position.y = fStack_14;
  (*pCVar1->setup)(actor);
  core_mission_cpp_CDemonMission_addActorToList_FUN_004f6930(0x01D81080,actor);
  iStack_24 = 0;
  fStack_2c = 20.0;
  fStack_30 = 0.0;
  iStack_1c = 0;
  pCStack_20 = &actor->location;
  while( true ) {
    if (g_CDemonSetPtr->actor_count <= iStack_1c) break;
    fVar2 = (float)core_actor_cpp_castToClassHash_FUN_0040c840
                             (*(uint *)((int)g_CDemonSetPtr->actors + iStack_24),
                              g_CCharacterClassInfo.name_hash);
    fStack_18 = fVar2;
    if (fVar2 != 0.0) {
      iVar3 = (**(code **)(*(int *)((int)fVar2 + 0x154) + 0x10c))(fVar2);
      if (iVar3 == 0) {
        iVar3 = (CEnemy *)core_actor_cpp_castToClassHash_FUN_0040c840(fVar2,g_CEnemyClassInfo.name_hash);
        if (iVar3 != 0) {
          iVar3 = (CBugs *)core_actor_cpp_castToClassHash_FUN_0040c840(fVar2,g_CBugsClassInfo.name_hash);
          if (iVar3 == 0) {
            fStack_4c = (pCStack_20->position).x - *(float *)((int)fVar2 + 0x20);
            fStack_48 = (pCStack_20->position).y - *(float *)((int)fVar2 + 0x24);
            fStack_44 = (pCStack_20->position).z - *(float *)((int)fVar2 + 0x28);
            fStack_58 = fStack_4c;
            (&stack0xffffffac)[(uint)bVar4 * 0xfffffffe] =
                 (float)*(uint *)((int)&stack0xffffffb8 + (uint)bVar4 * -8);
            *(uint *)((int)&stack0xffffffb0 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
                 *(uint *)((int)&stack0xffffffbc + (uint)bVar4 * -8 + (uint)bVar4 * -8);
            if (&stack0xffffffc0 != &stack0xffffffa8) {
              fStack_40 = fStack_58;
              fStack_3c = fStack_54;
              fStack_38 = fStack_50;
            }
            fStack_28 = SQRT(fStack_38 * fStack_38 + fStack_40 * fStack_40 + fStack_3c * fStack_3c);
            if (fStack_28 < fStack_2c) {
              fStack_30 = fStack_18;
              fStack_2c = fStack_28;
            }
          }
        }
      }
    }
    iStack_1c = iStack_1c + 1;
    iStack_24 = iStack_24 + 4;
  }
  if (fStack_30 == 0.0) {
    return;
  }
  local_34[0x99].orient_matrix.m[1].y = fStack_30;
  return;
}
