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
  SMRGLHeaderExtended SVar2;
  int iVar3;
  int iVar4;
  char acStack_110 [256];
  
  SVar2 = *mrgl;
  _DAT_007dd9f0 = 0;
  do {
    if (SVar2 == (SMRGLHeaderExtended)0x0) {
      if (_DAT_007dd9f0 != 0) {
        if (_DAT_01c6cee8 == 0) {
          iVar4 = 0;
          iVar3 = 0;
          if (0 < _DAT_007dd9f0) {
            do {
              puVar1 = (uint *)(iVar3 + 0x7dd9f4);
              iVar3 = iVar3 + 4;
              iVar4 = iVar4 + 1;
              engine_3d_c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_004059a0(*puVar1);
            } while (iVar4 < _DAT_007dd9f0);
          }
        }
        else {
          engine_special_cpp_drawPolyList_FUN_00565c70(&DAT_0060b014,0x7dd9f4,_DAT_007dd9f0,0xcd);
        }
        _DAT_007dd9f0 = 0;
      }
      DAT_005fba40 = 1;
      return;
    }
    SVar2 = *mrgl;
    if ((byte)SVar2 < 0x14) {
      if ((byte)SVar2 < 3) {
        if (SVar2 == (SMRGLHeaderExtended)0x2) {
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
      else if ((byte)SVar2 < 4) {
        engine_3d_c_processVertexLighting_FUN_004039f0(mrgl);
      }
      else {
        if (SVar2 != (SMRGLHeaderExtended)0xd) goto LAB_00407a42;
        if (_DAT_007dd9f0 != 0) {
          if (_DAT_01c6cee8 == 0) {
            iVar3 = 0;
            if (0 < _DAT_007dd9f0) {
              iVar4 = 0;
              do {
                puVar1 = (uint *)(iVar4 + 0x7dd9f4);
                iVar4 = iVar4 + 4;
                iVar3 = iVar3 + 1;
                engine_3d_c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_004059a0(*puVar1);
              } while (iVar3 < _DAT_007dd9f0);
            }
          }
          else {
            engine_special_cpp_drawPolyList_FUN_00565c70(&DAT_0060b014,0x7dd9f4,_DAT_007dd9f0,0xcd);
          }
          _DAT_007dd9f0 = 0;
        }
        engine_texture_cpp_FUN_0056aa10(mrgl);
      }
    }
    else if (0x14 < (byte)SVar2) {
      if ((byte)SVar2 < 0x29) {
        if (SVar2 != (SMRGLHeaderExtended)0x18) goto LAB_00407a42;
        engine_3d_c_renderPolygonLitAlphaPlaneMaskedUVOp24_FUN_00404560(mrgl);
      }
      else if ((byte)SVar2 < 0x2a) {
        iVar3 = engine_3d_c_isVisiblePlane_FUN_00403920(mrgl + 8);
        if (iVar3 != 0) {
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
        if (SVar2 != (SMRGLHeaderExtended)0x41) goto LAB_00407a42;
        engine_3d_c_renderPolygonFullEffectsBufferedOp65_FUN_00407100(mrgl);
      }
    }
    iVar3 = engine_model_c_FUN_004f8730(mrgl);
    mrgl = mrgl + iVar3;
    SVar2 = *mrgl;
  } while( true );
}
