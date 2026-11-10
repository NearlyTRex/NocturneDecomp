// Name: core_boneguy.cpp_CBoneGuy_explode_FUN_00419550
// Address: 00419550
// Address Range: [[00419550, 00419784]]
// Convention: __cdecl
// Signature: void __cdecl core_boneguy_cpp_CBoneGuy_explode_FUN_00419550(CBoneGuy *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_boneguy_cpp_CBoneGuy_explode_FUN_00419550(CBoneGuy *this_ptr)

{
  UOrientationVector *pUVar1;
  int iVar2;
  CBodyPart *body_part;
  float *pfVar3;
  CBoneGuy *pCVar4;
  CLocation *pCVar5;
  float *pfVar6;
  uint *puVar7;
  uint *puVar8;
  byte bVar9;
  float afStackY_1824 [1520];
  uint local_48;
  CVector3f local_38;
  UOrientationVector *local_2c;
  CVector3f *local_28;
  byte *local_24;
  CBoneGuy *local_20;
  int local_1c;
  CDeformableModel *local_18;
  float local_14;
  
  bVar9 = 0;
  core_charactr_cpp_CCharacter_dropAllCarriedObjects_FUN_00431ce0((CCharacter *)this_ptr);
  pCVar5 = &(this_ptr->base).base.base.location;
  *(uint *)&this_ptr->field_0xd0e4 = 1;
  *(uint *)&this_ptr->field_0xd694 = 0;
  if ((CLocation *)&this_ptr->field_0xd068 != pCVar5) {
    *(float *)&this_ptr->field_0xd068 = (pCVar5->position).x;
    *(float *)&this_ptr->field_0xd06c = (this_ptr->base).base.base.location.position.y;
    *(float *)&this_ptr->field_0xd070 = (this_ptr->base).base.base.location.position.z;
  }
  local_18 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
                       (&(this_ptr->base).base.model);
  iVar2 = local_18->num_parts;
  *(int *)&this_ptr->field_0xd0e8 = iVar2;
  if (0x14 < iVar2) {
    _DAT_01d71de0 = "..\\core\\boneguy.cpp";
    _DAT_01d71de4 = 0x49c;
    core_main_c_FUN_004e4330("CBoneGuy::explode - Not enough containers");
  }
  local_1c = 0;
  if (0 < local_18->num_parts) {
    local_24 = &this_ptr->field_0xd0f0;
    local_2c = &(this_ptr->base).base.base.orient;
    local_28 = &(this_ptr->base).base.base.location.position;
    pfVar6 = (float *)&this_ptr->field_0xd0fc;
    local_20 = this_ptr;
    do {
      local_38.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-5.0,5.0);
      local_14 = local_38.x;
      local_38.y = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,10.0);
      local_14 = local_38.y;
      local_38.z = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-5.0,5.0);
      local_14 = local_38.z;
      body_part = core_bodypart_cpp_createBodyPart_FUN_00414550
                            (local_28,local_2c,&local_38,(CDemonActor *)this_ptr,1,1,BLOOD_TYPE_NONE
                            );
      core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00430590
                ((CCharacter *)this_ptr,body_part,local_1c,1);
      body_part->dont_pick_me_up = 1;
      core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_004157c0(body_part);
      *(CBodyPart **)&local_20->field_0xd134 = body_part;
      pCVar5 = &(body_part->base).location;
      pfVar3 = (float *)(local_24 + local_1c * 0x48);
      if ((CLocation *)pfVar3 != pCVar5) {
        *pfVar3 = (pCVar5->position).x;
        pfVar3[1] = (body_part->base).location.position.y;
        pfVar3[2] = (body_part->base).location.position.z;
      }
      pUVar1 = &(body_part->base).orient;
      if ((UOrientationVector *)pfVar6 != pUVar1) {
        *pfVar6 = (pUVar1->vec).x;
        pfVar6[1] = (body_part->base).orient.vec.y;
        pfVar6[2] = (body_part->base).orient.vec.z;
      }
      pfVar6 = pfVar6 + 0x12;
      core_xform_cpp_FUN_005860b0(&(body_part->base).orient);
      pCVar4 = (CBoneGuy *)((local_20->base).base.base.orient_matrix.m + 1);
      local_1c = local_1c + 1;
      puVar7 = (uint *)((int)local_20 + (uint)bVar9 * -8 + 0xd11c);
      *(uint *)&local_20->field_0xd118 = local_48;
      puVar8 = puVar7 + (uint)bVar9 * -2 + 1;
      *puVar7 = *(uint *)(&stack0xffffffbc + (uint)bVar9 * -8);
      *puVar8 = *(uint *)(&stack0xffffffc0 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
      puVar8[(uint)bVar9 * -2 + 1] =
           *(uint *)
            ((int)(&stack0xffffffc0 + (uint)bVar9 * -8 + (uint)bVar9 * -8) +
            ((uint)bVar9 * -2 + 1) * 4);
      local_20 = pCVar4;
    } while (local_1c < local_18->num_parts);
  }
  (*((this_ptr->base).base.base.vtable._ub)->playSound)
            ((CDemonActor *)this_ptr,"boneguy-fallapart.wav");
  return;
}
