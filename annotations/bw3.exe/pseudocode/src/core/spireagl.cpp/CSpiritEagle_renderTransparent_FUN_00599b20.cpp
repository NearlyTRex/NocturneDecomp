// Name: core_spireagl.cpp_CSpiritEagle_renderTransparent_FUN_00599b20
// Address: 00599b20
// Address Range: [[00599b20, 00599bbe]]
// Convention: __cdecl
// Signature: int __cdecl core_spireagl_cpp_CSpiritEagle_renderTransparent_FUN_00599b20(CSpiritEagle *this_ptr)

#include "nocturne.h"

int __cdecl core_spireagl_cpp_CSpiritEagle_renderTransparent_FUN_00599b20(CSpiritEagle *this_ptr)

{
  CDemonRenderer *this_ptr_00;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0((CDemonActor *)this_ptr);
  this_ptr_00 = DAT_005f2afc;
  *(uint *)&this_ptr->field_0x27bc = 1;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(this_ptr_00,0xffff);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,1);
  engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046e120(DAT_005f2afc,1);
  core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_0054e3a0
            ((CDeformableModelInstance *)&this_ptr->field_0x158,-1,0x2e7,1,0);
  engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0046e4e0(DAT_005f2afc);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,0);
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830((CDemonActor *)this_ptr);
  return *(int *)&this_ptr->field_0x27bc;
}
