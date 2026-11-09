// Name: engine_3d.c_FUN_004079f0
// Address: 004079f0
// Address Range: [[004079f0, 00407c39]]
// Convention: unknown
// Signature: void engine_3d_c_FUN_004079f0(SMRGLHeaderExtended *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_3d_c_FUN_004079f0(SMRGLHeaderExtended *param_1)

{
  uint *puVar1;
  SMRGLHeaderExtended SVar2;
  int iVar3;
  int iVar4;
  byte auStack_110 [256];
  
  SVar2 = *param_1;
  _DAT_007ba070 = 0;
  do {
    if (SVar2 == (SMRGLHeaderExtended)0x0) {
      if (_DAT_007ba070 != 0) {
        if (_DAT_01c37788 == 0) {
          iVar4 = 0;
          iVar3 = 0;
          if (0 < _DAT_007ba070) {
            do {
              puVar1 = (uint *)(iVar3 + 0x7ba074);
              iVar3 = iVar3 + 4;
              iVar4 = iVar4 + 1;
              engine_3d_c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_00405b70(*puVar1);
            } while (iVar4 < _DAT_007ba070);
          }
        }
        else {
          engine_special_cpp_drawPolyList_FUN_0055f950(&DAT_00622014,0x7ba074,_DAT_007ba070,0xcd);
        }
        _DAT_007ba070 = 0;
      }
      DAT_006141e0 = 1;
      return;
    }
    SVar2 = *param_1;
    if ((byte)SVar2 < 0x14) {
      if ((byte)SVar2 < 3) {
        if (SVar2 == (SMRGLHeaderExtended)0x2) {
          engine_3d_c_transformAndBufferVertices_FUN_00403890(param_1);
          if (DAT_006141e0 != 0) {
            engine_3d_c_FUN_004078b0(param_1);
            return;
          }
        }
        else {
LAB_00407bd2:
          FUN_005b7790(auStack_110,"Unknown primitive : %d",*param_1);
          _DAT_01d046a4 = 0xcff;
          _DAT_01d046a0 = "..\\engine\\3d.c";
          core_main_c_FUN_004e4500(auStack_110);
        }
      }
      else if ((byte)SVar2 < 4) {
        engine_3d_c_processVertexLighting_FUN_00403a40(param_1);
      }
      else {
        if (SVar2 != (SMRGLHeaderExtended)0xd) goto LAB_00407bd2;
        if (_DAT_007ba070 != 0) {
          if (_DAT_01c37788 == 0) {
            iVar3 = 0;
            if (0 < _DAT_007ba070) {
              iVar4 = 0;
              do {
                puVar1 = (uint *)(iVar4 + 0x7ba074);
                iVar4 = iVar4 + 4;
                iVar3 = iVar3 + 1;
                engine_3d_c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_00405b70(*puVar1);
              } while (iVar3 < _DAT_007ba070);
            }
          }
          else {
            engine_special_cpp_drawPolyList_FUN_0055f950(&DAT_00622014,0x7ba074,_DAT_007ba070,0xcd);
          }
          _DAT_007ba070 = 0;
        }
        engine_texture_cpp_FUN_00574e00(param_1);
      }
    }
    else if (0x14 < (byte)SVar2) {
      if ((byte)SVar2 < 0x29) {
        if (SVar2 != (SMRGLHeaderExtended)0x18) goto LAB_00407bd2;
        engine_3d_c_renderPolygonLitAlphaPlaneMaskedUVOp24_FUN_004046e0(param_1);
      }
      else if ((byte)SVar2 < 0x2a) {
        iVar3 = engine_3d_c_isVisiblePlane_FUN_00403970(param_1 + 8);
        if (iVar3 != 0) {
          if (1999 < _DAT_007ba070) {
            _DAT_01d046a0 = "..\\engine\\3d.c";
            _DAT_01d046a4 = 0xcb5;
            core_main_c_FUN_004e4500("renderFaceList - too many faces");
          }
          *(SMRGLHeaderExtended **)(_DAT_007ba070 * 4 + 0x7ba074) = param_1;
          _DAT_007ba070 = _DAT_007ba070 + 1;
        }
      }
      else {
        if (SVar2 != (SMRGLHeaderExtended)0x41) goto LAB_00407bd2;
        engine_3d_c_renderPolygonFullEffectsBufferedOp65_FUN_004072b0(param_1);
      }
    }
    iVar3 = engine_model_c_FUN_00500f30(param_1);
    param_1 = param_1 + iVar3;
    SVar2 = *param_1;
  } while( true );
}
