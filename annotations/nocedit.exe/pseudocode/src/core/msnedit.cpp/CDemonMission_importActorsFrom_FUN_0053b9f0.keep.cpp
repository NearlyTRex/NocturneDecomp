// Name: core_msnedit.cpp_CDemonMission_importActorsFrom_FUN_0053b9f0
// Address: 0053b9f0
// MANUAL RECONSTRUCTION
// Address Range: [[0053b9f0, 0053bc79]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_importActorsFrom_FUN_0053b9f0(CDemonMission *this_ptr)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_CDemonMission_importActorsFrom_FUN_0053b9f0(CDemonMission *this_ptr)

{
  int iVar3;
  char *pcVar2;
  CDemonActor *actor;
  CVector3f *pCVar3;
  int iVar4;
  CPickList CStack_448;
  char local_a0 [100];
  char local_3c [32];
  CVector3f local_1c;

  iVar4 = 0;
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&CStack_448);
  if (0 < g_NumActorClassTypes) {
    do {
      if (g_ActorClassRegistrations[iVar4]->factory_func != (CDemonActor_FactoryFunc *)0x0) {
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  (&CStack_448.base,g_ActorClassRegistrations[iVar4]->class_name + 1);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < g_NumActorClassTypes);
  }
  shape_edittool_cpp_CStrList_sortAll_FUN_004a2ec0(&CStack_448.base);
  iVar3 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                    (&CStack_448,"Choose type of actor to create",INT_00680648,0);
  if (-1 < iVar3) {
    INT_00680648 = iVar3;
    pcVar2 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&CStack_448.base,iVar3);
    _sprintf(local_a0,"C%s",pcVar2);
    actor = core_actor_cpp_createActorByName_FUN_0040c430(local_a0);
    core_mission_cpp_CDemonMission_generateActorName_FUN_00524700(this_ptr,actor);
    core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044c430(&g_CDemonCameraInstance,1);
    (actor->location).area_id = this_ptr->current_set_index;
    pCVar3 = core_msnedit_cpp_screenToWorldPosition_FUN_00535c60
                       (&local_1c,((this_ptr->viewport).left + (this_ptr->viewport).right) / 2,
                        ((this_ptr->viewport).top + (this_ptr->viewport).bottom) / 2);
    (actor->location).position = *pCVar3;
    core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80(&g_CDemonCameraInstance,0);
    if (g_ConfirmNewActorNames != 0) {
      strcpy(local_3c,actor->actor_name);
      do {
        iVar3 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                          (g_CEditorToolsPtr,"Confirm new actor name",local_3c,0x1e,1);
        if (iVar3 == 0) {
          g_CurrentDebugLine = 0x8ff;
          g_CurrentDebugFilename = "..\\core\\msnedit.cpp";
          if (actor != (CDemonActor *)0x0) {
            (*((actor->vtable)._ub)->dtor)(actor,2);
          }
          goto LAB_0053bc0f;
        }
        iVar3 = core_msnedit_cpp_CDemonMission_validateNewActorName_FUN_0053d220
                          (g_CDemonMissionPtr,actor->actor_name,local_3c);
      } while (iVar3 == 0);
      strcpy(actor->actor_name,local_3c);
    }
    iVar3 = (*((actor->vtable)._ub)->initializeInEditor)(actor);
    if (iVar3 == 0) {
      g_CurrentDebugLine = 0x906;
      g_CurrentDebugFilename = "..\\core\\msnedit.cpp";
      (*((actor->vtable)._ub)->dtor)(actor,2);
    }
    else {
      core_mission_cpp_CDemonMission_addActorToList_FUN_00523b70(this_ptr,actor);
      core_mission_cpp_CDemonMission_buildSetActorList_FUN_00523e60(this_ptr);
      (*((actor->vtable)._ub)->setup)(actor);
      core_msnedit_cpp_CDemonMission_selectActor_FUN_0053c140(this_ptr,actor);
    }
  }
LAB_0053bc0f:
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&CStack_448,0);
  return;
}
