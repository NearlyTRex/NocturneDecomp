// Name: core_fire.cpp_FUN_0049cca0
// Address: 0049cca0
// Address Range: [[0049cca0, 0049ce8e]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_0049cca0(undefined4 *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_FUN_0049cca0(uint *param_1)

{
  CDemonActor *actor;
  int iVar1;
  int iVar2;
  byte bVar3;
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
  int iStack_30;
  float fStack_2c;
  float fStack_28;
  int iStack_24;
  float *pfStack_20;
  int iStack_1c;
  int iStack_18;
  uint uStack_14;
  
  bVar3 = 0;
  actor = (CDemonActor *)core_actor_cpp_createActorByName_FUN_0040c4f0("CBugs");
  local_34 = actor;
  core_mission_cpp_CDemonMission_generateActorName_FUN_004f7530(0x01D81080,actor);
  iVar1 = _DAT_01d5ba14;
  *(uint *)&actor->field_0x20 = *param_1;
  *(uint *)&actor->field_0x24 = param_1[1];
  *(uint *)&actor->field_0x28 = param_1[2];
  *(uint *)&actor->field_0x2c = *(uint *)(*(int *)(iVar1 * 4 + 0x1d5ba04) + 0x2c);
  uStack_14 = (**(code **)(*(int *)&actor->field_0x154 + 0x40))(actor,0x3f000000,0);
  *(uint *)&actor->field_0x24 = uStack_14;
  (*(code *)**(uint **)&actor->field_0x154)(actor);
  core_mission_cpp_FUN_004f6930(0x01D81080,actor);
  iStack_24 = 0;
  fStack_2c = 20.0;
  iStack_30 = 0;
  iStack_1c = 0;
  pfStack_20 = (float *)&actor->field_0x20;
  while( true ) {
    if (*(int *)&g_CDemonSetPtr->field_0x14d164 <= iStack_1c) break;
    iVar1 = core_actor_cpp_castToClassHash_FUN_0040c840
                      (*(uint *)(&g_CDemonSetPtr->field_0x14d168 + iStack_24),
                       g_CCharacterClassInfo.name_hash);
    iStack_18 = iVar1;
    if (iVar1 != 0) {
      iVar2 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x10c))(iVar1);
      if (iVar2 == 0) {
        iVar2 = (CEnemy *)core_actor_cpp_castToClassHash_FUN_0040c840(iVar1,g_CEnemyClassInfo.name_hash);
        if (iVar2 != 0) {
          iVar2 = (CBugs *)core_actor_cpp_castToClassHash_FUN_0040c840(iVar1,g_CBugsClassInfo.name_hash);
          if (iVar2 == 0) {
            fStack_4c = *pfStack_20 - *(float *)(iVar1 + 0x20);
            fStack_48 = pfStack_20[1] - *(float *)(iVar1 + 0x24);
            fStack_44 = pfStack_20[2] - *(float *)(iVar1 + 0x28);
            fStack_58 = fStack_4c;
            (&stack0xffffffac)[(uint)bVar3 * 0xfffffffe] =
                 (float)*(uint *)((int)&stack0xffffffb8 + (uint)bVar3 * -8);
            *(uint *)((int)&stack0xffffffb0 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
                 *(uint *)((int)&stack0xffffffbc + (uint)bVar3 * -8 + (uint)bVar3 * -8);
            if (&stack0xffffffc0 != &stack0xffffffa8) {
              fStack_40 = fStack_58;
              fStack_3c = fStack_54;
              fStack_38 = fStack_50;
            }
            fStack_28 = SQRT(fStack_38 * fStack_38 + fStack_40 * fStack_40 + fStack_3c * fStack_3c);
            if (fStack_28 < fStack_2c) {
              iStack_30 = iStack_18;
              fStack_2c = fStack_28;
            }
          }
        }
      }
    }
    iStack_1c = iStack_1c + 1;
    iStack_24 = iStack_24 + 4;
  }
  if (iStack_30 == 0) {
    return;
  }
  *(int *)&local_34[0x99].field_0x4c = iStack_30;
  return;
}
