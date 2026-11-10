// Name: core_wateract.cpp_CWaterActor_customRayIntersect_FUN_00587900
// Address: 00587900
// Address Range: [[00587900, 00587b57]]
// Convention: __cdecl
// Signature: float __cdecl core_wateract_cpp_CWaterActor_customRayIntersect_FUN_00587900(CWaterActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_normal)

#include "nocturne.h"

float __cdecl core_wateract_cpp_CWaterActor_customRayIntersect_FUN_00587900(CWaterActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_normal)

{
  float fVar1;
  int iVar2;
  byte *puVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  float afStackY_1024 [979];
  float fStack_b4;
  CDemonTriangle CStack_b0;
  uint auStack_78 [6];
  uint auStack_60 [6];
  CVector3f CStack_48;
  float fStack_3c;
  float afStack_38 [2];
  CVector3f CStack_30;
  int iStack_20;
  int iStack_1c;
  SWaterVertex *pSStack_18;
  float fStack_14;
  
  bVar6 = 0;
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)ray_origin);
  puVar4 = auStack_60;
  puVar5 = auStack_78;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  fStack_14 = (float)core_box_cpp_FUN_0041af70(auStack_78);
  if ((0.0 <= fStack_14) && (fStack_14 <= 1.0)) {
    iStack_20 = this_ptr->primitive_count;
    puVar3 = &this_ptr->field_0x8104;
    iStack_1c = 0;
    fStack_b4 = 2.0;
    if (0 < iStack_20) {
      pSStack_18 = this_ptr->vertices;
      do {
        core_dtri_cpp_CDemonTriangle_buildCollision_FUN_004779e0
                  (&CStack_b0,(CVector3f *)(pSStack_18 + *(int *)(puVar3 + 0x18)),
                   (CVector3f *)(pSStack_18 + *(int *)(puVar3 + 0x24)),
                   (CVector3f *)(pSStack_18 + *(int *)(puVar3 + 0x30)));
        fVar1 = (float)core_dtri_cpp_rayTriangleIntersection_FUN_00477a50
                                 (&CStack_b0,ray_origin,ray_direction);
        fStack_14 = fVar1;
        if (((fVar1 < fStack_b4) && (0.0 <= fVar1)) && (fVar1 <= 1.0)) {
          fStack_3c = -CStack_b0.normal.x;
          afStack_38[0] = -CStack_b0.normal.y;
          afStack_38[1] = -CStack_b0.normal.z;
          CStack_30.x = -CStack_b0.normal.x;
          afStack_38[(uint)bVar6 * -2 + 3] = afStack_38[(uint)bVar6 * -2];
          afStack_38[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
               afStack_38[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
          fStack_b4 = fVar1;
          if (&CStack_48 != (CVector3f *)(afStack_38 + 2)) {
            CStack_48.x = CStack_30.x;
            CStack_48.y = CStack_30.y;
            CStack_48.z = CStack_30.z;
          }
        }
        iStack_1c = iStack_1c + 1;
        puVar3 = puVar3 + 0x48;
      } while (iStack_1c < iStack_20);
    }
    if ((fStack_b4 < 1.0) && (&CStack_48 != out_normal)) {
      out_normal->x = CStack_48.x;
      out_normal->y = CStack_48.y;
      out_normal->z = CStack_48.z;
    }
    return fStack_b4;
  }
  return 2.0;
}
