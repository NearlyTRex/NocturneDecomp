// Name: core_boneguy.cpp_CBoneGuy_explode_FUN_0041d680
// Address: 0041d680
// MANUAL RECONSTRUCTION
// Address Range: [[0041d680, 0041d89c]]
// Convention: __cdecl
// Signature: void __cdecl core_boneguy_cpp_CBoneGuy_explode_FUN_0041d680(CBoneGuy *this_ptr)

#include "nocturne.h"

void __cdecl core_boneguy_cpp_CBoneGuy_explode_FUN_0041d680(CBoneGuy *this_ptr)

{
  CDeformableModel *pCVar1;
  CBodyPart *body_part;
  SBoneGuyBox *pSVar3;
  CLocation *pCVar5;
  CQuaternion4f local_48;
  CVector3f local_38;
  int local_18;
  UOrientationVector *pUVar1;
  int iVar2;
  
  core_charactr_cpp_CCharacter_dropAllCarriedObjects_FUN_0042d060((CCharacter *)this_ptr);
  this_ptr->blown_up = 1;
  this_ptr->recombine_interpolation = 0.0;
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
                     (&(this_ptr->base).base.model);
  iVar2 = pCVar1->num_parts;
  this_ptr->box_count = iVar2;
  if (0x14 < iVar2) {
    g_CurrentFilename = "..\\core\\boneguy.cpp";
    g_CurrentLineNumber = 0x443;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CBoneGuy::explode - Not enough containers");
  }
  local_18 = 0;
  if (0 < pCVar1->num_parts) {
    do {
      local_38.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(-5.0,5.0);
      local_38.y = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(0.0,10.0);
      local_38.z = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(-5.0,5.0);
      body_part = core_bodypart_cpp_createBodyPart_FUN_00418e10
                            (&(this_ptr->base).base.base.location.position,
                             &(this_ptr->base).base.base.orient,&local_38,(CDemonActor *)this_ptr,1,
                             1,2);
      core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_0042bd30
                ((CCharacter *)this_ptr,body_part,local_18,0);
      body_part->dont_pick_me_up = 1;
      core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_0041a050(body_part);
      this_ptr->boxes[local_18].body_part = body_part;
      pCVar5 = &(body_part->base).location;
      pSVar3 = this_ptr->boxes + local_18;
      if (pSVar3 != (SBoneGuyBox *)pCVar5) {
        pSVar3->pos = (body_part->base).location.position;
      }
      pUVar1 = &(body_part->base).orient;
      if (&this_ptr->boxes[local_18].orient != (CVector3f *)pUVar1) {
        this_ptr->boxes[local_18].orient = (body_part->base).orient.vec;
      }
      core_xform_cpp_eulerToQuaternion_FUN_005f7b20(&(body_part->base).orient.vec,&local_48);
      this_ptr->boxes[local_18].start_orient = local_48;
      local_18 = local_18 + 1;
    } while (local_18 < pCVar1->num_parts);
  }
  (*((this_ptr->base).base.base.vtable._ub)->playSound)
            ((CDemonActor *)this_ptr,"boneguy-fallapart.wav");
  return;
}
