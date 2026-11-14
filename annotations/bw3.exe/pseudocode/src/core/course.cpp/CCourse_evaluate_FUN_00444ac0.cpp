// Name: core_course.cpp_CCourse_evaluate_FUN_00444ac0
// Address: 00444ac0
// Address Range: [[00444ac0, 00444b68]]
// Convention: __cdecl
// Signature: void __cdecl core_course_cpp_CCourse_evaluate_FUN_00444ac0(CCourse *this_ptr,float time,CVector3f *out_pos,CVector3f *out_euler)

#include "nocturne.h"

void __cdecl core_course_cpp_CCourse_evaluate_FUN_00444ac0(CCourse *this_ptr,float time,CVector3f *out_pos,CVector3f *out_euler)

{
  int iVar1;
  CMatrix3x4f *pCVar2;
  float *pfVar3;
  byte bVar4;
  float afStackY_100c [986];
  CMatrix3x4f local_94;
  float local_64 [12];
  CQuaternion4f local_34;
  float local_24;
  float afStack_20 [2];
  CVector3f local_18;
  
  bVar4 = 0;
  core_course_cpp_FUN_00444b70(this_ptr,time,out_pos,&local_34);
  core_xform_cpp_quaternionToMatrix3x4_FUN_00585740(&local_34,&local_94);
  pCVar2 = &local_94;
  pfVar3 = local_64;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar3 = pCVar2->m[0].w;
    pCVar2 = (CMatrix3x4f *)((int)pCVar2 + ((uint)bVar4 * -2 + 1) * 4);
    pfVar3 = pfVar3 + (uint)bVar4 * -2 + 1;
  }
  core_xform_cpp_matrixToEulerAngles_FUN_00583b10(local_64);
  local_18.x = local_24;
  *(float *)((int)&local_18 + (uint)bVar4 * -8 + 4) = afStack_20[(uint)bVar4 * -2];
  *(float *)((int)&local_18 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       afStack_20[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  if (out_euler == &local_18) {
    return;
  }
  out_euler->x = local_18.x;
  out_euler->y = local_18.y;
  out_euler->z = local_18.z;
  return;
}
