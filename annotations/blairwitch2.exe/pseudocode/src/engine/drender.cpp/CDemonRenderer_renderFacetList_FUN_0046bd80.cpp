// Name: engine_drender.cpp_CDemonRenderer_renderFacetList_FUN_0046bd80
// Address: 0046bd80
// Address Range: [[0046bd80, 0046bfed]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderFacetList_FUN_0046bd80(CDemonRenderer *this_ptr,SMRGLPrimitiveQuad *primitive_array,int primitive_count,int primitive_stride,int render_flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_renderFacetList_FUN_0046bd80(CDemonRenderer *this_ptr,SMRGLPrimitiveQuad *primitive_array,int primitive_count,int primitive_stride,int render_flags)

{
  SMRGLPrimitiveQuad *pSVar1;
  int iVar2;
  int iVar3;
  CVector3i local_28;
  int local_1c;
  int local_18;
  int local_14;
  
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
        for (; 0 < primitive_count; primitive_count = primitive_count + -1) {
          local_28.x = *(int *)(primitive_array + 0x18);
          local_28.y = *(int *)(primitive_array + 0x24);
          local_28.z = *(int *)(primitive_array + 0x30);
          if (*(int *)(primitive_array + 4) == 4) {
            local_1c = *(int *)(primitive_array + 0x3c);
          }
          if (this_ptr->skip_uv_extraction == 0) {
            *(uint *)(this_ptr->vertex_buffer_ptr + local_28.x * 0x30 + 0x18) =
                 *(uint *)(primitive_array + 0x1c);
            *(uint *)(this_ptr->vertex_buffer_ptr + local_28.x * 0x30 + 0x1c) =
                 *(uint *)(primitive_array + 0x20);
            *(uint *)(this_ptr->vertex_buffer_ptr + local_28.y * 0x30 + 0x18) =
                 *(uint *)(primitive_array + 0x28);
            *(uint *)(this_ptr->vertex_buffer_ptr + local_28.y * 0x30 + 0x1c) =
                 *(uint *)(primitive_array + 0x2c);
            *(uint *)(this_ptr->vertex_buffer_ptr + local_28.z * 0x30 + 0x18) =
                 *(uint *)(primitive_array + 0x34);
            *(uint *)(this_ptr->vertex_buffer_ptr + local_28.z * 0x30 + 0x1c) =
                 *(uint *)(primitive_array + 0x38);
            if (*(int *)(primitive_array + 4) == 4) {
              *(uint *)(this_ptr->vertex_buffer_ptr + local_1c * 0x30 + 0x18) =
                   *(uint *)(primitive_array + 0x40);
              *(uint *)(this_ptr->vertex_buffer_ptr + local_1c * 0x30 + 0x1c) =
                   *(uint *)(primitive_array + 0x44);
            }
          }
          core_dpart_cpp_FUN_00461f70(&local_28.x,*(int *)(primitive_array + 4));
          primitive_array = primitive_array + primitive_stride;
        }
      }
      else {
        iVar3 = 0;
        local_14 = 0;
        if (0 < primitive_count) {
          local_18 = 0;
          do {
            iVar2 = engine_prim_c_FUN_0051c820((SMRGLPrimitiveTriangle *)primitive_array);
            if (iVar2 != 0) {
              iVar3 = iVar3 + 1;
              iVar2 = local_18 + 4;
              *(SMRGLPrimitiveQuad **)(&DAT_0060b288 + local_18) = primitive_array;
              local_18 = iVar2;
              if (1999 < iVar3) {
                _DAT_01d046a0 = "..\\engine\\drender.cpp";
                _DAT_01d046a4 = 0x9b6;
                core_main_c_FUN_004e4500("CDemonRenderer::demonGZFacetList - Too many visible faces at once : %d",iVar3);
              }
            }
            local_14 = local_14 + 1;
            primitive_array = primitive_array + primitive_stride;
          } while (local_14 < primitive_count);
        }
        if (0 < iVar3) {
          engine_special_cpp_drawPolyList_FUN_0055f950
                    (this_ptr->vertex_buffer_ptr,&DAT_0060b288,iVar3,_DAT_01c38b54);
          return;
        }
      }
    }
    else {
      _DAT_01c35e6c = core_dstrendr_cpp_renderDepthOnlyStandard_FUN_0046e936;
      _DAT_01c38b54 = 0;
      _DAT_01c38b58 = _DAT_01c38b54;
      for (; 0 < primitive_count; primitive_count = primitive_count + -1) {
        local_28.x = *(int *)(primitive_array + 0x18);
        local_28.y = *(int *)(primitive_array + 0x24);
        local_28.z = *(int *)(primitive_array + 0x30);
        if (*(int *)(primitive_array + 4) == 4) {
          local_1c = *(int *)(primitive_array + 0x3c);
        }
        pSVar1 = primitive_array + 4;
        primitive_array = primitive_array + primitive_stride;
        core_dpart_cpp_FUN_004625f0(&local_28,*(int *)pSVar1);
      }
    }
  }
  else {
    iVar3 = 0;
    if (0 < primitive_count) {
      do {
        engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_00469d00
                  (this_ptr,(SMRGLPrimitivePoly *)primitive_array,render_flags);
        iVar3 = iVar3 + 1;
        primitive_array = primitive_array + primitive_stride;
      } while (iVar3 < primitive_count);
    }
  }
  return;
}
