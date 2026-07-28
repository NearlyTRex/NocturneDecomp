// Name: core_door.cpp_CDoor_reposition_FUN_004552a0
// Address: 004552a0
// Address Range: [[004552a0, 0045562f]]
// Convention: __cdecl
// Signature: void __cdecl core_door_cpp_CDoor_reposition_FUN_004552a0(CDoor *this_ptr)

#include "nocturne.h"

void __cdecl core_door_cpp_CDoor_reposition_FUN_004552a0(CDoor *this_ptr)

{
  CLocation *pCVar1;
  float fVar2;
  CVector3f *pCVar3;
  float *pfVar4;
  CBoundingBox3D local_c8;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float afStack_a4 [3];
  byte auStack_98 [12];
  CVector3f CStack_8c;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  CVector3f CStack_74;
  CVector3f CStack_68;
  CVector3f CStack_5c;
  CVector3f CStack_50;
  CVector3f CStack_44;
  CVector3f CStack_38;
  byte auStack_2c [12];
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_c8);
  switch(this_ptr->door_type) {
  case DOOR_TYPE_SWING:
    (this_ptr->base).orient.vec.x = 0.0;
    (this_ptr->base).orient.vec.z = 0.0;
    (this_ptr->base).location.position.x = (this_ptr->orig_pos).x;
    (this_ptr->base).location.position.y = (this_ptr->orig_pos).y;
    (this_ptr->base).location.position.z = (this_ptr->orig_pos).z;
    if (this_ptr->door_swing == 0) {
      fVar2 = this_ptr->param * (float)1.57079632675 + (this_ptr->orig_orient).y;
    }
    else {
      fVar2 = (this_ptr->orig_orient).y - this_ptr->param * (float)1.57079632675;
    }
    (this_ptr->base).orient.vec.y = fVar2;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000(&this_ptr->base);
    if (ABS(local_c8.min.x) <= ABS(local_c8.max.x)) {
      local_c8.min.x = local_c8.max.x + (float)-0.29999999999999999;
    }
    else {
      local_c8.min.x = local_c8.min.x + (float)0.29999999999999999;
    }
    (this_ptr->open_position).x = local_c8.min.x;
    (this_ptr->open_position).y = 3.5;
    (this_ptr->open_position).z = 0.0;
    pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                       (&this_ptr->base,&CStack_50,&this_ptr->open_position);
    break;
  case DOOR_TYPE_VERTICAL:
    (this_ptr->base).location.position.y = (this_ptr->orig_pos).y + this_ptr->param;
    CStack_44.y = 3.5;
    CStack_44.x = 0.0;
    CStack_44.z = 0.0;
    pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                       (&this_ptr->base,&CStack_74,&CStack_44);
    break;
  case DOOR_TYPE_SLIDE:
    if (this_ptr->door_side == 1) {
      afStack_a4[0] = this_ptr->param;
    }
    else {
      afStack_a4[0] = -this_ptr->param;
    }
    afStack_a4[1] = 0.0;
    afStack_a4[2] = 0.0;
    pfVar4 = (float *)core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                                (&(this_ptr->base).orient_matrix,auStack_2c,afStack_a4);
    fStack_80 = (this_ptr->orig_pos).x + *pfVar4;
    fStack_7c = (this_ptr->orig_pos).y + pfVar4[1];
    fStack_78 = (this_ptr->orig_pos).z + pfVar4[2];
    (this_ptr->base).location.position.x = fStack_80;
    (this_ptr->base).location.position.y = fStack_7c;
    (this_ptr->base).location.position.z = fStack_78;
    CStack_8c.x = 0.0;
    CStack_8c.y = 3.5;
    CStack_8c.z = 0.0;
    pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                       (&this_ptr->base,&CStack_68,&CStack_8c);
    break;
  case DOOR_TYPE_TILT:
    (this_ptr->base).orient.vec.x = this_ptr->param * (float)1.57079632675;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000(&this_ptr->base);
    fStack_b0 = local_c8.min.x + local_c8.max.x;
    fStack_ac = local_c8.min.y + local_c8.max.y;
    CStack_5c.x = fStack_b0 * 5.2220990168285998e-315._0_4_;
    CStack_5c.y = fStack_ac * 5.2220990168285998e-315._0_4_;
    fStack_a8 = local_c8.min.z + local_c8.max.z;
    CStack_5c.z = fStack_a8 * 5.2220990168285998e-315._0_4_;
    pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                       (&this_ptr->base,&CStack_38,&CStack_5c);
    break;
  default:
    PTR_01cc4800 = "..\\core\\door.cpp";
    INT_01cc4804 = 0xf8;
    core_main_c_FUN_004c8440("CDoor::reposition - Unknown type");
    goto LAB_00455399;
  }
  if (&this_ptr->open_position != pCVar3) {
    (this_ptr->open_position).x = pCVar3->x;
    (this_ptr->open_position).y = pCVar3->y;
    (this_ptr->open_position).z = pCVar3->z;
  }
LAB_00455399:
  if (0.0 < this_ptr->swing_range) {
    uStack_20 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                          (-this_ptr->swing_range,this_ptr->swing_range);
    uStack_1c = 0;
    uStack_14 = uStack_20;
    uStack_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                          (-this_ptr->swing_range,this_ptr->swing_range);
    uStack_14 = uStack_18;
    pfVar4 = (float *)core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
                                (this_ptr,auStack_98,&uStack_20);
    pCVar1 = &(this_ptr->base).location;
    (pCVar1->position).x = *pfVar4 + (pCVar1->position).x;
    (this_ptr->base).location.position.y = pfVar4[1] + (this_ptr->base).location.position.y;
    (this_ptr->base).location.position.z = pfVar4[2] + (this_ptr->base).location.position.z;
    this_ptr->swing_range = 0.0;
    return;
  }
  return;
}
