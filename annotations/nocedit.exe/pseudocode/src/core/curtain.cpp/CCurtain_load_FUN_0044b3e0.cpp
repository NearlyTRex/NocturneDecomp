// Name: core_curtain.cpp_CCurtain_load_FUN_0044b3e0
// Address: 0044b3e0
// Address Range: [[0044b3e0, 0044b5f9]]
// Convention: unknown
// Signature: undefined core_curtain.cpp_CCurtain_load_FUN_0044b3e0()

#include "nocturne.h"

/* Signature: void actors_other_curtain.cpp_CCurtain_load(CCurtain* param_1, char* param_2, char*
   param_3, char* param_4) */

void core_curtain_cpp_CCurtain_load_FUN_0044b3e0(void)

{
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  char *in_stack_00000008;
  char *in_stack_0000000c;
  char *in_stack_00000010;
  char *in_stack_00000014;
  char *in_stack_00000018;
  char *in_stack_0000001c;
  char *in_stack_00000020;
  
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(in_stack_00000004);
  core_actor_cpp_serializeVector_FUN_0040b340
            ((CVector3f *)(in_stack_00000004 + 1),"curtainSize");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(in_stack_00000004[1].actor_name + 0x14),"curtainTexture");
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)&in_stack_00000004[1].location.position.y,"opacity");
  in_stack_00000008 = (char *)0x0;
  if (1 < g_CCurtainClassVersion) {
    if (g_CCurtainClassVersion < 4) {
      core_actor_cpp_serializeInteger_FUN_0040b7f0((int *)&stack0x00000008,"cinched");
      in_stack_00000004[1].location.position.z = (float)(uint)(((uint)in_stack_0000000c & 1) != 0);
      in_stack_00000004[1].orient.bank = (float)(uint)(((uint)in_stack_0000000c & 2) != 0);
      in_stack_00000004[1].location.area_id = (uint)(((uint)in_stack_0000000c & 4) != 0);
      in_stack_00000004[1].orient.pitch = (float)(uint)(((uint)in_stack_0000000c & 8) != 0);
    }
    in_stack_00000008 = "weight";
    core_actor_cpp_serializeFloat_FUN_0040b770
              ((float *)&in_stack_00000004[0x4ba].field23_0x124,"weight");
    in_stack_0000000c = "dampen";
    in_stack_00000008 = (char *)&in_stack_00000004[0x4ba].previous_transform_state;
    core_actor_cpp_serializeFloat_FUN_0040b770((float *)in_stack_00000008,"dampen");
    in_stack_00000010 = "spring";
    in_stack_0000000c = (char *)&in_stack_00000004[0x4ba].previous_transform_state.position.y;
    in_stack_00000008 = (char *)0x44b4d9;
    core_actor_cpp_serializeFloat_FUN_0040b770((float *)in_stack_0000000c,"spring");
    in_stack_00000014 = "friction";
    in_stack_00000010 = (char *)&in_stack_00000004[0x4ba].previous_transform_state.position.z;
    in_stack_0000000c = (char *)0x44b4ed;
    core_actor_cpp_serializeFloat_FUN_0040b770((float *)in_stack_00000010,"friction");
    in_stack_00000018 = "gravity";
    in_stack_00000014 = (char *)&in_stack_00000004[0x4ba].previous_transform_state.orientation;
    in_stack_00000010 = (char *)0x44b501;
    core_actor_cpp_serializeFloat_FUN_0040b770((float *)in_stack_00000014,"gravity");
    in_stack_0000001c = "hitFloor";
    in_stack_00000018 = (char *)&in_stack_00000004[0x4ba].previous_transform_state.orientation.z;
    in_stack_00000014 = (char *)0x44b515;
    core_actor_cpp_serializeInteger_FUN_0040b7f0((int *)in_stack_00000018,"hitFloor");
  }
  if (2 < g_CCurtainClassVersion) {
    in_stack_00000020 = "simulateMe";
    in_stack_0000001c = in_stack_00000004[1].create_event + 0x28;
    in_stack_00000018 = (char *)0x44b532;
    core_actor_cpp_serializeInteger_FUN_0040b7f0((int *)in_stack_0000001c,"simulateMe");
  }
  if (3 < g_CCurtainClassVersion) {
    in_stack_00000020 = "cinchedTop";
    in_stack_0000001c = (char *)&in_stack_00000004[1].location.position.z;
    in_stack_00000018 = (char *)0x44b54f;
    core_actor_cpp_serializeInteger_FUN_0040b7f0((int *)in_stack_0000001c,"cinchedTop");
    in_stack_0000000c = "cinchedBottom";
    in_stack_00000008 = (char *)&in_stack_00000004[1].orient.bank;
    core_actor_cpp_serializeInteger_FUN_0040b7f0((int *)in_stack_00000008,"cinchedBottom");
    in_stack_00000010 = "cinchedLeft";
    in_stack_0000000c = (char *)&in_stack_00000004[1].location.area_id;
    in_stack_00000008 = (char *)0x44b577;
    core_actor_cpp_serializeInteger_FUN_0040b7f0((int *)in_stack_0000000c,"cinchedLeft");
    in_stack_00000014 = "cinchedRight";
    in_stack_00000010 = (char *)&in_stack_00000004[1].orient;
    in_stack_0000000c = (char *)0x44b58b;
    core_actor_cpp_serializeInteger_FUN_0040b7f0((int *)in_stack_00000010,"cinchedRight");
    in_stack_00000018 = "falling";
    in_stack_00000014 = (char *)&in_stack_00000004[1].orient.heading;
    in_stack_00000010 = (char *)0x44b59f;
    core_actor_cpp_serializeInteger_FUN_0040b7f0((int *)in_stack_00000014,"falling");
    in_stack_0000001c = "letGoEvent";
    in_stack_00000018 = (char *)&in_stack_00000004[1].orient_matrix;
    in_stack_00000014 = (char *)0x44b5b3;
    core_actor_cpp_serializeString_FUN_0040b5c0((char **)in_stack_00000018,"letGoEvent");
  }
  if (4 < g_CCurtainClassVersion) {
    in_stack_00000020 = "patchSize";
    in_stack_0000001c = in_stack_00000004[1].create_event + 0x2c;
    in_stack_00000018 = (char *)0x44b5d0;
    core_actor_cpp_serializeFloat_FUN_0040b770((float *)in_stack_0000001c,"patchSize");
  }
  if (g_CCurtainClassVersion < 6) {
    return;
  }
  in_stack_00000020 = "blockVirtualDirectorFlag";
  in_stack_0000001c = in_stack_00000004[1].create_event + 0x30;
  in_stack_00000018 = (char *)0x44b5f2;
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)in_stack_0000001c,"blockVirtualDirectorFlag");
  return;
}
