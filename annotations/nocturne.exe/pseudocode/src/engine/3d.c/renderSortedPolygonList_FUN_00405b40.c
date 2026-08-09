// Name: engine_3d.c_renderSortedPolygonList_FUN_00405b40
// Address: 00405b40
// Address Range: [[00405b40, 00405c81]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderSortedPolygonList_FUN_00405b40(SMRGLHeaderExtended *primitive)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SMRGLHeaderExtended * __cdecl engine_3d_c_renderSortedPolygonList_FUN_00405b40(SMRGLHeaderExtended *primitive)

{
  int *piVar1;
  SMRGLTextureBasic *texture;
  uint *puVar2;
  SMRGLHeaderExtended *owner_block;
  uint uVar3;
  SMRGLHeaderExtended *primitive_00;
  int iVar4;
  SMRGLTextureBasic *pSVar5;
  SMRGLHeaderExtended *pSVar6;
  int iVar7;
  SMRGLHeaderExtended *unaff_EDI;
  
  if (primitive == (SMRGLHeaderExtended *)0x0) {
    primitive = (SMRGLHeaderExtended *)&DAT_006b0288;
  }
  iVar7 = (primitive->base).type;
  owner_block = (SMRGLHeaderExtended *)0x0;
  primitive_00 = primitive;
  while (iVar7 != 0) {
    uVar3 = (primitive_00->base).type;
    pSVar6 = owner_block;
    if (uVar3 < 0xd) {
      if (uVar3 == 10) {
        unaff_EDI = primitive_00;
      }
    }
    else {
      pSVar6 = primitive_00;
      if ((0xd < uVar3) && (pSVar6 = owner_block, uVar3 == 0x18)) {
        engine_3d_c_queueSortedPolygon_FUN_00405ab0(primitive_00,owner_block,unaff_EDI);
      }
    }
    uVar3 = engine_model_c_getMRGLSize_FUN_004dd520(primitive_00);
    primitive = (SMRGLHeaderExtended *)(uVar3 & 0xfffffffc);
    primitive_00 = (SMRGLHeaderExtended *)
                   ((int)&(primitive_00->base).type + (int)&(primitive->base).type);
    owner_block = pSVar6;
    iVar7 = (primitive_00->base).type;
  }
  if (INT_005acaac != 0) {
    if (DAT_006b0278 == 0) {
      iVar4 = 0;
      _qsort
                (&DAT_006b415c,(SIZE_T)DAT_006b0268,4,
                 engine_3d_c_compareSortedPolygonDepth_FUN_00405a60);
      pSVar5 = (SMRGLTextureBasic *)0x0;
      iVar7 = 0;
      primitive = DAT_006b0268;
      if (0 < (int)DAT_006b0268) {
        do {
          texture = *(SMRGLTextureBasic **)(*(int *)((int)&DAT_006b415c + iVar7) + 4);
          if ((texture != (SMRGLTextureBasic *)0x0) && (pSVar5 != texture)) {
            engine_texture_cpp_ensureTextureLoaded_FUN_00545920(texture);
            pSVar5 = *(SMRGLTextureBasic **)(*(int *)((int)&DAT_006b415c + iVar7) + 4);
          }
          puVar2 = *(uint **)((int)&DAT_006b415c + iVar7);
          DAT_006b0264 = puVar2[4];
          _DAT_01c039dc = puVar2[5];
          _DAT_01c039e0 = puVar2[6];
          _DAT_01c039e4 = puVar2[7];
          iVar7 = iVar7 + 4;
          iVar4 = iVar4 + 1;
          primitive = engine_3d_c_renderPolygonTexturedUVLitPlaneMasked_FUN_00405340
                                ((SMRGLHeaderPrimitive *)*puVar2);
        } while (iVar4 < (int)DAT_006b0268);
      }
    }
    else {
      iVar7 = 0;
      if (0 < (int)DAT_006b0268) {
        iVar4 = 0;
        do {
          piVar1 = (int *)((int)&DAT_006b415c + iVar4);
          iVar4 = iVar4 + 4;
          DAT_006b0264 = ((uint *)*piVar1)[4];
          iVar7 = iVar7 + 1;
          primitive = engine_3d_c_renderPolygonLitAlphaPlaneMaskedUVOp24_FUN_00405c90
                                (*(SMRGLHeaderPrimitive **)*piVar1);
        } while (iVar7 < (int)DAT_006b0268);
      }
    }
  }
  return primitive;
}
