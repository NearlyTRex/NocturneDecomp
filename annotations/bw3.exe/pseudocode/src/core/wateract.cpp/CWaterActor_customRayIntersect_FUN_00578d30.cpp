// Name: core_wateract.cpp_CWaterActor_customRayIntersect_FUN_00578d30
// Address: 00578d30
// Address Range: [[00578d30, 00578fb3]]
// Convention: __cdecl
// Signature: float __cdecl core_wateract_cpp_CWaterActor_customRayIntersect_FUN_00578d30(CWaterActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_normal)

#include "nocturne.h"

float __cdecl core_wateract_cpp_CWaterActor_customRayIntersect_FUN_00578d30(CWaterActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_normal)

{
  float fVar1;
  int iVar2;
  SMRGLPrimitiveQuad *pSVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  float afStackY_1040 [980];
  CVector3f *ray_origin_00;
  CVector3f *in_stack_ffffff20;
  CVector3f *in_stack_ffffff24;
  float fStack_c8;
  CDemonTriangle CStack_c0;
  uint auStack_88 [4];
  uint auStack_78 [2];
  CBoundingBox3D CStack_70;
  CVector3f CStack_58;
  CVector3f CStack_4c;
  CVector3f CStack_40;
  CVector3f CStack_34;
  float fStack_28;
  float afStack_24 [2];
  int iStack_1c;
  SWaterVertex *pSStack_14;
  
  bVar6 = 0;
  ray_origin_00 = (CVector3f *)0x0;
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)ray_origin);
  puVar4 = auStack_88;
  puVar5 = auStack_78;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  fVar1 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_0041e220
                    (&CStack_70,ray_origin_00,in_stack_ffffff20,in_stack_ffffff24);
  if ((0.0 <= fVar1) && (fVar1 <= 1.0)) {
    iStack_1c = this_ptr->primitive_count;
    pSVar3 = this_ptr->primitives;
    iVar2 = 0;
    fStack_c8 = 2.0;
    if (0 < iStack_1c) {
      pSStack_14 = this_ptr->vertices;
      do {
        core_dtri_cpp_CDemonTriangle_buildCollision_FUN_00478a50
                  (&CStack_c0,&pSStack_14[pSVar3->vertices[0].vertex_index].local_position,
                   &pSStack_14[pSVar3->vertices[1].vertex_index].local_position,
                   &pSStack_14[pSVar3->vertices[2].vertex_index].local_position);
        fVar1 = core_dtri_cpp_rayTriangleIntersection_FUN_00478ac0
                          (&CStack_c0,ray_origin,ray_direction);
        if (((fVar1 < fStack_c8) && (0.0 <= fVar1)) && (fVar1 <= 1.0)) {
          fStack_28 = -CStack_c0.normal.x;
          afStack_24[0] = -CStack_c0.normal.y;
          afStack_24[1] = -CStack_c0.normal.z;
          CStack_58.x = -CStack_c0.normal.x;
          *(float *)((int)&CStack_58 + (uint)bVar6 * -8 + 4) = afStack_24[(uint)bVar6 * -2];
          *(float *)((int)&CStack_58 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
               afStack_24[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
          fStack_c8 = fVar1;
          if (&CStack_40 != &CStack_58) {
            CStack_40.x = CStack_58.x;
          }
        }
        iVar2 = iVar2 + 1;
        pSVar3 = pSVar3 + 1;
      } while (iVar2 < iStack_1c);
    }
    if (fStack_c8 < 1.0) {
      core_actor_cpp_CDemonActor_transformVector_FUN_00408b00(&this_ptr->base,&CStack_40,&CStack_34)
      ;
      CStack_4c.x = CStack_34.x;
      *(uint *)((int)&CStack_4c + (uint)bVar6 * -8 + 4) =
           *(uint *)((int)&CStack_34 + (uint)bVar6 * -8 + 4);
      *(uint *)((int)&CStack_4c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           *(uint *)((int)&CStack_34 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      if (&CStack_4c != out_normal) {
        out_normal->x = CStack_4c.x;
        out_normal->y = CStack_4c.y;
        out_normal->z = CStack_4c.z;
      }
    }
    return fStack_c8;
  }
  return 2.0;
}
