// Name: core_boneguy.cpp_FUN_00418f90
// Address: 00418f90
// Address Range: [[00418f90, 0041906f]]
// Convention: unknown
// Signature: int core_boneguy_cpp_FUN_00418f90(CCharacter *param_1)

#include "nocturne.h"

int core_boneguy_cpp_FUN_00418f90(CCharacter *param_1)

{
  CDemonRenderer *pCVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint auStack_38 [6];
  uint auStack_20 [6];
  
  bVar5 = 0;
  if (*(int *)&param_1->field_0x24fc != 0) {
    return 0;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0((CDemonActor *)param_1);
  (**(code **)(*(int *)&param_1->field_0x154 + 0x1c))(param_1,0);
  puVar3 = auStack_20;
  puVar4 = auStack_38;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  iVar2 = core_box_cpp_FUN_0041daf0(auStack_38);
  if (iVar2 != 0) {
    engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046e120(DAT_005f2afc,0);
    pCVar1 = DAT_005f2afc;
    *(uint *)&g_CDemonSetPtr->field_0x15ac98 = 1;
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(pCVar1,0xffff);
    core_charactr_cpp_FUN_0042d8e0(param_1);
    pCVar1 = DAT_005f2afc;
    *(uint *)&g_CDemonSetPtr->field_0x15ac98 = 0;
    engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0046e4e0(pCVar1);
    if (0.0 < *(float *)&param_1->field_0x3254) {
      core_charactr_cpp_FUN_0042f310(param_1);
    }
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830((CDemonActor *)param_1);
  return iVar2;
}
