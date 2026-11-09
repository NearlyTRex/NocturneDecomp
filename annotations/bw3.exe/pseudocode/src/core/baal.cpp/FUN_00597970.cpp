// Name: core_baal.cpp_FUN_00597970
// Address: 00597970
// Address Range: [[00597970, 00597ae5]]
// Convention: unknown
// Signature: undefined4 core_baal_cpp_FUN_00597970(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_baal_cpp_FUN_00597970(CDemonActor *param_1)

{
  CDemonRenderer *this_ptr;
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float10 fVar5;
  uint auStack_54 [6];
  uint auStack_3c [8];
  int iStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar4 = 0;
  fStack_14 = (float)*(int *)&param_1[0x9b].field_0x28 * (float)_DAT_005d9699 * (float)_DAT_005d96a1
  ;
  fStack_18 = ((float)_DAT_005d9691 - (float)*(int *)&param_1[0x9b].field_0x28) *
              (float)_DAT_005d9699 * (float)_DAT_005d96a1;
  if (*(int *)&param_1[0x9b].field_0x20 == 0) {
    fVar5 = ((float10)fStack_14 * (float10)*(float *)&param_1[0x9b].field_0x1c) /
            (float10)*(float *)&param_1[0x9b].field_0x24;
    iVar1 = round();
    iStack_1c = (int)ROUND(fVar5);
    *(int *)&param_1[0x9b].field_0x18 = iVar1 - iStack_1c;
  }
  else {
    fVar5 = ((float10)fStack_14 * (float10)*(float *)&param_1[0x9b].field_0x1c) /
            (float10)*(float *)&param_1[0x9b].field_0x24 + (float10)fStack_18;
    round();
    *(int *)&param_1[0x9b].field_0x18 = (int)ROUND(fVar5);
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0(param_1);
  (**(code **)(*(int *)&param_1->field_0x154 + 0x1c))(param_1,0);
  puVar2 = auStack_3c;
  puVar3 = auStack_54;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = core_box_cpp_FUN_0041daf0(auStack_54);
  this_ptr = DAT_005f2afc;
  if (iVar1 != 0) {
    iVar1 = *(int *)&param_1[0x9b].field_0x18;
    *(uint *)&param_1[0x1d].field_0xc4 = 1;
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(this_ptr,iVar1);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,0);
    engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046e120(DAT_005f2afc,1);
    core_skeleton_cpp_FUN_0054e3a0((CDeformableModelInstance *)(param_1 + 1),-1,0x2e7,1,0);
    engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0046e4e0(DAT_005f2afc);
    if (_DAT_01d8e40c != 0) {
      core_motion_cpp_FUN_004fcdc0((CMotionController *)(param_1 + 1),param_1);
    }
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830(param_1);
  return *(uint *)&param_1[0x1d].field_0xc4;
}
