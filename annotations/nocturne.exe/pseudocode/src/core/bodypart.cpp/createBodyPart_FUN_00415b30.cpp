// Name: core_bodypart.cpp_createBodyPart_FUN_00415b30
// Address: 00415b30
// Address Range: [[00415b30, 00415ce3]]
// Convention: __cdecl
// Signature: CBodyPart * __cdecl core_bodypart_cpp_createBodyPart_FUN_00415b30(CVector3f *position,UOrientationVector *orientation,CVector3f *initial_velocity,CDemonActor *scale_source,int dont_use_normals,int is_transparent,int blood_type)

#include "nocturne.h"

CBodyPart * __cdecl core_bodypart_cpp_createBodyPart_FUN_00415b30(CVector3f *position,UOrientationVector *orientation,CVector3f *initial_velocity,CDemonActor *scale_source,int dont_use_normals,int is_transparent,int blood_type)

{
  UOrientationVector *pUVar1;
  CBodyPart *this_ptr;
  CBodyPart *this_ptr_00;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  this_ptr = (CBodyPart *)FUN_0056497c(0xf18);
  this_ptr_00 = (CBodyPart *)0x0;
  if (this_ptr != (CBodyPart *)0x0) {
    this_ptr_00 = core_bodypart_cpp_CBodyPart_ctor_FUN_00415d20(this_ptr);
  }
  if (this_ptr_00 == (CBodyPart *)0x0) {
    PTR_01cc4800 = "..\\core\\bodypart.cpp";
    INT_01cc4804 = 0x32;
    core_main_c_FUN_004c8440("Can't create body part!");
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
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000(&this_ptr_00->base);
  if (initial_velocity == (CVector3f *)0x0) {
    fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0.7853982,1.5707964);
    fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0.0,6.2831855);
    fVar4 = (float10)fcos((float10)fVar3);
    fVar5 = (float10)fcos((float10)fVar2);
    fVar6 = (float10)fsin((float10)fVar3);
    fVar7 = (float10)fsin((float10)fVar2);
    fVar8 = (float10)10.0f;
    (this_ptr_00->initial_velocity).y = (float)(fVar7 * fVar8);
    (this_ptr_00->initial_velocity).x = (float)(fVar4 * fVar8 * fVar5);
    (this_ptr_00->initial_velocity).z = (float)(fVar6 * fVar8 * fVar5);
  }
  else if (&this_ptr_00->initial_velocity != initial_velocity) {
    (this_ptr_00->initial_velocity).x = initial_velocity->x;
    (this_ptr_00->initial_velocity).y = initial_velocity->y;
    (this_ptr_00->initial_velocity).z = initial_velocity->z;
  }
  core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720(0x01CC9450,&this_ptr_00->base);
  core_mission_cpp_CDemonMission_addActorToList_FUN_004d8c60(0x01CC9450,&this_ptr_00->base);
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
