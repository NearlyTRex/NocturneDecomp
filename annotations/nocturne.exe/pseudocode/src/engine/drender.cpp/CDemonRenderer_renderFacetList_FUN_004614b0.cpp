// Name: engine_drender.cpp_CDemonRenderer_renderFacetList_FUN_004614b0
// Address: 004614b0
// Address Range: [[004614b0, 0046171d]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderFacetList_FUN_004614b0(CDemonRenderer *this_ptr,SMRGLPrimitiveQuad *primitive_array,int primitive_count,int primitive_stride,int render_flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_renderFacetList_FUN_004614b0(CDemonRenderer *this_ptr,SMRGLPrimitiveQuad *primitive_array,int primitive_count,int primitive_stride,int render_flags)

{
  SMRGLHeaderPrimitive *pSVar1;
  int iVar2;
  int iVar3;
  CVector3i local_28;
  int local_1c;
  int local_18;
  int local_14;
  
  if (((this_ptr->face_capture_enabled == 0) && (this_ptr->plane_culling_enabled == 0)) &&
     (DAT_006b0280 != 0)) {
    if (this_ptr->face_count == 0) {
      if (DAT_005b7624 == 0x20) {
        _DAT_01c00c7c = engine_special_cpp_FUN_0052f031;
      }
      else {
        _DAT_01c00c7c = engine_special_cpp_FUN_0052f823;
      }
      _DAT_01c039a0 = render_flags;
      _DAT_01c039a4 = 6;
      if (_DAT_01c02594 == 0) {
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
          engine_drender_cpp_renderTriangleTextured_FUN_00457a00
                    (&local_28.x,(primitive_array->base).base.count);
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
            iVar2 = engine_prim_c_getTriangleWindingFromIndices1_FUN_004f9ad0
                              ((SMRGLPrimitiveTriangle *)primitive_array);
            if (iVar2 != 0) {
              iVar3 = iVar3 + 1;
              iVar2 = local_18 + 4;
              *(SMRGLPrimitiveQuad **)(&DAT_005ae70c + local_18) = primitive_array;
              local_18 = iVar2;
              if (1999 < iVar3) {
                g_CurrentFilename = "..\\engine\\drender.cpp";
                g_CurrentLineNumber = 2407;
                core_main_c_displayErrorAndQuit_FUN_004c8440("CDemonRenderer::demonGZFacetList - Too many visible faces at once : %d");
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
          engine_special_cpp_drawPolyList_FUN_00532680
                    (this_ptr->vertex_buffer_ptr,(SMRGLPrimitiveTriangle **)&DAT_005ae70c,iVar3,
                     _DAT_01c039a0);
          return;
        }
      }
    }
    else {
      _DAT_01c00c7c = core_dstrender_cpp_renderDepthOnlyStandard_FUN_00463a79;
      _DAT_01c039a0 = 0;
      _DAT_01c039a4 = _DAT_01c039a0;
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
        engine_drender_cpp_renderTriangleSimple_FUN_00458080(&local_28,(pSVar1->base).count);
      }
    }
  }
  else {
    iVar3 = 0;
    if (0 < primitive_count) {
      do {
        engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_0045f460
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
