// Name: core_vampboss.cpp_CVampireBoss_serialize_FUN_005e6f50
// Address: 005e6f50
// Address Range: [[005e6f50, 005e7023]]
// Convention: __cdecl
// Signature: void __cdecl core_vampboss_cpp_CVampireBoss_serialize_FUN_005e6f50(CVampireBoss *this_ptr)

#include "nocturne.h"

void __cdecl core_vampboss_cpp_CVampireBoss_serialize_FUN_005e6f50(CVampireBoss *this_ptr)

{
  core_enemy_cpp_CEnemy_serialize_FUN_004a9660(&this_ptr->base);
  if (1 < g_CVampireBossVersion) {
    core_actor_cpp_serializeMotionState_FUN_0040b9f0
              (&(this_ptr->base).base.model.motion_controller,"human model motion state");
    core_actor_cpp_serializeMotionState_FUN_0040b9f0
              ((CMotionController *)(this_ptr->unk1 + 8),"bat model motion state");
  }
  if (2 < g_CVampireBossVersion) {
    core_actor_cpp_serializeActor_FUN_0040b870
              ((CDemonActor *)(this_ptr->unk3 + 0x18),"wayPoint0");
    core_actor_cpp_serializeActor_FUN_0040b870
              ((CDemonActor *)(this_ptr->unk3 + 0x1c),"wayPoint1");
    core_actor_cpp_serializeActor_FUN_0040b870
              ((CDemonActor *)(this_ptr->unk3 + 0x20),"wayPoint2");
    core_actor_cpp_serializeActor_FUN_0040b870
              ((CDemonActor *)(this_ptr->unk3 + 0x24),"wayPoint3");
  }
  if (g_CVampireBossVersion < 4) {
    return;
  }
  core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->form,"form");
  core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->morph_t,"morphT");
  return;
}
