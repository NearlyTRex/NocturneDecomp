// Name: engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0046e4e0
// Address: 0046e4e0
// Address Range: [[0046e4e0, 0046e5d7]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0046e4e0(CDemonRenderer *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0046e4e0(CDemonRenderer *this_ptr)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  byte *puVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  
  if (this_ptr->shadow_pass_active == 0) {
    if (0 < _DAT_01bdd858) {
      puVar4 = &DAT_01bdd860;
      iVar6 = _DAT_01bdd858 * 4;
      iVar3 = 0;
      do {
        *(byte **)(iVar3 + 0x1c04960) = puVar4;
        iVar3 = iVar3 + 4;
        puVar4 = puVar4 + 0x20;
      } while (iVar3 < iVar6);
    }
    if (this_ptr->texture_capture_enabled == 1) {
      pcVar7 = engine_drender_cpp_qsortByCapturedFaceDepthDescending_FUN_0046e4b0;
    }
    else {
      pcVar7 = engine_drender_cpp_qsortByCapturedFaceDepthAscending_FUN_0046e480;
    }
    _qsort(0x1c04960,_DAT_01bdd858,4,pcVar7);
    this_ptr->texture_capture_enabled = 0;
    if (this_ptr->face_capture_enabled != 0) {
      engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046d460(this_ptr,1);
    }
    iVar6 = -1;
    iVar3 = 0;
    if (0 < _DAT_01bdd858) {
      iVar5 = 0;
      do {
        iVar2 = **(int **)(iVar5 + 0x1c04960);
        if (iVar6 != iVar2) {
          engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
                    (this_ptr,(SMRGLTextureBasic *)(iVar2 * 0x48 + 0x1c09780));
          iVar6 = iVar2;
        }
        piVar1 = (int *)(iVar5 + 0x1c04960);
        iVar5 = iVar5 + 4;
        iVar3 = iVar3 + 1;
        engine_drender_cpp_CDemonRenderer_renderTexturedFace_FUN_0046ba70
                  (this_ptr,(SInputFace *)(*piVar1 + 0xc),*(int *)(*piVar1 + 4));
      } while (iVar3 < _DAT_01bdd858);
    }
    engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046d460(this_ptr,0);
  }
  return;
}
