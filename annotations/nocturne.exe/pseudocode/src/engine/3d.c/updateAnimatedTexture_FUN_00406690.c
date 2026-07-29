// Name: engine_3d.c_updateAnimatedTexture_FUN_00406690
// Address: 00406690
// Address Range: [[00406690, 00406734]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_updateAnimatedTexture_FUN_00406690(SMRGLAnimatedTexture *texture)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SMRGLHeaderExtended * __cdecl engine_3d_c_updateAnimatedTexture_FUN_00406690(SMRGLAnimatedTexture *texture)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  SMRGLTextureBasic SStack_28;
  
  iVar2 = texture->accumulated_time + _DAT_01bd1d80;
  texture->accumulated_time = iVar2;
  iVar2 = (iVar2 / texture->frame_duration) % texture->frame_count;
  if (iVar2 != texture->current_frame) {
    texture->dirty_flag = 1;
    texture->current_frame = iVar2;
  }
  SStack_28.base.count = 0;
  pcVar4 = SStack_28.texture_name;
  pcVar3 = (char *)((int)texture + texture->current_frame * 0x20 + 0x1c);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  engine_texture_cpp_ensureTextureLoaded_FUN_00545920(&SStack_28);
  if (texture->dirty_flag == 0) {
    return (SMRGLHeaderExtended *)((int)texture + texture->frame_count * 0x20 + 0x1c);
  }
  texture->dirty_flag = 0;
  return (SMRGLHeaderExtended *)((int)texture + texture->frame_count * 0x20 + 0x1c);
}
