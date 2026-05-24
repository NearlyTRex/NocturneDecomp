// Name: engine_3d.c_updateAnimatedTexture_FUN_004050c0
// Address: 004050c0
// MANUAL RECONSTRUCTION
// Address Range: [[004050c0, 00405164]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_updateAnimatedTexture_FUN_004050c0(SMRGLAnimatedTexture *texture)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_updateAnimatedTexture_FUN_004050c0(SMRGLAnimatedTexture *texture)

{
  int iVar2;
  int iVar3;
  SMRGLTextureListEntry *frames;
  SMRGLTextureBasic SStack_28;
  
  iVar2 = texture->accumulated_time + g_GlobalDeltaTimeInt;
  texture->accumulated_time = iVar2;
  iVar3 = (iVar2 / texture->frame_duration) % texture->frame_count;
  if (iVar3 != texture->current_frame) {
    texture->dirty_flag = 1;
    texture->current_frame = iVar3;
  }
  frames = (SMRGLTextureListEntry *)(texture + 1);
  SStack_28.base.count = 0;
  strcpy(SStack_28.texture_name,frames[texture->current_frame].texture_name);
  engine_texture_cpp_ensureTextureLoaded_FUN_005dd800(&SStack_28);
  if (texture->dirty_flag == 0) {
    return (SMRGLHeaderExtended *)&frames[texture->frame_count];
  }
  texture->dirty_flag = 0;
  return (SMRGLHeaderExtended *)&frames[texture->frame_count];
}
