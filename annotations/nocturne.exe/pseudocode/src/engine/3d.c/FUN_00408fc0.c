// Name: engine_3d.c_FUN_00408fc0
// Address: 00408fc0
// Address Range: [[00408fc0, 00409209]]
// Convention: unknown
// Signature: void engine_3d_c_FUN_00408fc0(SMRGLHeaderPrimitive *param_1)

#include "nocturne.h"

void engine_3d_c_FUN_00408fc0(SMRGLHeaderPrimitive *param_1)

{
  uint *puVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  char local_110 [256];
  
  cVar2 = (char)(param_1->base).type;
  DAT_00761ec4 = 0;
  do {
    if (cVar2 == '\0') {
      if (DAT_00761ec4 != 0) {
        if (g_UseExternalRenderer == 0) {
          iVar5 = 0;
          iVar4 = 0;
          if (0 < DAT_00761ec4) {
            do {
              puVar1 = (uint *)((int)&DAT_00761ec8 + iVar4);
              iVar4 = iVar4 + 4;
              iVar5 = iVar5 + 1;
              engine_3d_c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_00407120
                        ((SMRGLHeaderPrimitive *)*puVar1);
            } while (iVar5 < DAT_00761ec4);
          }
        }
        else {
          engine_special_cpp_drawPolyList_FUN_00532680
                    ((SRenderVertex *)&DAT_005c5014,(SMRGLPrimitiveQuad **)&DAT_00761ec8,
                     DAT_00761ec4,0xcd);
        }
        DAT_00761ec4 = 0;
      }
      INT_005b7644 = 1;
      return;
    }
    bVar3 = (byte)(param_1->base).type;
    if (bVar3 < 0x14) {
      if (bVar3 < 3) {
        if (bVar3 == 2) {
          engine_3d_c_transformAndBufferVertices_FUN_00404530((SMRGLHeaderExtended *)param_1);
          if (INT_005b7644 != 0) {
            engine_3d_c_FUN_00408e80(param_1);
            return;
          }
        }
        else {
LAB_004091a2:
          _sprintf(local_110,"Unknown primitive : %d",(uint)(byte)(param_1->base).type);
          g_CurrentLineNumber = 3539;
          g_CurrentFilename = "..\\engine\\3d.c";
          core_main_c_displayErrorAndQuit_FUN_004c8440(local_110);
        }
      }
      else if (bVar3 < 4) {
        engine_3d_c_processVertexLighting_FUN_00404730((SMRGLHeaderExtended *)param_1);
      }
      else {
        if (bVar3 != 0xd) goto LAB_004091a2;
        if (DAT_00761ec4 != 0) {
          if (g_UseExternalRenderer == 0) {
            iVar4 = 0;
            if (0 < DAT_00761ec4) {
              iVar5 = 0;
              do {
                puVar1 = (uint *)((int)&DAT_00761ec8 + iVar5);
                iVar5 = iVar5 + 4;
                iVar4 = iVar4 + 1;
                engine_3d_c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_00407120
                          ((SMRGLHeaderPrimitive *)*puVar1);
              } while (iVar4 < DAT_00761ec4);
            }
          }
          else {
            engine_special_cpp_drawPolyList_FUN_00532680
                      ((SRenderVertex *)&DAT_005c5014,(SMRGLPrimitiveQuad **)&DAT_00761ec8,
                       DAT_00761ec4,0xcd);
          }
          DAT_00761ec4 = 0;
        }
        engine_texture_cpp_ensureTextureLoaded_FUN_00545920((SMRGLTextureBasic *)param_1);
      }
    }
    else if (0x14 < bVar3) {
      if (bVar3 < 0x29) {
        if (bVar3 != 0x18) goto LAB_004091a2;
        engine_3d_c_renderPolygonLitAlphaPlaneMaskedUVOp24_FUN_00405c90(param_1);
      }
      else if (bVar3 < 0x2a) {
        iVar4 = engine_3d_c_isVisiblePlane_FUN_00404610(&param_1->surface_normal);
        if (iVar4 != 0) {
          if (1999 < DAT_00761ec4) {
            g_CurrentFilename = "..\\engine\\3d.c";
            g_CurrentLineNumber = 3465;
            core_main_c_displayErrorAndQuit_FUN_004c8440("renderFaceList - too many faces");
          }
          (&DAT_00761ec8)[DAT_00761ec4] = param_1;
          DAT_00761ec4 = DAT_00761ec4 + 1;
        }
      }
      else {
        if (bVar3 != 0x41) goto LAB_004091a2;
        engine_3d_c_renderPolygonFullEffectsBufferedOp65_FUN_00408880(param_1);
      }
    }
    iVar4 = engine_model_c_getMRGLSize_FUN_004dd520((SMRGLHeaderExtended *)param_1);
    param_1 = (SMRGLHeaderPrimitive *)((int)&(param_1->base).type + iVar4);
    cVar2 = (char)(param_1->base).type;
  } while( true );
}
