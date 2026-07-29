// Name: engine_model.c_initializeMRGLModel_FUN_004dd760
// Address: 004dd760
// Address Range: [[004dd760, 004dd78b]]
// Convention: __cdecl
// Signature: void __cdecl engine_model_c_initializeMRGLModel_FUN_004dd760(SMRGLHeaderExtended *mrgl)

#include "nocturne.h"

void __cdecl engine_model_c_initializeMRGLModel_FUN_004dd760(SMRGLHeaderExtended *mrgl)

{
  if ((mrgl->base).type == 0x20) {
    engine_keyframe_c_loadAndInterpolateKeyframes_FUN_004c3aa0((SMRGLKeyframeModel *)mrgl);
    engine_model_c_loadMRGLTextures_FUN_004dd690((SMRGLHeaderExtended *)mrgl[1].child_count);
    return;
  }
  engine_model_c_loadMRGLTextures_FUN_004dd690(mrgl);
  return;
}
