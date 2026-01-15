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
  CDemonActor *in_stack_00000004;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  CVector3f CStack_2c;
  CVector3f CStack_20;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  fVar1 = in_stack_00000004[2].field12_0xe0.x;
  in_stack_00000004[4].create_event[0x10] = '\0';
  in_stack_00000004[4].create_event[0x11] = '\0';
  in_stack_00000004[4].create_event[0x12] = '\0';
  in_stack_00000004[4].create_event[0x13] = '\0';
  if ((0.0 < fVar1) && ((byte *)in_stack_00000004->field6_0x68 == &DAT_0078a123)) {
    if (in_stack_00000004[2].location.position.x != 0.0) {
      (*in_stack_00000004->vtable->getBoundingBox)
                (in_stack_00000004,(CBoundingBox3D *)&stack0xffffffb4);
      fStack_14 = fStack_44 + fStack_38;
      fStack_10 = fStack_40 + fStack_34;
      CStack_20.x = fStack_14 * 0.5f;
      CStack_20.y = fStack_10 * 0.5f;
      fStack_c = fStack_3c + fStack_30;
      CStack_20.z = fStack_c * 0.5f;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                (in_stack_00000004,&CStack_2c,&CStack_20);
      fStack_8 = fStack_38 - fStack_44;
      core_box_cpp_CBox_setupCorners_FUN_0041dd20
                ((CBox *)&in_stack_00000004[2].field12_0xe0.y,&CStack_2c,
                 (CVector3f *)&in_stack_00000004->orient,(CVector3f *)&fStack_8,
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
