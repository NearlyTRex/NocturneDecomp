// Name: engine_model.c_loadMRGLTextures_FUN_00528870
// Address: 00528870
// MANUAL RECONSTRUCTION
// Address Range: [[00528870, 00528931]]
// Convention: __cdecl
// Signature: void __cdecl engine_model_c_loadMRGLTextures_FUN_00528870(SMRGLHeaderExtended *mrgl)

#include "nocturne.h"

void __cdecl engine_model_c_loadMRGLTextures_FUN_00528870(SMRGLHeaderExtended *mrgl)

{
  int iVar4;
  int iVar1;
  int i;
  SMRGLTextureList *list;
  SMRGLTextureBasic SStack_30;

  iVar1 = (mrgl->base).type;
  if (iVar1 == 0x26) {
    engine_boss_c_modelStructNotSupported5_FUN_0041dc20(mrgl);
  }
  else {
    while (iVar1 != 0) {
      iVar1 = (((SMRGLTextureBasic *)mrgl)->base).type;
      if ((iVar1 == 0xd) || (iVar1 == 0x40)) {
        engine_texture_cpp_ensureTextureLoaded_FUN_005dd800((SMRGLTextureBasic *)mrgl);
      }
      else if (iVar1 == 0x1d) {
        list = (SMRGLTextureList *)mrgl;
        for (i = 0; i < list->base.child_count; i = i + 1) {
          SStack_30.base.count = 0;
          strcpy(SStack_30.texture_name, list->entries[i].texture_name);
          engine_texture_cpp_ensureTextureLoaded_FUN_005dd800(&SStack_30);
        }
      }
      iVar4 = engine_model_c_getMRGLSize_FUN_00528700(mrgl);
      mrgl = (SMRGLHeaderExtended *)((char *)mrgl + iVar4);
      iVar1 = (((SMRGLTextureBasic *)mrgl)->base).type;
    }
  }
  return;
}
