// Name: core_actor.cpp_CDemonActor_testLineIntersection_FUN_00408da0
// Address: 00408da0
// Address Range: [[00408da0, 00408efc]]
// Convention: __cdecl
// Signature: int __cdecl core_actor_cpp_CDemonActor_testLineIntersection_FUN_00408da0(CDemonActor *this_ptr,CVector3f *line_start,CVector3f *line_end,CVector3f *out_intersection_point)

#include "nocturne.h"

int __cdecl core_actor_cpp_CDemonActor_testLineIntersection_FUN_00408da0(CDemonActor *this_ptr,CVector3f *line_start,CVector3f *line_end,CVector3f *out_intersection_point)

{
  ECollisionType EVar1;
  byte bVar2;
  float afStackY_1054 [1001];
  SCollisionInfo *pSVar3;
  CVector3f *pCVar4;
  float *pfVar5;
  byte *puVar6;
  SCollisionInfo local_94;
  float fStack_6c;
  float afStack_68 [4];
  float fStack_58;
  byte auStack_54 [12];
  float fStack_48;
  float afStack_44 [4];
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  CVector3f CStack_24;
  float fStack_18;
  
  bVar2 = 0;
  core_setcolid_cpp_SCollisionInfo_ctor_FUN_0053ed80(&local_94);
  local_94.ray_query.ray_type = 0;
  EVar1 = (*((this_ptr->vtable)._ub)->getCollisionType)(this_ptr,&local_94);
  if (EVar1 == COLLISION_TYPE_CYLINDER) {
    puVar6 = auStack_54;
    afStack_44[2] = line_end->x - line_start->x;
    pfVar5 = &fStack_48;
    afStack_44[3] = line_end->y - line_start->y;
    pSVar3 = &local_94;
    fStack_34 = line_end->z - line_start->z;
    fStack_48 = afStack_44[2];
    afStack_44[(uint)bVar2 * -2] = afStack_44[(uint)bVar2 * -2 + 3];
    pCVar4 = line_start;
    afStack_44[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
         afStack_44[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4];
    fStack_18 = (float)core_actor_cpp_FUN_00408100(pSVar3,pCVar4,pfVar5,puVar6);
    if ((0.0 <= fStack_18) && (fStack_18 <= 1.0)) {
      if (out_intersection_point != (CVector3f *)0x0) {
        afStack_68[2] = fStack_48 * fStack_18;
        afStack_68[3] = afStack_44[0] * fStack_18;
        fStack_58 = afStack_44[1] * fStack_18;
        fStack_30 = fStack_48 * fStack_18;
        afStack_44[(uint)bVar2 * -2 + 6] = afStack_68[(uint)bVar2 * -2 + 3];
        afStack_44[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 7] =
             *(float *)(auStack_54 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + -4);
        fStack_6c = line_start->x + fStack_30;
        afStack_68[0] = line_start->y + fStack_2c;
        afStack_68[1] = line_start->z + fStack_28;
        CStack_24.x = fStack_6c;
        *(float *)((int)&CStack_24 + (uint)bVar2 * -8 + 4) = afStack_68[(uint)bVar2 * -2];
        *(float *)((int)&CStack_24 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
             afStack_68[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
        if (&CStack_24 != out_intersection_point) {
          out_intersection_point->x = CStack_24.x;
          out_intersection_point->y = CStack_24.y;
          out_intersection_point->z = CStack_24.z;
        }
      }
      return 1;
    }
  }
  return 0;
}
