// Name: core_set.cpp_CDemonSet_snapshotActorTransformState_FUN_0056ade0
// Address: 0056ade0
// MANUAL RECONSTRUCTION
// Address Range: [[0056ade0, 0056ae42]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_snapshotActorTransformState_FUN_0056ade0(CDemonSet *this_ptr,CDemonActor *actor)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_snapshotActorTransformState_FUN_0056ade0(CDemonSet *this_ptr,CDemonActor *actor)

{
  UOrientationVector *pUVar1;
  
  (actor->previous_transform_state).dirty_flags = 0x1f;
  if (&actor->previous_transform_state != (CDemonActorTransformState *)&actor->location) {
    (actor->previous_transform_state).position = (actor->location).position;
  }
  pUVar1 = &(actor->previous_transform_state).orientation;
  if (pUVar1 == &actor->orient) {
    actor->render_needs_update = 0;
    return;
  }
  pUVar1->vec = (actor->orient).vec;
  actor->render_needs_update = 0;
  return;
}
