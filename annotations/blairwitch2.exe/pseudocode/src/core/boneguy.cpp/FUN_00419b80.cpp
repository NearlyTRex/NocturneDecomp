// Name: core_boneguy.cpp_FUN_00419b80
// Address: 00419b80
// Address Range: [[00419b80, 00419c47]]
// Convention: unknown
// Signature: int core_boneguy_cpp_FUN_00419b80(CCharacter *param_1)

#include "nocturne.h"

int core_boneguy_cpp_FUN_00419b80(CCharacter *param_1)

{
  CDemonRenderer *pCVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint auStack_38 [6];
  uint auStack_20 [6];
  
  bVar5 = 0;
  if (*(int *)&param_1->field_0x2568 != 0) {
    return 0;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0((CDemonActor *)param_1);
  (**(code **)(*(int *)&param_1->field_0x2b0 + 0x24))(param_1,0);
  puVar3 = auStack_20;
  puVar4 = auStack_38;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  iVar2 = core_box_cpp_FUN_0041a840(auStack_38);
  if (iVar2 != 0) {
    engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046c540(DAT_0060b280,0);
    pCVar1 = DAT_0060b280;
    *(uint *)&g_CDemonSetPtr->field_0x15ac98 = 1;
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(pCVar1,0xffff);
    core_charactr_cpp_FUN_00424bd0(param_1);
    pCVar1 = DAT_0060b280;
    *(uint *)&g_CDemonSetPtr->field_0x15ac98 = 0;
    engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0046c900(pCVar1);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10((CDemonActor *)param_1);
  return iVar2;
}
