// Name: core_drip.cpp_FUN_0048e6c0
// Address: 0048e6c0
// Address Range: [[0048e6c0, 0048e739]]
// Convention: __cdecl
// Signature: int __cdecl core_drip_cpp_FUN_0048e6c0(void)

#include "nocturne.h"

/* Signature: byte actors_other_drip.cpp_FUN_0048e6c0(uint param_1) */

int __cdecl core_drip_cpp_FUN_0048e6c0(void)

{
  CBoundingBox3D *this_ptr;
  int iVar1;
  CDemonActor *in_stack_00000004;
  
  in_stack_00000004[2].create_event[0x10] = '\0';
  in_stack_00000004[2].create_event[0x11] = '\0';
  in_stack_00000004[2].create_event[0x12] = '\0';
  in_stack_00000004[2].create_event[0x13] = '\0';
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(in_stack_00000004);
  this_ptr = (*((in_stack_00000004->vtable)._ub)->getBoundingBox)
                       (in_stack_00000004,(CBoundingBox3D *)&stack0xffffffe0);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr);
  if (iVar1 == 0) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
    return 0;
  }
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 1),0.0,-1);
  in_stack_00000004[2].create_event[0x10] = '\x01';
  in_stack_00000004[2].create_event[0x11] = '\0';
  in_stack_00000004[2].create_event[0x12] = '\0';
  in_stack_00000004[2].create_event[0x13] = '\0';
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
  return iVar1;
}
