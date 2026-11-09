// Name: core_dracbrid.cpp_FUN_0047cfe0
// Address: 0047cfe0
// Address Range: [[0047cfe0, 0047d1d3]]
// Convention: unknown
// Signature: int core_dracbrid_cpp_FUN_0047cfe0(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_dracbrid_cpp_FUN_0047cfe0(CCharacter *param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint render_flags;
  float fStack_48;
  uint auStack_44 [6];
  uint auStack_2c [7];
  
  bVar5 = 0;
  iVar1 = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_00484180(DAT_00612560);
  if (iVar1 == 0) {
    *(uint *)&param_1->field_0x27bc = 0;
  }
  if (*(int *)&param_1[1].field_0x124 != 2) {
    iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560);
    if ((((iVar2 == 0) || (*(int *)&param_1[1].field_0x124 == 0)) && (iVar1 == 0)) &&
       (*(int *)&param_1->field_0x24fc == 0)) {
      core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0((CDemonActor *)param_1);
      (**(code **)(*(int *)&param_1->field_0x154 + 0x1c))(param_1,0);
      puVar3 = auStack_2c;
      puVar4 = auStack_44;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
      }
      iVar1 = core_box_cpp_FUN_004207b0(auStack_44);
      if (iVar1 != 0) {
        iVar2 = *(int *)&param_1[1].field_0x124;
        *(uint *)&param_1->field_0x27bc = 1;
        if (iVar2 == 0) {
          if (*(int *)&param_1[1].field_0x238 == 0) {
            core_charactr_cpp_CCharacter_renderCharacter_FUN_0042e960(param_1);
          }
        }
        else {
          if (iVar2 == 1) {
            fStack_48 = (1.0 - *(float *)&param_1[1].field_0x128) / 0x3F800000;
          }
          else {
            fStack_48 = ((float)_DAT_005daebd - *(float *)&param_1[1].field_0x128) / 0x3F800000;
            if (fStack_48 < 0.0) {
              fStack_48 = 0.0;
            }
          }
          if (0.0 < (double)fStack_48) {
            engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,0);
            engine_drender_cpp_FUN_00483df0(DAT_00612560,fStack_48);
            engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_00484a40(DAT_00612560,1);
            if ((double)fStack_48 <= _DAT_005daebd) {
              render_flags = 0x267;
            }
            else {
              render_flags = 0x2e7;
            }
            core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_00569810
                      ((CDeformableModelInstance *)&param_1->field_0x158,-1,render_flags,1,0);
            engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_00484e00(DAT_00612560);
          }
        }
        if (_DAT_01d39d34 != 0) {
          iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560);
          if (iVar2 == 0) {
            core_motion_cpp_FUN_005254b0
                      ((CMotionController *)&param_1->field_0x158,(CDemonActor *)param_1);
            (**(code **)(*(int *)&param_1->field_0x154 + 0x58))(param_1);
          }
        }
      }
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0((CDemonActor *)param_1);
      return iVar1;
    }
  }
  return 0;
}
