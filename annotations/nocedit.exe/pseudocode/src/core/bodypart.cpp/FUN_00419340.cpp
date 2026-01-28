// Name: core_bodypart.cpp_FUN_00419340
// Address: 00419340
// Address Range: [[00419340, 004194ab]]
// Convention: unknown
// Signature: void core_bodypart_cpp_FUN_00419340(void)

#include "nocturne.h"

void core_bodypart_cpp_FUN_00419340(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000004;
  int in_stack_00000008;
  int local_18;
  int local_14;
  
  core_set_cpp_CDemonSet_rotateVertices_FUN_0056e7c0
            (g_CDemonSetPtr,*(int *)(in_stack_00000004 + 0x174),*(int **)(in_stack_00000004 + 0x178)
            );
  core_set_cpp_CDemonSet_lightVerticies_FUN_0056eac0
            (g_CDemonSetPtr,*(int *)(in_stack_00000004 + 0x174),*(int *)(in_stack_00000004 + 0x180),
             *(SInputFace **)(in_stack_00000004 + 0x184),*(int *)(in_stack_00000004 + 0x178),3,
             *(int *)(in_stack_00000004 + 0x17c));
  if ((*(int *)(in_stack_00000004 + 0x18c) == 1) ||
     (iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2),
     iVar2 != 0)) {
    iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
    if (iVar2 == 0) {
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                (g_CDemonRendererPtr2,(SMRGLTextureBasic *)(in_stack_00000004 + 400));
    }
    engine_drender_cpp_CDemonRenderer_renderFaceBatch_FUN_0048ce20
              (g_CDemonRendererPtr2,*(SMRGLHeaderPrimitive **)(in_stack_00000004 + 0x184),
               *(int *)(in_stack_00000004 + 0x180),in_stack_00000008);
  }
  else {
    iVar2 = 0;
    local_18 = -1;
    if (0 < *(int *)(in_stack_00000004 + 0x180)) {
      local_14 = 0;
      iVar3 = 0;
      do {
        iVar1 = *(int *)(*(int *)(in_stack_00000004 + 0x188) + local_14);
        if (iVar1 != local_18) {
          engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                    (g_CDemonRendererPtr2,
                     (SMRGLTextureBasic *)(iVar1 * 0x18 + in_stack_00000004 + 400));
          local_18 = iVar1;
        }
        engine_drender_cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0
                  (g_CDemonRendererPtr2,
                   (SMRGLHeaderPrimitive *)(*(int *)(in_stack_00000004 + 0x184) + iVar3),
                   in_stack_00000008);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x3c;
        local_14 = local_14 + 4;
      } while (iVar2 < *(int *)(in_stack_00000004 + 0x180));
    }
  }
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr2,1);
  return;
}
