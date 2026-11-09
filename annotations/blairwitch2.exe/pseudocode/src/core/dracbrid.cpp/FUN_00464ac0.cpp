// Name: core_dracbrid.cpp_FUN_00464ac0
// Address: 00464ac0
// Address Range: [[00464ac0, 00464cb3]]
// Convention: unknown
// Signature: int core_dracbrid_cpp_FUN_00464ac0(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_dracbrid_cpp_FUN_00464ac0(CCharacter *param_1)

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
  iVar1 = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_0046bc80(DAT_0060b280);
  if (iVar1 == 0) {
    *(uint *)&param_1->field_0x2828 = 0;
  }
  if (*(int *)&param_1[1].field_0x124 != 2) {
    iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280);
    if ((((iVar2 == 0) || (*(int *)&param_1[1].field_0x124 == 0)) && (iVar1 == 0)) &&
       (*(int *)&param_1->field_0x2568 == 0)) {
      core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0((CDemonActor *)param_1);
      (**(code **)(*(int *)&param_1->field_0x2b0 + 0x24))(param_1,0);
      puVar3 = auStack_2c;
      puVar4 = auStack_44;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
      }
      iVar1 = core_box_cpp_FUN_0041a840(auStack_44);
      if (iVar1 != 0) {
        iVar2 = *(int *)&param_1[1].field_0x124;
        *(uint *)&param_1->field_0x2828 = 1;
        if (iVar2 == 0) {
          if (*(int *)&param_1[1].field_0x1c0 == 0) {
            core_charactr_cpp_FUN_00424bd0(param_1);
          }
        }
        else {
          if (iVar2 == 1) {
            fStack_48 = (1.0 - *(float *)&param_1[1].field_0x128) / 0x3F800000;
          }
          else {
            fStack_48 = ((float)_DAT_005d10c4 - *(float *)&param_1[1].field_0x128) / 0x3F800000;
            if (fStack_48 < 0.0) {
              fStack_48 = 0.0;
            }
          }
          if (0.0 < (double)fStack_48) {
            engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,0);
            engine_drender_cpp_FUN_0046b8f0(DAT_0060b280,fStack_48);
            engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046c540(DAT_0060b280,1);
            if ((double)fStack_48 <= _DAT_005d10c4) {
              render_flags = 0x267;
            }
            else {
              render_flags = 0x2e7;
            }
            core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_00547170
                      ((CDeformableModelInstance *)&param_1->field_0x2b4,-1,render_flags,1,0);
            engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0046c900(DAT_0060b280);
          }
        }
        if (_DAT_01d1cdc8 != 0) {
          iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280);
          if (iVar2 == 0) {
            core_motion_cpp_FUN_005042e0
                      ((CMotionController *)&param_1->field_0x2b4,(CDemonActor *)param_1);
            (**(code **)(*(int *)&param_1->field_0x2b0 + 0x60))(param_1);
          }
        }
      }
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10((CDemonActor *)param_1);
      return iVar1;
    }
  }
  return 0;
}
