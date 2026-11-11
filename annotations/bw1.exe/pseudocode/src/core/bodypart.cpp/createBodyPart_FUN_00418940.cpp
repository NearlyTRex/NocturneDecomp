// Name: core_bodypart.cpp_createBodyPart_FUN_00418940
// Address: 00418940
// Address Range: [[00418940, 00418b0d]]
// Convention: __cdecl
// Signature: CBodyPart * __cdecl core_bodypart_cpp_createBodyPart_FUN_00418940(CVector3f *position,UOrientationVector *orientation,CVector3f *initial_velocity,CDemonActor *scale_source,int dont_use_normals,int is_transparent,EBloodType blood_type)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CBodyPart * __cdecl core_bodypart_cpp_createBodyPart_FUN_00418940(CVector3f *position,UOrientationVector *orientation,CVector3f *initial_velocity,CDemonActor *scale_source,int dont_use_normals,int is_transparent,EBloodType blood_type)

{
  UOrientationVector *pUVar1;
  CBodyPart *this_ptr;
  int iVar2;
  CBodyPart *this_ptr_00;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  
  this_ptr = (CBodyPart *)operator_new(0xf34);
  this_ptr_00 = (CBodyPart *)0x0;
  if (this_ptr != (CBodyPart *)0x0) {
    this_ptr_00 = core_bodypart_cpp_CBodyPart_ctor_FUN_00418b40(this_ptr);
  }
  if (this_ptr_00 == (CBodyPart *)0x0) {
    _DAT_01d1d400 = "..\\core\\bodypart.cpp";
    _DAT_01d1d404 = 0x32;
    core_main_c_FUN_005030e0("Can't create body part!");
  }
  (this_ptr_00->base).location.position.x = position->x;
  (this_ptr_00->base).location.position.y = position->y;
  (this_ptr_00->base).location.position.z = position->z;
  pUVar1 = &(this_ptr_00->base).orient;
  if (pUVar1 != orientation) {
    (pUVar1->vec).x = (orientation->vec).x;
    (this_ptr_00->base).orient.vec.y = (orientation->vec).y;
    (this_ptr_00->base).orient.vec.z = (orientation->vec).z;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0(&this_ptr_00->base);
  if (scale_source == (CDemonActor *)0x0) {
    iVar2 = 0x01D2C900->current_set_index;
  }
  else {
    iVar2 = (scale_source->location).area_id;
  }
  (this_ptr_00->base).location.area_id = iVar2;
  if (initial_velocity == (CVector3f *)0x0) {
    fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.7853982,1.5707964);
    fVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.0,6.2831855);
    fVar5 = (float10)fcos((float10)fVar4);
    fVar6 = (float10)fcos((float10)fVar3);
    fVar7 = (float10)fsin((float10)fVar4);
    fVar8 = (float10)fsin((float10)fVar3);
    fVar9 = (float10)_DAT_005d42b1;
    (this_ptr_00->initial_velocity).y = (float)(fVar8 * fVar9);
    (this_ptr_00->initial_velocity).x = (float)(fVar5 * fVar9 * fVar6);
    (this_ptr_00->initial_velocity).z = (float)(fVar7 * fVar9 * fVar6);
  }
  else if (&this_ptr_00->initial_velocity != initial_velocity) {
    (this_ptr_00->initial_velocity).x = initial_velocity->x;
    (this_ptr_00->initial_velocity).y = initial_velocity->y;
    (this_ptr_00->initial_velocity).z = initial_velocity->z;
  }
  core_mission_cpp_CDemonMission_generateActorName_FUN_0051bd60(0x01D2C900,&this_ptr_00->base);
  core_mission_cpp_CDemonMission_addActorToList_FUN_0051b160(0x01D2C900,&this_ptr_00->base);
  if (scale_source != (CDemonActor *)0x0) {
    (this_ptr_00->base).scale.x = (scale_source->scale).x;
    (this_ptr_00->base).scale.y = (scale_source->scale).y;
    (this_ptr_00->base).scale.z = (scale_source->scale).z;
  }
  this_ptr_00->dont_use_normals = dont_use_normals;
  (this_ptr_00->base).is_transparent = is_transparent;
  this_ptr_00->transparent_geometry_flag = is_transparent;
  this_ptr_00->blood_type = blood_type;
  return this_ptr_00;
}
