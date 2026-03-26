// Name: core_ghoul.cpp_CGhoul_getTargetPoint_FUN_004e84a0
// Address: 004e84a0
// Address Range: [[004e84a0, 004e8502] [03fc447a, 03fc44d4]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_ghoul_cpp_CGhoul_getTargetPoint_FUN_004e84a0(CGhoul *this_ptr,CVector3f *out_point)

#include "nocturne.h"

CVector3f * __cdecl core_ghoul_cpp_CGhoul_getTargetPoint_FUN_004e84a0(CGhoul *this_ptr,CVector3f *out_point)

{
  int iVar1;
  CMatrix3x4f *pCVar2;
  CMatrix3x4f *pCVar3;
  byte bVar4;
  CMatrix3x4f local_7c;
  CMatrix3x4f local_4c;
  CVector3f local_1c;
  
  core_skeleton_cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820
            (&(this_ptr->base).base.model,g_GhoulIndices[0],&local_4c);
  local_1c.y = 0.7;
  local_1c.x = 0.0;
  local_1c.z = 0.3;
  core_xform_cpp_transformVector3x4_FUN_005f4dc0(out_point,&local_1c,&local_7c);
  return out_point;
}
