// Name: core_djien.cpp_CDjien_customRayIntersect_FUN_004610b0
// Address: 004610b0
// Address Range: [[004610b0, 004613a7]]
// Convention: __cdecl
// Signature: float __cdecl core_djien_cpp_CDjien_customRayIntersect_FUN_004610b0(CDjien *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_normal)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_djien_cpp_CDjien_customRayIntersect_FUN_004610b0(CDjien *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_normal)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  float *pfVar6;
  uint *puVar7;
  byte bVar8;
  float afStackY_103c [957];
  CVector3f *pCVar9;
  CVector3f *in_stack_fffffec8;
  CVector3f *in_stack_fffffecc;
  CVector3f aCStack_124 [10];
  float afStack_ac [10];
  uint auStack_84 [4];
  uint auStack_74 [2];
  CBoundingBox3D CStack_6c;
  float fStack_54;
  float afStack_50 [4];
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_2c;
  float fStack_24;
  int iStack_20;
  float fStack_1c;
  float fStack_18;
  int iStack_14;
  
  bVar8 = 0;
  pCVar9 = (CVector3f *)0x0;
  (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
            ((CDemonActor *)this_ptr,(CBoundingBox3D *)ray_origin);
  puVar5 = auStack_84;
  puVar7 = auStack_74;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
    puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
  }
  fVar2 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420ee0
                    (&CStack_6c,pCVar9,in_stack_fffffec8,in_stack_fffffecc);
  if ((0.0 <= fVar2) && (fVar2 <= 1.0)) {
    __arrinit(aCStack_124,10,&g_CVectorTypeInfo);
    iVar3 = core_djien_cpp_CDjien_getSackTargetPoints_FUN_004615b0
                      (this_ptr,aCStack_124,(int *)afStack_ac);
    iStack_20 = -1;
    pfVar6 = (float *)((int)ray_direction + (uint)bVar8 * -8 + 4);
    fStack_54 = ray_direction->x;
    afStack_50[(uint)bVar8 * -2] = *pfVar6;
    afStack_50[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] = pfVar6[(uint)bVar8 * -2 + 1];
    iStack_14 = iVar3;
    fStack_24 = 1e+06;
    fStack_2c = SQRT(afStack_50[1] * afStack_50[1] +
                     fStack_54 * fStack_54 + afStack_50[0] * afStack_50[0]);
    if (fStack_2c <= 0.0) {
      afStack_50[0] = 0.0;
      fStack_54 = 0.0;
      afStack_50[1] = 0.0;
    }
    else {
      fStack_2c = 1.0 / fStack_2c;
      fStack_54 = fStack_54 * fStack_2c;
      afStack_50[0] = afStack_50[0] * fStack_2c;
      afStack_50[1] = afStack_50[1] * fStack_2c;
    }
    iVar4 = 0;
    if (0 < iVar3) {
      pCVar9 = aCStack_124;
      do {
        fStack_3c = pCVar9->x - ray_origin->x;
        fStack_38 = pCVar9->y - ray_origin->y;
        fStack_34 = pCVar9->z - ray_origin->z;
        afStack_50[2] = fStack_3c;
        afStack_50[(uint)bVar8 * -2 + 3] = afStack_50[(uint)bVar8 * -2 + 6];
        afStack_50[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
             afStack_50[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
        fStack_1c = afStack_50[3] * afStack_50[3];
        fStack_18 = fStack_40 * fStack_40;
        fVar2 = fStack_40 * afStack_50[1] +
                afStack_50[2] * fStack_54 + afStack_50[3] * afStack_50[0];
        fVar1 = afStack_50[2] * afStack_50[2] + afStack_50[3] * afStack_50[3] +
                fStack_40 * fStack_40;
        if (0.0 < _DAT_005d8e68 - (fVar1 - fVar2 * fVar2)) {
          iStack_20 = iVar4;
          fStack_24 = SQRT(fVar1);
        }
        iVar4 = iVar4 + 1;
        pCVar9 = pCVar9 + 1;
      } while (iVar4 < iStack_14);
    }
    if (iStack_20 != -1) {
      out_normal[1].x = afStack_ac[iStack_20];
      out_normal->z = 0.0;
      out_normal->y = out_normal->z;
      out_normal->x = out_normal->y;
      return fStack_24 /
             SQRT(ray_direction->z * ray_direction->z +
                  ray_direction->x * ray_direction->x + ray_direction->y * ray_direction->y);
    }
  }
  return 2.0;
}
