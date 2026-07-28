// Name: core_bodypart.cpp_CBodyPart_setupPhysicsBox_FUN_00417d70
// Address: 00417d70
// Address Range: [[00417d70, 00417ea9]]
// Convention: unknown
// Signature: void core_bodypart_cpp_CBodyPart_setupPhysicsBox_FUN_00417d70(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_bodypart_cpp_CBodyPart_setupPhysicsBox_FUN_00417d70(CDemonActor *param_1)

{
  char *pcVar1;
  CBoundingBox3D CStack_4c;
  CVector3f CStack_34;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  CVector3f CStack_1c;
  CVector3f CStack_10;
  
  if ((2 < *(int *)(param_1[1].actor_name + 0x1c)) && (0 < (int)param_1[1].location.position.z)) {
    (*((param_1->vtable)._ub)->getBoundingBox)(param_1,&CStack_4c);
    fStack_28 = CStack_4c.min.x + CStack_4c.max.x;
    fStack_24 = CStack_4c.min.y + CStack_4c.max.y;
    CStack_34.x = fStack_28 * 0.5f;
    CStack_34.y = fStack_24 * 0.5f;
    fStack_20 = CStack_4c.min.z + CStack_4c.max.z;
    CStack_34.z = fStack_20 * 0.5f;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,&CStack_1c,&CStack_34);
    CStack_10.x = CStack_4c.max.x - CStack_4c.min.x;
    CStack_10.y = CStack_4c.max.y - CStack_4c.min.y;
    CStack_10.z = CStack_4c.max.z - CStack_4c.min.z;
    core_box_cpp_CBox_setupCorners_FUN_0041a6e0
              ((CBox *)&param_1[9].platform_position_delta.y,&CStack_1c,&(param_1->orient).vec,
               &CStack_10,5.0);
    return;
  }
  param_1->lifecycle_state = ACTOR_DESTROYED;
  core_bodypart_cpp_CBodyPart_setCounts_FUN_00415ee0(param_1,0,0);
  pcVar1 = param_1[1].actor_name + 0x10;
  if (pcVar1 != &DAT_02dd1184) {
    *(uint *)pcVar1 = _DAT_02dd1184;
    *(uint *)(param_1[1].actor_name + 0x14) = _DAT_02dd1188;
    *(uint *)(param_1[1].actor_name + 0x18) = _DAT_02dd118c;
  }
  if (param_1[1].actor_name + 4 == pcVar1) {
    return;
  }
  *(uint *)(param_1[1].actor_name + 4) = *(uint *)pcVar1;
  *(uint *)(param_1[1].actor_name + 8) = *(uint *)(param_1[1].actor_name + 0x14);
  *(uint *)(param_1[1].actor_name + 0xc) = *(uint *)(param_1[1].actor_name + 0x18);
  return;
}
