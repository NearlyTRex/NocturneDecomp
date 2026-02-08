// Name: core_msnedit.cpp_CDemonMission_importActorsFrom_FUN_0053b9f0
// Address: 0053b9f0
// Address Range: [[0053b9f0, 0053bc79]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_importActorsFrom_FUN_0053b9f0 (CDemonMission *this_ptr,CDemonMission *other)

#include "nocturne.h"

/* WARNING: Variable defined which should be unmapped: local_448 */

void __cdecl
core_msnedit_cpp_CDemonMission_importActorsFrom_FUN_0053b9f0
          (CDemonMission *this_ptr,CDemonMission *other)

{
  char cVar1;
  char *pcVar2;
  CDemonActor *actor;
  float *pfVar3;
  int iVar4;
  CDemonActor *pCVar5;
  int iVar6;
  CDemonMission *in_stack_0000000c;
  CPickList local_448;
  char local_a0 [100];
  char local_3c [32];
  float local_1c [3];
  
  iVar4 = 0;
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_448);
  if (0 < g_NumActorClassTypes) {
    iVar6 = 0;
    do {
      if (*(int *)(*(int *)((int)g_ActorClassRegistrations + iVar6) + 0x2c) != 0) {
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  (&local_448.base,(char *)(*(int *)((int)g_ActorClassRegistrations + iVar6) + 1));
      }
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 + 4;
    } while (iVar4 < g_NumActorClassTypes);
  }
  shape_edittool_cpp_CStrList_sort_FUN_004a2ec0(&local_448.base);
  iVar4 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                    (&local_448,"Choose type of actor to create",INT_00680648,0);
  if (-1 < iVar4) {
    INT_00680648 = iVar4;
    pcVar2 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_448.base,iVar4);
    _sprintf(local_a0,"C%s",pcVar2);
    actor = core_actor_cpp_createActorByName_FUN_0040c430(local_a0);
    core_mission_cpp_CDemonMission_generateActorName_FUN_00524700(this_ptr,actor);
    core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044c430(&g_CDemonCameraInstance,1);
    (actor->location).area_id = this_ptr->current_set_index;
    pfVar3 = core_msnedit_cpp_FUN_00535c60
                       (local_1c,(this_ptr->unk1 + this_ptr->unk3) / 2,
                        (this_ptr->unk2 + this_ptr->unk4) / 2);
    (actor->location).position.x = *pfVar3;
    (actor->location).position.y = pfVar3[1];
    (actor->location).position.z = pfVar3[2];
    core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80(&g_CDemonCameraInstance,0);
    if (g_ConfirmNewActorNames != 0) {
      pcVar2 = local_3c;
      pCVar5 = actor;
      do {
        cVar1 = pCVar5->actor_name[0];
        *pcVar2 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pCVar5->actor_name[1];
        pCVar5 = (CDemonActor *)(pCVar5->actor_name + 2);
        pcVar2[1] = cVar1;
        pcVar2 = pcVar2 + 2;
      } while (cVar1 != '\0');
      do {
        iVar4 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                          (g_CEditorToolsPtr,"Confirm new actor name",local_3c,0x1e,1);
        if (iVar4 == 0) {
          g_CurrentDebugLine = 0x8ff;
          g_CurrentDebugFilename = "..\\core\\msnedit.cpp";
          if (actor != (CDemonActor *)0x0) {
            (*((actor->vtable)._ub)->dtor)
                      (actor,2,local_448.base.item_count,local_448.base.capacity,
                       (uint)local_448.base.data_array,(uint)local_448.base.vtable,
                       local_448.unk1._0_4_,local_448.unk1._4_4_,local_448.unk1._8_4_);
          }
          goto LAB_0053bc0f;
        }
        iVar4 = core_msnedit_cpp_CDemonMission_FUN_0053d220(g_CDemonMissionPtr);
      } while (iVar4 == 0);
      pcVar2 = local_3c;
      pCVar5 = actor;
      do {
        cVar1 = *pcVar2;
        pCVar5->actor_name[0] = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pCVar5->actor_name[1] = cVar1;
        pCVar5 = (CDemonActor *)(pCVar5->actor_name + 2);
      } while (cVar1 != '\0');
    }
    iVar4 = (*((actor->vtable)._ub)->initializeInEditor)(actor);
    if (iVar4 == 0) {
      local_448.base.item_count = 2;
      g_CurrentDebugLine = 0x906;
      g_CurrentDebugFilename = "..\\core\\msnedit.cpp";
      (*((actor->vtable)._ub)->dtor)
                (actor,2,local_448.base.capacity,(uint)local_448.base.data_array,
                 (uint)local_448.base.vtable,local_448.unk1._0_4_,local_448.unk1._4_4_,
                 local_448.unk1._8_4_,local_448.unk1._12_4_);
    }
    else {
      local_448.base.item_count = (int)actor;
      core_mission_cpp_CDemonMission_addActorToList_FUN_00523b70(other,actor);
      local_448.base.item_count = (int)other;
      core_mission_cpp_CDemonMission_buildSetActorList_FUN_00523e60(other);
      local_448.base.item_count = (int)actor;
      (*((actor->vtable)._ub)->setup)(actor);
      local_448.base.item_count = (int)in_stack_0000000c;
      local_448.base.capacity = (int)actor;
      core_msnedit_cpp_CDemonMission_FUN_0053c140(in_stack_0000000c,(int)actor);
    }
  }
LAB_0053bc0f:
  local_448.unk1._16_4_ = local_448.unk1 + 0x18;
  local_448.unk1[0x14] = '\0';
  local_448.unk1[0x15] = '\0';
  local_448.unk1[0x16] = '\0';
  local_448.unk1[0x17] = '\0';
  local_448.unk1[0xc] = '\x1b';
  local_448.unk1[0xd] = -0x44;
  local_448.unk1[0xe] = 'S';
  local_448.unk1[0xf] = '\0';
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80((CPickList *)(local_448.unk1 + 0x18),0);
  return;
}
