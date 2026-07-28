// Name: engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_00461db0
// Address: 00461db0
// Address Range: [[00461db0, 00461ea7]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_00461db0(CDemonRenderer *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_00461db0(CDemonRenderer *this_ptr)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  byte *puVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  
  if (this_ptr->face_count == 0) {
    if (0 < _DAT_01b4d7ac) {
      puVar4 = &DAT_01b4d7b4;
      iVar6 = _DAT_01b4d7ac * 4;
      iVar3 = 0;
      do {
        *(byte **)(iVar3 + 0x1b748b4) = puVar4;
        iVar3 = iVar3 + 4;
        puVar4 = puVar4 + 0x20;
      } while (iVar3 < iVar6);
    }
    if (this_ptr->texture_capture_enabled == 1) {
      pcVar7 = engine_drender_cpp_qsortByCapturedFaceDepthDescending_FUN_00461d80;
    }
    else {
      pcVar7 = engine_drender_cpp_qsortByCapturedFaceDepthAscending_FUN_00461d50;
    }
    _qsort(0x1b748b4,_DAT_01b4d7ac,4,pcVar7);
    this_ptr->texture_capture_enabled = 0;
    if (this_ptr->face_capture_enabled != 0) {
      engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(this_ptr,1);
    }
    iVar6 = -1;
    iVar3 = 0;
    if (0 < _DAT_01b4d7ac) {
      iVar5 = 0;
      do {
        iVar2 = **(int **)(iVar5 + 0x1b748b4);
        if (iVar6 != iVar2) {
          engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
                    (this_ptr,(SMRGLTextureBasic *)(iVar2 * 0x48 + 0x1b796d4));
          iVar6 = iVar2;
        }
        piVar1 = (int *)(iVar5 + 0x1b748b4);
        iVar5 = iVar5 + 4;
        iVar3 = iVar3 + 1;
        engine_drender_cpp_CDemonRenderer_renderTexturedFace_FUN_0045f5e0
                  (this_ptr,*piVar1 + 0xc,*(uint *)(*piVar1 + 4));
      } while (iVar3 < _DAT_01b4d7ac);
    }
    engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(this_ptr,0);
  }
  return;
}
