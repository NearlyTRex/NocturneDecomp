// Name: engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_00484e00
// Address: 00484e00
// Address Range: [[00484e00, 00484ef7]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_00484e00(CDemonRenderer *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_00484e00(CDemonRenderer *this_ptr)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  byte *puVar4;
  int iVar5;
  int iVar6;
  code *compar;
  
  if (this_ptr->shadow_pass_active == 0) {
    if (0 < (int)_DAT_01bc1280) {
      puVar4 = &DAT_01bc1288;
      iVar6 = _DAT_01bc1280 * 4;
      iVar3 = 0;
      do {
        *(byte **)(iVar3 + 0x1be8388) = puVar4;
        iVar3 = iVar3 + 4;
        puVar4 = puVar4 + 0x20;
      } while (iVar3 < iVar6);
    }
    if (this_ptr->texture_capture_enabled == 1) {
      compar = engine_drender_cpp_qsortByCapturedFaceDepthDescending_FUN_00484dd0;
    }
    else {
      compar = engine_drender_cpp_qsortByCapturedFaceDepthAscending_FUN_00484da0;
    }
    _qsort((void *)0x1be8388,_DAT_01bc1280,4,compar);
    this_ptr->texture_capture_enabled = 0;
    if (this_ptr->face_capture_enabled != 0) {
      engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00483d80(this_ptr,1);
    }
    iVar6 = -1;
    iVar3 = 0;
    if (0 < (int)_DAT_01bc1280) {
      iVar5 = 0;
      do {
        iVar2 = **(int **)(iVar5 + 0x1be8388);
        if (iVar6 != iVar2) {
          engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
                    (this_ptr,(SMRGLTextureBasic *)(iVar2 * 0x48 + 0x1bed1a8));
          iVar6 = iVar2;
        }
        piVar1 = (int *)(iVar5 + 0x1be8388);
        iVar5 = iVar5 + 4;
        iVar3 = iVar3 + 1;
        engine_drender_cpp_CDemonRenderer_renderTexturedFace_FUN_00482390
                  (this_ptr,(SInputFace *)(*piVar1 + 0xc),*(int *)(*piVar1 + 4));
      } while (iVar3 < (int)_DAT_01bc1280);
    }
    engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00483d80(this_ptr,0);
  }
  return;
}
