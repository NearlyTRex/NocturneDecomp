// Name: core_manpuz.cpp_FUN_0050b440
// Address: 0050b440
// Address Range: [[0050b440, 0050b7c1]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_0050b440()

#include "nocturne.h"

/* Signature: byte actors_other_manpuz.cpp_FUN_0050b440(uint param_1) */

void core_manpuz_cpp_FUN_0050b440(void)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  float in_stack_ffffff8c;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  CSlew local_5c;
  CSlew local_40;
  CSlew local_24;
  
  if (DAT_02f0cb1c == 1) {
    core_slew_cpp_CSlew_init_FUN_005a2060(&local_40);
    if (&local_40 != (CSlew *)(in_stack_00000004[4].create_event + 0xc)) {
      local_40.position.x = (((CSlew *)(in_stack_00000004[4].create_event + 0xc))->position).x;
      local_40.position.y = *(float *)(in_stack_00000004[4].create_event + 0x10);
      local_40.position.z = *(float *)(in_stack_00000004[4].create_event + 0x14);
    }
    local_40.roll = 0.0;
    local_40.yaw = 0.0;
    local_40.pitch = 0.0;
    core_slew_cpp_CSlew_processInput_FUN_005a20b0(&local_40);
    if ((float *)(in_stack_00000004[4].create_event + 0xc) != &local_40.position.y) {
      *(float *)(in_stack_00000004[4].create_event + 0xc) = local_40.position.y;
      *(float *)(in_stack_00000004[4].create_event + 0x10) = local_40.position.z;
      *(float *)(in_stack_00000004[4].create_event + 0x14) = local_40.pitch;
    }
  }
  else if (DAT_02f0cb1c == 2) {
    core_slew_cpp_CSlew_init_FUN_005a2060(&local_24);
    if (&local_24 != (CSlew *)&in_stack_00000004[4].field7_0x6c) {
      local_24.position.x = (float)in_stack_00000004[4].field7_0x6c;
      local_24.position.y = (float)in_stack_00000004[4].was_created;
      local_24.position.z = in_stack_00000004[4].create_prob;
    }
    if (&local_24.pitch != (float *)in_stack_00000004[4].create_event) {
      local_24.pitch = *(float *)in_stack_00000004[4].create_event;
      local_24.yaw = *(float *)(in_stack_00000004[4].create_event + 4);
      local_24.roll = *(float *)(in_stack_00000004[4].create_event + 8);
    }
    core_slew_cpp_CSlew_processInput_FUN_005a20b0(&local_24);
    if ((float *)&in_stack_00000004[4].field7_0x6c != &local_24.position.y) {
      in_stack_00000004[4].field7_0x6c = (int)local_24.position.y;
      in_stack_00000004[4].was_created = (int)local_24.position.z;
      in_stack_00000004[4].create_prob = local_24.pitch;
    }
    if ((float *)in_stack_00000004[4].create_event != &local_24.yaw) {
      *(float *)in_stack_00000004[4].create_event = local_24.yaw;
      *(float *)(in_stack_00000004[4].create_event + 4) = local_24.roll;
      *(float *)(in_stack_00000004[4].create_event + 8) = local_24.slew_rate;
    }
  }
  else if (DAT_02f0cb1c == 3) {
    core_slew_cpp_CSlew_init_FUN_005a2060((CSlew *)&stack0xffffff88);
    if ((int *)&stack0xffffff88 != &in_stack_00000004[0xe].was_created) {
      in_stack_ffffff8c = in_stack_00000004[0xe].create_prob;
      fStack_70 = *(float *)in_stack_00000004[0xe].create_event;
    }
    if (&fStack_6c != (float *)(in_stack_00000004[0xe].create_event + 0x20)) {
      fStack_6c = *(float *)(in_stack_00000004[0xe].create_event + 0x20);
      fStack_68 = *(float *)(in_stack_00000004[0xe].create_event + 0x24);
      fStack_64 = *(float *)(in_stack_00000004[0xe].create_event + 0x28);
    }
    core_slew_cpp_CSlew_processInput_FUN_005a20b0((CSlew *)&stack0xffffff88);
    if (&in_stack_00000004[0xe].was_created != (int *)&stack0xffffff8c) {
      in_stack_00000004[0xe].was_created = (int)in_stack_ffffff8c;
      in_stack_00000004[0xe].create_prob = fStack_70;
      *(float *)in_stack_00000004[0xe].create_event = fStack_6c;
    }
    if ((float *)(in_stack_00000004[0xe].create_event + 0x20) != &fStack_68) {
      *(float *)(in_stack_00000004[0xe].create_event + 0x20) = fStack_68;
      *(float *)(in_stack_00000004[0xe].create_event + 0x24) = fStack_64;
      *(float *)(in_stack_00000004[0xe].create_event + 0x28) = fStack_60;
    }
    in_stack_00000004[0xe].create_event[0x10] = '\0';
    in_stack_00000004[0xe].create_event[0x11] = '\0';
    in_stack_00000004[0xe].create_event[0x12] = '\0';
    in_stack_00000004[0xe].create_event[0x13] = '\0';
    uVar1 = *(uint *)in_stack_00000004[0xe].create_event;
    *(int *)(in_stack_00000004[0xe].create_event + 4) = in_stack_00000004[0xe].was_created;
    *(uint *)(in_stack_00000004[0xe].create_event + 0xc) = uVar1;
  }
  else if (DAT_02f0cb1c == 4) {
    core_slew_cpp_CSlew_init_FUN_005a2060(&local_5c);
    if (&local_5c != (CSlew *)(in_stack_00000004[0xe].create_event + 4)) {
      local_5c.position.x = (((CSlew *)(in_stack_00000004[0xe].create_event + 4))->position).x;
      local_5c.position.y = *(float *)(in_stack_00000004[0xe].create_event + 8);
      local_5c.position.z = *(float *)(in_stack_00000004[0xe].create_event + 0xc);
    }
    if (&local_5c.pitch != (float *)(in_stack_00000004[0xe].create_event + 0x20)) {
      local_5c.pitch = *(float *)(in_stack_00000004[0xe].create_event + 0x20);
      local_5c.yaw = *(float *)(in_stack_00000004[0xe].create_event + 0x24);
      local_5c.roll = *(float *)(in_stack_00000004[0xe].create_event + 0x28);
    }
    core_slew_cpp_CSlew_processInput_FUN_005a20b0(&local_5c);
    if ((float *)(in_stack_00000004[0xe].create_event + 4) != &local_5c.position.y) {
      *(float *)(in_stack_00000004[0xe].create_event + 4) = local_5c.position.y;
      *(float *)(in_stack_00000004[0xe].create_event + 8) = local_5c.position.z;
      *(float *)(in_stack_00000004[0xe].create_event + 0xc) = local_5c.pitch;
    }
    if ((float *)(in_stack_00000004[0xe].create_event + 0x20) != &local_5c.yaw) {
      *(float *)(in_stack_00000004[0xe].create_event + 0x20) = local_5c.yaw;
      *(float *)(in_stack_00000004[0xe].create_event + 0x24) = local_5c.roll;
      *(float *)(in_stack_00000004[0xe].create_event + 0x28) = local_5c.slew_rate;
    }
    in_stack_00000004[0xe].create_event[0x10] = '\0';
    in_stack_00000004[0xe].create_event[0x11] = '\0';
    in_stack_00000004[0xe].create_event[0x12] = -0x80;
    in_stack_00000004[0xe].create_event[0x13] = '?';
    uVar1 = *(uint *)(in_stack_00000004[0xe].create_event + 0xc);
    in_stack_00000004[0xe].was_created = *(int *)(in_stack_00000004[0xe].create_event + 4);
    *(uint *)in_stack_00000004[0xe].create_event = uVar1;
  }
  else {
    DAT_02f0cb1c = 0;
    core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(in_stack_00000004);
  }
  fVar2 = in_stack_00000004[0xe].create_prob;
  fVar3 = (float)in_stack_00000004[0xe].was_created;
  uVar1 = *(uint *)in_stack_00000004[0xe].create_event;
  fVar4 = *(float *)(in_stack_00000004[0xe].create_event + 8);
  fVar5 = *(float *)(in_stack_00000004[0xe].create_event + 4);
  fVar6 = *(float *)(in_stack_00000004[0xe].create_event + 0xc);
  fVar7 = *(float *)(in_stack_00000004[0xe].create_event + 0x10);
  (in_stack_00000004->orient).heading = 0.0;
  *(float *)(in_stack_00000004[0xe].create_event + 0x5c) = fVar2;
  *(uint *)(in_stack_00000004[0xe].create_event + 0x60) = uVar1;
  in_stack_00000004[0xe].field12_0xe0.x = fVar4;
  in_stack_00000004[0xe].field12_0xe0.y = fVar6;
  in_stack_00000004[0xe].field12_0xe0.z = fVar7;
  fVar2 = (in_stack_00000004->orient).heading;
  *(float *)(in_stack_00000004[0xe].create_event + 0x58) = -fVar3;
  in_stack_00000004[0xe].field11_0xdc = (int)-fVar5;
  (in_stack_00000004->orient).pitch = fVar2;
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(in_stack_00000004);
  (*in_stack_00000004->vtable->setup)(in_stack_00000004);
  return;
}
