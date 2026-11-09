// Name: core_trigger.cpp_FUN_0056ede0
// Address: 0056ede0
// Address Range: [[0056ede0, 0056ee1d]]
// Convention: __cdecl
// Signature: int __cdecl core_trigger_cpp_FUN_0056ede0(CTrigger *this_ptr,CDemonActor *actor)

#include "nocturne.h"

int __cdecl core_trigger_cpp_FUN_0056ede0(CTrigger *this_ptr,CDemonActor *actor)

{
  int iVar1;
  
  if ((actor != (CDemonActor *)0x0) && (*(int *)&this_ptr->field_0x174 == 7)) {
    if (this_ptr->field_0x308 == '\0') {
      return 1;
    }
    iVar1 = shape_edittool_cpp_wildcardStringMatch_FUN_00486a40
                      (&this_ptr->field_0x308,(char *)actor,0);
    return iVar1;
  }
  return 0;
}
