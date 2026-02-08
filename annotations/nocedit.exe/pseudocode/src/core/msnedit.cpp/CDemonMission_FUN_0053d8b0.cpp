// Name: core_msnedit.cpp_CDemonMission_FUN_0053d8b0
// Address: 0053d8b0
// Address Range: [[0053d8b0, 0053dce8]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053d8b0 (CDemonMission *this_ptr,int param_2,CDemonMission *param_3,int param_4)

#include "nocturne.h"

void __cdecl
core_msnedit_cpp_CDemonMission_FUN_0053d8b0
          (CDemonMission *this_ptr,int param_2,CDemonMission *param_3,int param_4)

{
  char cVar1;
  uint *puVar2;
  uint *puVar3;
  char *pcVar4;
  int iVar5;
  CDemonActor *pCVar6;
  int iVar7;
  int *piVar8;
  CDemonActor *unaff_ESI;
  int iVar9;
  CDemonActor *unaff_EDI;
  char *pcVar10;
  int in_stack_00000018;
  CDemonMission *in_stack_0000001c;
  int iStack_5014;
  int aiStack_5010 [2363];
  byte auStack_2b24 [9472];
  byte local_624 [936];
  char local_27c [500];
  char local_88 [104];
  CDemonActor *local_20;
  int *piVar11;
  
  if (this_ptr->selected_actor == (CDemonActor *)0x0) {
    return;
  }
  iVar9 = 0;
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)local_624);
  if (0 < g_NumActorClassTypes) {
    iVar7 = 0;
    do {
      if (*(int *)(*(int *)((int)g_ActorClassRegistrations + iVar7) + 0x2c) != 0) {
        pcVar4 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90(this_ptr->selected_actor)
        ;
        iVar5 = stricmp
                          (*(char **)((int)g_ActorClassRegistrations + iVar7),pcVar4);
        if (iVar5 != 0) {
          shape_edittool_cpp_CStrList_add_FUN_004a2b80
                    ((CStrList *)local_624,
                     (char *)(*(int *)((int)g_ActorClassRegistrations + iVar7) + 1));
        }
      }
      iVar9 = iVar9 + 1;
      iVar7 = iVar7 + 4;
    } while (iVar9 < g_NumActorClassTypes);
  }
  shape_edittool_cpp_CStrList_sort_FUN_004a2ec0((CStrList *)local_624);
  pcVar4 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90(this_ptr->selected_actor);
  _sprintf
            (local_27c,"Change %s of type %s to new type",this_ptr->selected_actor,pcVar4);
  iVar9 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                    ((CPickList *)local_624,local_27c,-1,0);
  if (-1 < iVar9) {
    pcVar4 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)local_624,iVar9);
    _sprintf(local_88,"C%s",pcVar4);
    pCVar6 = core_actor_cpp_createActorByName_FUN_0040c430(local_88);
    local_20 = pCVar6;
    (*((pCVar6->vtable)._ub)->setup)(pCVar6);
    iVar9 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                      (g_CEditorToolsPtr,"Attempt to transfer properties?");
    if (iVar9 != 0) {
      core_actor_cpp_CActorPropertyList_init_FUN_0040e130((CActorPropertyList *)auStack_2b24);
      core_actor_cpp_CActorPropertyList_init_FUN_0040e130((CActorPropertyList *)&stack0xffffafd8);
      (*((pCVar6->vtable)._ub)->getPropertyList)(pCVar6,(CActorPropertyList *)auStack_2b24);
      (*(((*(CDemonActor **)(param_4 + 0x28))->vtable)._ub)->getPropertyList)
                (*(CDemonActor **)(param_4 + 0x28),(CActorPropertyList *)&stack0xffffafe0);
      unaff_ESI = (CDemonActor *)0x0;
      if (0 < (int)auStack_2b24._20_4_) {
        piVar11 = (int *)(auStack_2b24 + 0x18);
        do {
          iVar9 = 0;
          if (0 < iStack_5014) {
            piVar8 = aiStack_5010;
            do {
              if ((*piVar8 == *piVar11) &&
                 (iVar7 = stricmp
                                    ((char *)(piVar8 + 1),(char *)(piVar11 + 1)), iVar7 == 0)) {
                switch(*piVar8) {
                case 0:
                case 0xf:
                  *(uint *)piVar11[0x1a] = *(uint *)piVar8[0x1a];
                  break;
                case 1:
                  *(uint *)piVar11[0x1a] = *(uint *)piVar8[0x1a];
                  break;
                case 2:
                  puVar2 = (uint *)piVar8[0x1a];
                  puVar3 = (uint *)piVar11[0x1a];
                  if (puVar3 != puVar2) {
                    *puVar3 = *puVar2;
                    puVar3[1] = puVar2[1];
                    puVar3[2] = puVar2[2];
                  }
                  break;
                case 3:
                case 8:
                case 10:
                case 0xb:
                case 0xc:
                  pcVar4 = (char *)piVar8[0x1a];
                  pcVar10 = (char *)piVar11[0x1a];
                  do {
                    cVar1 = *pcVar4;
                    *pcVar10 = cVar1;
                    if (cVar1 == '\0') break;
                    cVar1 = pcVar4[1];
                    pcVar4 = pcVar4 + 2;
                    pcVar10[1] = cVar1;
                    pcVar10 = pcVar10 + 2;
                  } while (cVar1 != '\0');
                  break;
                case 4:
                case 5:
                case 9:
                  *(uint *)piVar11[0x1a] = *(uint *)piVar8[0x1a];
                  break;
                case 6:
                  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
                            ((CKeyFramedModelInstance *)piVar11[0x1a],(char *)(piVar8[0x1a] + 0x78))
                  ;
                  break;
                case 7:
                  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
                            ((CDeformableModelInstance *)piVar11[0x1a],
                             (char *)(piVar8[0x1a] + 0x2260));
                }
              }
              iVar9 = iVar9 + 1;
              piVar8 = piVar8 + 0x3b;
            } while (iVar9 < iStack_5014);
          }
          piVar11 = piVar11 + 0x3b;
          unaff_ESI = (CDemonActor *)(unaff_ESI->actor_name + 1);
        } while ((int)unaff_ESI < (int)auStack_2b24._20_4_);
      }
    }
    pcVar4 = *(char **)(in_stack_00000018 + 0x28);
    pCVar6 = unaff_EDI;
    do {
      cVar1 = *pcVar4;
      pCVar6->actor_name[0] = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      pCVar6->actor_name[1] = cVar1;
      pCVar6 = (CDemonActor *)(pCVar6->actor_name + 2);
    } while (cVar1 != '\0');
    iVar9 = *(int *)(in_stack_00000018 + 0x28);
    (unaff_EDI->location).position.x = *(float *)(iVar9 + 0x20);
    (unaff_EDI->location).position.y = *(float *)(iVar9 + 0x24);
    (unaff_EDI->location).position.z = *(float *)(iVar9 + 0x28);
    (unaff_EDI->location).area_id = *(int *)(iVar9 + 0x2c);
    iVar9 = *(int *)(in_stack_00000018 + 0x28);
    if (&unaff_EDI->orient != (COrientation *)(iVar9 + 0x30)) {
      (unaff_EDI->orient).pitch = *(float *)(iVar9 + 0x30);
      (unaff_EDI->orient).bank = *(float *)(iVar9 + 0x34);
      (unaff_EDI->orient).heading = *(float *)(iVar9 + 0x38);
    }
    (*((unaff_EDI->vtable)._ub)->setup)(unaff_EDI);
    pCVar6 = in_stack_0000001c->selected_actor;
    core_msnedit_cpp_CDemonMission_FUN_0053c140(in_stack_0000001c,0);
    core_msnedit_cpp_CDemonMission_deleteActor_FUN_00538ea0(in_stack_0000001c,(int)pCVar6);
    core_mission_cpp_CDemonMission_removeActor_FUN_00523f20(in_stack_0000001c,pCVar6,1);
    core_mission_cpp_CDemonMission_addActorToList_FUN_00523b70(in_stack_0000001c,unaff_ESI);
    core_mission_cpp_CDemonMission_buildSetActorList_FUN_00523e60(in_stack_0000001c);
    core_msnedit_cpp_CDemonMission_FUN_0053c140(in_stack_0000001c,(int)unaff_ESI);
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80((CPickList *)(local_624 + 0x18),0);
  return;
}
