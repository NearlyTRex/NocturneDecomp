// Name: engine_drender.cpp_CDemonRenderer_renderGeometryBatch_FUN_0046c290
// Address: 0046c290
// Address Range: [[0046c290, 0046c532]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderGeometryBatch_FUN_0046c290(CDemonRenderer *this_ptr,ushort *vertex_indices,int face_count,int vertices_per_face ,int render_mode)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_renderGeometryBatch_FUN_0046c290(CDemonRenderer *this_ptr,ushort *vertex_indices,int face_count,int vertices_per_face ,int render_mode)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  SRenderVertex *pSVar4;
  CVector3i aCStack_68 [6];
  int iStack_18;
  int iStack_14;
  
  if (render_mode == -1) {
    render_mode = 0x2cd;
  }
  if (this_ptr->texture_capture_enabled != 0) {
    g_CHAR_PTR_01d046a0 = "..\\engine\\drender.cpp";
    g_INT_01d046a4 = 0xa6a;
    core_main_c_displayErrorAndQuit_FUN_004e4500("Can't capture this type of face!");
  }
  if (this_ptr->shadow_pass_active == 0) {
    if (render_mode == 0xc0) {
      g_PTR_01c35e6c = core_dstrendr_cpp_renderDepthOnlyReversed_FUN_0046e8f0;
    }
    else if (g_INT_006141c0 == 0x20) {
      g_PTR_01c35e6c = engine_special_cpp_renderMMXPerspectiveScanline32_FUN_0055b3b1;
    }
    else {
      g_PTR_01c35e6c = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0055bb93;
    }
    g_INT_01c38b58 = 6;
    g_BIT_INTEGER32_01c38b54 = (_BIT_INTEGER32)render_mode;
    if (0 < face_count) {
      iStack_14 = vertices_per_face * 2;
      do {
        while ((g_INT_0070ca7c != 0 &&
               (pSVar4 = this_ptr->vertex_buffer_ptr + vertex_indices[1],
               iVar3 = engine_prim_c_calculateTriangleWindingOrder_FUN_0051c760
                                 (this_ptr->vertex_buffer_ptr + *vertex_indices,pSVar4,pSVar4),
               iVar3 == 0))) {
          face_count = face_count + -1;
          vertex_indices = (ushort *)((int)vertex_indices + iStack_14);
          if (face_count < 1) {
            return;
          }
        }
        iVar3 = 0;
        if (0 < vertices_per_face) {
          puVar1 = vertex_indices;
          iVar2 = 0;
          do {
            if (*puVar1 == 0xffff) break;
            iVar3 = iVar3 + 1;
            *(uint *)((int)&aCStack_68[0].x + iVar2) = (uint)*puVar1;
            puVar1 = puVar1 + 1;
            iVar2 = iVar2 + 4;
          } while (iVar3 < vertices_per_face);
        }
        if ((this_ptr->face_capture_enabled == 0) &&
           (((this_ptr->shadow_pass_active != 0 && ((g_BIT_INTEGER32_01c38b54.dword & 1) == 0)) ||
            ((g_BIT_INTEGER32_01c38b54.dword & 5) == 0)))) {
          core_xform_cpp_transformAndClipGeometry_FUN_00594f40(iVar3,&aCStack_68[0].x);
          if (2 < g_INT_007bee30) {
            engine_zraster_c_rasterizeTriangle_FUN_0059a0b0
                      (g_SRenderVertex_ARRAY_007bee34,g_INT_007bee30);
          }
        }
        else if ((g_BIT_INTEGER32_01c38b54.dword & 0x200) == 0) {
          engine_clipper_c_clipAndRasterize_FUN_00431d90(iVar3,&aCStack_68[0].x);
        }
        else {
          engine_clipper_c_clipPolygonToViewport_FUN_00433000(iVar3,&aCStack_68[0].x);
        }
        face_count = face_count + -1;
        vertex_indices = (ushort *)((int)vertex_indices + iStack_14);
        if (face_count < 1) {
          return;
        }
      } while( true );
    }
  }
  else {
    g_BIT_INTEGER32_01c38b54.dword = 0;
    g_INT_01c38b58 = 0;
    g_PTR_01c35e6c = core_dstrendr_cpp_renderDepthOnlyStandard_FUN_0046e936;
    if (0 < face_count) {
      iStack_18 = vertices_per_face * 2;
      do {
        if ((g_INT_0070ca7c == 0) ||
           (pSVar4 = this_ptr->vertex_buffer_ptr + vertex_indices[1],
           iVar3 = engine_prim_c_calculateTriangleWindingOrder_FUN_0051c760
                             (this_ptr->vertex_buffer_ptr + *vertex_indices,pSVar4,pSVar4),
           iVar3 != 0)) {
          iVar3 = 0;
          if (0 < vertices_per_face) {
            puVar1 = vertex_indices;
            iVar2 = 0;
            do {
              if (*puVar1 == 0xffff) break;
              iVar3 = iVar3 + 1;
              *(uint *)((int)&aCStack_68[0].x + iVar2) = (uint)*puVar1;
              puVar1 = puVar1 + 1;
              iVar2 = iVar2 + 4;
            } while (iVar3 < vertices_per_face);
          }
          if (this_ptr->face_capture_enabled == 0) {
            engine_drender_cpp_renderTriangleSimple_FUN_004625f0(aCStack_68,iVar3);
          }
          else {
            core_xform_cpp_transformAndClipGeometry_FUN_00594f40(iVar3,&aCStack_68[0].x);
            if (2 < g_INT_007bee30) {
              engine_zraster_c_rasterizeTriangle_FUN_0059a0b0
                        (g_SRenderVertex_ARRAY_007bee34,g_INT_007bee30);
            }
          }
        }
        face_count = face_count + -1;
        vertex_indices = (ushort *)((int)vertex_indices + iStack_18);
      } while (0 < face_count);
    }
  }
  return;
}
