// Name: engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0046c900
// Address: 0046c900
// Address Range: [[0046c900, 0046c9f7]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0046c900(CDemonRenderer *this_ptr)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0046c900(CDemonRenderer *this_ptr)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  SFace *pSVar4;
  int iVar5;
  int iVar6;
  code *compar;
  
  if (this_ptr->shadow_pass_active == 0) {
    if (0 < g_INT_01ba5cc4) {
      pSVar4 = g_SFace_ARRAY_01ba5ccc;
      iVar6 = g_INT_01ba5cc4 * 4;
      iVar3 = 0;
      do {
        *(SFace **)((int)g_SFace_PTR_ARRAY_01bccdcc + iVar3) = pSVar4;
        iVar3 = iVar3 + 4;
        pSVar4 = pSVar4 + 1;
      } while (iVar3 < iVar6);
    }
    if (this_ptr->texture_capture_enabled == 1) {
      compar = engine_drender_cpp_qsortByCapturedFaceDepthDescending_FUN_0046c8d0;
    }
    else {
      compar = engine_drender_cpp_qsortByCapturedFaceDepthAscending_FUN_0046c8a0;
    }
    _qsort(g_SFace_PTR_ARRAY_01bccdcc,g_INT_01ba5cc4,4,compar);
    this_ptr->texture_capture_enabled = 0;
    if (this_ptr->face_capture_enabled != 0) {
      engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046b880(this_ptr,1);
    }
    iVar6 = -1;
    iVar3 = 0;
    if (0 < g_INT_01ba5cc4) {
      iVar5 = 0;
      do {
        iVar2 = **(int **)((int)g_SFace_PTR_ARRAY_01bccdcc + iVar5);
        if (iVar6 != iVar2) {
          engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
                    (this_ptr,g_SMRGLTextureBasic_ARRAY_01bd1bec + iVar2 * 3);
          iVar6 = iVar2;
        }
        piVar1 = (int *)((int)g_SFace_PTR_ARRAY_01bccdcc + iVar5);
        iVar5 = iVar5 + 4;
        iVar3 = iVar3 + 1;
        engine_drender_cpp_CDemonRenderer_renderTexturedFace_FUN_00469e80
                  (this_ptr,(SInputFace *)(*piVar1 + 0xc),*(int *)(*piVar1 + 4));
      } while (iVar3 < g_INT_01ba5cc4);
    }
    engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046b880(this_ptr,0);
  }
  return;
}
