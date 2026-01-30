// Name: core_msnedit.cpp_CDemonMission_FUN_0053b9f0
// Address: 0053b9f0
// Address Range: [[0053b9f0, 0053bc79]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053b9f0(CDemonMission *this_ptr,CDemonMission *param_2)

#include "nocturne.h"

void __cdecl
core_msnedit_cpp_CDemonMission_FUN_0053b9f0(CDemonMission *this_ptr,CDemonMission *param_2)

{
  char cVar1;
  char *pcVar2;
  CDemonActor *this_ptr_00;
  float *pfVar3;
  int iVar4;
  CDemonActor *pCVar5;
  int iVar6;
  CDemonMission *in_stack_0000000c;
  uint in_stack_fffffbb8;
  uint in_stack_fffffbbc;
  char **in_stack_fffffbc0;
  CStrList_vtable *in_stack_fffffbc4;
  uint in_stack_fffffbc8;
  uint in_stack_fffffbcc;
  uint in_stack_fffffbd0;
  uint in_stack_fffffbd4;
  uint in_stack_fffffbe0;
  uint in_stack_fffffbe4;
  char **in_stack_fffffbe8;
  CStrList_vtable *in_stack_fffffbec;
  uint in_stack_fffffbf0;
  char local_a0 [100];
  char local_3c [32];
  float local_1c [3];
  
  iVar4 = 0;
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffbb8);
  if (0 < g_NumActorClassTypes) {
    iVar6 = 0;
    do {
      if (*(int *)(*(int *)((int)g_ActorClassRegistrations + iVar6) + 0x2c) != 0) {
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffffbb8,
                   (char *)(*(int *)((int)g_ActorClassRegistrations + iVar6) + 1));
      }
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 + 4;
    } while (iVar4 < g_NumActorClassTypes);
  }
  shape_edittool_cpp_CStrList_sort_FUN_004a2ec0((CStrList *)&stack0xfffffbb8);
  iVar4 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                    ((CPickList *)&stack0xfffffbb8,"Choose type of actor to create",INT_00680648,
                     0);
  if (-1 < iVar4) {
    INT_00680648 = iVar4;
    pcVar2 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                       ((CStrList *)&stack0xfffffbb8,iVar4);
    sprintf(local_a0,"C%s",pcVar2);
    this_ptr_00 = core_actor_cpp_createActorByName_FUN_0040c430(local_a0);
    core_mission_cpp_CDemonMission_initNewActorMaybe_FUN_00524700(this_ptr);
    core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044c430(&g_CDemonCameraInstance,1);
    (this_ptr_00->location).area_id = *(int *)this_ptr->unk1;
    pfVar3 = core_msnedit_cpp_FUN_00535c60
                       (local_1c,(*(int *)(this_ptr->unk2 + 8) + *(int *)(this_ptr->unk2 + 0x10)) /
                                 2,
                        (*(int *)(this_ptr->unk2 + 0xc) + *(int *)(this_ptr->unk2 + 0x14)) / 2);
    (this_ptr_00->location).position.x = *pfVar3;
    (this_ptr_00->location).position.y = pfVar3[1];
    (this_ptr_00->location).position.z = pfVar3[2];
    core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80(&g_CDemonCameraInstance,0);
    if (g_ConfirmNewActorNames != 0) {
      pcVar2 = local_3c;
      pCVar5 = this_ptr_00;
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
          if (this_ptr_00 != (CDemonActor *)0x0) {
            (*((this_ptr_00->vtable)._ub)->dtor)
                      (this_ptr_00,2,in_stack_fffffbb8,in_stack_fffffbbc,(uint)in_stack_fffffbc0,
                       (uint)in_stack_fffffbc4,in_stack_fffffbc8,in_stack_fffffbcc,in_stack_fffffbd0
                      );
          }
          goto LAB_0053bc0f;
        }
        iVar4 = core_msnedit_cpp_CDemonMission_FUN_0053d220(g_CDemonMissionPtr);
      } while (iVar4 == 0);
      pcVar2 = local_3c;
      pCVar5 = this_ptr_00;
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
    iVar4 = (*((this_ptr_00->vtable)._ub)->initializeInEditor)(this_ptr_00);
    if (iVar4 == 0) {
      g_CurrentDebugLine = 0x906;
      g_CurrentDebugFilename = "..\\core\\msnedit.cpp";
      (*((this_ptr_00->vtable)._ub)->dtor)
                (this_ptr_00,2,in_stack_fffffbbc,(uint)in_stack_fffffbc0,(uint)in_stack_fffffbc4,
                 in_stack_fffffbc8,in_stack_fffffbcc,in_stack_fffffbd0,in_stack_fffffbd4);
    }
    else {
      core_mission_cpp_CDemonMission_FUN_00523b70(param_2);
      core_mission_cpp_CDemonMission_buildSetActorList_FUN_00523e60(param_2);
      (*((this_ptr_00->vtable)._ub)->setup)(this_ptr_00);
      core_msnedit_cpp_CDemonMission_FUN_0053c140(in_stack_0000000c,(int)this_ptr_00);
    }
  }
LAB_0053bc0f:
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)&stack0xfffffbe0,0,in_stack_fffffbe0,in_stack_fffffbe4,
             (uint)in_stack_fffffbe8,(uint)in_stack_fffffbec,in_stack_fffffbf0);
  return;
}
