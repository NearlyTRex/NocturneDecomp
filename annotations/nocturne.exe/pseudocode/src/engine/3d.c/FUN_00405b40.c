// Name: engine_3d.c_FUN_00405b40
// Address: 00405b40
// Address Range: [[00405b40, 00405c81]]
// Convention: unknown
// Signature: SMRGLHeaderExtended * engine_3d_c_FUN_00405b40(SMRGLHeaderExtended *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SMRGLHeaderExtended * engine_3d_c_FUN_00405b40(SMRGLHeaderExtended *param_1)

{
  int *piVar1;
  SMRGLTextureBasic *texture;
  uint *puVar2;
  SMRGLHeaderExtended *pSVar3;
  uint uVar4;
  SMRGLHeaderExtended *header;
  int iVar5;
  SMRGLTextureBasic *pSVar6;
  SMRGLHeaderExtended *pSVar7;
  int iVar8;
  SMRGLHeaderExtended *unaff_EDI;
  
  if (param_1 == (SMRGLHeaderExtended *)0x0) {
    param_1 = (SMRGLHeaderExtended *)&DAT_006b0288;
  }
  iVar8 = (param_1->base).type;
  pSVar3 = (SMRGLHeaderExtended *)0x0;
  header = param_1;
  while (iVar8 != 0) {
    uVar4 = (header->base).type;
    pSVar7 = pSVar3;
    if (uVar4 < 0xd) {
      if (uVar4 == 10) {
        unaff_EDI = header;
      }
    }
    else {
      pSVar7 = header;
      if ((0xd < uVar4) && (pSVar7 = pSVar3, uVar4 == 0x18)) {
        engine_3d_c_FUN_00405ab0(header,pSVar3,unaff_EDI);
      }
    }
    uVar4 = engine_model_c_getMRGLSize_FUN_004dd520(header);
    param_1 = (SMRGLHeaderExtended *)(uVar4 & 0xfffffffc);
    header = (SMRGLHeaderExtended *)((int)&(header->base).type + (int)&(param_1->base).type);
    pSVar3 = pSVar7;
    iVar8 = (header->base).type;
  }
  if (0x00000001 != 0) {
    if (DAT_006b0278 == 0) {
      iVar5 = 0;
      _qsort(&DAT_006b415c,DAT_006b0268,4,engine_3d_c_FUN_00405a60);
      pSVar6 = (SMRGLTextureBasic *)0x0;
      iVar8 = 0;
      param_1 = DAT_006b0268;
      if (0 < (int)DAT_006b0268) {
        do {
          texture = *(SMRGLTextureBasic **)(*(int *)((int)&DAT_006b415c + iVar8) + 4);
          if ((texture != (SMRGLTextureBasic *)0x0) && (pSVar6 != texture)) {
            engine_texture_cpp_ensureTextureLoaded_FUN_00545920(texture);
            pSVar6 = *(SMRGLTextureBasic **)(*(int *)((int)&DAT_006b415c + iVar8) + 4);
          }
          puVar2 = *(uint **)((int)&DAT_006b415c + iVar8);
          DAT_006b0264 = puVar2[4];
          _DAT_01c039dc = puVar2[5];
          _DAT_01c039e0 = puVar2[6];
          _DAT_01c039e4 = puVar2[7];
          iVar8 = iVar8 + 4;
          iVar5 = iVar5 + 1;
          param_1 = (SMRGLHeaderExtended *)
                    engine_3d_c_renderPolygonTexturedUVLitPlaneMasked_FUN_00405340(*puVar2);
        } while (iVar5 < (int)DAT_006b0268);
      }
    }
    else {
      iVar8 = 0;
      if (0 < (int)DAT_006b0268) {
        iVar5 = 0;
        do {
          piVar1 = (int *)((int)&DAT_006b415c + iVar5);
          iVar5 = iVar5 + 4;
          DAT_006b0264 = ((uint *)*piVar1)[4];
          iVar8 = iVar8 + 1;
          param_1 = (SMRGLHeaderExtended *)
                    engine_3d_c_renderPolygonLitAlphaPlaneMaskedUVOp24_FUN_00405c90
                              (*(uint *)*piVar1);
        } while (iVar8 < (int)DAT_006b0268);
      }
    }
  }
  return param_1;
}
