// Name: engine_drender.cpp_CDemonRenderer_renderGeometryBatch_FUN_0046c290
// Address: 0046c290
// Address Range: [[0046c290, 0046c532]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderGeometryBatch_FUN_0046c290(CDemonRenderer *this_ptr,ushort *vertex_indices,int face_count,int vertices_per_face ,int render_mode)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
    _DAT_01d046a0 = "..\\engine\\drender.cpp";
    _DAT_01d046a4 = 0xa6a;
    core_main_c_displayErrorAndQuit_FUN_004e4500("Can't capture this type of face!");
  }
  if (this_ptr->shadow_pass_active == 0) {
    if (render_mode == 0xc0) {
      _DAT_01c35e6c = (code *)&UNK_0046e8f0;
    }
    else if (DAT_006141c0 == 0x20) {
      _DAT_01c35e6c = engine_special_cpp_renderMMXPerspectiveScanline32_FUN_0055b3b1;
    }
    else {
      _DAT_01c35e6c = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0055bb93;
    }
    _DAT_01c38b58 = 6;
    _DAT_01c38b54 = render_mode;
    if (0 < face_count) {
      iStack_14 = vertices_per_face * 2;
      do {
        while ((DAT_0070ca7c != 0 &&
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
           (((this_ptr->shadow_pass_active != 0 && ((_DAT_01c38b54 & 1) == 0)) ||
            ((_DAT_01c38b54 & 5) == 0)))) {
          core_xform_cpp_transformAndClipGeometry_FUN_00594f40(iVar3,&aCStack_68[0].x);
          if (2 < DAT_007bee30) {
            core_zombie_cpp_FUN_0059a0b0((SRenderVertex *)&DAT_007bee34,DAT_007bee30);
          }
        }
        else if ((_DAT_01c38b54 & 0x200) == 0) {
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
    _DAT_01c38b54 = 0;
    _DAT_01c38b58 = 0;
    _DAT_01c35e6c = core_dstrendr_cpp_renderDepthOnlyStandard_FUN_0046e936;
    if (0 < face_count) {
      iStack_18 = vertices_per_face * 2;
      do {
        if ((DAT_0070ca7c == 0) ||
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
            core_dpart_cpp_FUN_004625f0(aCStack_68,iVar3);
          }
          else {
            core_xform_cpp_transformAndClipGeometry_FUN_00594f40(iVar3,&aCStack_68[0].x);
            if (2 < DAT_007bee30) {
              core_zombie_cpp_FUN_0059a0b0((SRenderVertex *)&DAT_007bee34,DAT_007bee30);
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
