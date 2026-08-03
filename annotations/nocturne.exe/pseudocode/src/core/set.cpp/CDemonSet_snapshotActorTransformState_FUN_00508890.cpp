// Name: core_set.cpp_CDemonSet_snapshotActorTransformState_FUN_00508890
// Address: 00508890
// Address Range: [[00508890, 005088e9]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_snapshotActorTransformState_FUN_00508890(CDemonSet *this_ptr,CDemonActor *actor)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_snapshotActorTransformState_FUN_00508890(CDemonSet *this_ptr,CDemonActor *actor)

{
  (actor->previous_transform_state).dirty_flags = 0x1f;
  if (&actor->previous_transform_state == (CDemonActorTransformState *)&actor->location) {
    if (&(actor->previous_transform_state).orientation == &actor->orient) {
      return;
    }
  }
  else {
    (actor->previous_transform_state).position.x = (actor->location).position.x;
    (actor->previous_transform_state).position.y = (actor->location).position.y;
    (actor->previous_transform_state).position.z = (actor->location).position.z;
    if (&(actor->previous_transform_state).orientation == &actor->orient) {
      return;
    }
  }
  (actor->previous_transform_state).orientation.vec.x = (actor->orient).vec.x;
  (actor->previous_transform_state).orientation.vec.y = (actor->orient).vec.y;
  (actor->previous_transform_state).orientation.vec.z = (actor->orient).vec.z;
  return;
}
