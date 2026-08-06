// Name: core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20
// Address: 00409f20
// Address Range: [[00409f20, 00409f50]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(CDemonActor *actor)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(CDemonActor *actor)

{
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
            (g_CDemonRenderer_PTR_005ae704,&(actor->location).position);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
            (g_CDemonRenderer_PTR_005ae704,&(actor->orient).vec,(CVector3f *)0x0);
  return;
}
