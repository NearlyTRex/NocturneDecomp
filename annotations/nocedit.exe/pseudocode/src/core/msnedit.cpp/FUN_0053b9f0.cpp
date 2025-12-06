// Name: core_msnedit.cpp_FUN_0053b9f0
// Address: 0053b9f0
// Address Range: [[0053b9f0, 0053bc79]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_FUN_0053b9f0()

#include "nocturne.h"

/* Signature: byte core_msnedit.cpp_FUN_0053b9f0(uint param_1) */

void core_msnedit_cpp_FUN_0053b9f0(void)

{
  char cVar1;
  CDemonActor *this_ptr;
  float *pfVar2;
  BADSPACEBASE *in_ESP;
  int iVar3;
  CDemonActor *pCVar4;
  int iVar5;
  char *pcVar6;
  CDemonMission *in_stack_0000001c;
  CDemonMission *in_stack_00000038;
  CDemonMission *in_stack_0000003c;
  uint in_stack_00000080;
  CStrList_vtable *pCStack_43c;
  uint in_stack_fffffbec;
  uint in_stack_fffffbf0;
  uint in_stack_fffffbf4;
  uint in_stack_fffffbf8;
  uint in_stack_fffffbfc;
  uint in_stack_fffffc00;
  uint in_stack_fffffc04;
  CDemonActor *in_stack_fffffc38;
  uint in_stack_fffffc3c;
  char **in_stack_fffffc40;
  CStrList_vtable *in_stack_fffffc44;
  uint in_stack_fffffc48;
  uint in_stack_fffffc4c;
  uint in_stack_fffffc50;
  char acStack_90 [4];
  char acStack_8c [120];
  char acStack_14 [4];
  
  iVar3 = 0;
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffbb8);
  if (0 < g_NumActorClassTypes) {
    iVar5 = 0;
    do {
      if (*(int *)(*(int *)((int)g_ActorClassRegistrations + iVar5) + 0x2c) != 0) {
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffffbbc,
                   (char *)(*(int *)((int)g_ActorClassRegistrations + iVar5) + 1));
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar3 < g_NumActorClassTypes);
  }
  shape_edittool_cpp_CStrList_sort_FUN_004a2ec0((CStrList *)&stack0xfffffbbc);
  iVar3 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                    ((CPickList *)&stack0xfffffbc0,"Choose type of actor to create",DAT_00680648,
                     0);
  if (-1 < iVar3) {
    DAT_00680648 = iVar3;
    pCStack_43c = (CStrList_vtable *)
                  shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                            ((CStrList *)&pCStack_43c,iVar3);
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_90,"C%s");
    pCStack_43c = (CStrList_vtable *)0x53baa0;
    this_ptr = core_actor_cpp_createActorByName_FUN_0040c430(acStack_8c);
    pCStack_43c = (CStrList_vtable *)0x53bab5;
    core_mission_cpp_CDemonMission_initNewActorMaybe_FUN_00524700(in_stack_0000001c);
    core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044c430(&g_CDemonCameraInstance,1);
    (this_ptr->location).area_id = *(int *)in_stack_0000001c->field0_0x0;
    pfVar2 = (float *)core_msnedit_cpp_FUN_00535c60();
    (this_ptr->location).position.x = *pfVar2;
    (this_ptr->location).position.y = pfVar2[1];
    (this_ptr->location).position.z = pfVar2[2];
    core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80(&g_CDemonCameraInstance,0);
    if (g_ConfirmNewActorNames != 0) {
      pcVar6 = acStack_14;
      pCVar4 = this_ptr;
      do {
        cVar1 = pCVar4->actor_name[0];
        *pcVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pCVar4->actor_name[1];
        pCVar4 = (CDemonActor *)(pCVar4->actor_name + 2);
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
      do {
        iVar3 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                          (g_CEditorToolsPtr,"Confirm new actor name",acStack_14,0x1e,1);
        if (iVar3 == 0) {
          g_CurrentDebugLine = 0x8ff;
          g_CurrentDebugFilename = "..\\core\\msnedit.cpp";
          if (this_ptr != (CDemonActor *)0x0) {
            (*this_ptr->vtable->dtor)
                      (this_ptr,2,(uint)in_stack_fffffc38,in_stack_fffffc3c,(uint)in_stack_fffffc40,
                       (uint)in_stack_fffffc44,in_stack_fffffc48,in_stack_fffffc4c,in_stack_fffffc50
                      );
          }
          goto LAB_0053bc0f;
        }
        iVar3 = core_msnedit_cpp_FUN_0053d220(g_CDemonMissionPtr);
      } while (iVar3 == 0);
      pcVar6 = &stack0x00000048;
      pCVar4 = this_ptr;
      do {
        cVar1 = *pcVar6;
        pCVar4->actor_name[0] = cVar1;
        in_stack_fffffc38 = this_ptr;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pCVar4->actor_name[1] = cVar1;
        pCVar4 = (CDemonActor *)(pCVar4->actor_name + 2);
      } while (cVar1 != '\0');
    }
    iVar3 = (*this_ptr->vtable->initializeInEditor)(this_ptr);
    if (iVar3 == 0) {
      g_CurrentDebugLine = 0x906;
      g_CurrentDebugFilename = "..\\core\\msnedit.cpp";
      (*this_ptr->vtable->dtor)
                (this_ptr,2,in_stack_fffffbec,in_stack_fffffbf0,in_stack_fffffbf4,in_stack_fffffbf8,
                 in_stack_fffffbfc,in_stack_fffffc00,in_stack_fffffc04);
    }
    else {
      core_mission_cpp_CDemonMission_FUN_00523b70(in_stack_00000038);
      core_mission_cpp_CDemonMission_buildSetActorList_FUN_00523e60(in_stack_0000003c);
      (*this_ptr->vtable->setup)(this_ptr);
      core_msnedit_cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140();
    }
  }
LAB_0053bc0f:
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)&stack0xfffffc38,0,(uint)in_stack_fffffc38,in_stack_fffffc3c,
             (uint)in_stack_fffffc40,(uint)in_stack_fffffc44,in_stack_fffffc48);
  return;
}
