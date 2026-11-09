// Name: core_bodypart.cpp_FUN_00418fc0
// Address: 00418fc0
// Address Range: [[00418fc0, 00419127]]
// Convention: unknown
// Signature: undefined4 core_bodypart_cpp_FUN_00418fc0(CBodyPart *param_1)

#include "nocturne.h"

uint core_bodypart_cpp_FUN_00418fc0(CBodyPart *param_1)

{
  int iVar1;
  uint *puVar2;
  CKeyFramedModelInstance *this_ptr;
  uint *puVar3;
  CVector3f *euler_angles;
  byte bVar4;
  uint auStack_38 [6];
  uint auStack_20 [6];
  byte *puStack_8;
  
  bVar4 = 0;
  if (*(int *)&param_1->field_0x158 < 2) {
    *(uint *)&g_CDemonSetPtr->field_0x15ac98 = *(uint *)&param_1->field_0xcb0;
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0((CDemonActor *)param_1);
    (**(code **)(*(int *)&param_1->field_0x154 + 0x1c))(param_1,0);
    puVar2 = auStack_38;
    puVar3 = auStack_20;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    iVar1 = core_box_cpp_FUN_004207b0(auStack_20);
    *(int *)&param_1->field_0xf30 = iVar1;
    if (iVar1 != 0) {
      if ((*(int *)&param_1->field_0xcb4 == 0) ||
         (iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560),
         iVar1 != 0)) {
        core_bodypart_cpp_CBodyPart_renderGeometry_FUN_00418e50(param_1,-1);
      }
      iVar1 = 0;
      if (0 < *(int *)&param_1->field_0x28c) {
        puStack_8 = &param_1->field_0x290;
        this_ptr = (CKeyFramedModelInstance *)&param_1->field_0x2a8;
        euler_angles = (CVector3f *)&param_1->field_0x29c;
        do {
          engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
                    (DAT_00612560,euler_angles,(CVector3f *)(puStack_8 + iVar1 * 0x194));
          core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0(this_ptr,0.0,-1);
          iVar1 = iVar1 + 1;
          euler_angles = (CVector3f *)&euler_angles[0x21].field_0x8;
          this_ptr = (CKeyFramedModelInstance *)&this_ptr[1].field_0x18;
          engine_matrix_c_pop_FUN_004839a0();
        } while (iVar1 < *(int *)&param_1->field_0x28c);
      }
    }
    engine_matrix_c_pop_FUN_004839a0();
    *(uint *)&g_CDemonSetPtr->field_0x15ac98 = 0;
    return *(uint *)&param_1->field_0xf30;
  }
  if ((*(int *)&param_1->field_0xf30 != 0) && (0 < *(int *)&param_1->field_0x74c)) {
    return 1;
  }
  return 0;
}
