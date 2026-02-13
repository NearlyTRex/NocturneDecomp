// Name: engine_drender.cpp_CDemonRenderer_renderFaceList_FUN_0048d170
// Address: 0048d170
// Address Range: [[0048d170, 0048d404]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderFaceList_FUN_0048d170 (CDemonRenderer *this_ptr,SInputFace *face_array,int face_count,int render_flags)

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_renderFaceList_FUN_0048d170
          (CDemonRenderer *this_ptr,SInputFace *face_array,int face_count,int render_flags)

{
  int iVar1;
  int iVar2;
  CVector3i local_24;
  int local_18;
  int local_14;
  
  if (render_flags == -1) {
    render_flags = RENDER_ENGINE_CORE_PREMIUM;
  }
  if (this_ptr->texture_capture_enabled == 0) {
    if (((this_ptr->face_capture_enabled == 0) && (this_ptr->plane_culling_enabled == 0)) &&
       (g_CullingMode != 0)) {
      if (this_ptr->face_count == 0) {
        if (g_BitsPerPixel == 0x20) {
          g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
        }
        else {
          g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
        }
        g_RenderStateFlags = render_flags;
        g_RenderStateFlag2 = PREPROCESS_W_DEPTH_REPLACEMENT;
        if (g_UseExternalRenderer == 0) {
          for (; 0 < face_count; face_count = face_count + -1) {
            local_24.x = (int)(face_array->vertex_indices).vertex_index_0;
            local_24.y = (int)(face_array->vertex_indices).vertex_index_1;
            local_24.z = (int)(face_array->vertex_indices).vertex_index_2;
            if (this_ptr->unk == 0) {
              this_ptr->vertex_buffer_ptr[local_24.x].u = (uint)face_array->u_coord_0 << 8;
              this_ptr->vertex_buffer_ptr[local_24.x].v = (uint)face_array->v_coord_0 << 8;
              this_ptr->vertex_buffer_ptr[local_24.y].u = (uint)face_array->u_coord_1 << 8;
              this_ptr->vertex_buffer_ptr[local_24.y].v = (uint)face_array->v_coord_1 << 8;
              this_ptr->vertex_buffer_ptr[local_24.z].u = (uint)face_array->u_coord_2 << 8;
              this_ptr->vertex_buffer_ptr[local_24.z].v = (uint)face_array->v_coord_2 << 8;
            }
            face_array = face_array + 1;
            engine_drender_cpp_renderTriangleTextured_FUN_00483370(&local_24.x,3);
          }
        }
        else {
          iVar2 = 0;
          local_14 = 0;
          if (0 < face_count) {
            local_18 = 0;
            do {
              iVar1 = engine_prim_c_getTriangleWindingFromPackedIndices_FUN_005523f0
                                (&face_array->vertex_indices);
              if (iVar1 != 0) {
                iVar2 = iVar2 + 1;
                iVar1 = local_18 + 4;
                *(SInputFace **)((int)g_VisibleFacePointers + local_18) = face_array;
                local_18 = iVar1;
                if (1999 < iVar2) {
                  g_CurrentFilename = "..\\engine\\drender.cpp";
                  g_CurrentLineNumber = 0xa30;
                  core_main_c_displayErrorAndQuit_FUN_00506f10
                            ("CDemonRenderer::demonGZFacetList - Too many visible faces at once : %d",iVar2);
                }
              }
              local_14 = local_14 + 1;
              face_array = face_array + 1;
            } while (local_14 < face_count);
          }
          if (0 < iVar2) {
            wincore_windll_cpp_drawPolyList2_FUN_005b7780
                      (this_ptr->vertex_buffer_ptr,g_VisibleFacePointers,iVar2,g_RenderStateFlags);
            return;
          }
        }
      }
      else {
        g_ScanlineRenderFunc = core_dstrender_cpp_renderDepthOnlyStandard_FUN_0049072f;
        g_RenderStateFlags = 0;
        g_RenderStateFlag2 = 0;
        iVar2 = 0;
        iVar1 = 0;
        if (0 < face_count) {
          do {
            g_RenderStateFlag2 = iVar1;
            g_RenderStateFlags = iVar2;
            local_24.x = (int)(face_array->vertex_indices).vertex_index_0;
            local_24.y = (int)(face_array->vertex_indices).vertex_index_1;
            local_24.z = (int)(face_array->vertex_indices).vertex_index_2;
            face_count = face_count + -1;
            face_array = face_array + 1;
            engine_drender_cpp_renderTriangleSimple_FUN_004839f0(&local_24,3);
            iVar2 = g_RenderStateFlags;
            iVar1 = g_RenderStateFlag2;
          } while (0 < face_count);
          return;
        }
      }
    }
    else {
      iVar2 = 0;
      if (0 < face_count) {
        do {
          iVar2 = iVar2 + 1;
          engine_drender_cpp_CDemonRenderer_renderWireframeAdvanced_FUN_0048b030
                    (this_ptr,(SMRGLHeaderPrimitive *)face_array,render_flags);
          face_array = (SInputFace *)
                       ((int)&(((SMRGLHeaderPrimitive *)face_array)->surface_normal).C + 2);
        } while (iVar2 < face_count);
        return;
      }
    }
  }
  else {
    iVar2 = 0;
    if (0 < face_count) {
      do {
        iVar2 = iVar2 + 1;
        engine_drender_cpp_CDemonRenderer_captureFace_FUN_0048d8a0
                  (this_ptr,&face_array->vertex_indices,render_flags);
        face_array = face_array + 1;
      } while (iVar2 < face_count);
    }
  }
  return;
}
