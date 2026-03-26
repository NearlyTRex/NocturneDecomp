// Name: core_bride.cpp_CBride_getTargetPoint_FUN_00424aa0
// Address: 00424aa0
// Address Range: [[00424aa0, 00424b02] [03fc47ee, 03fc4848]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_bride_cpp_CBride_getTargetPoint_FUN_00424aa0(CBride *this_ptr,CVector3f *out_point)

#include "nocturne.h"

CVector3f * __cdecl core_bride_cpp_CBride_getTargetPoint_FUN_00424aa0(CBride *this_ptr,CVector3f *out_point)

{
  int iVar1;
  CMatrix3x4f *pCVar2;
  CMatrix3x4f *pCVar3;
  byte bVar4;
  CMatrix3x4f local_7c;
  CMatrix3x4f local_4c;
  CVector3f local_1c;
  
  core_skeleton_cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820
            (&(this_ptr->base).base.model,g_BrideIndices[0],&local_4c);
  local_1c.y = 0.7;
  local_1c.x = 0.0;
  local_1c.z = 0.3;
  core_xform_cpp_transformVector3x4_FUN_005f4dc0(out_point,&local_1c,&local_7c);
  return out_point;
}
