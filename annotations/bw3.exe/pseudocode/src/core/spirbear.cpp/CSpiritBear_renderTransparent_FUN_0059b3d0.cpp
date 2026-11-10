// Name: core_spirbear.cpp_CSpiritBear_renderTransparent_FUN_0059b3d0
// Address: 0059b3d0
// Address Range: [[0059b3d0, 0059b46d]]
// Convention: __cdecl
// Signature: int __cdecl core_spirbear_cpp_CSpiritBear_renderTransparent_FUN_0059b3d0(CSpiritBear *this_ptr)

#include "nocturne.h"

int __cdecl core_spirbear_cpp_CSpiritBear_renderTransparent_FUN_0059b3d0(CSpiritBear *this_ptr)

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
  return 1;
}
