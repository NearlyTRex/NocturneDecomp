// Name: engine_drender.cpp_CDemonRenderer_renderFaceList_FUN_0046bff0
// Address: 0046bff0
// Address Range: [[0046bff0, 0046c284]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderFaceList_FUN_0046bff0(CDemonRenderer *this_ptr,SInputFace *face_array,int face_count,int render_flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_renderFaceList_FUN_0046bff0(CDemonRenderer *this_ptr,SInputFace *face_array,int face_count,int render_flags)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  CVector3i local_24;
  int local_18;
  int local_14;
  
  if (render_flags == -1) {
    render_flags = 0x2cd;
  }
  if (this_ptr->texture_capture_enabled == 0) {
    if (((this_ptr->face_capture_enabled == 0) && (this_ptr->plane_culling_enabled == 0)) &&
       (DAT_0070ca7c != 0)) {
      if (this_ptr->shadow_pass_active == 0) {
        if (DAT_006141c0 == 0x20) {
          _DAT_01c35e6c = engine_special_cpp_FUN_0055b3b1;
        }
        else {
          _DAT_01c35e6c = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0055bb93;
        }
        _DAT_01c38b54 = render_flags;
        _DAT_01c38b58 = 6;
        if (_DAT_01c37788 == 0) {
          for (; 0 < face_count; face_count = face_count + -1) {
            local_24.x = (int)*(ushort *)face_array;
            local_24.y = (int)*(ushort *)(face_array + 2);
            local_24.z = (int)*(ushort *)(face_array + 4);
            if (this_ptr->skip_uv_extraction == 0) {
              *(uint *)(this_ptr->vertex_buffer_ptr + local_24.x * 0x30 + 0x18) =
                   (uint)*(ushort *)(face_array + 6) << 8;
              *(uint *)(this_ptr->vertex_buffer_ptr + local_24.x * 0x30 + 0x1c) =
                   (uint)*(ushort *)(face_array + 0xc) << 8;
              *(uint *)(this_ptr->vertex_buffer_ptr + local_24.y * 0x30 + 0x18) =
                   (uint)*(ushort *)(face_array + 8) << 8;
              *(uint *)(this_ptr->vertex_buffer_ptr + local_24.y * 0x30 + 0x1c) =
                   (uint)*(ushort *)(face_array + 0xe) << 8;
              *(uint *)(this_ptr->vertex_buffer_ptr + local_24.z * 0x30 + 0x18) =
                   (uint)*(ushort *)(face_array + 10) << 8;
              *(uint *)(this_ptr->vertex_buffer_ptr + local_24.z * 0x30 + 0x1c) =
                   (uint)*(ushort *)(face_array + 0x10) << 8;
            }
            face_array = face_array + 0x12;
            core_dpart_cpp_FUN_00461f70(&local_24.x,3);
          }
        }
        else {
          iVar4 = 0;
          local_14 = 0;
          if (0 < face_count) {
            local_18 = 0;
            do {
              iVar3 = engine_prim_c_getTriangleWindingFromPackedIndices_FUN_0051ca00(face_array);
              if (iVar3 != 0) {
                iVar4 = iVar4 + 1;
                iVar3 = local_18 + 4;
                *(SInputFace **)(&DAT_0060b288 + local_18) = face_array;
                local_18 = iVar3;
                if (1999 < iVar4) {
                  _DAT_01d046a0 = "..\\engine\\drender.cpp";
                  _DAT_01d046a4 = 0xa30;
                  core_main_c_FUN_004e4500("CDemonRenderer::demonGZFacetList - Too many visible faces at once : %d",iVar4);
                }
              }
              local_14 = local_14 + 1;
              face_array = face_array + 0x12;
            } while (local_14 < face_count);
          }
          if (0 < iVar4) {
            engine_special_cpp_drawPolyList2_FUN_0055fa90
                      (this_ptr->vertex_buffer_ptr,&DAT_0060b288,iVar4,_DAT_01c38b54);
            return;
          }
        }
      }
      else {
        _DAT_01c35e6c = core_dstrendr_cpp_renderDepthOnlyStandard_FUN_0046e936;
        _DAT_01c38b54 = 0;
        _DAT_01c38b58 = 0;
        uVar1 = 0;
        uVar2 = 0;
        if (0 < face_count) {
          do {
            _DAT_01c38b58 = uVar2;
            _DAT_01c38b54 = uVar1;
            local_24.x = (int)*(ushort *)face_array;
            local_24.y = (int)*(ushort *)(face_array + 2);
            local_24.z = (int)*(ushort *)(face_array + 4);
            face_count = face_count + -1;
            face_array = face_array + 0x12;
            core_dpart_cpp_FUN_004625f0(&local_24,3);
            uVar1 = _DAT_01c38b54;
            uVar2 = _DAT_01c38b58;
          } while (0 < face_count);
          return;
        }
      }
    }
    else {
      iVar4 = 0;
      if (0 < face_count) {
        do {
          iVar4 = iVar4 + 1;
          engine_drender_cpp_CDemonRenderer_renderTexturedFace_FUN_00469e80
                    (this_ptr,face_array,render_flags);
          face_array = face_array + 0x12;
        } while (iVar4 < face_count);
        return;
      }
    }
  }
  else {
    iVar4 = 0;
    if (0 < face_count) {
      do {
        iVar4 = iVar4 + 1;
        engine_drender_cpp_CDemonRenderer_captureFace_FUN_0046c720
                  (this_ptr,(STrianglePackedIndices *)face_array,render_flags);
        face_array = face_array + 0x12;
      } while (iVar4 < face_count);
    }
  }
  return;
}
