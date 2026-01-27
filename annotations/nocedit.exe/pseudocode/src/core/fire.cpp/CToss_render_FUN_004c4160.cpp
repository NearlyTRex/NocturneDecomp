// Name: core_fire.cpp_CToss_render_FUN_004c4160
// Address: 004c4160
// Address Range: [[004c4160, 004c41bf]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CToss_render_FUN_004c4160(CToss * this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CToss_render_FUN_004c4160(CToss *this_ptr)

{
  if (*(float *)(this_ptr->unk + 0x3dc) <= 0.0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr2,(CVector3f *)(this_ptr->unk + 0x180));
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr2,(CVector3i *)(this_ptr->unk + 0x18c),(CVector3i *)0x0);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
            ((CKeyFramedModelInstance *)(this_ptr->unk + 4),0.0,-1);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return;
}
