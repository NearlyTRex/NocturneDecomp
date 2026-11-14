// Name: core_construc.cpp_CConstruct_archive_FUN_00437b80
// Address: 00437b80
// Address Range: [[00437b80, 00437dda]]
// Convention: __cdecl
// Signature: void __cdecl core_construc_cpp_CConstruct_archive_FUN_00437b80(CConstruct *this_ptr)

#include "nocturne.h"

void __cdecl core_construc_cpp_CConstruct_archive_FUN_00437b80(CConstruct *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  int iVar1;
  CQuaternion4f *quat_ptr;
  CBodyPart **actor_ptr;
  CQuaternion4f *quat_ptr_00;
  CVector3f CStack_28;
  int iStack_1c;
  float fStack_18;
  SBoneGuyBox *pSStack_14;
  CVector3f *pCStack_10;
  CVector3f *pCStack_c;
  
  core_enemy_cpp_CEnemy_archive_FUN_00487ec0(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&(this_ptr->base).speed,"@speed" + 1);
  model_ptr = &(this_ptr->base).base.model;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040bae0(model_ptr,"modelName");
  core_actor_cpp_archiveMotionState_FUN_0040bb60(&model_ptr->base,"motion state");
  core_actor_cpp_archiveString_FUN_0040b730(this_ptr->fall_event,"fallEvent");
  if (g_CConstructClassVersion < 3) {
    iStack_1c = 0;
    fStack_18 = 0.0;
    CStack_28.z = 0.0;
    CStack_28.y = 0.0;
    CStack_28.x = 0.0;
    core_actor_cpp_archiveInteger_FUN_0040b960(&iStack_1c,"mistState");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&fStack_18,"vanishTimer");
    core_actor_cpp_archiveVector_FUN_0040b4b0(&CStack_28,"newPos");
    if (g_CConstructClassVersion < 2) {
      return;
    }
  }
  else if (g_CConstructClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040b730(this_ptr->death_event,"deathEvent");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->recombine_time,"recombineTime");
  core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->blown_up,"blownUp");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->recombine_interpolation,"param");
  core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->box_count,"boxCount");
  core_actor_cpp_archivePartStatus_FUN_0040bc50(&(this_ptr->base).base.model,"partStatus");
  iVar1 = 0;
  if (this_ptr->box_count < 1) {
    return;
  }
  pSStack_14 = this_ptr->boxes;
  pCStack_10 = &this_ptr->boxes[0].source_pos;
  actor_ptr = &this_ptr->boxes[0].body_part;
  quat_ptr = &this_ptr->boxes[0].start_orient;
  pCStack_c = &this_ptr->boxes[0].orient;
  quat_ptr_00 = &this_ptr->boxes[0].dest_orient;
  do {
    core_actor_cpp_archiveVector_FUN_0040b4b0(&pSStack_14[iVar1].pos,"boxListPos");
    core_actor_cpp_archiveVector_FUN_0040b4b0(pCStack_c,"boxListOrient");
    core_actor_cpp_archiveQuaternion_FUN_0040b690(quat_ptr_00,"boxListDestOrient");
    core_actor_cpp_archiveQuaternion_FUN_0040b690(quat_ptr,"boxListStartOrient");
    core_actor_cpp_archiveVector_FUN_0040b4b0(pCStack_10,"sourcePos");
    iVar1 = iVar1 + 1;
    quat_ptr_00 = (CQuaternion4f *)&quat_ptr_00[4].y;
    quat_ptr = (CQuaternion4f *)&quat_ptr[4].y;
    core_actor_cpp_archiveActor_FUN_0040b9e0((CDemonActor **)actor_ptr,"boxListPart");
    actor_ptr = actor_ptr + 0x12;
    pCStack_10 = pCStack_10 + 6;
    pCStack_c = pCStack_c + 6;
  } while (iVar1 < this_ptr->box_count);
  return;
}
