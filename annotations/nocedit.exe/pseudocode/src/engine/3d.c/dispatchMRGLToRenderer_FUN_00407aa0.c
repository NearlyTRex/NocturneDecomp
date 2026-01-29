// Name: engine_3d.c_dispatchMRGLToRenderer_FUN_00407aa0
// Address: 00407aa0
// Address Range: [[00407aa0, 00407ce9]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_dispatchMRGLToRenderer_FUN_00407aa0(SVertexBatch *cmd)

#include "nocturne.h"

void __cdecl engine_3d_c_dispatchMRGLToRenderer_FUN_00407aa0(SVertexBatch *cmd)

{
  uint *puVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  SVertexBatch *in_stack_fffffef0;
  
  cVar2 = (char)cmd->primitive_type;
  g_RenderFaceCount = 0;
  do {
    if (cVar2 == '\0') {
      if (g_RenderFaceCount != 0) {
        if (g_UseExternalRenderer == 0) {
          iVar5 = 0;
          iVar4 = 0;
          if (0 < g_RenderFaceCount) {
            do {
              puVar1 = (uint *)((int)g_RenderFaceArray + iVar4);
              iVar4 = iVar4 + 4;
              iVar5 = iVar5 + 1;
              engine_3d_c_renderPolygonTextureWrappedPlaneMasked_FUN_00405b50
                        ((SMRGLHeaderPrimitive *)*puVar1);
            } while (iVar5 < g_RenderFaceCount);
          }
        }
        else {
          wincore_windll_cpp_drawPolyList_FUN_005b7640
                    (g_RenderVertexBuffer,g_RenderFaceArray,g_RenderFaceCount,0xcd);
        }
        g_RenderFaceCount = 0;
      }
      g_VertexProcessingEnabled = 1;
      return;
    }
    bVar3 = (byte)cmd->primitive_type;
    if (bVar3 < 0x14) {
      if (bVar3 < 3) {
        if (bVar3 == 2) {
          engine_3d_c_transformAndBufferVertices_FUN_00403840(cmd,in_stack_fffffef0);
          if (g_VertexProcessingEnabled != 0) {
            engine_3d_c_dispatchMRGLBlockChain_FUN_00407890((SMRGLHeaderExtended *)cmd);
            return;
          }
        }
        else {
LAB_00407c82:
          sprintf
                    (&stack0xfffffef0,"Unknown primitive : %d",(uint)(byte)cmd->primitive_type
                    );
          g_CurrentLineNumber = 0xcf1;
          g_CurrentFilename = "..\\engine\\3d.c";
          core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xfffffef0);
        }
      }
      else if (bVar3 < 4) {
        engine_3d_c_processVertexLighting_FUN_00403a20(cmd);
      }
      else {
        if (bVar3 != 0xd) goto LAB_00407c82;
        if (g_RenderFaceCount != 0) {
          if (g_UseExternalRenderer == 0) {
            iVar4 = 0;
            if (0 < g_RenderFaceCount) {
              iVar5 = 0;
              do {
                puVar1 = (uint *)((int)g_RenderFaceArray + iVar5);
                iVar5 = iVar5 + 4;
                iVar4 = iVar4 + 1;
                engine_3d_c_renderPolygonTextureWrappedPlaneMasked_FUN_00405b50
                          ((SMRGLHeaderPrimitive *)*puVar1);
              } while (iVar4 < g_RenderFaceCount);
            }
          }
          else {
            wincore_windll_cpp_drawPolyList_FUN_005b7640
                      (g_RenderVertexBuffer,g_RenderFaceArray,g_RenderFaceCount,0xcd);
          }
          g_RenderFaceCount = 0;
        }
        engine_texture_cpp_ensureTextureLoaded_FUN_005dd800((SMRGLTextureBasic *)cmd);
      }
    }
    else if (0x14 < bVar3) {
      if (bVar3 < 0x29) {
        if (bVar3 != 0x18) goto LAB_00407c82;
        engine_3d_c_renderPrimitivePlaneMaskedComplex_FUN_004046c0((SMRGLHeaderPrimitive *)cmd);
      }
      else if (bVar3 < 0x2a) {
        iVar4 = engine_3d_c_isVisiblePlane_FUN_00403950((SClipPlane *)&cmd->vertex_count);
        if (iVar4 != 0) {
          if (1999 < g_RenderFaceCount) {
            g_CurrentFilename = "..\\engine\\3d.c";
            g_CurrentLineNumber = 0xca7;
            core_main_c_displayErrorAndQuit_FUN_00506f10("renderFaceList - too many faces");
          }
          g_RenderFaceArray[g_RenderFaceCount] = (SMRGLHeaderPrimitive *)cmd;
          g_RenderFaceCount = g_RenderFaceCount + 1;
        }
      }
      else {
        if (bVar3 != 0x41) goto LAB_00407c82;
        engine_3d_c_renderPolygonEngineAPIPremiumMultiState_FUN_00407290
                  ((SMRGLHeaderPrimitive *)cmd);
      }
    }
    iVar4 = engine_model_c_getMRGLSize_FUN_00528700((SMRGLHeaderExtended *)cmd);
    cmd = (SVertexBatch *)((int)&cmd->primitive_type + iVar4);
    cVar2 = (char)cmd->primitive_type;
  } while( true );
}
