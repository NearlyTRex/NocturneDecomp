// Name: core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
// Address: 00408b00
// Address Range: [[00408b00, 00408b30]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor *actor)

{
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr2,&(actor->location).position);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr2,(CVector3i *)&actor->orient,(CVector3i *)0x0);
  return;
}
