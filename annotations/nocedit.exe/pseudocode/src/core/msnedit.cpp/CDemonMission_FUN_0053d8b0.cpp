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
  int *str2;
  char cVar1;
  uint *puVar2;
  uint *puVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  CDemonActor *pCVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  char *pcVar11;
  int aiStack_5020 [2367];
  byte auStack_2b24 [9472];
  byte local_624 [936];
  char local_27c [500];
  char local_88 [104];
  CDemonActor *local_20;
  CDemonActor *pCStack_1c;
  int iStack_18;
  int *piStack_14;
  
  if (*(int *)(this_ptr->unk2 + 0x1c) == 0) {
    return;
  }
  iVar10 = 0;
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)local_624);
  if (0 < g_NumActorClassTypes) {
    iVar8 = 0;
    do {
      if (*(int *)(*(int *)((int)g_ActorClassRegistrations + iVar8) + 0x2c) != 0) {
        pcVar5 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90
                           (*(CDemonActor **)(this_ptr->unk2 + 0x1c));
        iVar6 = stricmp
                          (*(char **)((int)g_ActorClassRegistrations + iVar8),pcVar5);
        if (iVar6 != 0) {
          shape_edittool_cpp_CStrList_add_FUN_004a2b80
                    ((CStrList *)local_624,
                     (char *)(*(int *)((int)g_ActorClassRegistrations + iVar8) + 1));
        }
      }
      iVar10 = iVar10 + 1;
      iVar8 = iVar8 + 4;
    } while (iVar10 < g_NumActorClassTypes);
  }
  shape_edittool_cpp_CStrList_sort_FUN_004a2ec0((CStrList *)local_624);
  pcVar5 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90
                     (*(CDemonActor **)(this_ptr->unk2 + 0x1c));
  sprintf
            (local_27c,"Change %s of type %s to new type",*(uint *)(this_ptr->unk2 + 0x1c),
             pcVar5);
  iVar10 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                     ((CPickList *)local_624,local_27c,-1,0);
  if (-1 < iVar10) {
    pcVar5 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)local_624,iVar10);
    sprintf(local_88,"C%s",pcVar5);
    pCVar7 = core_actor_cpp_createActorByName_FUN_0040c430(local_88);
    local_20 = pCVar7;
    (*((pCVar7->vtable)._ub)->setup)(pCVar7);
    iVar10 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                       (g_CEditorToolsPtr,"Attempt to transfer properties?");
    if (iVar10 != 0) {
      core_actor_cpp_FUN_0040e130();
      core_actor_cpp_FUN_0040e130();
      (*((pCVar7->vtable)._ub)->getPropertyList)(pCVar7,(CActorPropertyList *)auStack_2b24);
      (**(code **)(*(int *)(*(int *)(param_4 + 0x28) + 0x154) + 0xd4))();
      iStack_18 = 0;
      if (0 < (int)auStack_2b24._4_4_) {
        piStack_14 = (int *)(auStack_2b24 + 8);
        do {
          piVar4 = piStack_14;
          local_20 = (CDemonActor *)0x0;
          if (0 < (int)aiStack_5020) {
            str2 = piStack_14 + 1;
            piVar9 = aiStack_5020;
            do {
              if ((*piVar9 == *piVar4) &&
                 (iVar10 = stricmp((char *)(piVar9 + 1),(char *)str2),
                 iVar10 == 0)) {
                switch(*piVar9) {
                case 0:
                case 0xf:
                  *(uint *)piVar4[0x1a] = *(uint *)piVar9[0x1a];
                  break;
                case 1:
                  *(uint *)piVar4[0x1a] = *(uint *)piVar9[0x1a];
                  break;
                case 2:
                  puVar2 = (uint *)piVar9[0x1a];
                  puVar3 = (uint *)piVar4[0x1a];
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
                  pcVar5 = (char *)piVar9[0x1a];
                  pcVar11 = (char *)piVar4[0x1a];
                  do {
                    cVar1 = *pcVar5;
                    *pcVar11 = cVar1;
                    if (cVar1 == '\0') break;
                    cVar1 = pcVar5[1];
                    pcVar5 = pcVar5 + 2;
                    pcVar11[1] = cVar1;
                    pcVar11 = pcVar11 + 2;
                  } while (cVar1 != '\0');
                  break;
                case 4:
                case 5:
                case 9:
                  *(uint *)piVar4[0x1a] = *(uint *)piVar9[0x1a];
                  break;
                case 6:
                  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
                            ((CKeyFramedModelInstance *)piVar4[0x1a],(char *)(piVar9[0x1a] + 0x78));
                  break;
                case 7:
                  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
                            ((CDeformableModelInstance *)piVar4[0x1a],
                             (char *)(piVar9[0x1a] + 0x2260));
                }
              }
              local_20 = (CDemonActor *)(local_20->actor_name + 1);
              piVar9 = piVar9 + 0x3b;
            } while ((int)local_20 < (int)aiStack_5020);
          }
          piStack_14 = piStack_14 + 0x3b;
          iStack_18 = iStack_18 + 1;
        } while (iStack_18 < (int)auStack_2b24._4_4_);
      }
    }
    pcVar5 = *(char **)(param_2 + 0x28);
    pCVar7 = pCStack_1c;
    do {
      cVar1 = *pcVar5;
      pCVar7->actor_name[0] = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pCVar7->actor_name[1] = cVar1;
      pCVar7 = (CDemonActor *)(pCVar7->actor_name + 2);
    } while (cVar1 != '\0');
    iVar10 = *(int *)(param_2 + 0x28);
    (pCStack_1c->location).position.x = *(float *)(iVar10 + 0x20);
    (pCStack_1c->location).position.y = *(float *)(iVar10 + 0x24);
    (pCStack_1c->location).position.z = *(float *)(iVar10 + 0x28);
    (pCStack_1c->location).area_id = *(int *)(iVar10 + 0x2c);
    iVar10 = *(int *)(param_2 + 0x28);
    if (&pCStack_1c->orient != (COrientation *)(iVar10 + 0x30)) {
      (pCStack_1c->orient).pitch = *(float *)(iVar10 + 0x30);
      (pCStack_1c->orient).bank = *(float *)(iVar10 + 0x34);
      (pCStack_1c->orient).heading = *(float *)(iVar10 + 0x38);
    }
    (*((pCStack_1c->vtable)._ub)->setup)(pCStack_1c);
    iVar10 = *(int *)(param_3->unk2 + 0x1c);
    core_msnedit_cpp_CDemonMission_FUN_0053c140(param_3,0);
    core_msnedit_cpp_CDemonMission_FUN_00538ea0(param_3,iVar10);
    core_mission_cpp_CDemonMission_FUN_00523f20(param_3);
    core_mission_cpp_CDemonMission_FUN_00523b70(param_3);
    core_mission_cpp_CDemonMission_buildSetActorList_FUN_00523e60(param_3);
    core_msnedit_cpp_CDemonMission_FUN_0053c140(param_3,iStack_18);
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80((CPickList *)(local_624 + 8),0);
  return;
}
