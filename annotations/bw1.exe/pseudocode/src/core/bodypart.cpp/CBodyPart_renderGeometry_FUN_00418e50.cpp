// Name: core_bodypart.cpp_CBodyPart_renderGeometry_FUN_00418e50
// Address: 00418e50
// Address Range: [[00418e50, 00418fbb]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_renderGeometry_FUN_00418e50(CBodyPart *this_ptr,int render_flags)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_renderGeometry_FUN_00418e50(CBodyPart *this_ptr,int render_flags)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_18;
  int local_14;
  
  core_set_cpp_CDemonSet_rotateVerticies_FUN_00553140
            (g_CDemonSetPtr,this_ptr->vertex_count,this_ptr->vertices);
  core_set_cpp_CDemonSet_lightVerticies_FUN_00553440
            (g_CDemonSetPtr,this_ptr->vertex_count,this_ptr->tri_count,this_ptr->faces,
             this_ptr->vertices,3,this_ptr->normals);
  if ((this_ptr->texture_count == 1) ||
     (iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560), iVar2 != 0)
     ) {
    iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560);
    if (iVar2 == 0) {
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00(DAT_00612560,this_ptr->textures)
      ;
    }
    engine_drender_cpp_CDemonRenderer_renderTriangleBatch_FUN_004841a0
              (DAT_00612560,this_ptr->faces,this_ptr->tri_count,render_flags);
  }
  else {
    iVar2 = 0;
    local_18 = -1;
    if (0 < this_ptr->tri_count) {
      local_14 = 0;
      iVar3 = 0;
      do {
        iVar1 = *(int *)((int)this_ptr->face_texture_indices + local_14);
        if (iVar1 != local_18) {
          engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
                    (DAT_00612560,this_ptr->textures + iVar1);
          local_18 = iVar1;
        }
        engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_00482210
                  (DAT_00612560,(SMRGLPrimitivePoly *)(this_ptr->faces + iVar3),render_flags);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x3c;
        local_14 = local_14 + 4;
      } while (iVar2 < this_ptr->tri_count);
    }
  }
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20(DAT_00612560,1);
  return;
}
