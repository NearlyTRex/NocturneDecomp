// Name: core_set.cpp_CDemonSet_snapshotActorTransformState_FUN_0054f060
// Address: 0054f060
// Address Range: [[0054f060, 0054f0c2]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_snapshotActorTransformState_FUN_0054f060(CDemonSet *this_ptr,CDemonActor *actor)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_snapshotActorTransformState_FUN_0054f060(CDemonSet *this_ptr,CDemonActor *actor)

{
  float *pfVar1;
  
  pfVar1 = &(actor->previous_transform_state).position.y;
  actor->render_needs_update = 0x1f;
  if ((CLocation *)pfVar1 != &actor->location) {
    *pfVar1 = (actor->location).position.x;
    (actor->previous_transform_state).position.z = (actor->location).position.y;
    (actor->previous_transform_state).orientation.vec.x = (actor->location).position.z;
  }
  pfVar1 = &(actor->previous_transform_state).orientation.vec.y;
  if ((UOrientationVector *)pfVar1 == &actor->orient) {
    actor->is_editor_hidden = 0;
    return;
  }
  *pfVar1 = (actor->orient).vec.x;
  (actor->previous_transform_state).orientation.vec.z = (actor->orient).vec.y;
  (actor->previous_transform_state).dirty_flags = (int)(actor->orient).vec.z;
  actor->is_editor_hidden = 0;
  return;
}
