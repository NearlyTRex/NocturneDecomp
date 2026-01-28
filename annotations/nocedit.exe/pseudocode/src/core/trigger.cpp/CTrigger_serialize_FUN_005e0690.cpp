// Name: core_trigger.cpp_CTrigger_serialize_FUN_005e0690
// Address: 005e0690
// Address Range: [[005e0690, 005e0920]]
// Convention: __cdecl
// Signature: void __cdecl core_trigger_cpp_CTrigger_serialize_FUN_005e0690(CTrigger *this_ptr)

#include "nocturne.h"

void __cdecl core_trigger_cpp_CTrigger_serialize_FUN_005e0690(CTrigger *this_ptr)

{
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(&this_ptr->base);
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)(this_ptr->unk + 0x14),"triggerState");
  core_actor_cpp_serializeVector_FUN_0040b340
            ((CVector3f *)(this_ptr->unk + 8),"triggerSize");
  core_actor_cpp_serializeInteger_FUN_0040b7f0((int *)(this_ptr->unk + 4),"triggerType");
  core_actor_cpp_serializeString_FUN_0040b5c0((char **)(this_ptr->unk + 0xcc),"onName");
  core_actor_cpp_serializeString_FUN_0040b5c0((char **)(this_ptr->unk + 0x130),"offName");
  if (g_CTriggerClassVersion < 7) {
    if (1 < g_CTriggerClassVersion) {
      core_actor_cpp_serializeInteger_FUN_0040b7f0
                ((int *)(this_ptr->unk + 0x1c),"whoTriggers");
      core_actor_cpp_serializeString_FUN_0040b5c0
                ((char **)(this_ptr->unk + 0x20),"actorTriggerName");
    }
    if (2 < g_CTriggerClassVersion) {
      core_actor_cpp_serializeFloat_FUN_0040b770
                ((float *)(this_ptr->unk + 0xc4),"lightMin");
      core_actor_cpp_serializeFloat_FUN_0040b770((float *)(this_ptr->unk + 200),"lightMax")
      ;
    }
    if ((3 < g_CTriggerClassVersion) && (*(int *)(this_ptr->unk + 0x1c) == 5)) {
      core_actor_cpp_serializeInteger_FUN_0040b7f0
                ((int *)(this_ptr->unk + 0x19c),"laserType");
    }
    if (4 < g_CTriggerClassVersion) {
      if (*(int *)(this_ptr->unk + 0x1c) == 1) {
        core_actor_cpp_serializeString_FUN_0040b5c0
                  ((char **)(this_ptr->unk + 0x70),"actorTriggerTypes");
      }
      if (*(int *)(this_ptr->unk + 0x1c) == 7) {
        core_actor_cpp_serializeFloat_FUN_0040b770
                  ((float *)(this_ptr->unk + 0x1a0),"hitPoints");
      }
    }
    if (5 < g_CTriggerClassVersion) {
      core_actor_cpp_serializeInteger_FUN_0040b7f0
                ((int *)(this_ptr->unk + 0xc0),"pressurePlate");
      return;
    }
  }
  else {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)(this_ptr->unk + 0x1c),"whoTriggers");
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)(this_ptr->unk + 0x20),"actorTriggerName");
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)(this_ptr->unk + 0x70),"actorTriggerTypes");
    core_actor_cpp_serializeFloat_FUN_0040b770((float *)(this_ptr->unk + 0xc4),"lightMin");
    core_actor_cpp_serializeFloat_FUN_0040b770((float *)(this_ptr->unk + 200),"lightMax");
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)(this_ptr->unk + 0x19c),"laserType");
    core_actor_cpp_serializeFloat_FUN_0040b770
              ((float *)(this_ptr->unk + 0x1a0),"hitPoints");
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)(this_ptr->unk + 0xc0),"pressurePlate");
    if (g_CTriggerClassVersion < 8) {
      core_trigger_cpp_FUN_005e0ba0();
    }
    else {
      core_actor_cpp_serializeFloat_FUN_0040b770((float *)this_ptr->unk,"testRadius");
    }
    if (8 < g_CTriggerClassVersion) {
      core_actor_cpp_serializeInteger_FUN_0040b7f0
                ((int *)(this_ptr->unk + 0x1a8),"autoAimAtMe");
    }
    if (9 < g_CTriggerClassVersion) {
      core_actor_cpp_serializeInteger_FUN_0040b7f0((int *)(this_ptr->unk + 0x18),"shape");
    }
    if (10 < g_CTriggerClassVersion) {
      core_actor_cpp_serializeString_FUN_0040b5c0
                ((char **)(this_ptr->unk + 0x1ac),"damageActorWildcard");
      return;
    }
  }
  return;
}
