// Name: core_bodypart.cpp_FUN_004154f0
// Address: 004154f0
// Address Range: [[004154f0, 004156a3]]
// Convention: __cdecl
// Signature: CBodyPart * __cdecl core_bodypart_cpp_FUN_004154f0(CVector3f *position,UOrientationVector *orientation,CVector3f *initial_velocity,CDemonActor *scale_source,int dont_use_normals,int is_transparent,EBloodType blood_type)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CBodyPart * __cdecl core_bodypart_cpp_FUN_004154f0(CVector3f *position,UOrientationVector *orientation,CVector3f *initial_velocity,CDemonActor *scale_source,int dont_use_normals,int is_transparent,EBloodType blood_type)

{
  CBodyPart *this_ptr;
  CBodyPart *this_ptr_00;
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  this_ptr = (CBodyPart *)FUN_005b8be2(0x1344);
  this_ptr_00 = (CBodyPart *)0x0;
  if (this_ptr != (CBodyPart *)0x0) {
    this_ptr_00 = core_bodypart_cpp_CBodyPart_ctor_FUN_004156e0(this_ptr);
  }
  if (this_ptr_00 == (CBodyPart *)0x0) {
    _DAT_01d046a0 = "..\\core\\bodypart.cpp";
    _DAT_01d046a4 = 0x32;
    core_main_c_FUN_004e4500("Can't create body part!");
  }
  *(uint *)&this_ptr_00->field_0x20 = *(uint *)position;
  *(uint *)&this_ptr_00->field_0x24 = *(uint *)&position->field_0x4;
  *(uint *)&this_ptr_00->field_0x28 = *(uint *)&position->field_0x8;
  if ((UOrientationVector *)&this_ptr_00->field_0x30 != orientation) {
    *(uint *)&this_ptr_00->field_0x30 = *(uint *)orientation;
    *(uint *)&this_ptr_00->field_0x34 = *(uint *)((int)orientation + 4);
    *(uint *)&this_ptr_00->field_0x38 = *(uint *)((int)orientation + 8);
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0((CDemonActor *)this_ptr_00);
  if (initial_velocity == (CVector3f *)0x0) {
    fVar1 = (float)core_actor_cpp_FUN_0040cf60(0x3f490fdb,0x3fc90fdb);
    fVar2 = (float)core_actor_cpp_FUN_0040cf60(0,0x40c90fdb);
    fVar3 = (float10)fcos((float10)fVar2);
    fVar4 = (float10)fcos((float10)fVar1);
    fVar5 = (float10)fsin((float10)fVar2);
    fVar6 = (float10)fsin((float10)fVar1);
    fVar7 = (float10)_DAT_005cbd52;
    *(float *)&this_ptr_00->field_0x3e0 = (float)(fVar6 * fVar7);
    *(float *)&this_ptr_00->field_0x3dc = (float)(fVar3 * fVar7 * fVar4);
    *(float *)&this_ptr_00->field_0x3e4 = (float)(fVar5 * fVar7 * fVar4);
  }
  else if ((CVector3f *)&this_ptr_00->field_0x3dc != initial_velocity) {
    *(uint *)&this_ptr_00->field_0x3dc = *(uint *)initial_velocity;
    *(uint *)&this_ptr_00->field_0x3e0 = *(uint *)&initial_velocity->field_0x4;
    *(uint *)&this_ptr_00->field_0x3e4 = *(uint *)&initial_velocity->field_0x8;
  }
  core_mission_cpp_CDemonMission_generateActorName_FUN_004fcda0
            (0x01D182F0,(CDemonActor *)this_ptr_00);
  core_mission_cpp_CDemonMission_addActorToList_FUN_004fc200
            (0x01D182F0,(CDemonActor *)this_ptr_00);
  if (scale_source != (CDemonActor *)0x0) {
    *(uint *)&this_ptr_00->field_0x108 = *(uint *)&scale_source->field_0x108;
    *(uint *)&this_ptr_00->field_0x10c = *(uint *)&scale_source->field_0x10c;
    *(uint *)&this_ptr_00->field_0x110 = *(uint *)&scale_source->field_0x110;
  }
  *(int *)&this_ptr_00->field_0x10c4 = dont_use_normals;
  *(int *)&this_ptr_00->field_0xfc = is_transparent;
  *(int *)&this_ptr_00->field_0x10c8 = is_transparent;
  *(EBloodType *)&this_ptr_00->field_0x10cc = blood_type;
  return this_ptr_00;
}
