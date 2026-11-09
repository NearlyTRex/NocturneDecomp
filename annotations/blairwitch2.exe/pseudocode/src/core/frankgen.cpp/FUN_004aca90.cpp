// Name: core_frankgen.cpp_FUN_004aca90
// Address: 004aca90
// Address Range: [[004aca90, 004acc1b]]
// Convention: unknown
// Signature: int core_frankgen_cpp_FUN_004aca90(CFrankenstienMachine *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_frankgen_cpp_FUN_004aca90(CFrankenstienMachine *param_1)

{
  int iVar1;
  float fVar2;
  CDemonActor *pCVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  float10 fVar8;
  uint uVar9;
  float fStack_50;
  uint auStack_4c [6];
  uint auStack_34 [6];
  double dStack_1c;
  
  bVar7 = 0;
  if (*(int *)(0x01D182F0 + 0x1008) != 0) {
    pCVar3 = core_frankgen_cpp_FUN_004ace60();
    *(uint *)&param_1->field_0x2b8 = *(uint *)&pCVar3[1].field_0x4;
    core_frankgen_cpp_FUN_004accb0(param_1);
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0((CDemonActor *)param_1);
  uVar9 = 0;
  (**(code **)(*(int *)&param_1->field_0x2b0 + 0x24))(param_1);
  puVar5 = auStack_4c;
  puVar6 = auStack_34;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  iVar4 = core_box_cpp_FUN_0041a840(CONCAT44(uVar9,auStack_34));
  if (iVar4 != 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
              ((CKeyFramedModelInstance *)&param_1->field_0x2e0,*(float *)&param_1->field_0x2dc,-1);
    if (param_1->field_0x4e0 != '\0') {
      iVar1 = *(int *)&param_1->field_0x2b8;
      if (iVar1 < 0x4400c000) {
        fStack_50 = 201.0;
      }
      else if (iVar1 < 0x44e10000) {
        fStack_50 = 0.0;
      }
      else if (iVar1 < 0x44ed8000) {
        fStack_50 = *(float *)&param_1->field_0x2b8 + _DAT_005d6ccd;
      }
      else if (iVar1 < 0x44fa0000) {
        fStack_50 = 100.0;
      }
      else {
        fVar2 = (*(float *)&param_1->field_0x2b8 + _DAT_005d6ca5) * (float)_DAT_005d6ca9;
        dStack_1c = floor((double)(fVar2 * _DAT_005d6cb1));
        fVar8 = (float10)fVar2 - (float10)dStack_1c * (float10)_DAT_005d6cb9;
        fStack_50 = (float)fVar8;
        if ((float10)_DAT_005d6cc1 < fVar8) {
          fStack_50 = _DAT_005d6cc5 - fStack_50;
        }
        fStack_50 = fStack_50 + _DAT_005d6cc9;
      }
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
                ((CKeyFramedModelInstance *)&param_1->field_0x468,fStack_50,-1);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10((CDemonActor *)param_1);
      return iVar4;
    }
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10((CDemonActor *)param_1);
  return iVar4;
}
