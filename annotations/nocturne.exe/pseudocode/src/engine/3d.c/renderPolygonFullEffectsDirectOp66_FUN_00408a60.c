// Name: engine_3d.c_renderPolygonFullEffectsDirectOp66_FUN_00408a60
// Address: 00408a60
// Address Range: [[00408a60, 00408c08]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFullEffectsDirectOp66_FUN_00408a60(SMRGLHeaderPrimitive *primitive)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFullEffectsDirectOp66_FUN_00408a60(SMRGLHeaderPrimitive *primitive)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  SMRGLTextureBasic *pSVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  SMRGLHeaderPrimitive *pSVar8;
  int *piVar9;
  int *piVar10;
  byte bVar11;
  
  bVar11 = 0;
  pSVar8 = primitive + 1;
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00404610(&primitive->surface_normal);
  if (iVar2 != 0) {
    if (_DAT_01c03948 == 0) {
      if (DAT_005b7624 == 0x20) {
        _DAT_01c00c7c = engine_special_cpp_FUN_005300ec;
      }
      else {
        _DAT_01c00c7c = engine_special_cpp_FUN_00530322;
      }
    }
    else if (DAT_005b7624 == 0x20) {
      _DAT_01c00c7c = engine_special_cpp_FUN_0052f031;
    }
    else {
      _DAT_01c00c7c = engine_special_cpp_FUN_0052f823;
    }
    _DAT_01c039a4 = 1;
    _DAT_01c039a0 = 0x1e7;
    if (((DAT_006b494c == 0) || (0x9c3 < DAT_006b4950)) || (4 < (primitive->base).count)) {
      engine_clipper_c_FUN_00432cd0((primitive->base).count,pSVar8);
    }
    else {
      iVar3 = DAT_006b4950 * 0x118;
      piVar6 = (int *)(&DAT_006b4954 + iVar3);
      DAT_006b4950 = DAT_006b4950 + 1;
      *piVar6 = (primitive->base).count;
      iVar2 = 0x7fffffff;
      iVar7 = 0;
      if (0 < (primitive->base).count) {
        do {
          piVar9 = &DAT_005c5014 + (pSVar8->base).type * 0xc;
          piVar10 = piVar6 + 1;
          for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
            *piVar10 = *piVar9;
            piVar9 = piVar9 + (uint)bVar11 * -2 + 1;
            piVar10 = piVar10 + (uint)bVar11 * -2 + 1;
          }
          if (piVar6[3] < iVar2) {
            iVar2 = piVar6[3];
          }
          piVar6 = piVar6 + 0xc;
          iVar7 = iVar7 + 1;
          pSVar8 = (SMRGLHeaderPrimitive *)&(pSVar8->base).count;
        } while (iVar7 < (primitive->base).count);
      }
      pSVar4 = engine_texture_cpp_getCurrentTexture_FUN_00545ad0();
      uVar1 = DAT_005b763c;
      piVar6 = (int *)(&DAT_006b4a18 + iVar3);
      for (iVar7 = 0x12; iVar7 != 0; iVar7 = iVar7 + -1) {
        *piVar6 = (pSVar4->base).type;
        pSVar4 = (SMRGLTextureBasic *)((int)pSVar4 + (uint)bVar11 * -8 + 4);
        piVar6 = piVar6 + (uint)bVar11 * -2 + 1;
      }
      *(uint *)(&DAT_006b4a60 + iVar3) = uVar1;
      *(int *)(&DAT_006b4a68 + iVar3) = iVar2;
      *(uint *)(&DAT_006b4a64 + iVar3) = _DAT_01c03998;
    }
  }
  return (SMRGLHeaderExtended *)((int)&primitive[1].base + (primitive->base).count * 0xc);
}
