// Name: core_morph.cpp_CMorphModel_renderFaces_FUN_004dfea0
// Address: 004dfea0
// Address Range: [[004dfea0, 004dffb0]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_renderFaces_FUN_004dfea0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_morph_cpp_CMorphModel_renderFaces_FUN_004dfea0(int param_1,float param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  uint local_18;
  
  engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_004619f0(DAT_005ae704,0);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(DAT_005ae704,1);
  iVar2 = 0xffff - _DAT_01c038f4;
  fVar5 = (float10)round
                             ((float10)param_2 * (float10)_DAT_0058ad6c *
                              ((float10)_DAT_0058ad74 - (float10)param_2));
  lVar1 = (longlong)iVar2 * (longlong)(int)ROUND(fVar5);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
            (DAT_005ae704,(uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  local_18 = -1;
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x5c)) {
    iVar3 = 0;
    do {
      iVar4 = *(int *)(iVar3 + *(int *)(param_1 + 0x60));
      if (iVar4 != local_18) {
        engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
                  (DAT_005ae704,iVar4 * 0x48 + param_1 + 0x68);
        local_18 = iVar4;
      }
      iVar4 = *(int *)(param_1 + 0x60) + iVar3;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x3c;
      engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_0045f460(DAT_005ae704,iVar4,0x267);
    } while (iVar2 < *(int *)(param_1 + 0x5c));
  }
  engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_00461db0(DAT_005ae704);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(DAT_005ae704,0);
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(DAT_005ae704,1);
  return;
}
