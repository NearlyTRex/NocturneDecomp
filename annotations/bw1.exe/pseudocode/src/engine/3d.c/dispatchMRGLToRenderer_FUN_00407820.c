// Name: engine_3d.c_dispatchMRGLToRenderer_FUN_00407820
// Address: 00407820
// Address Range: [[00407820, 00407a69]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_dispatchMRGLToRenderer_FUN_00407820(SMRGLHeaderExtended *mrgl)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_3d_c_dispatchMRGLToRenderer_FUN_00407820(SMRGLHeaderExtended *mrgl)

{
  uint *puVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  SMRGLHeaderPrimitive *apSStack_110 [64];
  
  cVar2 = (char)(mrgl->base).type;
  _DAT_007c1070 = 0;
  do {
    if (cVar2 == '\0') {
      if (_DAT_007c1070 != 0) {
        if (_DAT_01c50948 == 0) {
          iVar5 = 0;
          iVar4 = 0;
          if (0 < _DAT_007c1070) {
            do {
              puVar1 = (uint *)(iVar4 + 0x7c1074);
              iVar4 = iVar4 + 4;
              iVar5 = iVar5 + 1;
              engine_3d_c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_004059a0
                        ((SMRGLHeaderPrimitive *)*puVar1);
            } while (iVar5 < _DAT_007c1070);
          }
        }
        else {
          engine_special_cpp_drawPolyList_FUN_005823a0
                    ((SRenderVertex *)&DAT_00629014,(SMRGLPrimitiveQuad **)0x7c1074,_DAT_007c1070,
                     0xcd);
        }
        _DAT_007c1070 = 0;
      }
      DAT_0061b4c0 = 1;
      return;
    }
    bVar3 = (byte)(((SMRGLHeaderPrimitive *)mrgl)->base).type;
    if (bVar3 < 0x14) {
      if (bVar3 < 3) {
        if (bVar3 == 2) {
          engine_3d_c_transformAndBufferVertices_FUN_00403840(mrgl);
          if (DAT_0061b4c0 != 0) {
            apSStack_110[0] = (SMRGLHeaderPrimitive *)mrgl;
            engine_3d_c_FUN_004076e0();
            return;
          }
        }
        else {
LAB_00407a02:
          _sprintf((char *)apSStack_110,"Unknown primitive : %d");
          _DAT_01d1d404 = 0xd16;
          _DAT_01d1d400 = "..\\engine\\3d.c";
          core_main_c_FUN_005030e0(apSStack_110);
        }
      }
      else if (bVar3 < 4) {
        engine_3d_c_processVertexLighting_FUN_004039f0(mrgl);
      }
      else {
        if (bVar3 != 0xd) goto LAB_00407a02;
        if (_DAT_007c1070 != 0) {
          if (_DAT_01c50948 == 0) {
            iVar4 = 0;
            if (0 < _DAT_007c1070) {
              iVar5 = 0;
              do {
                puVar1 = (uint *)(iVar5 + 0x7c1074);
                iVar5 = iVar5 + 4;
                iVar4 = iVar4 + 1;
                engine_3d_c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_004059a0
                          ((SMRGLHeaderPrimitive *)*puVar1);
              } while (iVar4 < _DAT_007c1070);
            }
          }
          else {
            engine_special_cpp_drawPolyList_FUN_005823a0
                      ((SRenderVertex *)&DAT_00629014,(SMRGLPrimitiveQuad **)0x7c1074,_DAT_007c1070,
                       0xcd);
          }
          _DAT_007c1070 = 0;
        }
        engine_texture_cpp_FUN_00597a20(mrgl);
      }
    }
    else if (0x14 < bVar3) {
      if (bVar3 < 0x29) {
        if (bVar3 != 0x18) goto LAB_00407a02;
        engine_3d_c_renderPolygonLitAlphaPlaneMaskedUVOp24_FUN_00404560
                  ((SMRGLHeaderPrimitive *)mrgl);
      }
      else if (bVar3 < 0x2a) {
        iVar4 = engine_3d_c_isVisiblePlane_FUN_00403920
                          (&((SMRGLHeaderPrimitive *)mrgl)->surface_normal);
        if (iVar4 != 0) {
          if (1999 < _DAT_007c1070) {
            _DAT_01d1d400 = "..\\engine\\3d.c";
            _DAT_01d1d404 = 0xccc;
            core_main_c_FUN_005030e0("renderFaceList - too many faces");
          }
          *(SMRGLHeaderExtended **)(_DAT_007c1070 * 4 + 0x7c1074) = mrgl;
          _DAT_007c1070 = _DAT_007c1070 + 1;
        }
      }
      else {
        if (bVar3 != 0x41) goto LAB_00407a02;
        engine_3d_c_renderPolygonFullEffectsBufferedOp65_FUN_004070e0((SMRGLHeaderPrimitive *)mrgl);
      }
    }
    iVar4 = engine_model_c_FUN_0051fee0(mrgl);
    mrgl = (SMRGLHeaderExtended *)((int)&(((SMRGLHeaderPrimitive *)mrgl)->base).type + iVar4);
    cVar2 = (char)(((SMRGLHeaderPrimitive *)mrgl)->base).type;
  } while( true );
}
