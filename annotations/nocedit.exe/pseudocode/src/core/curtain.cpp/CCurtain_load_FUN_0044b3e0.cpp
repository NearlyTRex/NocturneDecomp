// Name: core_curtain.cpp_CCurtain_load_FUN_0044b3e0
// Address: 0044b3e0
// Address Range: [[0044b3e0, 0044b5f9]]
// Convention: __cdecl
// Signature: void __cdecl core_curtain_cpp_CCurtain_load_FUN_0044b3e0(void)

#include "nocturne.h"

/* Signature: void actors_other_curtain.cpp_CCurtain_load(CCurtain* param_1, char* param_2, char*
   param_3, char* param_4) */

void __cdecl core_curtain_cpp_CCurtain_load_FUN_0044b3e0(void)

{
  CDemonActor *in_stack_00000004;
  uint local_8;
  
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(in_stack_00000004);
  core_actor_cpp_serializeVector_FUN_0040b340
            ((CVector3f *)(in_stack_00000004 + 1),"curtainSize");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(in_stack_00000004[1].actor_name + 0x14),"curtainTexture");
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)&in_stack_00000004[1].location.position.y,"opacity");
  local_8 = 0;
  if (1 < g_CCurtainClassVersion) {
    if (g_CCurtainClassVersion < 4) {
      core_actor_cpp_serializeInteger_FUN_0040b7f0((int *)&local_8,"cinched");
      in_stack_00000004[1].location.position.z = (float)(uint)((local_8 & 1) != 0);
      in_stack_00000004[1].orient.bank = (float)(uint)((local_8 & 2) != 0);
      in_stack_00000004[1].location.area_id = (uint)((local_8 & 4) != 0);
      in_stack_00000004[1].orient.pitch = (float)(uint)((local_8 & 8) != 0);
    }
    core_actor_cpp_serializeFloat_FUN_0040b770
              ((float *)&in_stack_00000004[0x4ba].unk12,"weight");
    core_actor_cpp_serializeFloat_FUN_0040b770
              ((float *)&in_stack_00000004[0x4ba].previous_transform_state,"dampen");
    core_actor_cpp_serializeFloat_FUN_0040b770
              (&in_stack_00000004[0x4ba].previous_transform_state.position.y,"spring");
    core_actor_cpp_serializeFloat_FUN_0040b770
              (&in_stack_00000004[0x4ba].previous_transform_state.position.z,"friction");
    core_actor_cpp_serializeFloat_FUN_0040b770
              (&in_stack_00000004[0x4ba].previous_transform_state.orientation.x,"gravity");
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)&in_stack_00000004[0x4ba].previous_transform_state.orientation.z,
               "hitFloor");
  }
  if (2 < g_CCurtainClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)(in_stack_00000004[1].create_event + 0x28),"simulateMe");
  }
  if (3 < g_CCurtainClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)&in_stack_00000004[1].location.position.z,"cinchedTop");
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)&in_stack_00000004[1].orient.bank,"cinchedBottom");
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              (&in_stack_00000004[1].location.area_id,"cinchedLeft");
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)&in_stack_00000004[1].orient,"cinchedRight");
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)&in_stack_00000004[1].orient.heading,"falling");
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)&in_stack_00000004[1].orient_matrix,"letGoEvent");
  }
  if (4 < g_CCurtainClassVersion) {
    core_actor_cpp_serializeFloat_FUN_0040b770
              ((float *)(in_stack_00000004[1].create_event + 0x2c),"patchSize");
  }
  if (g_CCurtainClassVersion < 6) {
    return;
  }
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)(in_stack_00000004[1].create_event + 0x30),"blockVirtualDirectorFlag");
  return;
}
