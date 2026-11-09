// Name: core_bugs.cpp_FUN_0041f0f0
// Address: 0041f0f0
// Address Range: [[0041f0f0, 0041f372]]
// Convention: unknown
// Signature: void core_bugs_cpp_FUN_0041f0f0(CBugs *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_bugs_cpp_FUN_0041f0f0(CBugs *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  char *pcVar10;
  uint *puVar11;
  uint *puStack_2c;
  int iStack_28;
  CKeyFramedModelInstance *pCStack_20;
  char *pcStack_1c;
  
  *(uint *)&param_1->field_0x38 = 0;
  *(uint *)&param_1->field_0x34 = *(uint *)&param_1->field_0x38;
  *(uint *)&param_1->field_0x30 = *(uint *)&param_1->field_0x34;
  core_enemy_cpp_CEnemy_setup_FUN_00487eb0((CEnemy *)param_1);
  *(uint *)&param_1->field_0x16f00 = 4;
  iVar7 = 0;
  if (0 < *(int *)&param_1->field_0x16f00) {
    pcVar10 = &param_1->field_0x16f7c;
    do {
      if (*pcVar10 == '\0') {
        iVar6 = *(int *)&param_1->field_0x16f00 + -1;
        *(int *)&param_1->field_0x16f00 = iVar6;
        if (iVar7 < iVar6) {
          pCStack_20 = (CKeyFramedModelInstance *)(&param_1->field_0x16f04 + iVar7 * 0x17c);
          pcStack_1c = &param_1->field_0x170f8 + iVar7 * 0x17c;
          iVar6 = iVar7;
          do {
            core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(pCStack_20,pcStack_1c)
            ;
            iVar6 = iVar6 + 1;
            pCStack_20 = pCStack_20 + 1;
            pcStack_1c = pcStack_1c + 0x17c;
          } while (iVar6 < *(int *)&param_1->field_0x16f00);
        }
      }
      else {
        core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
                  ((CKeyFramedModelInstance *)(&param_1->field_0x16f04 + iVar7 * 0x17c));
        pcVar10 = pcVar10 + 0x17c;
        iVar7 = iVar7 + 1;
      }
    } while (iVar7 < *(int *)&param_1->field_0x16f00);
  }
  iStack_28 = 0;
  if (0 < *(int *)&param_1->field_0x10afc) {
    fVar1 = _DAT_005f3e28 * _DAT_005cc949;
    fVar2 = _DAT_005f3e28 * _DAT_005cc94d;
    puVar11 = (uint *)&param_1->field_0x10b20;
    puVar8 = (uint *)&param_1->field_0x10b14;
    puStack_2c = (uint *)&param_1->field_0x10b08;
    do {
      puVar9 = (uint *)(&param_1->field_0x10b00 + iStack_28 * 0x40);
      *puVar9 = 0;
      iVar7 = core_actor_cpp_FUN_0040cfc0(0,*(int *)&param_1->field_0x16f00 + -1);
      fVar3 = fVar1 * (float)_DAT_005cc951;
      fVar4 = fVar2 * (float)_DAT_005cc951;
      puVar9[1] = iVar7;
      uVar5 = core_actor_cpp_FUN_0040cf60(fVar4,fVar3);
      puVar9[3] = 0;
      puVar9[2] = uVar5;
      uVar5 = core_actor_cpp_FUN_0040cf60(fVar4,fVar3);
      puVar9[4] = uVar5;
      puVar8[2] = 0;
      puVar8[1] = puVar8[2];
      *puVar8 = puVar8[1];
      uVar5 = core_actor_cpp_FUN_0040cf60(0xc0490fdb,0x40490fdb);
      puVar9[6] = uVar5;
      if (puVar11 != puStack_2c) {
        *puVar11 = puVar8[-3];
        puVar11[1] = puVar8[-2];
        puVar11[2] = puVar8[-1];
      }
      puVar11 = puVar11 + 0x10;
      puVar8 = puVar8 + 0x10;
      puStack_2c = puStack_2c + 0x10;
      iStack_28 = iStack_28 + 1;
    } while (iStack_28 < *(int *)&param_1->field_0x10afc);
  }
  core_bugs_cpp_FUN_00421a00(param_1);
  *(uint *)&param_1->field_0x1e620 = 0xffffd8f1;
  *(uint *)&param_1->field_0x1e624 = 0xffffd8f1;
  *(uint *)&param_1->field_0x100 = 1;
  *(uint *)&param_1->field_0x1e630 = 0;
  return;
}
