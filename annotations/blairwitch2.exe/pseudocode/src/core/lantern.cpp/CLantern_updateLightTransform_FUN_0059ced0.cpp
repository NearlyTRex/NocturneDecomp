// Name: core_lantern.cpp_CLantern_updateLightTransform_FUN_0059ced0
// Address: 0059ced0
// Address Range: [[0059ced0, 0059cff8]]
// Convention: __cdecl
// Signature: void __cdecl core_lantern_cpp_CLantern_updateLightTransform_FUN_0059ced0(CLantern *this_ptr)

#include "nocturne.h"

void __cdecl core_lantern_cpp_CLantern_updateLightTransform_FUN_0059ced0(CLantern *this_ptr)

{
  UOrientationVector *pUVar1;
  CVector3f *pCVar2;
  CDemonLight *pCVar3;
  UVector3 *pUVar4;
  byte bVar5;
  float afStackY_1030 [1006];
  CMatrix3x3f CStack_70;
  CVector3f CStack_48;
  float fStack_3c;
  float afStack_38 [2];
  CVector3f CStack_30;
  float fStack_24;
  float afStack_20 [2];
  CVector3f CStack_18;
  
  bVar5 = 0;
  pUVar1 = &(this_ptr->base).base.orient;
  if (&this_ptr->light_rotation != (CVector3f *)pUVar1) {
    (this_ptr->light_rotation).x = (pUVar1->vec).x;
    (this_ptr->light_rotation).y = (this_ptr->base).base.orient.vec.y;
    (this_ptr->light_rotation).z = (this_ptr->base).base.orient.vec.z;
  }
  (this_ptr->light_rotation).x = 0.3926991;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
            ((CDemonActor *)this_ptr,&g_ZeroVector,&CStack_18);
  fStack_3c = CStack_18.x;
  afStack_38[(uint)bVar5 * -2] = *(float *)((int)&CStack_18 + (uint)bVar5 * -8 + 4);
  afStack_38[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       *(float *)((int)&CStack_18 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  if (&this_ptr->light_position != (CVector3f *)&fStack_3c) {
    (this_ptr->light_position).x = fStack_3c;
    (this_ptr->light_position).y = afStack_38[0];
    (this_ptr->light_position).z = afStack_38[1];
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280(&CStack_70,&this_ptr->light_rotation)
  ;
  CStack_30.x = -0.05;
  CStack_30.z = 0.8;
  CStack_30.y = -0.8;
  core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00449530(&CStack_70,&CStack_30,&CStack_48);
  pCVar2 = &this_ptr->light_position;
  fStack_24 = CStack_48.x;
  afStack_20[(uint)bVar5 * -2] = *(float *)((int)&CStack_48 + (uint)bVar5 * -8 + 4);
  afStack_20[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       *(float *)((int)&CStack_48 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  pCVar2->x = pCVar2->x + fStack_24;
  (this_ptr->light_position).y = (this_ptr->light_position).y + afStack_20[0];
  (this_ptr->light_position).z = (this_ptr->light_position).z + afStack_20[1];
  pCVar3 = this_ptr->light;
  pUVar4 = &(pCVar3->base).base.position;
  if ((CVector3f *)pUVar4 != pCVar2) {
    (pUVar4->f).x = pCVar2->x;
    (pCVar3->base).base.position.f.y = (this_ptr->light_position).y;
    (pCVar3->base).base.position.f.z = (this_ptr->light_position).z;
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280
            (&(this_ptr->light->base).base.rotation_matrix,&this_ptr->light_rotation);
  return;
}
