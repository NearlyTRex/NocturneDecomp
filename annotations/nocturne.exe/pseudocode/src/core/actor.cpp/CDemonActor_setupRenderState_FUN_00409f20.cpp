// Name: core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20
// Address: 00409f20
// Address Range: [[00409f20, 00409f50]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(int param_1)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(int param_1)

{
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
            (DAT_005ae704,param_1 + 0x20);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(DAT_005ae704,param_1 + 0x30,0)
  ;
  return;
}
