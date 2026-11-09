// Name: core_actor.cpp_FUN_00408f90
// Address: 00408f90
// Address Range: [[00408f90, 004090ec]]
// Convention: __cdecl
// Signature: int __cdecl core_actor_cpp_FUN_00408f90(CDemonActor *this_ptr,CVector3f *line_start,CVector3f *line_end,CVector3f *out_intersection_point)

#include "nocturne.h"

int __cdecl core_actor_cpp_FUN_00408f90(CDemonActor *this_ptr,CVector3f *line_start,CVector3f *line_end,CVector3f *out_intersection_point)

{
  int iVar1;
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
  float fStack_24;
  float afStack_20 [4];
  
  bVar2 = 0;
  core_setcolid_cpp_SCollisionInfo_ctor_FUN_00537fa0(&local_94);
  local_94._0_4_ = 0;
  iVar1 = (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x44))(this_ptr,&local_94);
  if (iVar1 == 2) {
    puVar6 = auStack_54;
    pfVar5 = &fStack_48;
    afStack_44[2] = *(float *)line_end - *(float *)line_start;
    afStack_44[3] = *(float *)&line_end->field_0x4 - *(float *)&line_start->field_0x4;
    pSVar3 = &local_94;
    fStack_34 = *(float *)&line_end->field_0x8 - *(float *)&line_start->field_0x8;
    fStack_48 = *(float *)line_end - *(float *)line_start;
    afStack_44[(uint)bVar2 * -2] = afStack_44[(uint)bVar2 * -2 + 3];
    pCVar4 = line_start;
    afStack_44[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
         afStack_44[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4];
    afStack_20[2] = (float)core_actor_cpp_FUN_00408290(pSVar3,pCVar4,pfVar5,puVar6);
    if ((0.0 <= afStack_20[2]) && (afStack_20[2] <= 1.0)) {
      if (out_intersection_point != (CVector3f *)0x0) {
        afStack_68[2] = fStack_48 * afStack_20[2];
        afStack_68[3] = afStack_44[0] * afStack_20[2];
        fStack_58 = afStack_44[1] * afStack_20[2];
        fStack_30 = fStack_48 * afStack_20[2];
        afStack_44[(uint)bVar2 * -2 + 6] = afStack_68[(uint)bVar2 * -2 + 3];
        afStack_44[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 7] =
             *(float *)(auStack_54 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + -4);
        fStack_6c = *(float *)line_start + fStack_30;
        afStack_68[0] = *(float *)&line_start->field_0x4 + fStack_2c;
        afStack_68[1] = *(float *)&line_start->field_0x8 + fStack_28;
        fStack_24 = *(float *)line_start + fStack_30;
        afStack_20[(uint)bVar2 * -2] = afStack_68[(uint)bVar2 * -2];
        afStack_20[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
             afStack_68[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
        if ((CVector3f *)&fStack_24 != out_intersection_point) {
          *(float *)out_intersection_point = fStack_24;
          *(float *)&out_intersection_point->field_0x4 = afStack_20[0];
          *(float *)&out_intersection_point->field_0x8 = afStack_20[1];
        }
      }
      return 1;
    }
  }
  return 0;
}
