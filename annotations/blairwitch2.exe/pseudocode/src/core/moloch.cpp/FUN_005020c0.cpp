// Name: core_moloch.cpp_FUN_005020c0
// Address: 005020c0
// Address Range: [[005020c0, 005021f7]]
// Convention: unknown
// Signature: int core_moloch_cpp_FUN_005020c0(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_moloch_cpp_FUN_005020c0(CCharacter *param_1)

{
  byte *this_ptr;
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint auStack_34 [6];
  uint auStack_1c [6];
  
  bVar5 = 0;
  iVar1 = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_0046bc80(DAT_0060b280);
  if (iVar1 == 0) {
    *(uint *)&param_1->field_0x2828 = 0;
  }
  if (*(int *)&param_1->field_0x2568 == 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0((CDemonActor *)param_1);
    (**(code **)(*(int *)&param_1->field_0x2b0 + 0x24))(param_1,0);
    puVar3 = auStack_34;
    puVar4 = auStack_1c;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    iVar1 = core_box_cpp_FUN_0041a840(auStack_1c);
    if (iVar1 != 0) {
      iVar2 = *(int *)&param_1[2].field_0x6438;
      *(uint *)&param_1->field_0x2828 = 1;
      if (iVar2 == 0) {
        core_charactr_cpp_FUN_00424bd0(param_1);
      }
      else {
        this_ptr = &param_1[2].field_0x6508;
        core_morph_cpp_CMorph_updateModelFromDeformable_FUN_005b7150
                  ((CMorph *)this_ptr,0,(CDeformableModelInstance *)&param_1->field_0x2b4,0);
        core_morph_cpp_CMorph_updateModelFromDeformable_FUN_005b7150
                  ((CMorph *)this_ptr,1,(CDeformableModelInstance *)&param_1[2].field_0x4180,0);
        core_morph_cpp_CMorph_render_FUN_005b76a0
                  ((CMorph *)this_ptr,*(float *)&param_1[2].field_0x643c / _DAT_005fa3d8);
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
  return 0;
}
