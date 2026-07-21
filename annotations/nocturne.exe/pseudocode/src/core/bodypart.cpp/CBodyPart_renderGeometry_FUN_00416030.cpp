// Name: core_bodypart.cpp_CBodyPart_renderGeometry_FUN_00416030
// Address: 00416030
// Address Range: [[00416030, 0041619b]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_renderGeometry_FUN_00416030(int param_1,undefined4 param_2)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_renderGeometry_FUN_00416030(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_18;
  int local_14;
  
  core_set_cpp_CDemonSet_rotateVerticies_FUN_0050c200
            (0x01E57284,*(uint *)(param_1 + 0x16c),*(uint *)(param_1 + 0x170));
  core_set_cpp_CDemonSet_lightVerticies_FUN_0050c2d0
            (0x01E57284,*(uint *)(param_1 + 0x16c),*(uint *)(param_1 + 0x178),
             *(uint *)(param_1 + 0x17c),*(uint *)(param_1 + 0x170),3,
             *(uint *)(param_1 + 0x174));
  if ((*(int *)(param_1 + 0x184) == 1) ||
     (iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704), iVar2 != 0)
     ) {
    iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
    if (iVar2 == 0) {
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0(DAT_005ae704,param_1 + 0x188);
    }
    engine_drender_cpp_CDemonRenderer_renderTriangleBatch_FUN_004613d0
              (DAT_005ae704,*(uint *)(param_1 + 0x17c),*(uint *)(param_1 + 0x178),
               param_2);
  }
  else {
    iVar2 = 0;
    local_18 = -1;
    if (0 < *(int *)(param_1 + 0x178)) {
      local_14 = 0;
      iVar3 = 0;
      do {
        iVar1 = *(int *)(*(int *)(param_1 + 0x180) + local_14);
        if (iVar1 != local_18) {
          engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
                    (DAT_005ae704,iVar1 * 0x18 + param_1 + 0x188);
          local_18 = iVar1;
        }
        engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_0045f460
                  (DAT_005ae704,*(int *)(param_1 + 0x17c) + iVar3,param_2);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x3c;
        local_14 = local_14 + 4;
      } while (iVar2 < *(int *)(param_1 + 0x178));
    }
  }
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(DAT_005ae704,1);
  return;
}
