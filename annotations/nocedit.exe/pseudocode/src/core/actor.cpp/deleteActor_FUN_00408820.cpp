// Name: core_actor.cpp_deleteActor_FUN_00408820
// Address: 00408820
// Address Range: [[00408820, 0040886b]]
// Convention: __cdecl
// Signature: void core_actor.cpp_deleteActor_FUN_00408820(CDemonActor * actor_ptr)

#include "nocturne.h"

void __cdecl core_actor_cpp_deleteActor_FUN_00408820(CDemonActor *actor_ptr)

{
  uint unaff_EBX;
  uint unaff_retaddr;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  uint in_stack_00000010;
  uint in_stack_00000014;
  
  if (actor_ptr != (CDemonActor *)0x0) {
    core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
              (actor_ptr,"..\\core\\actor.cpp",0x141);
    g_CurrentDebugFilename = "..\\core\\actor.cpp";
    g_CurrentDebugLine = 0x149;
    if (actor_ptr != (CDemonActor *)0x0) {
      (*((actor_ptr->vtable)._ub)->dtor)
                (actor_ptr,2,unaff_EBX,unaff_retaddr,(uint)actor_ptr,in_stack_00000008,
                 in_stack_0000000c,in_stack_00000010,in_stack_00000014);
      return;
    }
  }
  return;
}
