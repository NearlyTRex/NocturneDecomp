// Name: engine_drender.cpp_CDemonRenderer_renderGeometryBatch_FUN_0048d410
// Address: 0048d410
// Address Range: [[0048d410, 0048d6b2]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_renderGeometryBatch_FUN_0048d410(CDemonRenderer * this_ptr, int * vertex_indices, int face_count, int vertices_per_face, int render_mode)

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_renderGeometryBatch_FUN_0048d410
          (CDemonRenderer *this_ptr,int *vertex_indices,int face_count,int vertices_per_face,
          int render_mode)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  SRenderVertex *pSVar4;
  ushort *puVar5;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  int unaff_EDI;
  int in_stack_ffffffa0;
  
  if (render_mode == -1) {
    render_mode = RENDER_ENGINE_CORE_PREMIUM;
  }
  if (this_ptr->texture_capture_enabled != 0) {
    g_CurrentFilename = "..\\engine\\drender.cpp";
    g_CurrentLineNumber = 0xa6a;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't capture this type of face!");
  }
  if (vertex_indices[1] == 0) {
    if (render_mode == 0xc0) {
      g_ScanlineRenderFunc = core_dstrender_cpp_renderDepthOnlyReversed_FUN_004906e9;
    }
    else if (g_BitsPerPixel == 0x20) {
      g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
    }
    else {
      g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
    }
    g_RenderStateFlag2 = PREPROCESS_W_DEPTH_REPLACEMENT;
    puVar5 = (ushort *)vertex_indices;
    g_RenderStateFlags = render_mode;
    if (0 < face_count) {
      do {
        while ((g_CullingMode != 0 &&
               (pSVar4 = (SRenderVertex *)((uint)puVar5[1] * 0x30 + *vertex_indices),
               iVar3 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150
                                 ((SRenderVertex *)(*vertex_indices + (uint)*puVar5 * 0x30),pSVar4,
                                  pSVar4), iVar3 == 0))) {
          face_count = face_count + -1;
          puVar5 = (ushort *)((int)puVar5 + unaff_EDI);
          if (face_count < 1) {
            return;
          }
        }
        iVar3 = 0;
        if (0 < vertices_per_face) {
          puVar1 = puVar5;
          iVar2 = 0;
          do {
            if (*puVar1 == 0xffff) break;
            iVar3 = iVar3 + 1;
            *(uint *)(&stack0xffffff9c + iVar2) = (uint)*puVar1;
            puVar1 = puVar1 + 1;
            iVar2 = iVar2 + 4;
          } while (iVar3 < vertices_per_face);
        }
        if ((vertex_indices[4] == 0) &&
           (((vertex_indices[1] != 0 && ((g_RenderStateFlags & 1U) == 0)) ||
            ((g_RenderStateFlags & 5U) == 0)))) {
          core_xform_cpp_transformAndClipGeometry_FUN_005f8550(iVar3,(int *)&stack0xffffff9c);
          if (2 < g_ClippedVertexCount) {
            engine_3d_c_rasterizeTriangle_FUN_005fcfc0
                      (g_ClippedVertexBuffer,g_ClippedVertexCount,in_stack_ffffffa0);
          }
        }
        else if ((g_RenderStateFlags & 0x200U) == 0) {
          engine_clipper_c_clipAndRasterize_FUN_004371b0(iVar3,(int *)&stack0xffffff9c);
        }
        else {
          engine_clipper_c_clipPolygonToViewport_FUN_00438420(iVar3,(int *)&stack0xffffff9c);
        }
        face_count = face_count + -1;
        puVar5 = puVar5 + vertices_per_face;
        if (face_count < 1) {
          return;
        }
      } while( true );
    }
  }
  else {
    g_RenderStateFlags = 0;
    g_RenderStateFlag2 = PREPROCESS_NONE;
    g_ScanlineRenderFunc = core_dstrender_cpp_renderDepthOnlyStandard_FUN_0049072f;
    puVar5 = (ushort *)vertex_indices;
    if (0 < face_count) {
      do {
        if ((g_CullingMode == 0) ||
           (pSVar4 = (SRenderVertex *)((uint)puVar5[1] * 0x30 + *vertex_indices),
           iVar3 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150
                             ((SRenderVertex *)(*vertex_indices + (uint)*puVar5 * 0x30),pSVar4,
                              pSVar4), iVar3 != 0)) {
          iVar3 = 0;
          if (0 < vertices_per_face) {
            puVar1 = puVar5;
            iVar2 = 0;
            do {
              if (*puVar1 == 0xffff) break;
              iVar3 = iVar3 + 1;
              *(uint *)(&stack0xffffff9c + iVar2) = (uint)*puVar1;
              puVar1 = puVar1 + 1;
              iVar2 = iVar2 + 4;
            } while (iVar3 < vertices_per_face);
          }
          if (vertex_indices[4] == 0) {
            engine_drender_cpp_renderTriangleSimple_FUN_004839f0((int *)&stack0xffffff9c,iVar3);
          }
          else {
            core_xform_cpp_transformAndClipGeometry_FUN_005f8550(iVar3,(int *)&stack0xffffff9c);
            if (2 < g_ClippedVertexCount) {
              engine_3d_c_rasterizeTriangle_FUN_005fcfc0
                        (g_ClippedVertexBuffer,g_ClippedVertexCount,in_stack_ffffffa0);
            }
          }
        }
        face_count = face_count + -1;
        puVar5 = (ushort *)((int)puVar5 + unaff_EBP);
      } while (0 < face_count);
    }
  }
  return;
}
