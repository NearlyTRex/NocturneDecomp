// Name: engine_3d.c_updateAnimatedTexture_FUN_004050c0
// Address: 004050c0
// Address Range: [[004050c0, 00405164]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_updateAnimatedTexture_FUN_004050c0(SMRGLAnimatedTexture *texture)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_updateAnimatedTexture_FUN_004050c0(SMRGLAnimatedTexture *texture)

{
  char cVar2;
  int iVar2;
  int iVar3;
  char *pcVar3;
  char *pcVar4;
  SMRGLTextureBasic SStack_28;
  char cVar1;
  
  iVar2 = texture->accumulated_time + g_GlobalDeltaTimeInt;
  texture->accumulated_time = iVar2;
  iVar3 = (iVar2 / texture->frame_duration) % texture->frame_count;
  if (iVar3 != texture->current_frame) {
    texture->dirty_flag = 1;
    texture->current_frame = iVar3;
  }
  SStack_28.base.count = 0;
  pcVar4 = SStack_28.texture_name;
  pcVar3 = (char *)((int)texture + texture->current_frame * 0x20 + 0x1c);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar2 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar2;
    pcVar4 = pcVar4 + 2;
  } while (cVar2 != '\0');
  engine_texture_cpp_ensureTextureLoaded_FUN_005dd800(&SStack_28);
  if (texture->dirty_flag == 0) {
    return (SMRGLHeaderExtended *)((int)texture + texture->frame_count * 0x20 + 0x1c);
  }
  texture->dirty_flag = 0;
  return (SMRGLHeaderExtended *)((int)texture + texture->frame_count * 0x20 + 0x1c);
}
