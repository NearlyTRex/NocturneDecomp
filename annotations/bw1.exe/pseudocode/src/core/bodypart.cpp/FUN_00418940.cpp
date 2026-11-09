// Name: core_bodypart.cpp_FUN_00418940
// Address: 00418940
// Address Range: [[00418940, 00418b0d]]
// Convention: __cdecl
// Signature: CBodyPart * __cdecl core_bodypart_cpp_FUN_00418940(CVector3f *position,UOrientationVector *orientation,CVector3f *initial_velocity,CDemonActor *scale_source,int dont_use_normals,int is_transparent,EBloodType blood_type)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CBodyPart * __cdecl core_bodypart_cpp_FUN_00418940(CVector3f *position,UOrientationVector *orientation,CVector3f *initial_velocity,CDemonActor *scale_source,int dont_use_normals,int is_transparent,EBloodType blood_type)

{
  CBodyPart *this_ptr;
  uint uVar1;
  CBodyPart *this_ptr_00;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  this_ptr = (CBodyPart *)FUN_005c0f32(0xf34);
  this_ptr_00 = (CBodyPart *)0x0;
  if (this_ptr != (CBodyPart *)0x0) {
    this_ptr_00 = core_bodypart_cpp_CBodyPart_ctor_FUN_00418b40(this_ptr);
  }
  if (this_ptr_00 == (CBodyPart *)0x0) {
    _DAT_01d1d400 = "..\\core\\bodypart.cpp";
    _DAT_01d1d404 = 0x32;
    core_main_c_FUN_005030e0("Can't create body part!");
  }
  *(uint *)&this_ptr_00->field_0x20 = *(uint *)position;
  *(uint *)&this_ptr_00->field_0x24 = *(uint *)&position->field_0x4;
  *(uint *)&this_ptr_00->field_0x28 = *(uint *)&position->field_0x8;
  if ((UOrientationVector *)&this_ptr_00->field_0x30 != orientation) {
    *(uint *)&this_ptr_00->field_0x30 = *(uint *)orientation;
    *(uint *)&this_ptr_00->field_0x34 = *(uint *)((int)orientation + 4);
    *(uint *)&this_ptr_00->field_0x38 = *(uint *)((int)orientation + 8);
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0((CDemonActor *)this_ptr_00);
  if (scale_source == (CDemonActor *)0x0) {
    uVar1 = *(uint *)0x01D2C900;
  }
  else {
    uVar1 = *(uint *)&scale_source->field_0x2c;
  }
  *(uint *)&this_ptr_00->field_0x2c = uVar1;
  if (initial_velocity == (CVector3f *)0x0) {
    fVar2 = (float)core_actor_cpp_FUN_0040cc00(0x3f490fdb,0x3fc90fdb);
    fVar3 = (float)core_actor_cpp_FUN_0040cc00(0,0x40c90fdb);
    fVar4 = (float10)fcos((float10)fVar3);
    fVar5 = (float10)fcos((float10)fVar2);
    fVar6 = (float10)fsin((float10)fVar3);
    fVar7 = (float10)fsin((float10)fVar2);
    fVar8 = (float10)_DAT_005d42b1;
    *(float *)&this_ptr_00->field_0x284 = (float)(fVar7 * fVar8);
    *(float *)&this_ptr_00->field_0x280 = (float)(fVar4 * fVar8 * fVar5);
    *(float *)&this_ptr_00->field_0x288 = (float)(fVar6 * fVar8 * fVar5);
  }
  else if ((CVector3f *)&this_ptr_00->field_0x280 != initial_velocity) {
    *(uint *)&this_ptr_00->field_0x280 = *(uint *)initial_velocity;
    *(uint *)&this_ptr_00->field_0x284 = *(uint *)&initial_velocity->field_0x4;
    *(uint *)&this_ptr_00->field_0x288 = *(uint *)&initial_velocity->field_0x8;
  }
  core_mission_cpp_CDemonMission_generateActorName_FUN_0051bd60
            (0x01D2C900,(CDemonActor *)this_ptr_00);
  core_mission_cpp_CDemonMission_addActorToList_FUN_0051b160
            (0x01D2C900,(CDemonActor *)this_ptr_00);
  if (scale_source != (CDemonActor *)0x0) {
    *(uint *)&this_ptr_00->field_0x108 = *(uint *)&scale_source->field_0x108;
    *(uint *)&this_ptr_00->field_0x10c = *(uint *)&scale_source->field_0x10c;
    *(uint *)&this_ptr_00->field_0x110 = *(uint *)&scale_source->field_0x110;
  }
  *(int *)&this_ptr_00->field_0xcb0 = dont_use_normals;
  *(int *)&this_ptr_00->field_0xfc = is_transparent;
  *(int *)&this_ptr_00->field_0xcb4 = is_transparent;
  *(EBloodType *)&this_ptr_00->field_0xcb8 = blood_type;
  return this_ptr_00;
}
