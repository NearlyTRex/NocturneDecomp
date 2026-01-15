// Name: core_weapon.cpp_FUN_005ee740
// Address: 005ee740
// Address Range: [[005ee740, 005ee823]]
// Convention: unknown
// Signature: undefined core_weapon.cpp_FUN_005ee740()

#include "nocturne.h"

void core_weapon_cpp_FUN_005ee740(void)

{
  CDemonActor *in_stack_00000004;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  CVector3f CStack_2c;
  CVector3f CStack_20;
  CVector3f CStack_14;
  float fStack_8;
  
  if ((in_stack_00000004[2].location.position.x != 0.0) &&
     ((byte *)in_stack_00000004->field6_0x68 == &DAT_0078a123)) {
    (*in_stack_00000004->vtable->getBoundingBox)
              (in_stack_00000004,(CBoundingBox3D *)&stack0xffffffb4);
    fStack_8 = fStack_44 + fStack_38;
    CStack_14.x = fStack_8 * 0.5f;
    CStack_14.y = (fStack_40 + fStack_34) * 0.5f;
    CStack_14.z = (fStack_3c + fStack_30) * 0.5f;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (in_stack_00000004,&CStack_2c,&CStack_14);
    CStack_20.x = fStack_38 - fStack_44;
    CStack_20.y = fStack_34 - fStack_40;
    CStack_20.z = fStack_30 - fStack_3c;
    core_box_cpp_CBox_setupCorners_FUN_0041dd20
              ((CBox *)&in_stack_00000004[2].orient_matrix.m[2].y,&CStack_2c,
               (CVector3f *)&in_stack_00000004->orient,&CStack_20,
               *(float *)(in_stack_00000004[4].actor_name + 4));
    return;
  }
  return;
}
