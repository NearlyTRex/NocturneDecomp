// Name: core_bodypart.cpp_CBodyPart_renderGeometry_FUN_004159e0
// Address: 004159e0
// Address Range: [[004159e0, 00415b50]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_renderGeometry_FUN_004159e0(CBodyPart *this_ptr,int render_flags)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_renderGeometry_FUN_004159e0(CBodyPart *this_ptr,int render_flags)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_18;
  int local_14;
  
  core_set_cpp_CDemonSet_rotateVerticies_FUN_00531e90
            (g_CDemonSetPtr,this_ptr->vertex_count,this_ptr->vertices);
  core_set_cpp_CDemonSet_lightVerticies_FUN_00532190
            (g_CDemonSetPtr,this_ptr->vertex_count,this_ptr->tri_count,this_ptr->faces,
             this_ptr->vertices,3,this_ptr->normals);
  if ((this_ptr->texture_count == 1) ||
     (iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280), iVar2 != 0)
     ) {
    iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280);
    if (iVar2 == 0) {
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00(DAT_0060b280,this_ptr->textures)
      ;
    }
    engine_drender_cpp_CDemonRenderer_renderTriangleBatch_FUN_0046bca0
              (DAT_0060b280,this_ptr->faces,this_ptr->tri_count,render_flags);
  }
  else {
    iVar2 = 0;
    local_18 = -1;
    if (0 < this_ptr->tri_count) {
      local_14 = 0;
      iVar3 = 0;
      do {
        iVar1 = *(int *)((int)this_ptr->face_texture_indices + iVar3);
        if (iVar1 != local_18) {
          engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
                    (DAT_0060b280,this_ptr->textures + iVar1);
          local_18 = iVar1;
        }
        iVar3 = iVar3 + 4;
        iVar2 = iVar2 + 1;
        engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_00469d00
                  (DAT_0060b280,
                   (SMRGLPrimitivePoly *)
                   ((int)&(((SMRGLPrimitiveTriangle *)(this_ptr->faces->vertices + -2))->base).base.
                          type + local_14),render_flags);
        local_14 = local_14 + 0x3c;
      } while (iVar2 < this_ptr->tri_count);
    }
  }
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920(DAT_0060b280,1);
  return;
}
