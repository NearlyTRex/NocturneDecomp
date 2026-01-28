// Name: core_lever.cpp_FUN_00505080
// Address: 00505080
// Address Range: [[00505080, 005050f6]]
// Convention: unknown
// Signature: undefined4 core_lever_cpp_FUN_00505080(void)

#include "nocturne.h"

/* Signature: byte actors_other_lever.cpp_FUN_00505080(uint param_1, uint param_2)
    */

uint core_lever_cpp_FUN_00505080(void)

{
  CDemonActor *in_stack_00000004;
  CVector3f *in_stack_00000008;
  CVector3f local_20;
  
  if (in_stack_00000004[5].vtable._ub != (CDemonActor_vtable *)0x2) {
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
              (in_stack_00000004,&local_20,in_stack_00000008);
    if ((in_stack_00000004[5].vtable._ub != (CDemonActor_vtable *)0x0) || (local_20.z <= 0.0)) {
      if ((in_stack_00000004[5].vtable._ub == (CDemonActor_vtable *)0x1) && (local_20.z < 0.0)) {
        return 1;
      }
      return 0;
    }
  }
  return 1;
}
