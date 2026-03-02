// Name: engine_drender.cpp_CDemonRenderer_renderTriangleFacetList_FUN_0048cf00
// Address: 0048cf00
// Address Range: [[0048cf00, 0048d16d]]
// Convention: __cdecl
// Signature: int __cdecl engine_drender_cpp_CDemonRenderer_renderTriangleFacetList_FUN_0048cf00(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *primitive_array,int primitive_count,int render_flags,int primitive_stride)

#include "nocturne.h"

int __cdecl engine_drender_cpp_CDemonRenderer_renderTriangleFacetList_FUN_0048cf00(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *primitive_array,int primitive_count,int render_flags,int primitive_stride)

{
  SMRGLHeaderBasic *pSVar1;
  int in_EAX;
  int extraout_EAX;
  int extraout_EAX_00;
  int extraout_EAX_01;
  int iVar2;
  int iVar3;
  CVector3i local_28;
  int local_1c;
  int local_18;
  int local_14;
  
  if (((this_ptr->face_capture_enabled == 0) && (this_ptr->plane_culling_enabled == 0)) &&
     (g_CullingMode != 0)) {
    if (this_ptr->face_count == 0) {
      if (g_BitsPerPixel == 0x20) {
        g_ScanlineRenderFunc = (RenderScanlineFunc *)wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
      }
      else {
        g_ScanlineRenderFunc = (RenderScanlineFunc *)wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
      }
      g_RenderStateFlags.dword = primitive_stride;
      in_EAX = 6;
      g_RenderStateFlag2 = 6;
      if (g_UseExternalRenderer == 0) {
        for (; 0 < primitive_count; primitive_count = primitive_count + -1) {
          local_28.x = primitive_array[1].base.type;
          local_28.y = primitive_array[1].surface_normal.B;
          local_28.z = primitive_array[2].base.type;
          if ((primitive_array->base).count == 4) {
            local_1c = primitive_array[2].surface_normal.B;
          }
          if (this_ptr->skip_uv_extraction == 0) {
            this_ptr->vertex_buffer_ptr[local_28.x].u = primitive_array[1].base.count;
            this_ptr->vertex_buffer_ptr[local_28.x].v = primitive_array[1].surface_normal.A;
            this_ptr->vertex_buffer_ptr[local_28.y].u = primitive_array[1].surface_normal.C;
            this_ptr->vertex_buffer_ptr[local_28.y].v = primitive_array[1].surface_normal.D;
            this_ptr->vertex_buffer_ptr[local_28.z].u = primitive_array[2].base.count;
            this_ptr->vertex_buffer_ptr[local_28.z].v = primitive_array[2].surface_normal.A;
            if ((primitive_array->base).count == 4) {
              this_ptr->vertex_buffer_ptr[local_1c].u = primitive_array[2].surface_normal.C;
              this_ptr->vertex_buffer_ptr[local_1c].v = primitive_array[2].surface_normal.D;
            }
          }
          engine_drender_cpp_renderTriangleTextured_FUN_00483370
                    (&local_28.x,(primitive_array->base).count);
          primitive_array =
               (SMRGLHeaderPrimitive *)((int)&(primitive_array->base).type + render_flags);
          in_EAX = extraout_EAX_01;
        }
      }
      else {
        iVar3 = 0;
        local_14 = 0;
        if (0 < primitive_count) {
          local_18 = 0;
          do {
            iVar2 = engine_prim_c_getTriangleWindingFromIndices_FUN_00552210
                              ((SMRGLPrimitiveTriangle *)primitive_array);
            if (iVar2 != 0) {
              iVar3 = iVar3 + 1;
              iVar2 = local_18 + 4;
              *(SMRGLHeaderPrimitive **)((int)g_VisibleFacePointers + local_18) = primitive_array;
              local_18 = iVar2;
              if (1999 < iVar3) {
                g_CurrentFilename = "..\\engine\\drender.cpp";
                g_CurrentLineNumber = 0x9b6;
                core_main_c_displayErrorAndQuit_FUN_00506f10
                          ("CDemonRenderer::demonGZFacetList - Too many visible faces at once : %d",iVar3);
              }
            }
            local_14 = local_14 + 1;
            primitive_array =
                 (SMRGLHeaderPrimitive *)
                 ((int)&(((SMRGLPrimitiveTriangle *)
                         (((SMRGLPrimitiveTriangle *)primitive_array)->vertices + -2))->base).base.
                        type + render_flags);
            in_EAX = render_flags;
          } while (local_14 < primitive_count);
        }
        if (0 < iVar3) {
          iVar3 = wincore_windll_cpp_drawPolyList_FUN_005b7640
                            (this_ptr->vertex_buffer_ptr,
                             (SMRGLPrimitiveTriangle **)g_VisibleFacePointers,iVar3,
                             g_RenderStateFlags.dword);
          return iVar3;
        }
      }
    }
    else {
      g_ScanlineRenderFunc = (RenderScanlineFunc *)core_dstrender_cpp_renderDepthOnlyStandard_FUN_0049072f;
      g_RenderStateFlags.dword = 0;
      g_RenderStateFlag2 = g_RenderStateFlags.dword;
      for (; 0 < primitive_count; primitive_count = primitive_count + -1) {
        local_28.x = primitive_array[1].base.type;
        local_28.y = primitive_array[1].surface_normal.B;
        local_28.z = primitive_array[2].base.type;
        if ((primitive_array->base).count == 4) {
          local_1c = primitive_array[2].surface_normal.B;
        }
        pSVar1 = &primitive_array->base;
        primitive_array =
             (SMRGLHeaderPrimitive *)((int)&(primitive_array->base).type + render_flags);
        engine_drender_cpp_renderTriangleSimple_FUN_004839f0(&local_28,pSVar1->count);
        in_EAX = extraout_EAX_00;
      }
    }
  }
  else {
    iVar3 = 0;
    if (0 < primitive_count) {
      do {
        engine_drender_cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0
                  (this_ptr,primitive_array,primitive_stride);
        iVar3 = iVar3 + 1;
        primitive_array =
             (SMRGLHeaderPrimitive *)((int)&(primitive_array->base).type + render_flags);
        in_EAX = extraout_EAX;
      } while (iVar3 < primitive_count);
    }
  }
  return in_EAX;
}
