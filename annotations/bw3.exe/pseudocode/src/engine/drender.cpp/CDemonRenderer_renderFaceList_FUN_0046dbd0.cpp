// Name: engine_drender.cpp_CDemonRenderer_renderFaceList_FUN_0046dbd0
// Address: 0046dbd0
// Address Range: [[0046dbd0, 0046de64]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderFaceList_FUN_0046dbd0(CDemonRenderer *this_ptr,SInputFace *face_array,int face_count,int render_flags)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_renderFaceList_FUN_0046dbd0(CDemonRenderer *this_ptr,SInputFace *face_array,int face_count,int render_flags)

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
       (g_INT_007303fc != 0)) {
      if (this_ptr->shadow_pass_active == 0) {
        if (g_INT_005fba20 == 0x20) {
          g_PTR_01c6b5cc = engine_special_cpp_renderMMXPerspectiveScanline32_FUN_00560f31;
        }
        else {
          g_PTR_01c6b5cc = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_00561713;
        }
        g_BIT_INTEGER32_01c6e2b4.dword = render_flags;
        g_INT_01c6e2b8 = 6;
        if (g_INT_01c6cee8 == 0) {
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
            engine_drender_cpp_renderTriangleTextured_FUN_00466d50(&local_24.x,3);
          }
        }
        else {
          iVar3 = 0;
          local_14 = 0;
          if (0 < face_count) {
            local_18 = 0;
            do {
              iVar2 = engine_prim_c_getTriangleWindingFromPackedIndices_FUN_00515d60
                                (&face_array->vertex_indices);
              if (iVar2 != 0) {
                iVar3 = iVar3 + 1;
                iVar2 = local_18 + 4;
                *(SInputFace **)((int)g_SMRGLPrimitiveQuad_PTR_ARRAY_005f2b04 + local_18) =
                     face_array;
                local_18 = iVar2;
                if (1999 < iVar3) {
                  g_CHAR_PTR_01d71de0 = "..\\engine\\drender.cpp";
                  g_INT_01d71de4 = 0xa30;
                  core_main_c_displayErrorAndQuit_FUN_004e4330("CDemonRenderer::demonGZFacetList - Too many visible faces at once : %d");
                }
              }
              local_14 = local_14 + 1;
              face_array = face_array + 1;
            } while (local_14 < face_count);
          }
          if (0 < iVar3) {
            engine_special_cpp_drawPolyList2_FUN_00565db0
                      (this_ptr->vertex_buffer_ptr,
                       (SInputFace **)g_SMRGLPrimitiveQuad_PTR_ARRAY_005f2b04,iVar3,
                       g_BIT_INTEGER32_01c6e2b4.dword);
            return;
          }
        }
      }
      else {
        g_PTR_01c6b5cc = core_dstrendr_cpp_renderDepthOnlyStandard_FUN_0046f9a6;
        g_BIT_INTEGER32_01c6e2b4.dword = 0;
        g_INT_01c6e2b8 = 0;
        _Var1.dword = 0;
        iVar3 = 0;
        if (0 < face_count) {
          do {
            g_INT_01c6e2b8 = iVar3;
            g_BIT_INTEGER32_01c6e2b4 = _Var1;
            local_24.x = (int)(face_array->vertex_indices).vertex_index_0;
            local_24.y = (int)(face_array->vertex_indices).vertex_index_1;
            local_24.z = (int)(face_array->vertex_indices).vertex_index_2;
            face_count = face_count + -1;
            face_array = face_array + 1;
            engine_drender_cpp_renderTriangleSimple_FUN_004673d0(&local_24,3);
            _Var1 = g_BIT_INTEGER32_01c6e2b4;
            iVar3 = g_INT_01c6e2b8;
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
          engine_drender_cpp_CDemonRenderer_renderTexturedFace_FUN_0046ba70
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
        engine_drender_cpp_CDemonRenderer_captureFace_FUN_0046e300
                  (this_ptr,&face_array->vertex_indices,render_flags);
        face_array = face_array + 1;
      } while (iVar3 < face_count);
    }
  }
  return;
}
