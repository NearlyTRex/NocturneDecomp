// Name: engine_model.c_initializeMRGLModel_FUN_004dd760
// Address: 004dd760
// Address Range: [[004dd760, 004dd78b]]
// Convention: unknown
// Signature: void engine_model_c_initializeMRGLModel_FUN_004dd760(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void engine_model_c_initializeMRGLModel_FUN_004dd760(void)

{
  SMRGLKeyframeModel *in_stack_00000004;
  
  if ((in_stack_00000004->header).base.type == 0x20) {
    engine_keyframe_c_loadAndInterpolateKeyframes_FUN_004c3aa0(in_stack_00000004);
    engine_model_c_loadMRGLTextures_FUN_004dd690(&in_stack_00000004->base_keyframes->header);
    return;
  }
  engine_model_c_loadMRGLTextures_FUN_004dd690(&in_stack_00000004->header);
  return;
}
