// Name: core_bodypart.cpp_CBodyPart_FUN_00419340
// Address: 00419340
// Address Range: [[00419340, 004194ab]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_FUN_00419340(CBodyPart *this_ptr,int render_flags)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_FUN_00419340(CBodyPart *this_ptr,int render_flags)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_18;
  int local_14;
  
  core_set_cpp_CDemonSet_rotateVertices_FUN_0056e7c0
            (g_CDemonSetPtr,this_ptr->vertex_count,(int *)this_ptr->unk2);
  core_set_cpp_CDemonSet_lightVerticies_FUN_0056eac0
            (g_CDemonSetPtr,this_ptr->vertex_count,this_ptr->tri_count,
             *(SInputFace **)this_ptr->unk4,this_ptr->unk2,3,this_ptr->unk3);
  if ((this_ptr->texture_count == 1) ||
     (iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2),
     iVar2 != 0)) {
    iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
    if (iVar2 == 0) {
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                (g_CDemonRendererPtr2,(SMRGLTextureBasic *)this_ptr->unk5);
    }
    engine_drender_cpp_CDemonRenderer_renderFaceBatch_FUN_0048ce20
              (g_CDemonRendererPtr2,*(SMRGLHeaderPrimitive **)this_ptr->unk4,this_ptr->tri_count,
               render_flags);
  }
  else {
    iVar2 = 0;
    local_18 = -1;
    if (0 < this_ptr->tri_count) {
      local_14 = 0;
      iVar3 = 0;
      do {
        iVar1 = *(int *)(*(int *)(this_ptr->unk4 + 4) + local_14);
        if (iVar1 != local_18) {
          engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                    (g_CDemonRendererPtr2,(SMRGLTextureBasic *)(this_ptr->unk5 + iVar1 * 0x18));
          local_18 = iVar1;
        }
        engine_drender_cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0
                  (g_CDemonRendererPtr2,(SMRGLHeaderPrimitive *)(*(int *)this_ptr->unk4 + iVar3),
                   render_flags);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x3c;
        local_14 = local_14 + 4;
      } while (iVar2 < this_ptr->tri_count);
    }
  }
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr2,1);
  return;
}
