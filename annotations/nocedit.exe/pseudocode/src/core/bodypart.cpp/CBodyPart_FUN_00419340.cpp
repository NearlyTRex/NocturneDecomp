// Name: core_bodypart.cpp_CBodyPart_FUN_00419340
// Address: 00419340
// Address Range: [[00419340, 004194ab]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_FUN_00419340(CBodyPart *this_ptr)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_FUN_00419340(CBodyPart *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000008;
  int local_18;
  int local_14;
  
  core_set_cpp_CDemonSet_rotateVertices_FUN_0056e7c0
            (g_CDemonSetPtr,*(int *)(this_ptr->unk + 0x1c),*(int **)(this_ptr->unk + 0x20));
  core_set_cpp_CDemonSet_lightVerticies_FUN_0056eac0
            (g_CDemonSetPtr,*(int *)(this_ptr->unk + 0x1c),*(int *)(this_ptr->unk + 0x28),
             *(SInputFace **)(this_ptr->unk + 0x2c),*(int *)(this_ptr->unk + 0x20),3,
             *(int *)(this_ptr->unk + 0x24));
  if ((*(int *)(this_ptr->unk + 0x34) == 1) ||
     (iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2),
     iVar2 != 0)) {
    iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
    if (iVar2 == 0) {
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                (g_CDemonRendererPtr2,(SMRGLTextureBasic *)(this_ptr->unk + 0x38));
    }
    engine_drender_cpp_CDemonRenderer_renderFaceBatch_FUN_0048ce20
              (g_CDemonRendererPtr2,*(SMRGLHeaderPrimitive **)(this_ptr->unk + 0x2c),
               *(int *)(this_ptr->unk + 0x28),in_stack_00000008);
  }
  else {
    iVar2 = 0;
    local_18 = -1;
    if (0 < *(int *)(this_ptr->unk + 0x28)) {
      local_14 = 0;
      iVar3 = 0;
      do {
        iVar1 = *(int *)(*(int *)(this_ptr->unk + 0x30) + local_14);
        if (iVar1 != local_18) {
          engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                    (g_CDemonRendererPtr2,(SMRGLTextureBasic *)(this_ptr->unk + iVar1 * 0x18 + 0x38)
                    );
          local_18 = iVar1;
        }
        engine_drender_cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0
                  (g_CDemonRendererPtr2,
                   (SMRGLHeaderPrimitive *)(*(int *)(this_ptr->unk + 0x2c) + iVar3),
                   in_stack_00000008);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x3c;
        local_14 = local_14 + 4;
      } while (iVar2 < *(int *)(this_ptr->unk + 0x28));
    }
  }
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr2,1);
  return;
}
