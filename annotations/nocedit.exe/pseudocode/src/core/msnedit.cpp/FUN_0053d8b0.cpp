// Name: core_msnedit.cpp_FUN_0053d8b0
// Address: 0053d8b0
// Address Range: [[0053d8b0, 0053dce8]]
// Convention: unknown
// Signature: void core_msnedit_cpp_FUN_0053d8b0(void)

#include "nocturne.h"

/* Signature: byte core_msnedit.cpp_FUN_0053d8b0(uint param_1) */

void core_msnedit_cpp_FUN_0053d8b0(void)

{
  char cVar1;
  uint *puVar2;
  uint *puVar3;
  CActorProperty *pCVar4;
  char *pcVar5;
  int iVar6;
  CDemonActor *pCVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  char *pcVar11;
  char *pcVar12;
  int in_stack_00000004;
  int in_stack_00000008;
  CDemonMission *in_stack_0000000c;
  int in_stack_00000010;
  byte *in_stack_ffffafdc;
  uint in_stack_ffffafe0;
  uint in_stack_ffffafe4;
  uint in_stack_ffffafe8;
  uint in_stack_ffffafec;
  CActorPropertyList CStack_2b24;
  byte local_624 [936];
  char local_27c [500];
  char local_88 [104];
  CDemonActor *local_20;
  CDemonActor *pCStack_1c;
  int iStack_18;
  CActorProperty *pCStack_14;
  
  if (*(int *)(in_stack_00000004 + 0x28) == 0) {
    return;
  }
  iVar10 = 0;
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)local_624);
  if (0 < g_NumActorClassTypes) {
    iVar8 = 0;
    do {
      if (*(int *)(*(int *)((int)g_ActorClassRegistrations + iVar8) + 0x2c) != 0) {
        pcVar5 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90
                           (*(CDemonActor **)(in_stack_00000004 + 0x28));
        iVar6 = crt_string_c_stricmp_FUN_005fe7f0
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
                     (*(CDemonActor **)(in_stack_00000004 + 0x28));
  crt_stdio_c_sprintf_FUN_005fdbd0
            (local_27c,"Change %s of type %s to new type",*(uint *)(in_stack_00000004 + 0x28)
             ,pcVar5);
  iVar10 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                     ((CPickList *)local_624,local_27c,-1,0);
  if (-1 < iVar10) {
    pcVar5 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)local_624,iVar10);
    crt_stdio_c_sprintf_FUN_005fdbd0(local_88,"C%s",pcVar5);
    pCVar7 = core_actor_cpp_createActorByName_FUN_0040c430(local_88);
    local_20 = pCVar7;
    (*((pCVar7->vtable)._ub)->setup)(pCVar7);
    iVar10 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                       (g_CEditorToolsPtr,"Attempt to transfer properties?");
    if (iVar10 != 0) {
      core_actor_cpp_FUN_0040e130();
      core_actor_cpp_FUN_0040e130();
      (*((pCVar7->vtable)._ub)->getPropertyList)(pCVar7,&CStack_2b24);
      in_stack_ffffafdc = &stack0xffffafe0;
      (**(code **)(*(int *)(*(int *)(in_stack_00000010 + 0x28) + 0x154) + 0xd4))();
      iStack_18 = 0;
      if (0 < CStack_2b24.property_count) {
        pCStack_14 = CStack_2b24.properties;
        do {
          pCVar4 = pCStack_14;
          local_20 = (CDemonActor *)0x0;
          if (0 < (int)in_stack_ffffafdc) {
            pcVar5 = pCStack_14->name;
            piVar9 = (int *)&stack0xffffafe0;
            do {
              if ((*piVar9 == pCVar4->type) &&
                 (iVar10 = crt_string_c_stricmp_FUN_005fe7f0((char *)(piVar9 + 1),pcVar5),
                 iVar10 == 0)) {
                switch(*piVar9) {
                case 0:
                case 0xf:
                  *(uint *)pCVar4->data_ptr = *(uint *)piVar9[0x1a];
                  break;
                case 1:
                  *(uint *)pCVar4->data_ptr = *(uint *)piVar9[0x1a];
                  break;
                case 2:
                  puVar2 = (uint *)piVar9[0x1a];
                  puVar3 = pCVar4->data_ptr;
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
                  pcVar11 = (char *)piVar9[0x1a];
                  pcVar12 = pCVar4->data_ptr;
                  do {
                    cVar1 = *pcVar11;
                    *pcVar12 = cVar1;
                    if (cVar1 == '\0') break;
                    cVar1 = pcVar11[1];
                    pcVar11 = pcVar11 + 2;
                    pcVar12[1] = cVar1;
                    pcVar12 = pcVar12 + 2;
                  } while (cVar1 != '\0');
                  break;
                case 4:
                case 5:
                case 9:
                  *(uint *)pCVar4->data_ptr = *(uint *)piVar9[0x1a];
                  break;
                case 6:
                  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
                            (pCVar4->data_ptr,(char *)(piVar9[0x1a] + 0x78));
                  break;
                case 7:
                  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
                            (pCVar4->data_ptr,(char *)(piVar9[0x1a] + 0x2260));
                }
              }
              local_20 = (CDemonActor *)(local_20->actor_name + 1);
              piVar9 = piVar9 + 0x3b;
            } while ((int)local_20 < (int)in_stack_ffffafdc);
          }
          pCStack_14 = pCStack_14 + 1;
          iStack_18 = iStack_18 + 1;
        } while (iStack_18 < CStack_2b24.property_count);
      }
    }
    pcVar5 = *(char **)(in_stack_00000008 + 0x28);
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
    iVar10 = *(int *)(in_stack_00000008 + 0x28);
    (pCStack_1c->location).position.x = *(float *)(iVar10 + 0x20);
    (pCStack_1c->location).position.y = *(float *)(iVar10 + 0x24);
    (pCStack_1c->location).position.z = *(float *)(iVar10 + 0x28);
    (pCStack_1c->location).area_id = *(int *)(iVar10 + 0x2c);
    iVar10 = *(int *)(in_stack_00000008 + 0x28);
    if (&pCStack_1c->orient != (COrientation *)(iVar10 + 0x30)) {
      (pCStack_1c->orient).pitch = *(float *)(iVar10 + 0x30);
      (pCStack_1c->orient).bank = *(float *)(iVar10 + 0x34);
      (pCStack_1c->orient).heading = *(float *)(iVar10 + 0x38);
    }
    (*((pCStack_1c->vtable)._ub)->setup)(pCStack_1c);
    core_msnedit_cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140();
    core_msnedit_cpp_FUN_00538ea0();
    core_mission_cpp_CDemonMission_FUN_00523f20(in_stack_0000000c);
    core_mission_cpp_CDemonMission_FUN_00523b70(in_stack_0000000c);
    core_mission_cpp_CDemonMission_buildSetActorList_FUN_00523e60(in_stack_0000000c);
    core_msnedit_cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140();
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)(local_624 + 8),0,(uint)in_stack_ffffafdc,in_stack_ffffafe0,
             in_stack_ffffafe4,in_stack_ffffafe8,in_stack_ffffafec);
  return;
}
