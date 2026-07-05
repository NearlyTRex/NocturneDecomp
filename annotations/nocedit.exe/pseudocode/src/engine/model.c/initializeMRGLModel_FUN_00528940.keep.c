// Name: engine_model.c_initializeMRGLModel_FUN_00528940
// Address: 00528940
// MANUAL RECONSTRUCTION
// Address Range: [[00528940, 0052896b]]
// Convention: __cdecl
// Signature: void __cdecl engine_model_c_initializeMRGLModel_FUN_00528940(SMRGLHeaderExtended *mrgl)

#include "nocturne.h"

void __cdecl engine_model_c_initializeMRGLModel_FUN_00528940(SMRGLHeaderExtended *mrgl)

{
  if ((mrgl->base).type == 0x20) {
    engine_keyframe_c_loadAndInterpolateKeyframes_FUN_00501d40((SMRGLKeyframeModel *)mrgl);
    engine_model_c_loadMRGLTextures_FUN_00528870
              ((SMRGLHeaderExtended *)((SMRGLKeyframeModel *)mrgl)->base_keyframes);
    return;
  }
  engine_model_c_loadMRGLTextures_FUN_00528870(mrgl);
  return;
}
