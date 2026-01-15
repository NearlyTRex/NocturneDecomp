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
  CDemonActor *in_stack_00000004;
  byte auStack_74 [28];
  byte auStack_58 [28];
  byte auStack_3c [28];
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  if (DAT_02f0cb1c == 1) {
    core_slew_cpp_CSlew_init_FUN_005a2060((CSlew *)(auStack_58 + 0x18));
    if (auStack_3c != in_stack_00000004[4].create_event + 0xc) {
      auStack_3c._0_4_ = *(uint *)(in_stack_00000004[4].create_event + 0xc);
      auStack_3c._4_4_ = *(uint *)(in_stack_00000004[4].create_event + 0x10);
      auStack_3c._8_4_ = *(uint *)(in_stack_00000004[4].create_event + 0x14);
    }
    auStack_3c._20_4_ = 0.0;
    auStack_3c._16_4_ = 0.0;
    auStack_3c._12_4_ = 0.0;
    core_slew_cpp_CSlew_processInput_FUN_005a20b0((CSlew *)auStack_3c);
    if (in_stack_00000004[4].create_event + 0xc != auStack_3c) {
      *(uint *)(in_stack_00000004[4].create_event + 0xc) = auStack_3c._0_4_;
      *(uint *)(in_stack_00000004[4].create_event + 0x10) = auStack_3c._4_4_;
      *(uint *)(in_stack_00000004[4].create_event + 0x14) = auStack_3c._8_4_;
    }
  }
  else if (DAT_02f0cb1c == 2) {
    core_slew_cpp_CSlew_init_FUN_005a2060((CSlew *)(auStack_3c + 0x18));
    if (&fStack_20 != (float *)&in_stack_00000004[4].field7_0x6c) {
      fStack_20 = (float)in_stack_00000004[4].field7_0x6c;
      fStack_1c = (float)in_stack_00000004[4].was_created;
      fStack_18 = in_stack_00000004[4].create_prob;
    }
    if (&fStack_14 != (float *)in_stack_00000004[4].create_event) {
      fStack_14 = *(float *)in_stack_00000004[4].create_event;
      fStack_10 = *(float *)(in_stack_00000004[4].create_event + 4);
      fStack_c = *(float *)(in_stack_00000004[4].create_event + 8);
    }
    core_slew_cpp_CSlew_processInput_FUN_005a20b0((CSlew *)&fStack_20);
    if ((float *)&in_stack_00000004[4].field7_0x6c != &fStack_20) {
      in_stack_00000004[4].field7_0x6c = (int)fStack_20;
      in_stack_00000004[4].was_created = (int)fStack_1c;
      in_stack_00000004[4].create_prob = fStack_18;
    }
    if ((float *)in_stack_00000004[4].create_event != &fStack_14) {
      *(float *)in_stack_00000004[4].create_event = fStack_14;
      *(float *)(in_stack_00000004[4].create_event + 4) = fStack_10;
      *(float *)(in_stack_00000004[4].create_event + 8) = fStack_c;
    }
  }
  else if (DAT_02f0cb1c == 3) {
    core_slew_cpp_CSlew_init_FUN_005a2060((CSlew *)&stack0xffffff88);
    if ((int *)auStack_74 != &in_stack_00000004[0xe].was_created) {
      auStack_74._0_4_ = in_stack_00000004[0xe].was_created;
      auStack_74._4_4_ = in_stack_00000004[0xe].create_prob;
      auStack_74._8_4_ = *(uint *)in_stack_00000004[0xe].create_event;
    }
    if (auStack_74 + 0xc != in_stack_00000004[0xe].create_event + 0x20) {
      auStack_74._12_4_ = *(uint *)(in_stack_00000004[0xe].create_event + 0x20);
      auStack_74._16_4_ = *(uint *)(in_stack_00000004[0xe].create_event + 0x24);
      auStack_74._20_4_ = *(uint *)(in_stack_00000004[0xe].create_event + 0x28);
    }
    core_slew_cpp_CSlew_processInput_FUN_005a20b0((CSlew *)auStack_74);
    if (&in_stack_00000004[0xe].was_created != (int *)auStack_74) {
      in_stack_00000004[0xe].was_created = auStack_74._0_4_;
      in_stack_00000004[0xe].create_prob = (float)auStack_74._4_4_;
      *(uint *)in_stack_00000004[0xe].create_event = auStack_74._8_4_;
    }
    if (in_stack_00000004[0xe].create_event + 0x20 != auStack_74 + 0xc) {
      *(uint *)(in_stack_00000004[0xe].create_event + 0x20) = auStack_74._12_4_;
      *(uint *)(in_stack_00000004[0xe].create_event + 0x24) = auStack_74._16_4_;
      *(uint *)(in_stack_00000004[0xe].create_event + 0x28) = auStack_74._20_4_;
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
    core_slew_cpp_CSlew_init_FUN_005a2060((CSlew *)(auStack_74 + 0x18));
    if (auStack_58 != in_stack_00000004[0xe].create_event + 4) {
      auStack_58._0_4_ = *(uint *)(in_stack_00000004[0xe].create_event + 4);
      auStack_58._4_4_ = *(uint *)(in_stack_00000004[0xe].create_event + 8);
      auStack_58._8_4_ = *(uint *)(in_stack_00000004[0xe].create_event + 0xc);
    }
    if (auStack_58 + 0xc != in_stack_00000004[0xe].create_event + 0x20) {
      auStack_58._12_4_ = *(uint *)(in_stack_00000004[0xe].create_event + 0x20);
      auStack_58._16_4_ = *(uint *)(in_stack_00000004[0xe].create_event + 0x24);
      auStack_58._20_4_ = *(uint *)(in_stack_00000004[0xe].create_event + 0x28);
    }
    core_slew_cpp_CSlew_processInput_FUN_005a20b0((CSlew *)auStack_58);
    if (in_stack_00000004[0xe].create_event + 4 != auStack_58) {
      *(uint *)(in_stack_00000004[0xe].create_event + 4) = auStack_58._0_4_;
      *(uint *)(in_stack_00000004[0xe].create_event + 8) = auStack_58._4_4_;
      *(uint *)(in_stack_00000004[0xe].create_event + 0xc) = auStack_58._8_4_;
    }
    if (in_stack_00000004[0xe].create_event + 0x20 != auStack_58 + 0xc) {
      *(uint *)(in_stack_00000004[0xe].create_event + 0x20) = auStack_58._12_4_;
      *(uint *)(in_stack_00000004[0xe].create_event + 0x24) = auStack_58._16_4_;
      *(uint *)(in_stack_00000004[0xe].create_event + 0x28) = auStack_58._20_4_;
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
