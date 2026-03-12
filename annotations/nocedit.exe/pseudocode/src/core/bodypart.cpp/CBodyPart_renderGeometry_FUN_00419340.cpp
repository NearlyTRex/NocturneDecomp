// Name: core_bodypart.cpp_CBodyPart_renderGeometry_FUN_00419340
// Address: 00419340
// Address Range: [[00419340, 004194ab]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_renderGeometry_FUN_00419340(CBodyPart *this_ptr,int render_flags)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_renderGeometry_FUN_00419340(CBodyPart *this_ptr,int render_flags)

{
  int iVar2;
  int iVar4;
  int iVar3;
  int local_18;
  int local_14;
  int iVar1;
  
  core_set_cpp_CDemonSet_rotateVerticies_FUN_0056e7c0
            (g_CDemonSetPtr,this_ptr->vertex_count,this_ptr->vertices);
  core_set_cpp_CDemonSet_lightVerticies_FUN_0056eac0
            (g_CDemonSetPtr,this_ptr->vertex_count,this_ptr->tri_count,this_ptr->faces,
             this_ptr->vertices,3,this_ptr->normals);
  if ((this_ptr->texture_count == 1) ||
     (iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2),
     iVar2 != 0)) {
    iVar4 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
    if (iVar4 == 0) {
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                (g_CDemonRendererPtr2,this_ptr->textures);
    }
    engine_drender_cpp_CDemonRenderer_renderFaceBatch_FUN_0048ce20
              (g_CDemonRendererPtr2,&this_ptr->faces->base,this_ptr->tri_count,render_flags);
  }
  else {
    iVar4 = 0;
    local_18 = -1;
    if (0 < this_ptr->tri_count) {
      local_14 = 0;
      iVar3 = 0;
      do {
        iVar1 = *(int *)((int)this_ptr->face_texture_indices + local_14);
        if (iVar1 != local_18) {
          engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                    (g_CDemonRendererPtr2,this_ptr->textures + iVar1);
          local_18 = iVar1;
        }
        engine_drender_cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0
                  (g_CDemonRendererPtr2,
                   (SMRGLHeaderPrimitive *)
                   ((int)&(((SMRGLPrimitiveTriangle *)(this_ptr->faces->vertices + -2))->base).base.
                          type + iVar3),render_flags);
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 0x3c;
        local_14 = local_14 + 4;
      } while (iVar4 < this_ptr->tri_count);
    }
  }
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr2,1);
  return;
}
