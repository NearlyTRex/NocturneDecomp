// Name: core_platfrm.cpp_CPlatform_FUN_0054e2e0
// Address: 0054e2e0
// Address Range: [[0054e2e0, 0054e311]]
// Convention: __cdecl
// Signature: void __cdecl core_platfrm_cpp_CPlatform_FUN_0054e2e0(CPlatform *this_ptr)

#include "nocturne.h"

void __cdecl core_platfrm_cpp_CPlatform_FUN_0054e2e0(CPlatform *this_ptr)

{
  char *pcVar1;
  CDemonActor *in_stack_00000008;
  
  pcVar1 = (this_ptr->model).model_name + 0x38;
  do {
    while (in_stack_00000008 == this_ptr->attach_actors[0].actor) {
      this_ptr->attach_actors[0].actor = (CDemonActor *)0x0;
      this_ptr = (CPlatform *)&(this_ptr->base).orient.bank;
      if (this_ptr == (CPlatform *)pcVar1) {
        return;
      }
    }
    this_ptr = (CPlatform *)&(this_ptr->base).orient.bank;
  } while (this_ptr != (CPlatform *)pcVar1);
  return;
}
