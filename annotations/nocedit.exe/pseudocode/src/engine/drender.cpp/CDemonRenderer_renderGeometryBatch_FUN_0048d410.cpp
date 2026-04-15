// Name: engine_drender.cpp_CDemonRenderer_renderGeometryBatch_FUN_0048d410
// Address: 0048d410
// Address Range: [[0048d410, 0048d6b2]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderGeometryBatch_FUN_0048d410(CDemonRenderer *this_ptr,int *vertex_indices,int face_count,int vertices_per_face,int render_mode)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_renderGeometryBatch_FUN_0048d410(CDemonRenderer *this_ptr,int *vertex_indices,int face_count,int vertices_per_face,int render_mode)

{
  ushort *puVar2;
  int iVar4;
  ushort *puVar1;
  int iVar2;
  int iVar3;
  SRenderVertex *pSVar4;
  SRenderVertex *v1;
  CVector3i local_68 [6];
  int local_18;
  int local_14;
  
  if (render_mode == -1) {
    render_mode = 0x2cd;
  }
  if (this_ptr->texture_capture_enabled != 0) {
    g_CurrentFilename = "..\\engine\\drender.cpp";
    g_CurrentLineNumber = 0xa6a;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't capture this type of face!");
  }
  if (this_ptr->face_count == 0) {
    if (render_mode == 0xc0) {
      g_ScanlineRenderFunc = (RenderScanlineFunc *)core_dstrender_cpp_renderDepthOnlyReversed_FUN_004906e9;
    }
    else if (g_BitsPerPixel == 0x20) {
      g_ScanlineRenderFunc = (RenderScanlineFunc *)wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
    }
    else {
      g_ScanlineRenderFunc = (RenderScanlineFunc *)wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
    }
    g_VertexPreprocessMode = PREPROCESS_W_DEPTH_REPLACEMENT;
    g_RenderStateFlags = (_BIT_INTEGER32)render_mode;
    if (0 < face_count) {
      do {
        while ((g_CullingMode != 0 &&
               (v1 = this_ptr->vertex_buffer_ptr + *(ushort *)((int)vertex_indices + 2),
               iVar4 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150
                                 (this_ptr->vertex_buffer_ptr + *(ushort *)vertex_indices,v1,v1),
               iVar4 == 0))) {
          face_count = face_count + -1;
          vertex_indices = (int *)((int)vertex_indices + vertices_per_face * 2);
          if (face_count < 1) {
            return;
          }
        }
        iVar4 = 0;
        if (0 < vertices_per_face) {
          puVar1 = (ushort *)vertex_indices;
          iVar2 = 0;
          do {
            if (*puVar1 == 0xffff) break;
            iVar4 = iVar4 + 1;
            *(uint *)((int)&local_68[0].x + iVar2) = (uint)*puVar1;
            puVar1 = puVar1 + 1;
            iVar2 = iVar2 + 4;
          } while (iVar4 < vertices_per_face);
        }
        if ((this_ptr->face_capture_enabled == 0) &&
           (((this_ptr->face_count != 0 && ((g_RenderStateFlags.dword & RENDER_TEX_ENABLE) == 0)) ||
            ((g_RenderStateFlags.dword & (RENDER_TEX_ENABLE | RENDER_FOG_COLOR)) == 0)))) {
          core_xform_cpp_transformAndClipGeometry_FUN_005f8550(iVar4,&local_68[0].x);
          if (2 < g_ClippedVertexCount) {
            engine_3d_c_rasterizeTriangle_FUN_005fcfc0(g_ClippedVertexBuffer,g_ClippedVertexCount);
          }
        }
        else if ((g_RenderStateFlags.dword & RENDER_COLOR_FROM_VERTEX) == 0) {
          engine_clipper_c_clipAndRasterize_FUN_004371b0(iVar4,&local_68[0].x);
        }
        else {
          engine_clipper_c_clipPolygonToViewport_FUN_00438420(iVar4,&local_68[0].x);
        }
        face_count = face_count + -1;
        vertex_indices = (int *)((int)vertex_indices + vertices_per_face * 2);
        if (face_count < 1) {
          return;
        }
      } while( true );
    }
  }
  else {
    g_RenderStateFlags.dword = 0;
    g_VertexPreprocessMode = PREPROCESS_NONE;
    g_ScanlineRenderFunc = (RenderScanlineFunc *)core_dstrender_cpp_renderDepthOnlyStandard_FUN_0049072f;
    for (; 0 < face_count; face_count = face_count + -1) {
      if ((g_CullingMode == 0) ||
         (pSVar4 = this_ptr->vertex_buffer_ptr + *(ushort *)((int)vertex_indices + 2),
         iVar4 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150
                           (this_ptr->vertex_buffer_ptr + *(ushort *)vertex_indices,pSVar4,pSVar4),
         iVar4 != 0)) {
        iVar3 = 0;
        if (0 < vertices_per_face) {
          puVar2 = (ushort *)vertex_indices;
          iVar4 = 0;
          do {
            if (*puVar2 == 0xffff) break;
            iVar3 = iVar3 + 1;
            *(uint *)((int)&local_68[0].x + iVar4) = (uint)*puVar2;
            puVar2 = puVar2 + 1;
            iVar4 = iVar4 + 4;
          } while (iVar3 < vertices_per_face);
        }
        if (this_ptr->face_capture_enabled == 0) {
          engine_drender_cpp_renderTriangleSimple_FUN_004839f0(local_68,iVar3);
        }
        else {
          core_xform_cpp_transformAndClipGeometry_FUN_005f8550(iVar3,&local_68[0].x);
          if (2 < g_ClippedVertexCount) {
            engine_3d_c_rasterizeTriangle_FUN_005fcfc0(g_ClippedVertexBuffer,g_ClippedVertexCount);
          }
        }
      }
      vertex_indices = (int *)((int)vertex_indices + vertices_per_face * 2);
    }
  }
  return;
}
