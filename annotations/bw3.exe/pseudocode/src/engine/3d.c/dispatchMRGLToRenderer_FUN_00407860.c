// Name: engine_3d.c_dispatchMRGLToRenderer_FUN_00407860
// Address: 00407860
// Address Range: [[00407860, 00407aa9]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_dispatchMRGLToRenderer_FUN_00407860(SMRGLHeaderExtended *mrgl)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_3d_c_dispatchMRGLToRenderer_FUN_00407860(SMRGLHeaderExtended *mrgl)

{
  uint *puVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  char acStack_110 [256];
  
  cVar2 = (char)(mrgl->base).type;
  _DAT_007dd9f0 = 0;
  do {
    if (cVar2 == '\0') {
      if (_DAT_007dd9f0 != 0) {
        if (_DAT_01c6cee8 == 0) {
          iVar5 = 0;
          iVar4 = 0;
          if (0 < _DAT_007dd9f0) {
            do {
              puVar1 = (uint *)(iVar4 + 0x7dd9f4);
              iVar4 = iVar4 + 4;
              iVar5 = iVar5 + 1;
              engine_3d_c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_004059a0(*puVar1);
            } while (iVar5 < _DAT_007dd9f0);
          }
        }
        else {
          engine_special_cpp_drawPolyList_FUN_00565c70
                    ((SRenderVertex *)&DAT_0060b014,(SMRGLPrimitiveQuad **)0x7dd9f4,_DAT_007dd9f0,
                     0xcd);
        }
        _DAT_007dd9f0 = 0;
      }
      DAT_005fba40 = 1;
      return;
    }
    bVar3 = (byte)(((SMRGLHeaderPrimitive *)mrgl)->base).type;
    if (bVar3 < 0x14) {
      if (bVar3 < 3) {
        if (bVar3 == 2) {
          engine_3d_c_transformAndBufferVertices_FUN_00403840(mrgl);
          if (DAT_005fba40 != 0) {
            engine_3d_c_FUN_00407720(mrgl);
            return;
          }
        }
        else {
LAB_00407a42:
          _sprintf(acStack_110,"Unknown primitive : %d");
          _DAT_01d71de4 = 0xd16;
          _DAT_01d71de0 = "..\\engine\\3d.c";
          core_main_c_FUN_004e4330(acStack_110);
        }
      }
      else if (bVar3 < 4) {
        engine_3d_c_processVertexLighting_FUN_004039f0(mrgl);
      }
      else {
        if (bVar3 != 0xd) goto LAB_00407a42;
        if (_DAT_007dd9f0 != 0) {
          if (_DAT_01c6cee8 == 0) {
            iVar4 = 0;
            if (0 < _DAT_007dd9f0) {
              iVar5 = 0;
              do {
                puVar1 = (uint *)(iVar5 + 0x7dd9f4);
                iVar5 = iVar5 + 4;
                iVar4 = iVar4 + 1;
                engine_3d_c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_004059a0(*puVar1);
              } while (iVar4 < _DAT_007dd9f0);
            }
          }
          else {
            engine_special_cpp_drawPolyList_FUN_00565c70
                      ((SRenderVertex *)&DAT_0060b014,(SMRGLPrimitiveQuad **)0x7dd9f4,_DAT_007dd9f0,
                       0xcd);
          }
          _DAT_007dd9f0 = 0;
        }
        engine_texture_cpp_FUN_0056aa10(mrgl);
      }
    }
    else if (0x14 < bVar3) {
      if (bVar3 < 0x29) {
        if (bVar3 != 0x18) goto LAB_00407a42;
        engine_3d_c_renderPolygonLitAlphaPlaneMaskedUVOp24_FUN_00404560
                  ((SMRGLHeaderPrimitive *)mrgl);
      }
      else if (bVar3 < 0x2a) {
        iVar4 = engine_3d_c_isVisiblePlane_FUN_00403920
                          (&((SMRGLHeaderPrimitive *)mrgl)->surface_normal);
        if (iVar4 != 0) {
          if (1999 < _DAT_007dd9f0) {
            _DAT_01d71de0 = "..\\engine\\3d.c";
            _DAT_01d71de4 = 0xccc;
            core_main_c_FUN_004e4330("renderFaceList - too many faces");
          }
          *(SMRGLHeaderExtended **)(_DAT_007dd9f0 * 4 + 0x7dd9f4) = mrgl;
          _DAT_007dd9f0 = _DAT_007dd9f0 + 1;
        }
      }
      else {
        if (bVar3 != 0x41) goto LAB_00407a42;
        engine_3d_c_renderPolygonFullEffectsBufferedOp65_FUN_00407100(mrgl);
      }
    }
    iVar4 = engine_model_c_FUN_004f8730(mrgl);
    mrgl = (SMRGLHeaderExtended *)((int)&(((SMRGLHeaderPrimitive *)mrgl)->base).type + iVar4);
    cVar2 = (char)(((SMRGLHeaderPrimitive *)mrgl)->base).type;
  } while( true );
}
