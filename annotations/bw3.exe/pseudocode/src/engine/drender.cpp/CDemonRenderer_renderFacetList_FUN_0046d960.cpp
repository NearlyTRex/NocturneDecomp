// Name: engine_drender.cpp_CDemonRenderer_renderFacetList_FUN_0046d960
// Address: 0046d960
// Address Range: [[0046d960, 0046dbcd]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderFacetList_FUN_0046d960(CDemonRenderer *this_ptr,SMRGLPrimitiveQuad *primitive_array,int primitive_count,int primitive_stride,int render_flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_renderFacetList_FUN_0046d960(CDemonRenderer *this_ptr,SMRGLPrimitiveQuad *primitive_array,int primitive_count,int primitive_stride,int render_flags)

{
  SMRGLHeaderPrimitive *pSVar1;
  int iVar2;
  int iVar3;
  CVector3i local_28;
  int local_1c;
  int local_18;
  int local_14;
  
  if (((this_ptr->face_capture_enabled == 0) && (this_ptr->plane_culling_enabled == 0)) &&
     (DAT_007303fc != 0)) {
    if (this_ptr->shadow_pass_active == 0) {
      if (DAT_005fba20 == 0x20) {
        _DAT_01c6b5cc = engine_special_cpp_FUN_00560f31;
      }
      else {
        _DAT_01c6b5cc = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_00561713;
      }
      _DAT_01c6e2b4 = render_flags;
      _DAT_01c6e2b8 = 6;
      if (_DAT_01c6cee8 == 0) {
        for (; 0 < primitive_count; primitive_count = primitive_count + -1) {
          local_28.x = primitive_array->vertices[0].vertex_index;
          local_28.y = primitive_array->vertices[1].vertex_index;
          local_28.z = primitive_array->vertices[2].vertex_index;
          if ((primitive_array->base).base.count == 4) {
            local_1c = primitive_array->vertices[3].vertex_index;
          }
          if (this_ptr->skip_uv_extraction == 0) {
            this_ptr->vertex_buffer_ptr[local_28.x].u = primitive_array->vertices[0].texture_u;
            this_ptr->vertex_buffer_ptr[local_28.x].v = primitive_array->vertices[0].texture_v;
            this_ptr->vertex_buffer_ptr[local_28.y].u = primitive_array->vertices[1].texture_u;
            this_ptr->vertex_buffer_ptr[local_28.y].v = primitive_array->vertices[1].texture_v;
            this_ptr->vertex_buffer_ptr[local_28.z].u = primitive_array->vertices[2].texture_u;
            this_ptr->vertex_buffer_ptr[local_28.z].v = primitive_array->vertices[2].texture_v;
            if ((primitive_array->base).base.count == 4) {
              this_ptr->vertex_buffer_ptr[local_1c].u = primitive_array->vertices[3].texture_u;
              this_ptr->vertex_buffer_ptr[local_1c].v = primitive_array->vertices[3].texture_v;
            }
          }
          core_dpart_cpp_FUN_00466d50(&local_28.x,(primitive_array->base).base.count);
          primitive_array =
               (SMRGLPrimitiveQuad *)
               ((int)&(((SMRGLPrimitiveQuad *)(primitive_array->vertices + -2))->base).base.type +
               primitive_stride);
        }
      }
      else {
        iVar3 = 0;
        local_14 = 0;
        if (0 < primitive_count) {
          local_18 = 0;
          do {
            iVar2 = engine_prim_c_calculateTriangleWindingOrderFromIndices_FUN_00515b80
                              ((SMRGLPrimitiveTriangle *)primitive_array);
            if (iVar2 != 0) {
              iVar3 = iVar3 + 1;
              iVar2 = local_18 + 4;
              *(SMRGLPrimitiveQuad **)(&DAT_005f2b04 + local_18) = primitive_array;
              local_18 = iVar2;
              if (1999 < iVar3) {
                _DAT_01d71de0 = "..\\engine\\drender.cpp";
                _DAT_01d71de4 = 0x9b6;
                core_main_c_FUN_004e4330("CDemonRenderer::demonGZFacetList - Too many visible faces at once : %d",iVar3);
              }
            }
            local_14 = local_14 + 1;
            primitive_array =
                 (SMRGLPrimitiveQuad *)
                 ((int)&(((SMRGLPrimitiveTriangle *)(primitive_array->vertices + -2))->base).base.
                        type + primitive_stride);
          } while (local_14 < primitive_count);
        }
        if (0 < iVar3) {
          engine_special_cpp_drawPolyList_FUN_00565c70
                    (this_ptr->vertex_buffer_ptr,(SMRGLPrimitiveQuad **)&DAT_005f2b04,iVar3,
                     _DAT_01c6e2b4);
          return;
        }
      }
    }
    else {
      _DAT_01c6b5cc = core_dstrendr_cpp_renderDepthOnlyStandard_FUN_0046f9a6;
      _DAT_01c6e2b4 = 0;
      _DAT_01c6e2b8 = _DAT_01c6e2b4;
      for (; 0 < primitive_count; primitive_count = primitive_count + -1) {
        local_28.x = primitive_array->vertices[0].vertex_index;
        local_28.y = primitive_array->vertices[1].vertex_index;
        local_28.z = primitive_array->vertices[2].vertex_index;
        if ((primitive_array->base).base.count == 4) {
          local_1c = primitive_array->vertices[3].vertex_index;
        }
        pSVar1 = &primitive_array->base;
        primitive_array =
             (SMRGLPrimitiveQuad *)
             ((int)&(((SMRGLPrimitiveQuad *)(primitive_array->vertices + -2))->base).base.type +
             primitive_stride);
        core_dpart_cpp_FUN_004673d0(&local_28,(pSVar1->base).count);
      }
    }
  }
  else {
    iVar3 = 0;
    if (0 < primitive_count) {
      do {
        engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_0046b8f0
                  (this_ptr,(SMRGLPrimitivePoly *)primitive_array,render_flags);
        iVar3 = iVar3 + 1;
        primitive_array =
             (SMRGLPrimitiveQuad *)
             ((int)&(((SMRGLPrimitivePoly *)(((SMRGLPrimitivePoly *)primitive_array)->vertices + -2)
                     )->base).base.type + primitive_stride);
      } while (iVar3 < primitive_count);
    }
  }
  return;
}
