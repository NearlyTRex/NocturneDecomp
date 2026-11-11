// Name: core_djien.cpp_CDjien_customRayIntersect_FUN_004610b0
// Address: 004610b0
// Address Range: [[004610b0, 004613a7]]
// Convention: __cdecl
// Signature: float __cdecl core_djien_cpp_CDjien_customRayIntersect_FUN_004610b0(CDjien *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_normal)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_djien_cpp_CDjien_customRayIntersect_FUN_004610b0(CDjien *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_normal)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  uint auStackY_1044 [959];
  float afStack_12c [30];
  float afStack_b4 [10];
  uint auStack_8c [6];
  uint auStack_74 [6];
  float fStack_5c;
  float afStack_58 [4];
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_34;
  float fStack_2c;
  int iStack_28;
  float fStack_24;
  float fStack_20;
  int iStack_1c;
  float fStack_18;
  
  bVar8 = 0;
  (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
            ((CDemonActor *)this_ptr,(CBoundingBox3D *)ray_origin);
  puVar6 = auStack_8c;
  puVar7 = auStack_74;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
    puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
  }
  fStack_18 = (float)core_box_cpp_FUN_00420ee0(auStack_74);
  if ((0.0 <= fStack_18) && (fStack_18 <= 1.0)) {
    __arrinit(afStack_12c,10,&g_CVectorTypeInfo);
    iVar3 = unkafter_djien_cpp_FUN_004615b0(this_ptr,afStack_12c,afStack_b4);
    iStack_28 = -1;
    puVar6 = (uint *)((int)ray_direction + (uint)bVar8 * -8 + 4);
    fStack_5c = ray_direction->x;
    *(uint *)((int)afStack_58 + (uint)bVar8 * 0xfffffff8) = *puVar6;
    afStack_58[(uint)bVar8 * 0xfffffffe + (uint)bVar8 * 0xfffffffe + 1] =
         (float)puVar6[(uint)bVar8 * -2 + 1];
    iStack_1c = iVar3;
    fStack_2c = 1e+06;
    fStack_34 = SQRT(afStack_58[1] * afStack_58[1] +
                     fStack_5c * fStack_5c + afStack_58[0] * afStack_58[0]);
    if (fStack_34 <= 0.0) {
      afStack_58[0] = 0.0;
      fStack_5c = 0.0;
      afStack_58[1] = 0.0;
    }
    else {
      fStack_34 = 1.0 / fStack_34;
      fStack_5c = fStack_5c * fStack_34;
      afStack_58[0] = afStack_58[0] * fStack_34;
      afStack_58[1] = afStack_58[1] * fStack_34;
    }
    iVar4 = 0;
    if (0 < iVar3) {
      pfVar5 = afStack_12c;
      do {
        fStack_44 = *pfVar5 - ray_origin->x;
        fStack_40 = pfVar5[1] - ray_origin->y;
        fStack_3c = pfVar5[2] - ray_origin->z;
        afStack_58[2] = fStack_44;
        afStack_58[(uint)bVar8 * 0xfffffffe + 3] = afStack_58[(uint)bVar8 * 0xfffffffe + 6];
        afStack_58[(uint)bVar8 * 0xfffffffe + (uint)bVar8 * 0xfffffffe + 4] =
             afStack_58[(uint)bVar8 * 0xfffffffe + (uint)bVar8 * 0xfffffffe + 7];
        fStack_24 = afStack_58[3] * afStack_58[3];
        fStack_20 = fStack_48 * fStack_48;
        fVar1 = fStack_48 * afStack_58[1] +
                afStack_58[2] * fStack_5c + afStack_58[3] * afStack_58[0];
        fVar2 = afStack_58[2] * afStack_58[2] + afStack_58[3] * afStack_58[3] +
                fStack_48 * fStack_48;
        if (0.0 < _DAT_005d8e68 - (fVar2 - fVar1 * fVar1)) {
          iStack_28 = iVar4;
          fStack_2c = SQRT(fVar2);
        }
        iVar4 = iVar4 + 1;
        pfVar5 = pfVar5 + 3;
      } while (iVar4 < iStack_1c);
    }
    if (iStack_28 != -1) {
      out_normal[1].x = *(float *)((int)afStack_b4 + iStack_28 * 4);
      out_normal->z = 0.0;
      out_normal->y = out_normal->z;
      out_normal->x = out_normal->y;
      return fStack_2c /
             SQRT(ray_direction->z * ray_direction->z +
                  ray_direction->x * ray_direction->x + ray_direction->y * ray_direction->y);
    }
  }
  return 2.0;
}
