// Name: core_set.cpp_FUN_0052dd80
// Address: 0052dd80
// Address Range: [[0052dd80, 0052dde2]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_FUN_0052dd80(CDemonSet *this_ptr,CDemonActor *actor)

#include "nocturne.h"

void __cdecl core_set_cpp_FUN_0052dd80(CDemonSet *this_ptr,CDemonActor *actor)

{
  *(uint *)&actor->field_0x144 = 0x1f;
  if (&actor->field_0x12c != &actor->field_0x20) {
    *(uint *)&actor->field_0x12c = *(uint *)&actor->field_0x20;
    *(uint *)&actor->field_0x130 = *(uint *)&actor->field_0x24;
    *(uint *)&actor->field_0x134 = *(uint *)&actor->field_0x28;
  }
  if (&actor->field_0x138 == &actor->field_0x30) {
    *(uint *)&actor->field_0x148 = 0;
    return;
  }
  *(uint *)&actor->field_0x138 = *(uint *)&actor->field_0x30;
  *(uint *)&actor->field_0x13c = *(uint *)&actor->field_0x34;
  *(uint *)&actor->field_0x140 = *(uint *)&actor->field_0x38;
  *(uint *)&actor->field_0x148 = 0;
  return;
}
