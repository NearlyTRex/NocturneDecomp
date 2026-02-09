// Name: core_bodypart.cpp_CBodyPart_renderOpaque_FUN_004194b0
// Address: 004194b0
// Address Range: [[004194b0, 004195a3] [004195c0, 004195cb] [004195ec, 00419607]]
// Convention: __cdecl
// Signature: int __cdecl core_bodypart_cpp_CBodyPart_renderOpaque_FUN_004194b0(CBodyPart *this_ptr)

#include "nocturne.h"

int __cdecl core_bodypart_cpp_CBodyPart_renderOpaque_FUN_004194b0(CBodyPart *this_ptr)

{
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  CKeyFramedModelInstance *this_ptr_01;
  CVector3i *position;
  CBoundingBox3D local_20;
  
  if (this_ptr->render_in_background < 2) {
    g_CDemonSetPtr->unk_lighting_param2 = this_ptr->dont_use_normals;
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
    this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_20);
    iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
    this_ptr->unk9 = iVar1;
    if (iVar1 != 0) {
      if ((this_ptr->transparent_geometry_flag == 0) ||
         (iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2),
         iVar1 != 0)) {
        core_bodypart_cpp_CBodyPart_FUN_00419340(this_ptr);
      }
      iVar1 = 0;
      if (0 < *(int *)(this_ptr->unk5 + 0xfc)) {
        this_ptr_01 = (CKeyFramedModelInstance *)(this_ptr->unk5 + 0x118);
        position = (CVector3i *)(this_ptr->unk5 + 0x10c);
        do {
          engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                    (g_CDemonRendererPtr2,position,
                     (CVector3i *)(this_ptr->unk5 + iVar1 * 0x194 + 0x100));
          core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
                    (this_ptr_01,0.0,-1);
          iVar1 = iVar1 + 1;
          position = (CVector3i *)&position[0x21].z;
          this_ptr_01 = (CKeyFramedModelInstance *)(this_ptr_01[1].part_visibility_flags + 6);
          engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
        } while (iVar1 < *(int *)(this_ptr->unk5 + 0xfc));
      }
    }
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
    g_CDemonSetPtr->unk_lighting_param2 = 0;
    return this_ptr->unk9;
  }
  if ((this_ptr->unk9 != 0) && (0 < *(int *)(this_ptr->unk5 + 0x5bc))) {
    return 1;
  }
  return 0;
}
