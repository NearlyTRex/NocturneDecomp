// Name: engine_drender.cpp_CDemonRenderer_renderFaceList_FUN_0046bff0
// Address: 0046bff0
// Address Range: [[0046bff0, 0046c284]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderFaceList_FUN_0046bff0(CDemonRenderer *this_ptr,SInputFace *face_array,int face_count,int render_flags)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_renderFaceList_FUN_0046bff0(CDemonRenderer *this_ptr,SInputFace *face_array,int face_count,int render_flags)

{
  _BIT_INTEGER32 _Var1;
  int iVar2;
  int iVar3;
  CVector3i local_24;
  int local_18;
  int local_14;
  
  if (render_flags == -1) {
    render_flags = 0x2cd;
  }
  if (this_ptr->texture_capture_enabled == 0) {
    if (((this_ptr->face_capture_enabled == 0) && (this_ptr->plane_culling_enabled == 0)) &&
       (g_CullingMode != 0)) {
      if (this_ptr->shadow_pass_active == 0) {
        if (g_INT_006141c0 == 0x20) {
          g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline32_FUN_0055b3b1;
        }
        else {
          g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0055bb93;
        }
        g_RenderStateFlags.dword = render_flags;
        g_VertexPreprocessMode = 6;
        if (g_INT_01c37788 == 0) {
          for (; 0 < face_count; face_count = face_count + -1) {
            local_24.x = (int)(face_array->vertex_indices).vertex_index_0;
            local_24.y = (int)(face_array->vertex_indices).vertex_index_1;
            local_24.z = (int)(face_array->vertex_indices).vertex_index_2;
            if (this_ptr->skip_uv_extraction == 0) {
              this_ptr->vertex_buffer_ptr[local_24.x].u = (uint)face_array->u_coord_0 << 8;
              this_ptr->vertex_buffer_ptr[local_24.x].v = (uint)face_array->v_coord_0 << 8;
              this_ptr->vertex_buffer_ptr[local_24.y].u = (uint)face_array->u_coord_1 << 8;
              this_ptr->vertex_buffer_ptr[local_24.y].v = (uint)face_array->v_coord_1 << 8;
              this_ptr->vertex_buffer_ptr[local_24.z].u = (uint)face_array->u_coord_2 << 8;
              this_ptr->vertex_buffer_ptr[local_24.z].v = (uint)face_array->v_coord_2 << 8;
            }
            face_array = face_array + 1;
            engine_drender_cpp_renderTriangleTextured_FUN_00461f70(&local_24.x,3);
          }
        }
        else {
          iVar3 = 0;
          local_14 = 0;
          if (0 < face_count) {
            local_18 = 0;
            do {
              iVar2 = engine_prim_c_getTriangleWindingFromPackedIndices_FUN_0051ca00
                                (&face_array->vertex_indices);
              if (iVar2 != 0) {
                iVar3 = iVar3 + 1;
                iVar2 = local_18 + 4;
                *(SInputFace **)((int)g_VisibleFacePointers + local_18) = face_array;
                local_18 = iVar2;
                if (1999 < iVar3) {
                  g_CHAR_PTR_01d046a0 = "..\\engine\\drender.cpp";
                  g_INT_01d046a4 = 0xa30;
                  core_main_c_displayErrorAndQuit_FUN_004e4500("CDemonRenderer::demonGZFacetList - Too many visible faces at once : %d");
                }
              }
              local_14 = local_14 + 1;
              face_array = face_array + 1;
            } while (local_14 < face_count);
          }
          if (0 < iVar3) {
            engine_special_cpp_drawPolyList2_FUN_0055fa90
                      (this_ptr->vertex_buffer_ptr,(SInputFace **)g_VisibleFacePointers,iVar3,
                       g_RenderStateFlags.dword);
            return;
          }
        }
      }
      else {
        g_ScanlineRenderFunc = (MainScanlineFunc *)core_dstrendr_cpp_renderDepthOnlyStandard_FUN_0046e936;
        g_RenderStateFlags.dword = 0;
        g_VertexPreprocessMode = 0;
        _Var1.dword = 0;
        iVar3 = 0;
        if (0 < face_count) {
          do {
            g_VertexPreprocessMode = iVar3;
            g_RenderStateFlags = _Var1;
            local_24.x = (int)(face_array->vertex_indices).vertex_index_0;
            local_24.y = (int)(face_array->vertex_indices).vertex_index_1;
            local_24.z = (int)(face_array->vertex_indices).vertex_index_2;
            face_count = face_count + -1;
            face_array = face_array + 1;
            engine_drender_cpp_renderTriangleSimple_FUN_004625f0(&local_24,3);
            _Var1 = g_RenderStateFlags;
            iVar3 = g_VertexPreprocessMode;
          } while (0 < face_count);
          return;
        }
      }
    }
    else {
      iVar3 = 0;
      if (0 < face_count) {
        do {
          iVar3 = iVar3 + 1;
          engine_drender_cpp_CDemonRenderer_renderTexturedFace_FUN_00469e80
                    (this_ptr,face_array,render_flags);
          face_array = face_array + 1;
        } while (iVar3 < face_count);
        return;
      }
    }
  }
  else {
    iVar3 = 0;
    if (0 < face_count) {
      do {
        iVar3 = iVar3 + 1;
        engine_drender_cpp_CDemonRenderer_captureFace_FUN_0046c720
                  (this_ptr,&face_array->vertex_indices,render_flags);
        face_array = face_array + 1;
      } while (iVar3 < face_count);
    }
  }
  return;
}
