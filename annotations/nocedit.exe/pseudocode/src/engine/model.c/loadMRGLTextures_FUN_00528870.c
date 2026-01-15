// Name: engine_model.c_loadMRGLTextures_FUN_00528870
// Address: 00528870
// Address Range: [[00528870, 00528931]]
// Convention: __cdecl
// Signature: void engine_model.c_loadMRGLTextures_FUN_00528870(SMRGLHeaderExtended * block)

#include "nocturne.h"

void __cdecl engine_model_c_loadMRGLTextures_FUN_00528870(SMRGLHeaderExtended *block)

{
  char cVar1;
  int iVar2;
  SMRGLTextureBasic *pSVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  char *pcVar7;
  SMRGLTextureBasic SStack_30;
  SMRGLTextureBasic *local_18;
  SMRGLTextureBasic *local_14;
  
  iVar4 = (block->base).type;
  local_18 = (SMRGLTextureBasic *)block;
  if (iVar4 == 0x26) {
    engine_boss_c_modelStructNotSupported_FUN_0041dc20(block);
  }
  else {
    while (iVar4 != 0) {
      iVar4 = (local_18->base).type;
      if ((iVar4 == 0xd) || (iVar4 == 0x40)) {
        engine_texture_cpp_ensureTextureLoaded_FUN_005dd800(local_18);
      }
      else if ((iVar4 == 0x1d) &&
              (iVar4 = 0, local_14 = local_18, 0 < *(int *)local_18->texture_name)) {
        piVar5 = &local_18[1].base.count;
        do {
          SStack_30.base.count = 0;
          pcVar7 = SStack_30.texture_name;
          piVar6 = piVar5;
          do {
            iVar2 = *piVar6;
            *pcVar7 = (char)iVar2;
            if ((char)iVar2 == '\0') break;
            cVar1 = *(char *)((int)piVar6 + 1);
            piVar6 = (int *)((int)piVar6 + 2);
            pcVar7[1] = cVar1;
            pcVar7 = pcVar7 + 2;
          } while (cVar1 != '\0');
          engine_texture_cpp_ensureTextureLoaded_FUN_005dd800(&SStack_30);
          iVar4 = iVar4 + 1;
          piVar5 = piVar5 + 8;
        } while (iVar4 < *(int *)local_14->texture_name);
      }
      pSVar3 = local_18;
      iVar4 = engine_model_c_getMRGLSize_FUN_00528700((SMRGLHeaderExtended *)local_18);
      local_18 = (SMRGLTextureBasic *)(pSVar3->texture_name + iVar4 + -8);
      iVar4 = (local_18->base).type;
    }
  }
  return;
}
