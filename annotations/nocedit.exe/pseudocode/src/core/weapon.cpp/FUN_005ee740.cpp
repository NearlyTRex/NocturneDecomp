// Name: core_weapon.cpp_FUN_005ee740
// Address: 005ee740
// Address Range: [[005ee740, 005ee823]]
// Convention: unknown
// Signature: undefined core_weapon.cpp_FUN_005ee740()

#include "nocturne.h"

void core_weapon_cpp_FUN_005ee740(void)

{
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  float fStack_4c;
  float in_stack_ffffffc8;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  byte auStack_20 [16];
  CVector3f CStack_10;
  
  if ((in_stack_00000004[2].location.position.x != 0.0) &&
     ((byte *)in_stack_00000004->field6_0x68 == &DAT_0078a123)) {
    (*in_stack_00000004->vtable->getBoundingBox)(in_stack_00000004,(CBoundingBox3D *)&fStack_4c);
    CStack_10.z = (in_stack_ffffffc8 + fStack_2c) * 0.5f;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (in_stack_00000004,(CVector3f *)auStack_20,(CVector3f *)&CStack_10.z);
    CStack_10.x = fStack_28 - fStack_34;
    CStack_10.y = fStack_24 - fStack_30;
    CStack_10.z = (float)auStack_20._0_4_ - fStack_2c;
    fStack_4c = 8.715802e-39;
    core_box_cpp_CBox_setupCorners_FUN_0041dd20
              ((CBox *)&in_stack_00000004[2].orient_matrix.m[2].y,(CVector3f *)(auStack_20 + 4),
               (CVector3f *)&in_stack_00000004->orient,&CStack_10,
               *(float *)(in_stack_00000004[4].actor_name + 4));
    return;
  }
  return;
}
