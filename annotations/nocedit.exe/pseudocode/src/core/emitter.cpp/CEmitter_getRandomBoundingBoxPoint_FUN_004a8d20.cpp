// Name: core_emitter.cpp_CEmitter_getRandomBoundingBoxPoint_FUN_004a8d20
// Address: 004a8d20
// Address Range: [[004a8d20, 004a8da7]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_emitter_cpp_CEmitter_getRandomBoundingBoxPoint_FUN_004a8d20(CEmitter *this_ptr,CVector3f *out_point)

#include "nocturne.h"

CVector3f * __cdecl core_emitter_cpp_CEmitter_getRandomBoundingBoxPoint_FUN_004a8d20(CEmitter *this_ptr,CVector3f *out_point)

{
  CBoundingBox3D CStack_30;
  CVector3f CStack_18;
  float fStack_c;
  
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&CStack_30);
  CStack_18.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(CStack_30.min.x,CStack_30.max.x)
  ;
  fStack_c = CStack_18.x;
  CStack_18.y = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(CStack_30.min.y,CStack_30.max.y)
  ;
  fStack_c = CStack_18.y;
  CStack_18.z = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(CStack_30.min.z,CStack_30.max.z)
  ;
  fStack_c = CStack_18.z;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(&this_ptr->base,out_point,&CStack_18);
  return out_point;
}
