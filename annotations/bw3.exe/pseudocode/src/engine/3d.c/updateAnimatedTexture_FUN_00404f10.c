// Name: engine_3d.c_updateAnimatedTexture_FUN_00404f10
// Address: 00404f10
// Address Range: [[00404f10, 00404fb4]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_updateAnimatedTexture_FUN_00404f10(SMRGLAnimatedTexture *texture)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SMRGLHeaderExtended * __cdecl engine_3d_c_updateAnimatedTexture_FUN_00404f10(SMRGLAnimatedTexture *texture)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  byte auStack_28 [4];
  uint uStack_24;
  char acStack_20 [16];
  
  iVar2 = texture->accumulated_time + _DAT_01c5fad0;
  texture->accumulated_time = iVar2;
  iVar2 = (iVar2 / texture->frame_duration) % texture->frame_count;
  if (iVar2 != texture->current_frame) {
    texture->dirty_flag = 1;
    texture->current_frame = iVar2;
  }
  uStack_24 = 0;
  pcVar4 = acStack_20;
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
  engine_texture_cpp_FUN_0056aa10(auStack_28);
  if (texture->dirty_flag == 0) {
    return (SMRGLHeaderExtended *)((int)texture + texture->frame_count * 0x20 + 0x1c);
  }
  texture->dirty_flag = 0;
  return (SMRGLHeaderExtended *)((int)texture + texture->frame_count * 0x20 + 0x1c);
}
