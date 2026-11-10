// Name: core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0
// Address: 004089d0
// Address Range: [[004089d0, 00408a00]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0(CDemonActor *this_ptr)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0(CDemonActor *this_ptr)

{
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
            (DAT_0060b280,(CVector3f *)&this_ptr->field_0x20);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
            (DAT_0060b280,&(this_ptr->orient).vec,(CVector3f *)0x0);
  return;
}
