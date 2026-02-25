// Name: core_door.cpp_CDoor_reposition_FUN_0047fd20
// Address: 0047fd20
// Address Range: [[0047fd20, 004800af]]
// Convention: __cdecl
// Signature: void __cdecl core_door_cpp_CDoor_reposition_FUN_0047fd20(CDoor *this_ptr)

#include "nocturne.h"

void __cdecl core_door_cpp_CDoor_reposition_FUN_0047fd20(CDoor *this_ptr)

{
  CLocation *pCVar1;
  float fVar2;
  CVector3f *pCVar3;
  CBoundingBox3D local_c8;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  CVector3f CStack_a4;
  CVector3f CStack_98;
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
  CVector3f CStack_2c;
  CVector3f CStack_20;
  float fStack_14;
  
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_c8);
  switch(this_ptr->door_type) {
  case 0:
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
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&this_ptr->base);
    if (ABS(local_c8.min.x) <= ABS(local_c8.max.x)) {
      local_c8.min.x = local_c8.max.x + (float)-0.29999999999999999;
    }
    else {
      local_c8.min.x = local_c8.min.x + (float)0.29999999999999999;
    }
    (this_ptr->open_position).x = local_c8.min.x;
    (this_ptr->open_position).y = 3.5;
    (this_ptr->open_position).z = 0.0;
    pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                       (&this_ptr->base,&CStack_50,&this_ptr->open_position);
    break;
  case 1:
    (this_ptr->base).location.position.y = (this_ptr->orig_pos).y + this_ptr->param;
    CStack_44.y = 3.5;
    CStack_44.x = 0.0;
    CStack_44.z = 0.0;
    pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                       (&this_ptr->base,&CStack_74,&CStack_44);
    break;
  case 2:
    if (this_ptr->door_side == 1) {
      CStack_a4.x = this_ptr->param;
    }
    else {
      CStack_a4.x = -this_ptr->param;
    }
    CStack_a4.y = 0.0;
    CStack_a4.z = 0.0;
    pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                       (&(this_ptr->base).orient_matrix,&CStack_2c,&CStack_a4);
    fStack_80 = (this_ptr->orig_pos).x + pCVar3->x;
    fStack_7c = (this_ptr->orig_pos).y + pCVar3->y;
    fStack_78 = (this_ptr->orig_pos).z + pCVar3->z;
    (this_ptr->base).location.position.x = fStack_80;
    (this_ptr->base).location.position.y = fStack_7c;
    (this_ptr->base).location.position.z = fStack_78;
    CStack_8c.x = 0.0;
    CStack_8c.y = 3.5;
    CStack_8c.z = 0.0;
    pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                       (&this_ptr->base,&CStack_68,&CStack_8c);
    break;
  case 3:
    (this_ptr->base).orient.vec.x = this_ptr->param * (float)1.57079632675;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&this_ptr->base);
    fStack_b0 = local_c8.min.x + local_c8.max.x;
    fStack_ac = local_c8.min.y + local_c8.max.y;
    CStack_5c.x = fStack_b0 * 0.5f;
    CStack_5c.y = fStack_ac * 0.5f;
    fStack_a8 = local_c8.min.z + local_c8.max.z;
    CStack_5c.z = fStack_a8 * 0.5f;
    pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                       (&this_ptr->base,&CStack_38,&CStack_5c);
    break;
  default:
    g_CurrentFilename = "..\\core\\door.cpp";
    g_CurrentLineNumber = 0xf8;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDoor::reposition - Unknown type");
    goto LAB_0047fe19;
  }
  if (&this_ptr->open_position != pCVar3) {
    (this_ptr->open_position).x = pCVar3->x;
    (this_ptr->open_position).y = pCVar3->y;
    (this_ptr->open_position).z = pCVar3->z;
  }
LAB_0047fe19:
  if (0.0 < this_ptr->swing_range) {
    CStack_20.x = core_actor_cpp_getRandomFloat_FUN_0040cc10
                            (-this_ptr->swing_range,this_ptr->swing_range);
    CStack_20.y = 0.0;
    fStack_14 = CStack_20.x;
    CStack_20.z = core_actor_cpp_getRandomFloat_FUN_0040cc10
                            (-this_ptr->swing_range,this_ptr->swing_range);
    fStack_14 = CStack_20.z;
    pCVar3 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                       (&this_ptr->base,&CStack_98,&CStack_20);
    pCVar1 = &(this_ptr->base).location;
    (pCVar1->position).x = pCVar3->x + (pCVar1->position).x;
    (this_ptr->base).location.position.y = pCVar3->y + (this_ptr->base).location.position.y;
    (this_ptr->base).location.position.z = pCVar3->z + (this_ptr->base).location.position.z;
    this_ptr->swing_range = 0.0;
    return;
  }
  return;
}
