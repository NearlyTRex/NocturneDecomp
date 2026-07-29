// Name: core_skeleton.cpp_CDeformableModelInstance_spawnDismemberedBodyPart_FUN_0051e860
// Address: 0051e860
// Address Range: [[0051e860, 0051e8b7]]
// Convention: __cdecl
// Signature: CBodyPart * __cdecl core_skeleton_cpp_CDeformableModelInstance_spawnDismemberedBodyPart_FUN_0051e860(CDeformableModelInstance *this_ptr,int part_index,CVector3f *position,UOrientationVector *orientation,CVector3f *initial_velocity,CDemonActor *scale_source)

#include "nocturne.h"

CBodyPart * __cdecl core_skeleton_cpp_CDeformableModelInstance_spawnDismemberedBodyPart_FUN_0051e860(CDeformableModelInstance *this_ptr,int part_index,CVector3f *position,UOrientationVector *orientation,CVector3f *initial_velocity,CDemonActor *scale_source)

{
  CBodyPart *body_part;
  
  body_part = core_bodypart_cpp_createBodyPart_FUN_00415b30
                        (position,orientation,initial_velocity,scale_source,0,0,0);
  core_skeleton_cpp_CDeformableModelInstance_dismemberPart_FUN_0051e8c0
            (this_ptr,body_part,part_index);
  if (body_part == (CBodyPart *)0x0) {
    return (CBodyPart *)0x0;
  }
  core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_00416d40(body_part);
  return body_part;
}
