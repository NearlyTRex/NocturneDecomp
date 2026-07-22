// Name: core_bugs.cpp_CBugs_setup_FUN_004211e0
// Address: 004211e0
// Address Range: [[004211e0, 00421462]]
// Convention: unknown
// Signature: void core_bugs_cpp_CBugs_setup_FUN_004211e0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_bugs_cpp_CBugs_setup_FUN_004211e0(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  char *pcVar9;
  uint *puVar10;
  float fVar11;
  float fVar12;
  uint *local_2c;
  int local_28;
  int local_20;
  int local_1c;
  
  *(uint *)(param_1 + 0x38) = 0;
  *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x38);
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x34);
  core_enemy_cpp_CEnemy_setup_FUN_004796b0(param_1);
  *(uint *)(param_1 + 0x1212c) = 4;
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x1212c)) {
    iVar3 = param_1 + 0x12130;
    pcVar9 = (char *)(param_1 + 0x121a8);
    do {
      if (*pcVar9 == '\0') {
        iVar5 = *(int *)(param_1 + 0x1212c) + -1;
        *(int *)(param_1 + 0x1212c) = iVar5;
        if (iVar6 < iVar5) {
          local_20 = iVar3 + iVar6 * 0x17c;
          local_1c = iVar6 * 0x17c + 500 + iVar3;
          iVar5 = iVar6;
          do {
            core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(local_20,local_1c);
            iVar5 = iVar5 + 1;
            local_20 = local_20 + 0x17c;
            local_1c = local_1c + 0x17c;
          } while (iVar5 < *(int *)(param_1 + 0x1212c));
        }
      }
      else {
        core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(iVar6 * 0x17c + iVar3);
        pcVar9 = pcVar9 + 0x17c;
        iVar6 = iVar6 + 1;
      }
    } while (iVar6 < *(int *)(param_1 + 0x1212c));
  }
  local_28 = 0;
  if (0 < *(int *)(param_1 + 0xbd28)) {
    fVar11 = _DAT_0059aea8 * 12.0f;
    fVar12 = _DAT_0059aea8 * -12.0f;
    puVar10 = (uint *)(param_1 + 0xbd4c);
    puVar7 = (uint *)(param_1 + 0xbd40);
    local_2c = (uint *)(param_1 + 0xbd34);
    do {
      puVar8 = (uint *)(local_28 * 0x40 + param_1 + 0xbd2c);
      *puVar8 = 0;
      uVar4 = core_actor_cpp_getRandomInt_FUN_0040de00
                        (0,*(int *)(param_1 + 0x1212c) + -1,fVar11,fVar12);
      fVar1 = fVar11 * (float)0.5;
      fVar2 = fVar12 * (float)0.5;
      puVar8[1] = uVar4;
      uVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(fVar2,fVar1);
      puVar8[3] = 0;
      puVar8[2] = uVar4;
      uVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(fVar2,fVar1);
      puVar8[4] = uVar4;
      puVar7[2] = 0;
      puVar7[1] = puVar7[2];
      *puVar7 = puVar7[1];
      uVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0xc0490fdb,0x40490fdb);
      puVar8[6] = uVar4;
      if (puVar10 != local_2c) {
        *puVar10 = puVar7[-3];
        puVar10[1] = puVar7[-2];
        puVar10[2] = puVar7[-1];
      }
      puVar10 = puVar10 + 0x10;
      puVar7 = puVar7 + 0x10;
      local_2c = local_2c + 0x10;
      local_28 = local_28 + 1;
    } while (local_28 < *(int *)(param_1 + 0xbd28));
  }
  core_bugs_cpp_CBugs_recalculateBoundingBox_FUN_00423680(param_1);
  *(uint *)(param_1 + 0x1984c) = 0xffffd8f1;
  *(uint *)(param_1 + 0x19850) = 0xffffd8f1;
  *(uint *)(param_1 + 0x100) = 1;
  *(uint *)(param_1 + 0x1985c) = 0;
  return;
}
