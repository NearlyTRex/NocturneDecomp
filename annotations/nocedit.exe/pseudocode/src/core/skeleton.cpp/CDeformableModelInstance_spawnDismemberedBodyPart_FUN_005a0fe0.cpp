// Name: core_skeleton.cpp_CDeformableModelInstance_spawnDismemberedBodyPart_FUN_005a0fe0
// Address: 005a0fe0
// Address Range: [[005a0fe0, 005a1037]]
// Convention: __cdecl
// Signature: CBodyPart * __cdecl core_skeleton_cpp_CDeformableModelInstance_spawnDismemberedBodyPart_FUN_005a0fe0 (CDeformableModelInstance *this_ptr,int part_index,COrientation *orientation, CVector3f *velocity,CDemonActor *source_actor,int unknown)

#include "nocturne.h"

CBodyPart * __cdecl
core_skeleton_cpp_CDeformableModelInstance_spawnDismemberedBodyPart_FUN_005a0fe0
          (CDeformableModelInstance *this_ptr,int part_index,COrientation *orientation,
          CVector3f *velocity,CDemonActor *source_actor,int unknown)

{
  CBodyPart *body_part;
  
  body_part = core_bodypart_cpp_createBodyPart_FUN_00418e10();
  core_skeleton_cpp_CDeformableModelInstance_dismemberPart_FUN_005a1040
            (this_ptr,body_part,part_index);
  if (body_part == (CBodyPart *)0x0) {
    return (CBodyPart *)0x0;
  }
  core_bodypart_cpp_CBodyPart_FUN_0041a050(body_part);
  return body_part;
}
