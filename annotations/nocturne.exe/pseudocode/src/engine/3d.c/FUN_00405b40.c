// Name: engine_3d.c_FUN_00405b40
// Address: 00405b40
// Address Range: [[00405b40, 00405c81]]
// Convention: unknown
// Signature: uint * engine_3d_c_FUN_00405b40(uint *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * engine_3d_c_FUN_00405b40(uint *param_1)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  uint *unaff_EDI;
  int iVar10;
  
  if (param_1 == (uint *)0x0) {
    param_1 = &DAT_006b0288;
  }
  uVar5 = *param_1;
  puVar4 = (uint *)0x0;
  puVar6 = param_1;
  while (uVar5 != 0) {
    uVar5 = *puVar6;
    puVar8 = puVar4;
    if (uVar5 < 0xd) {
      if (uVar5 == 10) {
        unaff_EDI = puVar6;
      }
    }
    else {
      puVar8 = puVar6;
      if ((0xd < uVar5) && (puVar8 = puVar4, uVar5 == 0x18)) {
        engine_3d_c_FUN_00405ab0(puVar6,puVar4,unaff_EDI);
      }
    }
    uVar5 = engine_model_c_getMRGLSize_FUN_004dd520(puVar6);
    param_1 = (uint *)(uVar5 & 0xfffffffc);
    puVar6 = (uint *)((int)puVar6 + (int)param_1);
    puVar4 = puVar8;
    uVar5 = *puVar6;
  }
  if (0x00000001 != 0) {
    if (DAT_006b0278 == 0) {
      iVar10 = 0;
      _qsort(&DAT_006b415c,DAT_006b0268,4,engine_3d_c_FUN_00405a60);
      iVar9 = 0;
      iVar7 = 0;
      param_1 = DAT_006b0268;
      if (0 < (int)DAT_006b0268) {
        do {
          iVar2 = *(int *)(*(int *)((int)&DAT_006b415c + iVar7) + 4);
          if ((iVar2 != 0) && (iVar9 != iVar2)) {
            engine_texture_cpp_ensureTextureLoaded_FUN_00545920(iVar2);
            iVar9 = *(int *)(*(int *)((int)&DAT_006b415c + iVar7) + 4);
          }
          puVar3 = *(uint **)((int)&DAT_006b415c + iVar7);
          DAT_006b0264 = puVar3[4];
          _DAT_01c039dc = puVar3[5];
          _DAT_01c039e0 = puVar3[6];
          _DAT_01c039e4 = puVar3[7];
          iVar7 = iVar7 + 4;
          iVar10 = iVar10 + 1;
          param_1 = (uint *)engine_3d_c_FUN_00405340(*puVar3);
        } while (iVar10 < (int)DAT_006b0268);
      }
    }
    else {
      iVar9 = 0;
      if (0 < (int)DAT_006b0268) {
        iVar7 = 0;
        do {
          piVar1 = (int *)((int)&DAT_006b415c + iVar7);
          iVar7 = iVar7 + 4;
          DAT_006b0264 = ((uint *)*piVar1)[4];
          iVar9 = iVar9 + 1;
          param_1 = (uint *)engine_3d_c_renderPolygonLitAlphaPlaneMaskedUVOp24_FUN_00405c90
                                      (*(uint *)*piVar1);
        } while (iVar9 < (int)DAT_006b0268);
      }
    }
  }
  return param_1;
}
