// Name: core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0
// Address: 004087b0
// Address Range: [[004087b0, 004087e0]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0(CDemonActor *this_ptr)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0(CDemonActor *this_ptr)

{
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
            (DAT_00612560,&(this_ptr->location).position);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
            (DAT_00612560,&(this_ptr->orient).vec,(CVector3f *)0x0);
  return;
}
