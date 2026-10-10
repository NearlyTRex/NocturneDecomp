// Name: core_actor.cpp_deleteActor_FUN_00408820
// Address: 00408820
// MANUAL RECONSTRUCTION
// Address Range: [[00408820, 0040886b]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_deleteActor_FUN_00408820(CDemonActor *actor_ptr)

#include "nocturne.h"

void __cdecl core_actor_cpp_deleteActor_FUN_00408820(CDemonActor *actor_ptr)

{
  if (actor_ptr != (CDemonActor *)0x0) {
    core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
              (actor_ptr,"..\\core\\actor.cpp",321);
#if !NOCTURNE_AUTHENTIC_ACTOR_DELETE
    nocturne_actor_delete_unbind_heroes(actor_ptr);
    nocturne_actor_delete_unbind_sounds(actor_ptr);
#endif
    g_CurrentDebugFilename = "..\\core\\actor.cpp";
    g_CurrentDebugLine = 0x149;
    if (actor_ptr != (CDemonActor *)0x0) {
      (*((actor_ptr->vtable)._ub)->dtor)(actor_ptr,2);
      return;
    }
  }
  return;
}
