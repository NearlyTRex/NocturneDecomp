// Name: engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0046c900
// Address: 0046c900
// Address Range: [[0046c900, 0046c9f7]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0046c900(CDemonRenderer *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0046c900(CDemonRenderer *this_ptr)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  byte *puVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  
  if (*(int *)(this_ptr + 4) == 0) {
    if (0 < _DAT_01ba5cc4) {
      puVar4 = &DAT_01ba5ccc;
      iVar6 = _DAT_01ba5cc4 * 4;
      iVar3 = 0;
      do {
        *(byte **)(iVar3 + 0x1bccdcc) = puVar4;
        iVar3 = iVar3 + 4;
        puVar4 = puVar4 + 0x20;
      } while (iVar3 < iVar6);
    }
    if (*(int *)(this_ptr + 0x1c) == 1) {
      pcVar7 = engine_drender_cpp_qsortByCapturedFaceDepthDescending_FUN_0046c8d0;
    }
    else {
      pcVar7 = engine_drender_cpp_qsortByCapturedFaceDepthAscending_FUN_0046c8a0;
    }
    _qsort(0x1bccdcc,_DAT_01ba5cc4,4,pcVar7);
    *(uint *)(this_ptr + 0x1c) = 0;
    if (*(int *)(this_ptr + 0x10) != 0) {
      engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046b880(this_ptr,1);
    }
    iVar6 = -1;
    iVar3 = 0;
    if (0 < _DAT_01ba5cc4) {
      iVar5 = 0;
      do {
        iVar2 = **(int **)(iVar5 + 0x1bccdcc);
        if (iVar6 != iVar2) {
          engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
                    (this_ptr,(SMRGLTextureBasic *)(iVar2 * 0x48 + 0x1bd1bec));
          iVar6 = iVar2;
        }
        piVar1 = (int *)(iVar5 + 0x1bccdcc);
        iVar5 = iVar5 + 4;
        iVar3 = iVar3 + 1;
        engine_drender_cpp_CDemonRenderer_renderTexturedFace_FUN_00469e80
                  (this_ptr,(SInputFace *)(*piVar1 + 0xc),*(int *)(*piVar1 + 4));
      } while (iVar3 < _DAT_01ba5cc4);
    }
    engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046b880(this_ptr,0);
  }
  return;
}
