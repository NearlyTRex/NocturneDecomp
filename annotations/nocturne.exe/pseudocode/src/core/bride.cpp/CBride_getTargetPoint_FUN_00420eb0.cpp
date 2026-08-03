// Name: core_bride.cpp_CBride_getTargetPoint_FUN_00420eb0
// Address: 00420eb0
// Address Range: [[00420eb0, 00420f12]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_bride_cpp_CBride_getTargetPoint_FUN_00420eb0(CBride *this_ptr,CVector3f *out_point)

#include "nocturne.h"

CVector3f * __cdecl core_bride_cpp_CBride_getTargetPoint_FUN_00420eb0(CBride *this_ptr,CVector3f *out_point)

{
  int iVar1;
  CMatrix3x4f *pCVar2;
  CMatrix3x4f *pCVar3;
  byte bVar4;
  CMatrix3x4f local_7c;
  CMatrix3x4f local_4c;
  CVector3f local_1c;
  
  bVar4 = 0;
  core_skeleton_cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0051d0a0
            (&(this_ptr->base).base.model,DAT_00764b2c,&local_4c);
  pCVar2 = &local_4c;
  pCVar3 = &local_7c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar3->m[0].w = pCVar2->m[0].w;
    pCVar2 = (CMatrix3x4f *)((int)pCVar2 + ((uint)bVar4 * -2 + 1) * 4);
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar4 * -2 + 1) * 4);
  }
  local_1c.y = 0.7;
  local_1c.x = 0.0;
  local_1c.z = 0.3;
  core_xform_cpp_transformVector3x4_FUN_0055a8b0(out_point,&local_1c,&local_7c);
  return out_point;
}
