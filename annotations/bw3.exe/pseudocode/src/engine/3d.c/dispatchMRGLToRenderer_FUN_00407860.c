// Name: engine_3d.c_dispatchMRGLToRenderer_FUN_00407860
// Address: 00407860
// Address Range: [[00407860, 00407aa9]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_dispatchMRGLToRenderer_FUN_00407860(SMRGLHeaderExtended *mrgl)

#include "nocturne.h"

void __cdecl engine_3d_c_dispatchMRGLToRenderer_FUN_00407860(SMRGLHeaderExtended *mrgl)

{
  uint *puVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  
  cVar2 = (char)(mrgl->base).type;
  g_RenderFaceCount = 0;
  do {
    if (cVar2 == '\0') {
      if (g_RenderFaceCount != 0) {
        if (g_INT_01c6cee8 == 0) {
          iVar5 = 0;
          iVar4 = 0;
          if (0 < g_RenderFaceCount) {
            do {
              puVar1 = (uint *)((int)g_RenderFaceArray + iVar4);
              iVar4 = iVar4 + 4;
              iVar5 = iVar5 + 1;
              engine_3d_c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_004059a0
                        ((SMRGLHeaderPrimitive *)*puVar1);
            } while (iVar5 < g_RenderFaceCount);
          }
        }
        else {
          engine_special_cpp_drawPolyList_FUN_00565c70
                    (g_SRenderVertex_ARRAY_0060b014,(SMRGLPrimitiveQuad **)g_RenderFaceArray,
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
            engine_3d_c_dispatchMRGLBlockChain_FUN_00407720(mrgl);
            return;
          }
        }
        else {
LAB_00407a42:
          _sprintf(&stack0xfffffef0,"Unknown primitive : %d");
          g_CurrentLineNumber = 3350;
          g_CurrentFilename = "..\\engine\\3d.c";
          core_main_c_displayErrorAndQuit_FUN_004e4330(&stack0xfffffef0);
        }
      }
      else if (bVar3 < 4) {
        engine_3d_c_processVertexLighting_FUN_004039f0(mrgl);
      }
      else {
        if (bVar3 != 0xd) goto LAB_00407a42;
        if (g_RenderFaceCount != 0) {
          if (g_INT_01c6cee8 == 0) {
            iVar4 = 0;
            if (0 < g_RenderFaceCount) {
              iVar5 = 0;
              do {
                puVar1 = (uint *)((int)g_RenderFaceArray + iVar5);
                iVar5 = iVar5 + 4;
                iVar4 = iVar4 + 1;
                engine_3d_c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_004059a0
                          ((SMRGLHeaderPrimitive *)*puVar1);
              } while (iVar4 < g_RenderFaceCount);
            }
          }
          else {
            engine_special_cpp_drawPolyList_FUN_00565c70
                      (g_SRenderVertex_ARRAY_0060b014,(SMRGLPrimitiveQuad **)g_RenderFaceArray,
                       g_RenderFaceCount,0xcd);
          }
          g_RenderFaceCount = 0;
        }
        engine_texture_cpp_ensureTextureLoaded_FUN_0056aa10((SMRGLTextureBasic *)mrgl);
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
          if (1999 < g_RenderFaceCount) {
            g_CurrentFilename = "..\\engine\\3d.c";
            g_CurrentLineNumber = 3276;
            core_main_c_displayErrorAndQuit_FUN_004e4330("renderFaceList - too many faces");
          }
          g_RenderFaceArray[g_RenderFaceCount] = (SMRGLHeaderPrimitive *)mrgl;
          g_RenderFaceCount = g_RenderFaceCount + 1;
        }
      }
      else {
        if (bVar3 != 0x41) goto LAB_00407a42;
        engine_3d_c_renderPolygonFullEffectsBufferedOp65_FUN_00407100((SMRGLHeaderPrimitive *)mrgl);
      }
    }
    iVar4 = engine_model_c_getMRGLSize_FUN_004f8730(mrgl);
    mrgl = (SMRGLHeaderExtended *)((int)&(((SMRGLHeaderPrimitive *)mrgl)->base).type + iVar4);
    cVar2 = (char)(((SMRGLHeaderPrimitive *)mrgl)->base).type;
  } while( true );
}
