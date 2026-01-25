// Name: core_door.cpp_CDoor_reposition_FUN_0047fd20
// Address: 0047fd20
// Address Range: [[0047fd20, 004800af]]
// Convention: __cdecl
// Signature: void core_door.cpp_CDoor_reposition_FUN_0047fd20(CDoor * this_ptr)

#include "nocturne.h"

void __cdecl core_door_cpp_CDoor_reposition_FUN_0047fd20(CDoor *this_ptr)

{
  CLocation *pCVar1;
  float fVar2;
  CVector3f *pCVar3;
  double local_c8;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  CVector3f CStack_9c;
  CVector3f CStack_90;
  CVector3f CStack_84;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  CVector3f CStack_6c;
  CVector3f CStack_60;
  CVector3f CStack_54;
  CVector3f CStack_48;
  CVector3f CStack_3c;
  CVector3f CStack_30;
  CVector3f CStack_24;
  float fStack_18;
  float fStack_14;
  
  (*((this_ptr->base_actor).vtable._ub)->getBoundingBox)
            (&this_ptr->base_actor,(CBoundingBox3D *)&local_c8);
  switch(this_ptr->door_type) {
  case 0:
    (this_ptr->base_actor).orient.pitch = 0.0;
    (this_ptr->base_actor).orient.heading = 0.0;
    (this_ptr->base_actor).location.position.x = (this_ptr->orig_pos).x;
    (this_ptr->base_actor).location.position.y = (this_ptr->orig_pos).y;
    (this_ptr->base_actor).location.position.z = (this_ptr->orig_pos).z;
    if (this_ptr->door_swing == 0) {
      fVar2 = this_ptr->param * (float)1.57079632675 + (this_ptr->orig_orient).y;
    }
    else {
      fVar2 = (this_ptr->orig_orient).y - this_ptr->param * (float)1.57079632675;
    }
    (this_ptr->base_actor).orient.bank = fVar2;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&this_ptr->base_actor);
    local_c8 = (double)fStack_b4;
    if (ABS(fStack_c0) <= ABS(fStack_b4)) {
      fStack_c0 = fStack_b4 + (float)-0.29999999999999999;
    }
    else {
      fStack_c0 = fStack_c0 + (float)0.29999999999999999;
    }
    *(float *)this_ptr->field17_0x9bc = fStack_c0;
    this_ptr->field17_0x9bc[4] = '\0';
    this_ptr->field17_0x9bc[5] = '\0';
    this_ptr->field17_0x9bc[6] = '`';
    this_ptr->field17_0x9bc[7] = '@';
    this_ptr->field17_0x9bc[8] = '\0';
    this_ptr->field17_0x9bc[9] = '\0';
    this_ptr->field17_0x9bc[10] = '\0';
    this_ptr->field17_0x9bc[0xb] = '\0';
    pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                       (&this_ptr->base_actor,&CStack_48,(CVector3f *)this_ptr->field17_0x9bc);
    break;
  case 1:
    (this_ptr->base_actor).location.position.y = (this_ptr->orig_pos).y + this_ptr->param;
    CStack_3c.y = 3.5;
    CStack_3c.x = 0.0;
    CStack_3c.z = 0.0;
    pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                       (&this_ptr->base_actor,&CStack_6c,&CStack_3c);
    break;
  case 2:
    if (this_ptr->door_side == 1) {
      CStack_9c.x = this_ptr->param;
    }
    else {
      CStack_9c.x = -this_ptr->param;
    }
    CStack_9c.y = 0.0;
    CStack_9c.z = 0.0;
    pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                       (&(this_ptr->base_actor).orient_matrix,&CStack_24,&CStack_9c);
    fStack_78 = (this_ptr->orig_pos).x + pCVar3->x;
    fStack_74 = (this_ptr->orig_pos).y + pCVar3->y;
    fStack_70 = (this_ptr->orig_pos).z + pCVar3->z;
    (this_ptr->base_actor).location.position.x = fStack_78;
    (this_ptr->base_actor).location.position.y = fStack_74;
    (this_ptr->base_actor).location.position.z = fStack_70;
    CStack_84.x = 0.0;
    CStack_84.y = 3.5;
    CStack_84.z = 0.0;
    pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                       (&this_ptr->base_actor,&CStack_60,&CStack_84);
    break;
  case 3:
    (this_ptr->base_actor).orient.pitch = this_ptr->param * (float)1.57079632675;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&this_ptr->base_actor);
    fStack_a8 = fStack_c0 + fStack_b4;
    fStack_a4 = fStack_bc + fStack_b0;
    CStack_54.x = fStack_a8 * 0.5f;
    CStack_54.y = fStack_a4 * 0.5f;
    fStack_a0 = fStack_b8 + fStack_ac;
    CStack_54.z = fStack_a0 * 0.5f;
    pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                       (&this_ptr->base_actor,&CStack_30,&CStack_54);
    break;
  default:
    g_CurrentFilename = "..\\core\\door.cpp";
    g_CurrentLineNumber = 0xf8;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDoor::reposition - Unknown type");
    goto LAB_0047fe19;
  }
  if ((CVector3f *)this_ptr->field17_0x9bc != pCVar3) {
    *(float *)this_ptr->field17_0x9bc = pCVar3->x;
    *(float *)(this_ptr->field17_0x9bc + 4) = pCVar3->y;
    *(float *)(this_ptr->field17_0x9bc + 8) = pCVar3->z;
  }
LAB_0047fe19:
  if (0.0 < *(float *)this_ptr->field19_0x9cc) {
    fStack_18 = core_actor_cpp_getRandomFloat_FUN_0040cc10
                          (-*(float *)this_ptr->field19_0x9cc,*(float *)this_ptr->field19_0x9cc);
    fStack_14 = 0.0;
    core_actor_cpp_getRandomFloat_FUN_0040cc10
              (-*(float *)this_ptr->field19_0x9cc,*(float *)this_ptr->field19_0x9cc);
    pCVar3 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                       (&this_ptr->base_actor,&CStack_90,(CVector3f *)&fStack_18);
    pCVar1 = &(this_ptr->base_actor).location;
    (pCVar1->position).x = pCVar3->x + (pCVar1->position).x;
    (this_ptr->base_actor).location.position.y =
         pCVar3->y + (this_ptr->base_actor).location.position.y;
    (this_ptr->base_actor).location.position.z =
         pCVar3->z + (this_ptr->base_actor).location.position.z;
    this_ptr->field19_0x9cc[0] = '\0';
    this_ptr->field19_0x9cc[1] = '\0';
    this_ptr->field19_0x9cc[2] = '\0';
    this_ptr->field19_0x9cc[3] = '\0';
    return;
  }
  return;
}
