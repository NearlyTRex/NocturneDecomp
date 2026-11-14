// Name: core_fire.cpp_spawnDiseaseBugs_FUN_0049cca0
// Address: 0049cca0
// Address Range: [[0049cca0, 0049ce8e]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_spawnDiseaseBugs_FUN_0049cca0(CVector3f *position)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_spawnDiseaseBugs_FUN_0049cca0(CVector3f *position)

{
  CDemonActor_vtable *pCVar1;
  int iVar2;
  CDemonActor *pCVar3;
  CCharacter *this_ptr;
  EDeathState EVar4;
  byte bVar5;
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
  CCharacter *pCStack_30;
  float fStack_2c;
  float fStack_28;
  int iStack_24;
  CLocation *pCStack_20;
  int iStack_1c;
  CCharacter *pCStack_18;
  float fStack_14;
  
  bVar5 = 0;
  pCVar3 = core_actor_cpp_createActorByName_FUN_0040c4f0("CBugs");
  local_34 = pCVar3;
  core_mission_cpp_CDemonMission_generateActorName_FUN_004f7530(0x01D81080,pCVar3);
  iVar2 = _DAT_01d5ba14;
  (pCVar3->location).position.x = position->x;
  (pCVar3->location).position.y = position->y;
  (pCVar3->location).position.z = position->z;
  (pCVar3->location).area_id = *(int *)(*(int *)(iVar2 * 4 + 0x1d5ba04) + 0x2c);
  fStack_14 = (*((pCVar3->vtable)._ub)->cylinderGroundCheck)(pCVar3,0.5,(CVector3f *)0x0);
  pCVar1 = (pCVar3->vtable)._ub;
  (pCVar3->location).position.y = fStack_14;
  (*pCVar1->setup)(pCVar3);
  core_mission_cpp_CDemonMission_addActorToList_FUN_004f6930(0x01D81080,pCVar3);
  iStack_24 = 0;
  fStack_2c = 20.0;
  pCStack_30 = (CCharacter *)0x0;
  iStack_1c = 0;
  pCStack_20 = &pCVar3->location;
  while( true ) {
    if (g_CDemonSetPtr->actor_count <= iStack_1c) break;
    this_ptr = (CCharacter *)
               core_actor_cpp_castToClassHash_FUN_0040c840
                         (*(CDemonActor **)((int)g_CDemonSetPtr->actors + iStack_24),
                          g_CCharacterClassInfo.name_hash);
    pCStack_18 = this_ptr;
    if (this_ptr != (CCharacter *)0x0) {
      EVar4 = (*(((this_ptr->base).vtable._uc)->_uc).getDeathState)(this_ptr);
      if (EVar4 == DEATH_STATE_ALIVE) {
        pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c840
                           ((CDemonActor *)this_ptr,g_CEnemyClassInfo.name_hash);
        if (pCVar3 != (CDemonActor *)0x0) {
          pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c840
                             ((CDemonActor *)this_ptr,g_CBugsClassInfo.name_hash);
          if (pCVar3 == (CDemonActor *)0x0) {
            fStack_4c = (pCStack_20->position).x - (this_ptr->base).location.position.x;
            fStack_48 = (pCStack_20->position).y - (this_ptr->base).location.position.y;
            fStack_44 = (pCStack_20->position).z - (this_ptr->base).location.position.z;
            fStack_58 = fStack_4c;
            (&stack0xffffffac)[(uint)bVar5 * 0xfffffffe] =
                 (float)*(uint *)((int)&stack0xffffffb8 + (uint)bVar5 * -8);
            *(uint *)((int)&stack0xffffffb0 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
                 *(uint *)((int)&stack0xffffffbc + (uint)bVar5 * -8 + (uint)bVar5 * -8);
            if (&stack0xffffffc0 != &stack0xffffffa8) {
              fStack_40 = fStack_58;
              fStack_3c = fStack_54;
              fStack_38 = fStack_50;
            }
            fStack_28 = SQRT(fStack_38 * fStack_38 + fStack_40 * fStack_40 + fStack_3c * fStack_3c);
            if (fStack_28 < fStack_2c) {
              pCStack_30 = pCStack_18;
              fStack_2c = fStack_28;
            }
          }
        }
      }
    }
    iStack_1c = iStack_1c + 1;
    iStack_24 = iStack_24 + 4;
  }
  if (pCStack_30 == (CCharacter *)0x0) {
    return;
  }
  local_34[0x99].orient_matrix.m[1].y = (float)pCStack_30;
  return;
}
