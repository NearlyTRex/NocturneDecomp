// Name: core_boxactor.cpp_FUN_004218d0
// Address: 004218d0
// Address Range: [[004218d0, 004219d6]]
// Convention: unknown
// Signature: undefined core_boxactor.cpp_FUN_004218d0()

#include "nocturne.h"

/* Signature: byte actors_other_boxactor.cpp_FUN_004218d0(uint param_1) */

void core_boxactor_cpp_FUN_004218d0(void)

{
  float fVar1;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  float in_stack_00000008;
  float in_stack_0000000c;
  float in_stack_00000010;
  float fStack_4c;
  float in_stack_ffffffc8;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  byte auStack_20 [12];
  CVector3f CStack_14;
  float fStack_8;
  
  fVar1 = in_stack_00000004[2].field12_0xe0.x;
  in_stack_00000004[4].create_event[0x10] = '\0';
  in_stack_00000004[4].create_event[0x11] = '\0';
  in_stack_00000004[4].create_event[0x12] = '\0';
  in_stack_00000004[4].create_event[0x13] = '\0';
  if ((0.0 < fVar1) && ((byte *)in_stack_00000004->field6_0x68 == &DAT_0078a123)) {
    if (in_stack_00000004[2].location.position.x != 0.0) {
      (*in_stack_00000004->vtable->getBoundingBox)(in_stack_00000004,(CBoundingBox3D *)&fStack_4c);
      fStack_8 = in_stack_ffffffc8 + fStack_2c;
      CStack_14.x = fStack_8 * 0.5f;
      CStack_14.y = (fStack_34 + fStack_28) * 0.5f;
      CStack_14.z = (fStack_30 + fStack_24) * 0.5f;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                (in_stack_00000004,(CVector3f *)auStack_20,&CStack_14);
      in_stack_00000008 = fStack_28 - fStack_34;
      in_stack_0000000c = fStack_24 - fStack_30;
      in_stack_00000010 = (float)auStack_20._0_4_ - fStack_2c;
      fStack_4c = 6.070401e-39;
      core_box_cpp_CBox_setupCorners_FUN_0041dd20
                ((CBox *)&in_stack_00000004[2].field12_0xe0.y,(CVector3f *)(auStack_20 + 4),
                 (CVector3f *)&in_stack_00000004->orient,(CVector3f *)&stack0x00000008,
                 in_stack_00000004[2].field12_0xe0.x);
      return;
    }
    in_stack_00000004[4].create_event[0x10] = -1;
    in_stack_00000004[4].create_event[0x11] = -1;
    in_stack_00000004[4].create_event[0x12] = -1;
    in_stack_00000004[4].create_event[0x13] = -1;
  }
  return;
}
