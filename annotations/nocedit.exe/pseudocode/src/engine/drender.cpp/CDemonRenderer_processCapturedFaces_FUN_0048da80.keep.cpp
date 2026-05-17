// Name: engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80
// Address: 0048da80
// MANUAL RECONSTRUCTION
// Address Range: [[0048da80, 0048db77]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80(CDemonRenderer *this_ptr)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80(CDemonRenderer *this_ptr)

{
  int iVar2;
  int iVar3;
  SFace *pSVar4;
  int iVar6;
  QSORT_COMPARATOR_FUNC *compar;
  
  if (this_ptr->face_count == 0) {
    if (0 < g_CaptureFaceCount) {
      pSVar4 = g_CapturedFaces;
      iVar3 = 0;
      do {
        g_CapturedFacePointers[iVar3] = pSVar4;
        iVar3 = iVar3 + 1;
        pSVar4 = pSVar4 + 1;
      } while (iVar3 < g_CaptureFaceCount);
    }
    if (this_ptr->texture_capture_enabled == 1) {
      compar = (QSORT_COMPARATOR_FUNC *)engine_drender_cpp_qsortByCapturedFaceDepthDescending_FUN_0048da50;
    }
    else {
      compar = (QSORT_COMPARATOR_FUNC *)engine_drender_cpp_qsortByCapturedFaceDepthAscending_FUN_0048da20;
    }
    _qsort(g_CapturedFacePointers,g_CaptureFaceCount,4,compar);
    this_ptr->texture_capture_enabled = 0;
    if (this_ptr->face_capture_enabled != 0) {
      engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(this_ptr,1);
    }
    iVar6 = -1;
    iVar3 = 0;
    if (0 < g_CaptureFaceCount) {
      do {
        pSVar4 = g_CapturedFacePointers[iVar3];
        iVar2 = pSVar4->texture_index;
        if (iVar6 != iVar2) {
          engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                    (this_ptr,g_CapturedTextureArray + iVar2 * 3);
          iVar6 = iVar2;
        }
        iVar3 = iVar3 + 1;
        engine_drender_cpp_CDemonRenderer_renderTexturedFace_FUN_0048b030
                  (this_ptr,&pSVar4->face_data,pSVar4->render_flags);
      } while (iVar3 < g_CaptureFaceCount);
    }
    engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(this_ptr,0);
  }
  return;
}
