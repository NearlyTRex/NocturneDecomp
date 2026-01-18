// Name: core_bodypart.cpp_CBodyPart_renderOpaque_FUN_004194b0
// Address: 004194b0
// Address Range: [[004194b0, 004195a3] [004195c0, 004195cb] [004195ec, 00419607]]
// Convention: __cdecl
// Signature: int core_bodypart.cpp_CBodyPart_renderOpaque_FUN_004194b0(CBodyPart * this_ptr)

#include "nocturne.h"

int __cdecl core_bodypart_cpp_CBodyPart_renderOpaque_FUN_004194b0(CBodyPart *this_ptr)

{
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  CKeyFramedModelInstance *this_ptr_01;
  CVector3i *position;
  CBoundingBox3D local_20;
  
  if (*(int *)this_ptr->field1_0x158 < 2) {
    g_CDemonSetPtr->unk_lighting_param2 = *(int *)(this_ptr->field1_0x158 + 0xb58);
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base_actor);
    this_ptr_00 = (*((this_ptr->base_actor).vtable)->getBoundingBox)
                            (&this_ptr->base_actor,&local_20);
    iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
    *(int *)(this_ptr->field1_0x158 + 0xdd4) = iVar1;
    if (iVar1 != 0) {
      if ((*(int *)(this_ptr->field1_0x158 + 0xb5c) == 0) ||
         (iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2),
         iVar1 != 0)) {
        core_bodypart_cpp_FUN_00419340();
      }
      iVar1 = 0;
      if (0 < *(int *)(this_ptr->field1_0x158 + 0x134)) {
        this_ptr_01 = (CKeyFramedModelInstance *)(this_ptr->field1_0x158 + 0x150);
        position = (CVector3i *)(this_ptr->field1_0x158 + 0x144);
        do {
          engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                    (g_CDemonRendererPtr2,position,
                     (CVector3i *)(this_ptr->field1_0x158 + iVar1 * 0x194 + 0x138));
          core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
                    (this_ptr_01,0.0,-1);
          iVar1 = iVar1 + 1;
          position = (CVector3i *)&position[0x21].z;
          this_ptr_01 = (CKeyFramedModelInstance *)(this_ptr_01[1].part_visibility_flags + 6);
          engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
        } while (iVar1 < *(int *)(this_ptr->field1_0x158 + 0x134));
      }
    }
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
    g_CDemonSetPtr->unk_lighting_param2 = 0;
    return *(int *)(this_ptr->field1_0x158 + 0xdd4);
  }
  if ((*(int *)(this_ptr->field1_0x158 + 0xdd4) != 0) &&
     (0 < *(int *)(this_ptr->field1_0x158 + 0x5f4))) {
    return 1;
  }
  return 0;
}
