// Name: core_set.cpp_CDemonSet_snapshotActorTransformState_FUN_0052dd80
// Address: 0052dd80
// Address Range: [[0052dd80, 0052dde2]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_snapshotActorTransformState_FUN_0052dd80(CDemonSet *this_ptr,CDemonActor *actor)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_snapshotActorTransformState_FUN_0052dd80(CDemonSet *this_ptr,CDemonActor *actor)

{
  *(uint *)&actor->field_0x144 = 0x1f;
  if (&actor->field_0x12c != &actor->field_0x20) {
    *(uint *)&actor->field_0x12c = *(uint *)&actor->field_0x20;
    *(uint *)&actor->field_0x130 = *(uint *)&actor->field_0x24;
    *(uint *)&actor->field_0x134 = *(uint *)&actor->field_0x28;
  }
  if ((UOrientationVector *)&actor->field_0x138 == &actor->orient) {
    *(uint *)&actor->field_0x148 = 0;
    return;
  }
  *(float *)&actor->field_0x138 = (actor->orient).vec.x;
  *(float *)&actor->field_0x13c = (actor->orient).vec.y;
  *(float *)&actor->field_0x140 = (actor->orient).vec.z;
  *(uint *)&actor->field_0x148 = 0;
  return;
}
