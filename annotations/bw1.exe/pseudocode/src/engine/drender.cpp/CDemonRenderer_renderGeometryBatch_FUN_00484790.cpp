// Name: engine_drender.cpp_CDemonRenderer_renderGeometryBatch_FUN_00484790
// Address: 00484790
// Address Range: [[00484790, 00484a32]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderGeometryBatch_FUN_00484790(CDemonRenderer *this_ptr,ushort *vertex_indices,int face_count,int vertices_per_face ,int render_mode)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_renderGeometryBatch_FUN_00484790(CDemonRenderer *this_ptr,ushort *vertex_indices,int face_count,int vertices_per_face ,int render_mode)

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
    _DAT_01d1d400 = "..\\engine\\drender.cpp";
    _DAT_01d1d404 = 0xa6a;
    core_main_c_displayErrorAndQuit_FUN_005030e0("Can't capture this type of face!");
  }
  if (this_ptr->shadow_pass_active == 0) {
    if (render_mode == 0xc0) {
      _DAT_01c4f02c = FUN_00486de0;
    }
    else if (DAT_0061b4a0 == 0x20) {
      _DAT_01c4f02c = engine_special_cpp_renderMMXPerspectiveScanline32_FUN_0057de01;
    }
    else {
      _DAT_01c4f02c = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0057e5e3;
    }
    _DAT_01c51d18 = 6;
    _DAT_01c51d14 = render_mode;
    if (0 < face_count) {
      iStack_14 = vertices_per_face * 2;
      do {
        while ((DAT_00713a7c != 0 &&
               (pSVar4 = this_ptr->vertex_buffer_ptr + vertex_indices[1],
               iVar3 = engine_prim_c_calculateTriangleWindingOrder_FUN_0053dd60
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
           (((this_ptr->shadow_pass_active != 0 && ((_DAT_01c51d14 & 1) == 0)) ||
            ((_DAT_01c51d14 & 5) == 0)))) {
          core_xform_cpp_transformAndClipGeometry_FUN_005b9fc0(iVar3,&aCStack_68[0].x);
          if (2 < DAT_007c7554) {
            engine_zraster_c_rasterizeTriangle_FUN_005bf120
                      ((SRenderVertex *)&DAT_007c7558,DAT_007c7554);
          }
        }
        else if ((_DAT_01c51d14 & 0x200) == 0) {
          engine_clipper_c_clipAndRasterize_FUN_0043cbf0(iVar3,&aCStack_68[0].x);
        }
        else {
          engine_clipper_c_clipPolygonToViewport_FUN_0043de60(iVar3,&aCStack_68[0].x);
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
    _DAT_01c51d14 = 0;
    _DAT_01c51d18 = 0;
    _DAT_01c4f02c = core_dstrendr_cpp_renderDepthOnlyStandard_FUN_00486e26;
    if (0 < face_count) {
      iStack_18 = vertices_per_face * 2;
      do {
        if ((DAT_00713a7c == 0) ||
           (pSVar4 = this_ptr->vertex_buffer_ptr + vertex_indices[1],
           iVar3 = engine_prim_c_calculateTriangleWindingOrder_FUN_0053dd60
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
            engine_drender_cpp_renderTriangleSimple_FUN_0047ab00(aCStack_68,iVar3);
          }
          else {
            core_xform_cpp_transformAndClipGeometry_FUN_005b9fc0(iVar3,&aCStack_68[0].x);
            if (2 < DAT_007c7554) {
              engine_zraster_c_rasterizeTriangle_FUN_005bf120
                        ((SRenderVertex *)&DAT_007c7558,DAT_007c7554);
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
