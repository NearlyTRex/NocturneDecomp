// Name: engine_3d.c_updateAnimatedTexture_FUN_00406690
// Address: 00406690
// Address Range: [[00406690, 00406734]]
// Convention: unknown
// Signature: int engine_3d_c_updateAnimatedTexture_FUN_00406690(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int engine_3d_c_updateAnimatedTexture_FUN_00406690(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  SMRGLTextureBasic SStack_28;
  
  iVar2 = *(int *)(param_1 + 0x14) + _DAT_01bd1d80;
  *(int *)(param_1 + 0x14) = iVar2;
  iVar2 = (iVar2 / *(int *)(param_1 + 0x10)) % *(int *)(param_1 + 8);
  if (iVar2 != *(int *)(param_1 + 0xc)) {
    *(uint *)(param_1 + 0x18) = 1;
    *(int *)(param_1 + 0xc) = iVar2;
  }
  SStack_28.base.count = 0;
  pcVar4 = SStack_28.texture_name;
  pcVar3 = (char *)(*(int *)(param_1 + 0xc) * 0x20 + param_1 + 0x1c);
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
  if (*(int *)(param_1 + 0x18) == 0) {
    return *(int *)(param_1 + 8) * 0x20 + param_1 + 0x1c;
  }
  *(uint *)(param_1 + 0x18) = 0;
  return *(int *)(param_1 + 8) * 0x20 + param_1 + 0x1c;
}
