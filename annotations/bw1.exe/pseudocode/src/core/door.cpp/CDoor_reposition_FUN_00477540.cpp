// Name: core_door.cpp_CDoor_reposition_FUN_00477540
// Address: 00477540
// Address Range: [[00477540, 00477a96]]
// Convention: __cdecl
// Signature: void __cdecl core_door_cpp_CDoor_reposition_FUN_00477540(CDoor *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_door_cpp_CDoor_reposition_FUN_00477540(CDoor *this_ptr)

{
  CLocation *pCVar1;
  CVector3f *pCVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint *puVar6;
  double *pdVar7;
  byte bVar8;
  float afStackY_10f4 [996];
  CBoundingBox3D *in_stack_fffffea0;
  float *pfVar9;
  double local_150;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  uint auStack_130 [6];
  float afStack_118 [4];
  float afStack_108 [4];
  float fStack_f8;
  float afStack_f4 [3];
  float fStack_e8;
  float afStack_e4 [4];
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float afStack_b8 [4];
  float afStack_a8 [4];
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float afStack_64 [4];
  float afStack_54 [5];
  float fStack_40;
  float fStack_34;
  float fStack_28;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar8 = 0;
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,in_stack_fffffea0);
  puVar6 = auStack_130;
  pdVar7 = &local_150;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(uint *)pdVar7 = *puVar6;
    puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
    pdVar7 = (double *)((int)pdVar7 + (uint)bVar8 * -8 + 4);
  }
  switch(this_ptr->door_type) {
  case DOOR_TYPE_SWING:
    (this_ptr->base).orient.vec.x = 0.0;
    (this_ptr->base).orient.vec.z = 0.0;
    (this_ptr->base).location.position.x = (this_ptr->orig_pos).x;
    (this_ptr->base).location.position.y = (this_ptr->orig_pos).y;
    (this_ptr->base).location.position.z = (this_ptr->orig_pos).z;
    if (this_ptr->door_swing == DOOR_SWING_CLOCKWISE) {
      fVar3 = this_ptr->param * (float)_DAT_005da7fc + (this_ptr->orig_orient).y;
    }
    else {
      fVar3 = (this_ptr->orig_orient).y - this_ptr->param * (float)_DAT_005da7fc;
    }
    (this_ptr->base).orient.vec.y = fVar3;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0(&this_ptr->base);
    local_150 = (double)fStack_13c;
    if (ABS(fStack_148) <= ABS(fStack_13c)) {
      fStack_148 = fStack_13c + (float)_DAT_005da80c;
    }
    else {
      fStack_148 = fStack_148 + (float)_DAT_005da814;
    }
    (this_ptr->open_position).x = fStack_148;
    pCVar2 = &this_ptr->open_position;
    (this_ptr->open_position).y = 3.5;
    (this_ptr->open_position).z = 0.0;
    core_actor_cpp_FUN_00408b40(this_ptr,pCVar2);
    fStack_7c = fStack_40;
    afStack_a8[(uint)bVar8 * -2 + 0xc] = afStack_54[(uint)bVar8 * -2 + 6];
    afStack_a8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd] =
         afStack_54[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
    if ((CVector3f *)(afStack_a8 + 0xb) != pCVar2) {
      pCVar2->x = fStack_7c;
      (this_ptr->open_position).y = fStack_78;
      (this_ptr->open_position).z = fStack_74;
    }
    break;
  case DOOR_TYPE_VERTICAL:
    (this_ptr->base).location.position.y = (this_ptr->orig_pos).y + this_ptr->param;
    afStack_b8[1] = 3.5;
    afStack_b8[0] = 0.0;
    afStack_b8[2] = 0.0;
    core_actor_cpp_FUN_00408b40(this_ptr,afStack_e4 + 0xb);
    fStack_88 = fStack_28;
    afStack_a8[(uint)bVar8 * -2 + 9] = afStack_54[(uint)bVar8 * -2 + 0xc];
    afStack_a8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10] =
         afStack_54[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd];
    if (&this_ptr->open_position != (CVector3f *)(afStack_a8 + 8)) {
      (this_ptr->open_position).x = fStack_88;
      (this_ptr->open_position).y = fStack_84;
      (this_ptr->open_position).z = fStack_80;
    }
    break;
  case DOOR_TYPE_SLIDE:
    if (this_ptr->door_side == DOOR_SIDE_RIGHT) {
      afStack_118[0] = this_ptr->param;
    }
    else {
      afStack_118[0] = -this_ptr->param;
    }
    afStack_118[1] = 0.0;
    afStack_118[2] = 0.0;
    core_dirmat_cpp_FUN_0045f690(&(this_ptr->base).orient_matrix,afStack_118);
    afStack_108[2] = afStack_118[3];
    afStack_108[(uint)bVar8 * -2 + 3] = afStack_108[(uint)bVar8 * -2];
    afStack_108[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
         afStack_108[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    fStack_c4 = (this_ptr->orig_pos).x + afStack_108[2];
    fStack_c0 = (this_ptr->orig_pos).y + afStack_108[3];
    fStack_bc = (this_ptr->orig_pos).z + fStack_f8;
    afStack_b8[3] = fStack_c4;
    afStack_a8[(uint)bVar8 * -2] = afStack_e4[(uint)bVar8 * -2 + 9];
    afStack_a8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
         afStack_e4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10];
    (this_ptr->base).location.position.x = afStack_b8[3];
    (this_ptr->base).location.position.y = afStack_a8[0];
    (this_ptr->base).location.position.z = afStack_a8[1];
    afStack_64[1] = 3.5;
    afStack_64[0] = 0.0;
    afStack_64[2] = 0.0;
    core_actor_cpp_FUN_00408b40(this_ptr,afStack_a8 + 0x11);
    fStack_d0 = fStack_e8;
    afStack_e4[(uint)bVar8 * -2 + 6] = afStack_e4[(uint)bVar8 * -2];
    afStack_e4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
         afStack_e4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    if (&this_ptr->open_position != (CVector3f *)(afStack_e4 + 5)) {
      (this_ptr->open_position).x = fStack_d0;
      (this_ptr->open_position).y = fStack_cc;
      (this_ptr->open_position).z = fStack_c8;
    }
    break;
  case DOOR_TYPE_TILT:
    (this_ptr->base).orient.vec.x = this_ptr->param * (float)_DAT_005da7fc;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0(&this_ptr->base);
    fStack_94 = fStack_148 + fStack_13c;
    fStack_90 = fStack_144 + local_138;
    fStack_8c = fStack_140 + fStack_134;
    afStack_a8[2] = fStack_148 + fStack_13c;
    afStack_a8[(uint)bVar8 * -2 + 3] = afStack_a8[(uint)bVar8 * -2 + 6];
    afStack_a8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
         afStack_a8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
    pfVar9 = afStack_a8 + 0x14;
    afStack_e4[2] = afStack_a8[2] * _DAT_005da804;
    afStack_e4[3] = afStack_a8[3] * _DAT_005da804;
    fStack_d4 = fStack_98 * _DAT_005da804;
    afStack_64[3] = afStack_a8[2] * _DAT_005da804;
    afStack_54[(uint)bVar8 * -2] = afStack_e4[(uint)bVar8 * -2 + 3];
    afStack_54[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
         afStack_e4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
    core_actor_cpp_FUN_00408b40(this_ptr,pfVar9);
    fStack_1c = afStack_54[2];
    afStack_54[(uint)bVar8 * -2 + 0xf] = afStack_54[(uint)bVar8 * -2 + 3];
    afStack_54[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x10] =
         afStack_54[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
    if (&this_ptr->open_position != (CVector3f *)(afStack_54 + 0xe)) {
      (this_ptr->open_position).x = fStack_1c;
      (this_ptr->open_position).y = fStack_18;
      (this_ptr->open_position).z = fStack_14;
    }
    break;
  default:
    _DAT_01d1d400 = "..\\core\\door.cpp";
    _DAT_01d1d404 = 0x117;
    core_main_c_FUN_005030e0("CDoor::reposition - Unknown type");
  }
  iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                    (0x01C51D80,this_ptr->shake_me_event);
  if (iVar5 != 0) {
    this_ptr->swing_range = this_ptr->shake_me_strength;
  }
  if (0.0 < this_ptr->swing_range) {
    afStack_f4[0] =
         core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00
                   (-this_ptr->swing_range,this_ptr->swing_range);
    afStack_f4[1] = 0.0;
    afStack_f4[2] =
         core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00
                   (-this_ptr->swing_range,this_ptr->swing_range);
    core_actor_cpp_FUN_00408ac0(this_ptr,afStack_108 + 5);
    pCVar1 = &(this_ptr->base).location;
    fStack_70 = fStack_34;
    afStack_a8[(uint)bVar8 * -2 + 0xf] = afStack_54[(uint)bVar8 * -2 + 9];
    afStack_a8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x10] =
         afStack_54[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10];
    fVar3 = (this_ptr->base).location.position.y;
    fVar4 = (this_ptr->base).location.position.z;
    (pCVar1->position).x = (pCVar1->position).x + fStack_70;
    (this_ptr->base).location.position.y = fVar3 + fStack_6c;
    (this_ptr->base).location.position.z = fVar4 + fStack_68;
    this_ptr->swing_range = 0.0;
    return;
  }
  return;
}
