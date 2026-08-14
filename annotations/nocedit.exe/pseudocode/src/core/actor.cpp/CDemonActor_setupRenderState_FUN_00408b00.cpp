// Name: core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
// Address: 00408b00
// Address Range: [[00408b00, 00408b30]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor *this_ptr)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor *this_ptr)

{
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr2,&(this_ptr->location).position);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr2,&(this_ptr->orient).vec,(CVector3f *)0x0);
  return;
}
