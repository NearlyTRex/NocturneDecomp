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
  BADSPACEBASE *in_ESP;
  float fStack_cc;
  CBoundingBox3D local_c8;
  float fStack_b0;
  float fStack_ac;
  CVector3f CStack_a4;
  CVector3f CStack_90;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  byte auStack_74 [20];
  CVector3f CStack_60;
  CVector3f CStack_54;
  byte auStack_44 [24];
  CVector3f CStack_2c;
  float fStack_1c;
  float fStack_18;
  
  (*((this_ptr->base_actor).vtable)->getBoundingBox)(&this_ptr->base_actor,&local_c8);
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
    if (ABS(fStack_cc) <= ABS(local_c8.min.z)) {
      local_c8.min.z = local_c8.min.z + (float)-0.29999999999999999;
    }
    else {
      local_c8.min.z = fStack_cc + (float)0.29999999999999999;
    }
    *(float *)this_ptr->field17_0x9bc = local_c8.min.z;
    this_ptr->field17_0x9bc[4] = '\0';
    this_ptr->field17_0x9bc[5] = '\0';
    this_ptr->field17_0x9bc[6] = '`';
    this_ptr->field17_0x9bc[7] = '@';
    this_ptr->field17_0x9bc[8] = '\0';
    this_ptr->field17_0x9bc[9] = '\0';
    this_ptr->field17_0x9bc[10] = '\0';
    this_ptr->field17_0x9bc[0xb] = '\0';
    pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                       (&this_ptr->base_actor,&CStack_54,(CVector3f *)this_ptr->field17_0x9bc);
    break;
  case 1:
    (this_ptr->base_actor).location.position.y = (this_ptr->orig_pos).y + this_ptr->param;
    auStack_44._4_4_ = 3.5;
    auStack_44._0_4_ = 0.0;
    auStack_44._8_4_ = 0.0;
    pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                       (&this_ptr->base_actor,(CVector3f *)auStack_74,(CVector3f *)auStack_44);
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
                       (&(this_ptr->base_actor).orient_matrix,&CStack_2c,&CStack_a4);
    fStack_84 = (this_ptr->orig_pos).x + pCVar3->x;
    fStack_80 = (this_ptr->orig_pos).y + pCVar3->y;
    fStack_7c = (this_ptr->orig_pos).z + pCVar3->z;
    (this_ptr->base_actor).location.position.x = fStack_84;
    (this_ptr->base_actor).location.position.y = fStack_80;
    (this_ptr->base_actor).location.position.z = fStack_7c;
    CStack_90.x = 0.0;
    CStack_90.y = 3.5;
    CStack_90.z = 0.0;
    pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                       (&this_ptr->base_actor,(CVector3f *)(auStack_74 + 8),&CStack_90);
    break;
  case 3:
    (this_ptr->base_actor).orient.pitch = this_ptr->param * (float)1.57079632675;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&this_ptr->base_actor);
    local_c8.max.z = fStack_cc + local_c8.min.z;
    fStack_b0 = local_c8.min.x + local_c8.max.x;
    CStack_60.x = local_c8.max.z * 0.5f;
    CStack_60.y = fStack_b0 * 0.5f;
    fStack_ac = local_c8.min.y + local_c8.max.y;
    CStack_60.z = fStack_ac * 0.5f;
    pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                       (&this_ptr->base_actor,(CVector3f *)(auStack_44 + 8),&CStack_60);
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
    fStack_1c = core_actor_cpp_getRandomFloat_FUN_0040cc10
                          (-*(float *)this_ptr->field19_0x9cc,*(float *)this_ptr->field19_0x9cc);
    fStack_18 = 0.0;
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
