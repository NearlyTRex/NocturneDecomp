// Name: core_skeleton.cpp_CDeformableModelInstance_spawnDismemberedBodyPart_FUN_005a0fe0
// Address: 005a0fe0
// Address Range: [[005a0fe0, 005a1037]]
// Convention: __cdecl
// Signature: CBodyPart * __cdecl core_skeleton_cpp_CDeformableModelInstance_spawnDismemberedBodyPart_FUN_005a0fe0(CDeformableModelInstance *this_ptr,int part_index,CVector3f *position,UOrientationVector *orientation,CVector3f *initial_velocity,CDemonActor *scale_source)

#include "nocturne.h"

CBodyPart * __cdecl core_skeleton_cpp_CDeformableModelInstance_spawnDismemberedBodyPart_FUN_005a0fe0(CDeformableModelInstance *this_ptr,int part_index,CVector3f *position,UOrientationVector *orientation,CVector3f *initial_velocity,CDemonActor *scale_source)

{
  CBodyPart *body_part;
  
  body_part = core_bodypart_cpp_createBodyPart_FUN_00418e10
                        (position,orientation,initial_velocity,scale_source,0,0,0);
  core_skeleton_cpp_CDeformableModelInstance_dismemberPart_FUN_005a1040
            (this_ptr,body_part,part_index);
  if (body_part == (CBodyPart *)0x0) {
    return (CBodyPart *)0x0;
  }
  core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_0041a050(body_part);
  return body_part;
}
