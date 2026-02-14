// Name: engine_3d.c_updateAnimatedTexture_FUN_004050c0
// Address: 004050c0
// Address Range: [[004050c0, 00405164]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_updateAnimatedTexture_FUN_004050c0(SAnimatedTexture *anim_texture)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_updateAnimatedTexture_FUN_004050c0(SAnimatedTexture *anim_texture)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  SMRGLTextureBasic SStack_28;
  
  iVar2 = anim_texture->accumulated_time + g_GlobalDeltaTimeInt;
  anim_texture->accumulated_time = iVar2;
  iVar2 = (iVar2 / anim_texture->frame_duration) % anim_texture->frame_count;
  if (iVar2 != anim_texture->current_frame) {
    anim_texture->dirty_flag = 1;
    anim_texture->current_frame = iVar2;
  }
  SStack_28.base.count = 0;
  pcVar4 = SStack_28.texture_name;
  pcVar3 = (char *)((int)anim_texture + anim_texture->current_frame * 0x20 + 0x1c);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  engine_texture_cpp_ensureTextureLoaded_FUN_005dd800(&SStack_28);
  if (anim_texture->dirty_flag == 0) {
    return (SMRGLHeaderExtended *)((int)anim_texture + anim_texture->frame_count * 0x20 + 0x1c);
  }
  anim_texture->dirty_flag = 0;
  return (SMRGLHeaderExtended *)((int)anim_texture + anim_texture->frame_count * 0x20 + 0x1c);
}
