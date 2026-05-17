// Name: engine_drender.cpp_CDemonRenderer_renderFacetList_FUN_0048cf00
// Address: 0048cf00
// MANUAL RECONSTRUCTION
// Address Range: [[0048cf00, 0048d16d]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderFacetList_FUN_0048cf00(CDemonRenderer *this_ptr,SMRGLPrimitiveQuad *primitive_array,int primitive_count,int primitive_stride,int render_flags)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_renderFacetList_FUN_0048cf00(CDemonRenderer *this_ptr,SMRGLPrimitiveQuad *primitive_array,int primitive_count,int primitive_stride,int render_flags)

{
  int iVar2;
  int iVar3;
  int polygon_count;
  int local_28 [4];
  int local_14;
  SMRGLHeaderBasic *pSVar1;
  
  if (((this_ptr->face_capture_enabled == 0) && (this_ptr->plane_culling_enabled == 0)) &&
     (g_CullingMode != 0)) {
    if (this_ptr->face_count == 0) {
      if (g_BitsPerPixel == 0x20) {
        g_ScanlineRenderFunc = (MainScanlineFunc *)wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
      }
      else {
        g_ScanlineRenderFunc = (MainScanlineFunc *)wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
      }
      g_RenderStateFlags.dword = render_flags;
      g_VertexPreprocessMode = 6;
      if (g_UseExternalRenderer == 0) {
        for (; 0 < primitive_count; primitive_count = primitive_count + -1) {
          local_28[0] = primitive_array->vertices[0].vertex_index;
          local_28[1] = primitive_array->vertices[1].vertex_index;
          local_28[2] = primitive_array->vertices[2].vertex_index;
          if ((primitive_array->base).base.count == 4) {
            local_28[3] = primitive_array->vertices[3].vertex_index;
          }
          if (this_ptr->skip_uv_extraction == 0) {
            this_ptr->vertex_buffer_ptr[local_28[0]].u = primitive_array->vertices[0].texture_u;
            this_ptr->vertex_buffer_ptr[local_28[0]].v = primitive_array->vertices[0].texture_v;
            this_ptr->vertex_buffer_ptr[local_28[1]].u = primitive_array->vertices[1].texture_u;
            this_ptr->vertex_buffer_ptr[local_28[1]].v = primitive_array->vertices[1].texture_v;
            this_ptr->vertex_buffer_ptr[local_28[2]].u = primitive_array->vertices[2].texture_u;
            this_ptr->vertex_buffer_ptr[local_28[2]].v = primitive_array->vertices[2].texture_v;
            if ((primitive_array->base).base.count == 4) {
              this_ptr->vertex_buffer_ptr[local_28[3]].u = primitive_array->vertices[3].texture_u;
              this_ptr->vertex_buffer_ptr[local_28[3]].v = primitive_array->vertices[3].texture_v;
            }
          }
          engine_drender_cpp_renderTriangleTextured_FUN_00483370
                    (local_28,(primitive_array->base).base.count);
          primitive_array =
               (SMRGLPrimitiveQuad *)
               ((int)&(((SMRGLPrimitiveQuad *)(primitive_array->vertices + -2))->base).base.type +
               primitive_stride);
        }
      }
      else {
        polygon_count = 0;
        local_14 = 0;
        if (0 < primitive_count) {
          do {
            iVar2 = engine_prim_c_getTriangleWindingFromIndices1_FUN_00552210
                              ((SMRGLPrimitiveTriangle *)primitive_array);
            if (iVar2 != 0) {
              g_VisibleFacePointers[polygon_count] = primitive_array;
              polygon_count = polygon_count + 1;
              if (1999 < polygon_count) {
                g_CurrentFilename = "..\\engine\\drender.cpp";
                g_CurrentLineNumber = 0x9b6;
                core_main_c_displayErrorAndQuit_FUN_00506f10
                          ("CDemonRenderer::demonGZFacetList - Too many visible faces at once : %d",polygon_count);
              }
            }
            local_14 = local_14 + 1;
            primitive_array =
                 (SMRGLPrimitiveQuad *)
                 ((int)&(((SMRGLPrimitiveTriangle *)(primitive_array->vertices + -2))->base).base.
                        type + primitive_stride);
          } while (local_14 < primitive_count);
        }
        if (0 < polygon_count) {
          wincore_windll_cpp_drawPolyList_FUN_005b7640
                    (this_ptr->vertex_buffer_ptr,(SMRGLPrimitiveTriangle **)g_VisibleFacePointers,
                     polygon_count,g_RenderStateFlags.dword);
          return;
        }
      }
    }
    else {
      g_ScanlineRenderFunc = (MainScanlineFunc *)core_dstrender_cpp_renderDepthOnlyStandard_FUN_0049072f;
      g_RenderStateFlags.dword = 0;
      g_VertexPreprocessMode = g_RenderStateFlags.dword;
      for (; 0 < primitive_count; primitive_count = primitive_count + -1) {
        local_28[0] = primitive_array->vertices[0].vertex_index;
        local_28[1] = primitive_array->vertices[1].vertex_index;
        local_28[2] = primitive_array->vertices[2].vertex_index;
        if ((primitive_array->base).base.count == 4) {
          local_28[3] = primitive_array->vertices[3].vertex_index;
        }
        pSVar1 = &(primitive_array->base).base;
        primitive_array =
             (SMRGLPrimitiveQuad *)
             ((int)&(((SMRGLPrimitiveQuad *)(primitive_array->vertices + -2))->base).base.type +
             primitive_stride);
        engine_drender_cpp_renderTriangleSimple_FUN_004839f0((CVector3i *)local_28,pSVar1->count);
      }
    }
  }
  else {
    iVar3 = 0;
    if (0 < primitive_count) {
      do {
        engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_0048aeb0
                  (this_ptr,(SMRGLPrimitivePoly *)primitive_array,render_flags);
        iVar3 = iVar3 + 1;
        primitive_array =
             (SMRGLPrimitiveQuad *)
             ((int)&(((SMRGLPrimitivePoly *)(((SMRGLPrimitivePoly *)primitive_array)->vertices + -2)
                     )->base).base.type + primitive_stride);
      } while (iVar3 < primitive_count);
    }
  }
  return;
}
