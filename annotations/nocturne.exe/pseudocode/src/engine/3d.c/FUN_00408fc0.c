// Name: engine_3d.c_FUN_00408fc0
// Address: 00408fc0
// Address Range: [[00408fc0, 00409209]]
// Convention: unknown
// Signature: void engine_3d_c_FUN_00408fc0(byte *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_3d_c_FUN_00408fc0(byte *param_1)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte local_110 [256];
  
  bVar2 = *param_1;
  DAT_00761ec4 = 0;
  do {
    if (bVar2 == 0) {
      if (DAT_00761ec4 != 0) {
        if (_DAT_01c02594 == 0) {
          iVar4 = 0;
          iVar3 = 0;
          if (0 < DAT_00761ec4) {
            do {
              puVar1 = (uint *)((int)&DAT_00761ec8 + iVar3);
              iVar3 = iVar3 + 4;
              iVar4 = iVar4 + 1;
              engine_3d_c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_00407120(*puVar1);
            } while (iVar4 < DAT_00761ec4);
          }
        }
        else {
          engine_special_cpp_drawPolyList_FUN_00532680
                    (&DAT_005c5014,&DAT_00761ec8,DAT_00761ec4,0xcd);
        }
        DAT_00761ec4 = 0;
      }
      DAT_005b7644 = 1;
      return;
    }
    bVar2 = *param_1;
    if (bVar2 < 0x14) {
      if (bVar2 < 3) {
        if (bVar2 == 2) {
          engine_3d_c_transformAndBufferVertices_FUN_00404530(param_1);
          if (DAT_005b7644 != 0) {
            engine_3d_c_FUN_00408e80(param_1);
            return;
          }
        }
        else {
LAB_004091a2:
          _sprintf(local_110,"Unknown primitive : %d",*param_1);
          INT_01cc4804 = 0xdd3;
          PTR_01cc4800 = "..\\engine\\3d.c";
          core_main_c_FUN_004c8440(local_110);
        }
      }
      else if (bVar2 < 4) {
        engine_3d_c_processVertexLighting_FUN_00404730(param_1);
      }
      else {
        if (bVar2 != 0xd) goto LAB_004091a2;
        if (DAT_00761ec4 != 0) {
          if (_DAT_01c02594 == 0) {
            iVar3 = 0;
            if (0 < DAT_00761ec4) {
              iVar4 = 0;
              do {
                puVar1 = (uint *)((int)&DAT_00761ec8 + iVar4);
                iVar4 = iVar4 + 4;
                iVar3 = iVar3 + 1;
                engine_3d_c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_00407120(*puVar1);
              } while (iVar3 < DAT_00761ec4);
            }
          }
          else {
            engine_special_cpp_drawPolyList_FUN_00532680
                      (&DAT_005c5014,&DAT_00761ec8,DAT_00761ec4,0xcd);
          }
          DAT_00761ec4 = 0;
        }
        engine_texture_cpp_ensureTextureLoaded_FUN_00545920(param_1);
      }
    }
    else if (0x14 < bVar2) {
      if (bVar2 < 0x29) {
        if (bVar2 != 0x18) goto LAB_004091a2;
        engine_3d_c_renderPolygonLitAlphaPlaneMaskedUVOp24_FUN_00405c90(param_1);
      }
      else if (bVar2 < 0x2a) {
        iVar3 = engine_3d_c_isVisiblePlane_FUN_00404610(param_1 + 8);
        if (iVar3 != 0) {
          if (1999 < DAT_00761ec4) {
            PTR_01cc4800 = "..\\engine\\3d.c";
            INT_01cc4804 = 0xd89;
            core_main_c_FUN_004c8440("renderFaceList - too many faces");
          }
          (&DAT_00761ec8)[DAT_00761ec4] = param_1;
          DAT_00761ec4 = DAT_00761ec4 + 1;
        }
      }
      else {
        if (bVar2 != 0x41) goto LAB_004091a2;
        engine_3d_c_renderPolygonFullEffectsBufferedOp65_FUN_00408880(param_1);
      }
    }
    iVar3 = engine_model_c_getMRGLSize_FUN_004dd520(param_1);
    param_1 = param_1 + iVar3;
    bVar2 = *param_1;
  } while( true );
}
