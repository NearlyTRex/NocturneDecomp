// Name: core_boneguy.cpp_CBoneGuy_explode_FUN_0041d680
// Address: 0041d680
// Address Range: [[0041d680, 0041d72f] [0041d853, 0041d89c]]
// Convention: __cdecl
// Signature: void __cdecl core_boneguy_cpp_CBoneGuy_explode_FUN_0041d680(CBoneGuy *this_ptr)

#include "nocturne.h"

void __cdecl core_boneguy_cpp_CBoneGuy_explode_FUN_0041d680(CBoneGuy *this_ptr)

{
  COrientation *pCVar1;
  int iVar2;
  CBodyPart *this_ptr_00;
  CVector3f *pCVar3;
  CBoneGuy *pCVar4;
  CLocation *pCVar5;
  CVector3f *pCVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  byte bVar10;
  float afStackY_1824 [1523];
  CQuaternion4f local_48;
  float local_38;
  float local_34;
  float local_30;
  COrientation *local_2c;
  CLocation *local_28;
  CDeformableModel *local_24;
  CVector3f *local_20;
  CBoneGuy *local_1c;
  int local_18;
  float local_14;
  
  bVar10 = 0;
  core_charactr_cpp_CCharacter_FUN_0042d060((CCharacter *)this_ptr);
  this_ptr->blown_up = 1;
  this_ptr->param = 0.0;
  local_24 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
                       (&(this_ptr->base).base.model);
  iVar2 = local_24->num_parts;
  this_ptr->box_count = iVar2;
  if (0x14 < iVar2) {
    g_CurrentFilename = "..\\core\\boneguy.cpp";
    g_CurrentLineNumber = 0x443;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CBoneGuy::explode - Not enough containers");
  }
  local_18 = 0;
  if (0 < local_24->num_parts) {
    local_20 = &this_ptr->box_list_pos;
    local_2c = &(this_ptr->base).base.base.orient;
    local_28 = &(this_ptr->base).base.base.location;
    pCVar6 = &this_ptr->box_list_orient;
    local_1c = this_ptr;
    do {
      local_38 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-5.0,5.0);
      local_14 = local_38;
      local_34 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,10.0);
      local_14 = local_34;
      local_30 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-5.0,5.0);
      local_14 = local_30;
      this_ptr_00 = core_bodypart_cpp_createBodyPart_FUN_00418e10();
      core_charactr_cpp_CCharacter_FUN_0042bd30((CCharacter *)this_ptr);
      this_ptr_00->dont_pick_me_up = 1;
      core_bodypart_cpp_CBodyPart_FUN_0041a050(this_ptr_00);
      *(CBodyPart **)local_1c->unk2 = this_ptr_00;
      pCVar5 = &(this_ptr_00->base).location;
      pCVar3 = local_20 + local_18 * 6;
      if ((CLocation *)pCVar3 != pCVar5) {
        pCVar3->x = (pCVar5->position).x;
        pCVar3->y = (this_ptr_00->base).location.position.y;
        pCVar3->z = (this_ptr_00->base).location.position.z;
      }
      pCVar1 = &(this_ptr_00->base).orient;
      if ((COrientation *)pCVar6 != pCVar1) {
        pCVar6->x = pCVar1->pitch;
        pCVar6->y = (this_ptr_00->base).orient.bank;
        pCVar6->z = (this_ptr_00->base).orient.heading;
      }
      pCVar6 = pCVar6 + 6;
      core_xform_cpp_eulerToQuaternion_FUN_005f7b20
                ((CVector3f *)&(this_ptr_00->base).orient,&local_48);
      pCVar4 = (CBoneGuy *)((local_1c->base).base.base.orient_matrix.m + 1);
      local_18 = local_18 + 1;
      puVar8 = (uint *)((int)local_1c + (uint)bVar10 * -8 + 49000);
      (local_1c->box_list_start_orient).w = local_48.w;
      puVar9 = puVar8 + (uint)bVar10 * -2 + 1;
      puVar7 = (uint *)((int)&local_48 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      *puVar8 = *(uint *)((int)&local_48 + (uint)bVar10 * -8 + 4);
      *puVar9 = *puVar7;
      puVar9[(uint)bVar10 * -2 + 1] = puVar7[(uint)bVar10 * -2 + 1];
      local_1c = pCVar4;
    } while (local_18 < local_24->num_parts);
  }
  (*((this_ptr->base).base.base.vtable._ub)->playSound)
            ((CDemonActor *)this_ptr,"boneguy-fallapart.wav");
  return;
}
