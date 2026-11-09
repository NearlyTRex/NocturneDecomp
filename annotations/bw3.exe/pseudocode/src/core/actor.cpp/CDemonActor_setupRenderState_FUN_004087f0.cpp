// Name: core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0
// Address: 004087f0
// Address Range: [[004087f0, 00408820]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0(CDemonActor *this_ptr)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0(CDemonActor *this_ptr)

{
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
            (DAT_005f2afc,(CVector3f *)&this_ptr->field_0x20);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
            (DAT_005f2afc,(CVector3f *)&this_ptr->field_0x30,(CVector3f *)0x0);
  return;
}
