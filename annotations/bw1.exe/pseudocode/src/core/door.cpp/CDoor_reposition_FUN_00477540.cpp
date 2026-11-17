// Name: core_door.cpp_CDoor_reposition_FUN_00477540
// Address: 00477540
// Address Range: [[00477540, 00477a96]]
// Convention: __cdecl
// Signature: void __cdecl core_door_cpp_CDoor_reposition_FUN_00477540(CDoor *this_ptr)

#include "nocturne.h"

void __cdecl core_door_cpp_CDoor_reposition_FUN_00477540(CDoor *this_ptr)

{
  CLocation *pCVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint *puVar5;
  double *pdVar6;
  byte bVar7;
  float afStackY_10f4 [996];
  CBoundingBox3D *in_stack_fffffea0;
  CVector3f *pCVar8;
  double local_150;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  uint auStack_130 [6];
  CVector3f CStack_118;
  CVector3f CStack_10c;
  float fStack_100;
  float afStack_fc [2];
  CVector3f CStack_f4;
  CVector3f CStack_e8;
  float fStack_dc;
  float afStack_d8 [4];
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  CVector3f CStack_b8;
  float fStack_ac;
  float afStack_a8 [4];
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  CVector3f CStack_7c;
  float fStack_70;
  float afStack_6c [2];
  CVector3f CStack_64;
  CVector3f CStack_58;
  CVector3f CStack_4c;
  CVector3f CStack_40;
  CVector3f CStack_34;
  CVector3f CStack_28;
  float fStack_1c;
  float afStack_18 [2];
  
  bVar7 = 0;
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,in_stack_fffffea0);
  puVar5 = auStack_130;
  pdVar6 = &local_150;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(uint *)pdVar6 = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    pdVar6 = (double *)((int)pdVar6 + (uint)bVar7 * -8 + 4);
  }
  switch(this_ptr->door_type) {
  case DOOR_TYPE_SWING:
    (this_ptr->base).orient.vec.x = 0.0;
    (this_ptr->base).orient.vec.z = 0.0;
    (this_ptr->base).location.position.x = (this_ptr->orig_pos).x;
    (this_ptr->base).location.position.y = (this_ptr->orig_pos).y;
    (this_ptr->base).location.position.z = (this_ptr->orig_pos).z;
    if (this_ptr->door_swing == DOOR_SWING_CLOCKWISE) {
      fVar2 = this_ptr->param * (float)1.57079632675 + (this_ptr->orig_orient).y;
    }
    else {
      fVar2 = (this_ptr->orig_orient).y - this_ptr->param * (float)1.57079632675;
    }
    (this_ptr->base).orient.vec.y = fVar2;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0(&this_ptr->base);
    local_150 = (double)fStack_13c;
    if (ABS(fStack_148) <= ABS(fStack_13c)) {
      fStack_148 = fStack_13c + (float)-0.29999999999999999;
    }
    else {
      fStack_148 = fStack_148 + (float)0.29999999999999999;
    }
    (this_ptr->open_position).x = fStack_148;
    pCVar8 = &this_ptr->open_position;
    (this_ptr->open_position).y = 3.5;
    (this_ptr->open_position).z = 0.0;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40(&this_ptr->base,pCVar8,&CStack_40);
    CStack_7c.x = CStack_40.x;
    *(uint *)((int)&CStack_7c + (uint)bVar7 * -8 + 4) =
         *(uint *)((int)&CStack_40 + (uint)bVar7 * -8 + 4);
    *(uint *)((int)&CStack_7c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
         *(uint *)((int)&CStack_40 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    if (&CStack_7c != pCVar8) {
      pCVar8->x = CStack_7c.x;
      (this_ptr->open_position).y = CStack_7c.y;
      (this_ptr->open_position).z = CStack_7c.z;
    }
    break;
  case DOOR_TYPE_VERTICAL:
    (this_ptr->base).location.position.y = (this_ptr->orig_pos).y + this_ptr->param;
    CStack_b8.y = 3.5;
    CStack_b8.x = 0.0;
    CStack_b8.z = 0.0;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40(&this_ptr->base,&CStack_b8,&CStack_28)
    ;
    fStack_88 = CStack_28.x;
    afStack_a8[(uint)bVar7 * -2 + 9] = *(float *)((int)&CStack_28 + (uint)bVar7 * -8 + 4);
    afStack_a8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
         *(float *)((int)&CStack_28 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    if (&this_ptr->open_position != (CVector3f *)(afStack_a8 + 8)) {
      (this_ptr->open_position).x = fStack_88;
      (this_ptr->open_position).y = fStack_84;
      (this_ptr->open_position).z = fStack_80;
    }
    break;
  case DOOR_TYPE_SLIDE:
    if (this_ptr->door_side == DOOR_SIDE_RIGHT) {
      CStack_118.x = this_ptr->param;
    }
    else {
      CStack_118.x = -this_ptr->param;
    }
    CStack_118.y = 0.0;
    CStack_118.z = 0.0;
    core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0045f690
              (&(this_ptr->base).orient_matrix,&CStack_118,&CStack_10c);
    fStack_100 = CStack_10c.x;
    afStack_fc[(uint)bVar7 * -2] = *(float *)((int)&CStack_10c + (uint)bVar7 * -8 + 4);
    afStack_fc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         *(float *)((int)&CStack_10c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    fStack_c4 = (this_ptr->orig_pos).x + fStack_100;
    fStack_c0 = (this_ptr->orig_pos).y + afStack_fc[0];
    fStack_bc = (this_ptr->orig_pos).z + afStack_fc[1];
    fStack_ac = fStack_c4;
    afStack_a8[(uint)bVar7 * -2] = afStack_d8[(uint)bVar7 * -2 + 6];
    afStack_a8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         afStack_d8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
    (this_ptr->base).location.position.x = fStack_ac;
    (this_ptr->base).location.position.y = afStack_a8[0];
    (this_ptr->base).location.position.z = afStack_a8[1];
    CStack_64.y = 3.5;
    CStack_64.x = 0.0;
    CStack_64.z = 0.0;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40(&this_ptr->base,&CStack_64,&CStack_e8)
    ;
    afStack_d8[2] = CStack_e8.x;
    afStack_d8[(uint)bVar7 * -2 + 3] = *(float *)((int)&CStack_e8 + (uint)bVar7 * -8 + 4);
    afStack_d8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
         *(float *)((int)&CStack_e8 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    if (&this_ptr->open_position != (CVector3f *)(afStack_d8 + 2)) {
      (this_ptr->open_position).x = afStack_d8[2];
      (this_ptr->open_position).y = afStack_d8[3];
      (this_ptr->open_position).z = fStack_c8;
    }
    break;
  case DOOR_TYPE_TILT:
    (this_ptr->base).orient.vec.x = this_ptr->param * (float)1.57079632675;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0(&this_ptr->base);
    fStack_94 = fStack_148 + fStack_13c;
    fStack_90 = fStack_144 + local_138;
    fStack_8c = fStack_140 + fStack_134;
    afStack_a8[2] = fStack_148 + fStack_13c;
    afStack_a8[(uint)bVar7 * -2 + 3] = afStack_a8[(uint)bVar7 * -2 + 6];
    afStack_a8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
         afStack_a8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
    pCVar8 = &CStack_58;
    fStack_dc = afStack_a8[2] * 0.5f;
    afStack_d8[0] = afStack_a8[3] * 0.5f;
    afStack_d8[1] = fStack_98 * 0.5f;
    CStack_58.x = afStack_a8[2] * 0.5f;
    *(float *)((int)&CStack_58 + (uint)bVar7 * -8 + 4) = afStack_d8[(uint)bVar7 * -2];
    *(float *)((int)&CStack_58 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
         afStack_d8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40(&this_ptr->base,pCVar8,&CStack_4c);
    fStack_1c = CStack_4c.x;
    afStack_18[(uint)bVar7 * -2] = *(float *)((int)&CStack_4c + (uint)bVar7 * -8 + 4);
    afStack_18[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         *(float *)((int)&CStack_4c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    if (&this_ptr->open_position != (CVector3f *)&fStack_1c) {
      (this_ptr->open_position).x = fStack_1c;
      (this_ptr->open_position).y = afStack_18[0];
      (this_ptr->open_position).z = afStack_18[1];
    }
    break;
  default:
    g_CHAR_PTR_01d1d400 = "..\\core\\door.cpp";
    g_INT_01d1d404 = 0x117;
    core_main_c_displayErrorAndQuit_FUN_005030e0("CDoor::reposition - Unknown type");
  }
  iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                    (g_CEventList_PTR_0061b4d0,this_ptr->shake_me_event);
  if (iVar4 != 0) {
    this_ptr->swing_range = this_ptr->shake_me_strength;
  }
  if (0.0 < this_ptr->swing_range) {
    CStack_f4.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00
                            (-this_ptr->swing_range,this_ptr->swing_range);
    CStack_f4.y = 0.0;
    CStack_f4.z = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00
                            (-this_ptr->swing_range,this_ptr->swing_range);
    core_actor_cpp_CDemonActor_transformVector_FUN_00408ac0(&this_ptr->base,&CStack_f4,&CStack_34);
    pCVar1 = &(this_ptr->base).location;
    fStack_70 = CStack_34.x;
    afStack_6c[(uint)bVar7 * -2] = *(float *)((int)&CStack_34 + (uint)bVar7 * -8 + 4);
    afStack_6c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         *(float *)((int)&CStack_34 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    fVar2 = (this_ptr->base).location.position.y;
    fVar3 = (this_ptr->base).location.position.z;
    (pCVar1->position).x = (pCVar1->position).x + fStack_70;
    (this_ptr->base).location.position.y = fVar2 + afStack_6c[0];
    (this_ptr->base).location.position.z = fVar3 + afStack_6c[1];
    this_ptr->swing_range = 0.0;
    return;
  }
  return;
}
