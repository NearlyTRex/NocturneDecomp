// Name: core_bodypart.cpp_CBodyPart_renderGeometry_FUN_00416030
// Address: 00416030
// Address Range: [[00416030, 0041619b]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_renderGeometry_FUN_00416030(CBodyPart *this_ptr,int render_flags)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_renderGeometry_FUN_00416030(CBodyPart *this_ptr,int render_flags)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_18;
  int local_14;
  
  core_set_cpp_CDemonSet_rotateVerticies_FUN_0050c200
            (0x01E57284,this_ptr->vertex_count,this_ptr->vertices);
  core_set_cpp_CDemonSet_lightVerticies_FUN_0050c2d0
            (0x01E57284,this_ptr->vertex_count,this_ptr->tri_count,this_ptr->faces,
             this_ptr->vertices,3,this_ptr->normals);
  if ((this_ptr->texture_count == 1) ||
     (iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704), iVar2 != 0)
     ) {
    iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
    if (iVar2 == 0) {
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0(DAT_005ae704,this_ptr->textures)
      ;
    }
    engine_drender_cpp_CDemonRenderer_renderTriangleBatch_FUN_004613d0
              (DAT_005ae704,this_ptr->faces,this_ptr->tri_count,render_flags);
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
          engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
                    (DAT_005ae704,this_ptr->textures + iVar1);
          local_18 = iVar1;
        }
        engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_0045f460
                  (DAT_005ae704,
                   (SMRGLPrimitivePoly *)
                   ((int)&(((SMRGLPrimitiveTriangle *)(this_ptr->faces->vertices + -2))->base).base.
                          type + iVar3),render_flags);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x3c;
        local_14 = local_14 + 4;
      } while (iVar2 < this_ptr->tri_count);
    }
  }
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(DAT_005ae704,1);
  return;
}
