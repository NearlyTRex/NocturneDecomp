// Name: core_bodypart.cpp_createBodyPart_FUN_00418e10
// Address: 00418e10
// MANUAL RECONSTRUCTION
// Address Range: [[00418e10, 00418fca]]
// Convention: __cdecl
// Signature: CBodyPart * __cdecl core_bodypart_cpp_createBodyPart_FUN_00418e10(CVector3f *position,UOrientationVector *orientation,CVector3f *initial_velocity,CDemonActor *scale_source,int dont_use_normals,int is_transparent,int blood_type)

#include "nocturne.h"

CBodyPart * __cdecl core_bodypart_cpp_createBodyPart_FUN_00418e10(CVector3f *position,UOrientationVector *orientation,CVector3f *initial_velocity,CDemonActor *scale_source,int dont_use_normals,int is_transparent,int blood_type)

{
  CBodyPart *this_ptr;
  CBodyPart *this_ptr_00;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  UOrientationVector *pUVar1;
  
  this_ptr = (CBodyPart *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0
                       (sizeof(CBodyPart),"..\\core\\bodypart.cpp",49);
  this_ptr_00 = (CBodyPart *)0x0;
  if (this_ptr != (CBodyPart *)0x0) {
    this_ptr_00 = core_bodypart_cpp_CBodyPart_ctor_FUN_00419010(this_ptr);
  }
  if (this_ptr_00 == (CBodyPart *)0x0) {
    g_CurrentFilename = "..\\core\\bodypart.cpp";
    g_CurrentLineNumber = 50;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't create body part!");
  }
  (this_ptr_00->base).location.position = *position;
  pUVar1 = &(this_ptr_00->base).orient;
  if (pUVar1 != orientation) {
    (this_ptr_00->base).orient.vec = orientation->vec;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&this_ptr_00->base);
  if (initial_velocity == (CVector3f *)0x0) {
    fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(0.7853982,1.5707964);
    fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(0.0,6.2831855);
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
    this_ptr_00->initial_velocity = *initial_velocity;
  }
  core_mission_cpp_CDemonMission_generateActorName_FUN_00524700
            (g_CDemonMissionPtr,&this_ptr_00->base);
  core_mission_cpp_CDemonMission_addActorToList_FUN_00523b70(g_CDemonMissionPtr,&this_ptr_00->base);
  if (scale_source != (CDemonActor *)0x0) {
    (this_ptr_00->base).scale = scale_source->scale;
  }
  this_ptr_00->dont_use_normals = dont_use_normals;
  (this_ptr_00->base).is_transparent = is_transparent;
  this_ptr_00->transparent_geometry_flag = is_transparent;
  this_ptr_00->blood_type = blood_type;
  return this_ptr_00;
}
