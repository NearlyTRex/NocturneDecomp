// Name: engine_3d.c_dispatchMRGLToRenderer_FUN_00407aa0
// Address: 00407aa0
// MANUAL RECONSTRUCTION
// Address Range: [[00407aa0, 00407ce9]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_dispatchMRGLToRenderer_FUN_00407aa0(SMRGLHeaderExtended *mrgl)

#include "nocturne.h"

void __cdecl engine_3d_c_dispatchMRGLToRenderer_FUN_00407aa0(SMRGLHeaderExtended *mrgl)

{
  int iVar4;
  int iVar3;
  int iVar5;
  char local_110 [256];
  char cVar2;
  byte bVar3;
  
  cVar2 = (char)(mrgl->base).type;
  g_RenderFaceCount = 0;
  do {
    if (cVar2 == '\0') {
      if (g_RenderFaceCount != 0) {
        if (g_UseExternalRenderer == 0) {
          for (iVar5 = 0; iVar5 < g_RenderFaceCount; iVar5 = iVar5 + 1) {
            engine_3d_c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_00405b50
                      (g_RenderFaceArray[iVar5]);
          }
        }
        else {
          engine_special_cpp_drawPolyList_FUN_005b7640
                    (g_RenderVertexBuffer,(SMRGLPrimitiveTriangle **)g_RenderFaceArray,
                     g_RenderFaceCount,0xcd);
        }
        g_RenderFaceCount = 0;
      }
      g_VertexProcessingEnabled = 1;
      return;
    }
    bVar3 = (byte)(((SMRGLHeaderPrimitive *)mrgl)->base).type;
    if (bVar3 < 0x14) {
      if (bVar3 < 3) {
        if (bVar3 == 2) {
          engine_3d_c_transformAndBufferVertices_FUN_00403840(mrgl);
          if (g_VertexProcessingEnabled != 0) {
            engine_3d_c_dispatchMRGLBlockChain_FUN_00407890(mrgl);
            return;
          }
        }
        else {
LAB_00407c82:
          _sprintf(local_110,"Unknown primitive : %d",
                     (uint)(byte)(((SMRGLHeaderPrimitive *)mrgl)->base).type);
          g_CurrentLineNumber = 3313;
          g_CurrentFilename = "..\\engine\\3d.c";
          core_main_c_displayErrorAndQuit_FUN_00506f10(local_110);
        }
      }
      else if (bVar3 < 4) {
        engine_3d_c_processVertexLighting_FUN_00403a20(mrgl);
      }
      else {
        if (bVar3 != 0xd) goto LAB_00407c82;
        if (g_RenderFaceCount != 0) {
          if (g_UseExternalRenderer == 0) {
            for (iVar3 = 0; iVar3 < g_RenderFaceCount; iVar3 = iVar3 + 1) {
              engine_3d_c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_00405b50
                        (g_RenderFaceArray[iVar3]);
            }
          }
          else {
            engine_special_cpp_drawPolyList_FUN_005b7640
                      (g_RenderVertexBuffer,(SMRGLPrimitiveTriangle **)g_RenderFaceArray,
                       g_RenderFaceCount,0xcd);
          }
          g_RenderFaceCount = 0;
        }
        engine_texture_cpp_ensureTextureLoaded_FUN_005dd800((SMRGLTextureBasic *)mrgl);
      }
    }
    else if (0x14 < bVar3) {
      if (bVar3 < 0x29) {
        if (bVar3 != 0x18) goto LAB_00407c82;
        engine_3d_c_renderPolygonLitAlphaPlaneMaskedUVOp24_FUN_004046c0((SMRGLHeaderPrimitive *)mrgl);
      }
      else if (bVar3 < 0x2a) {
        iVar3 = engine_3d_c_isVisiblePlane_FUN_00403950
                          (&((SMRGLHeaderPrimitive *)mrgl)->surface_normal);
        if (iVar3 != 0) {
          if (1999 < g_RenderFaceCount) {
            g_CurrentFilename = "..\\engine\\3d.c";
            g_CurrentLineNumber = 3239;
            core_main_c_displayErrorAndQuit_FUN_00506f10("renderFaceList - too many faces");
          }
          g_RenderFaceArray[g_RenderFaceCount] = (SMRGLHeaderPrimitive *)mrgl;
          g_RenderFaceCount = g_RenderFaceCount + 1;
        }
      }
      else {
        if (bVar3 != 0x41) goto LAB_00407c82;
        engine_3d_c_renderPolygonFullEffectsBufferedOp65_FUN_00407290
                  ((SMRGLHeaderPrimitive *)mrgl);
      }
    }
    iVar4 = engine_model_c_getMRGLSize_FUN_00528700(mrgl);
    mrgl = (SMRGLHeaderExtended *)((char *)mrgl + iVar4);
    cVar2 = (char)(((SMRGLHeaderPrimitive *)mrgl)->base).type;
  } while( true );
}
