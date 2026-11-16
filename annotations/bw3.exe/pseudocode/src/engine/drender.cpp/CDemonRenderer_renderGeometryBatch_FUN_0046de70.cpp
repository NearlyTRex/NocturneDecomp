// Name: engine_drender.cpp_CDemonRenderer_renderGeometryBatch_FUN_0046de70
// Address: 0046de70
// Address Range: [[0046de70, 0046e112]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderGeometryBatch_FUN_0046de70(CDemonRenderer *this_ptr,ushort *vertex_indices,int face_count,int vertices_per_face ,int render_mode)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_renderGeometryBatch_FUN_0046de70(CDemonRenderer *this_ptr,ushort *vertex_indices,int face_count,int vertices_per_face ,int render_mode)

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
    _DAT_01d71de0 = "..\\engine\\drender.cpp";
    _DAT_01d71de4 = 0xa6a;
    core_main_c_displayErrorAndQuit_FUN_004e4330("Can't capture this type of face!");
  }
  if (this_ptr->shadow_pass_active == 0) {
    if (render_mode == 0xc0) {
      _DAT_01c6b5cc = FUN_0046f960;
    }
    else if (DAT_005fba20 == 0x20) {
      _DAT_01c6b5cc = engine_special_cpp_renderMMXPerspectiveScanline32_FUN_00560f31;
    }
    else {
      _DAT_01c6b5cc = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_00561713;
    }
    _DAT_01c6e2b8 = 6;
    _DAT_01c6e2b4 = render_mode;
    if (0 < face_count) {
      iStack_14 = vertices_per_face * 2;
      do {
        while ((DAT_007303fc != 0 &&
               (pSVar4 = this_ptr->vertex_buffer_ptr + vertex_indices[1],
               iVar3 = engine_prim_c_calculateTriangleWindingOrder_FUN_00515ac0
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
           (((this_ptr->shadow_pass_active != 0 && ((_DAT_01c6e2b4 & 1) == 0)) ||
            ((_DAT_01c6e2b4 & 5) == 0)))) {
          core_xform_cpp_transformAndClipGeometry_FUN_00587cd0(iVar3,&aCStack_68[0].x);
          if (2 < DAT_007e3e88) {
            engine_zraster_c_rasterizeTriangle_FUN_005a1ea0
                      ((SRenderVertex *)&DAT_007e3e8c,DAT_007e3e88);
          }
        }
        else if ((_DAT_01c6e2b4 & 0x200) == 0) {
          engine_clipper_c_clipAndRasterize_FUN_0043a840(iVar3,&aCStack_68[0].x);
        }
        else {
          engine_clipper_c_clipPolygonToViewport_FUN_0043bac0(iVar3,&aCStack_68[0].x);
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
    _DAT_01c6e2b4 = 0;
    _DAT_01c6e2b8 = 0;
    _DAT_01c6b5cc = core_dstrendr_cpp_renderDepthOnlyStandard_FUN_0046f9a6;
    if (0 < face_count) {
      iStack_18 = vertices_per_face * 2;
      do {
        if ((DAT_007303fc == 0) ||
           (pSVar4 = this_ptr->vertex_buffer_ptr + vertex_indices[1],
           iVar3 = engine_prim_c_calculateTriangleWindingOrder_FUN_00515ac0
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
            engine_drender_cpp_renderTriangleSimple_FUN_004673d0(aCStack_68,iVar3);
          }
          else {
            core_xform_cpp_transformAndClipGeometry_FUN_00587cd0(iVar3,&aCStack_68[0].x);
            if (2 < DAT_007e3e88) {
              engine_zraster_c_rasterizeTriangle_FUN_005a1ea0
                        ((SRenderVertex *)&DAT_007e3e8c,DAT_007e3e88);
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
