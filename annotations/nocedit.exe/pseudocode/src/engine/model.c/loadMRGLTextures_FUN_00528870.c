// Name: engine_model.c_loadMRGLTextures_FUN_00528870
// Address: 00528870
// Address Range: [[00528870, 00528931]]
// Convention: __cdecl
// Signature: void __cdecl engine_model_c_loadMRGLTextures_FUN_00528870(SMRGLHeaderExtended *mrgl)

#include "nocturne.h"

void __cdecl engine_model_c_loadMRGLTextures_FUN_00528870(SMRGLHeaderExtended *mrgl)

{
  int iVar4;
  int *piVar5;
  int iVar1;
  int *piVar6;
  char *pcVar7;
  SMRGLTextureBasic SStack_30;
  SMRGLTextureBasic *local_18;
  SMRGLTextureBasic *local_14;
  char cVar1;
  SMRGLTextureBasic *pSVar3;
  int iVar2;
  
  iVar1 = (mrgl->base).type;
  if (iVar1 == 0x26) {
    engine_boss_c_modelStructNotSupported_FUN_0041dc20(mrgl);
  }
  else {
    while (iVar1 != 0) {
      iVar1 = (((SMRGLTextureBasic *)mrgl)->base).type;
      if ((iVar1 == 0xd) || (iVar1 == 0x40)) {
        engine_texture_cpp_ensureTextureLoaded_FUN_005dd800((SMRGLTextureBasic *)mrgl);
      }
      else if ((iVar1 == 0x1d) && (iVar1 = 0, 0 < *(int *)((SMRGLTextureBasic *)mrgl)->texture_name)
              ) {
        piVar5 = &(((SMRGLTextureBasic *)((int)mrgl + 0x18))->base).count;
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
          iVar1 = iVar1 + 1;
          piVar5 = piVar5 + 8;
        } while (iVar1 < *(int *)((SMRGLTextureBasic *)mrgl)->texture_name);
      }
      iVar4 = engine_model_c_getMRGLSize_FUN_00528700(mrgl);
      mrgl = (SMRGLHeaderExtended *)(((SMRGLTextureBasic *)mrgl)->texture_name + iVar4 + -8);
      iVar1 = (((SMRGLTextureBasic *)mrgl)->base).type;
    }
  }
  return;
}
