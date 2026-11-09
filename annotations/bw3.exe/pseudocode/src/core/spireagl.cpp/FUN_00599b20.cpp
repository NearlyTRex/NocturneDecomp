// Name: core_spireagl.cpp_FUN_00599b20
// Address: 00599b20
// Address Range: [[00599b20, 00599bbe]]
// Convention: unknown
// Signature: undefined4 core_spireagl_cpp_FUN_00599b20(CDemonActor *param_1)

#include "nocturne.h"

uint core_spireagl_cpp_FUN_00599b20(CDemonActor *param_1)

{
  CDemonRenderer *this_ptr;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0(param_1);
  this_ptr = DAT_005f2afc;
  *(uint *)&param_1[0x1d].field_0xc4 = 1;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(this_ptr,0xffff);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,1);
  engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046e120(DAT_005f2afc,1);
  core_skeleton_cpp_FUN_0054e3a0((CDeformableModelInstance *)(param_1 + 1),-1,0x2e7,1,0);
  engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0046e4e0(DAT_005f2afc);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,0);
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830(param_1);
  return *(uint *)&param_1[0x1d].field_0xc4;
}
