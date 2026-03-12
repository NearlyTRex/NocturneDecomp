// Name: core_msnedit.cpp_CDemonMission_changeActorType_FUN_0053d8b0
// Address: 0053d8b0
// Address Range: [[0053d8b0, 0053dce8]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_changeActorType_FUN_0053d8b0(CDemonMission *this_ptr)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_CDemonMission_changeActorType_FUN_0053d8b0(CDemonMission *this_ptr)

{
  char cVar2;
  code cVar3;
  char *pcVar5;
  int iVar6;
  char *pcVar4;
  int iVar5;
  CDemonActor *pCVar7;
  int iVar8;
  CActorProperty *pCVar9;
  int iVar10;
  CDemonActor *pCVar6;
  CActorPropertyActionFunc *pCVar8;
  CDemonActor *pCVar11;
  char *pcVar12;
  CActorPropertyList CStack_502c;
  CActorPropertyList CStack_2b28;
  CPickList local_624;
  char local_27c [500];
  char local_88 [100];
  int iStack_24;
  CDemonActor *local_20;
  int iStack_1c;
  CActorProperty *pCStack_18;
  char *pcStack_14;
  CActorProperty *pCVar4;
  int *piVar3;
  int *piVar2;
  char cVar1;
  
  if (this_ptr->selected_actor == (CDemonActor *)0x0) {
    return;
  }
  iVar10 = 0;
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_624);
  if (0 < g_NumActorClassTypes) {
    iVar8 = 0;
    do {
      if (*(int *)(*(int *)((int)g_ActorClassRegistrations + iVar8) + 0x2c) != 0) {
        pcVar5 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90(this_ptr->selected_actor)
        ;
        iVar6 = _stricmp
                          (*(char **)((int)g_ActorClassRegistrations + iVar8),pcVar5);
        if (iVar6 != 0) {
          shape_edittool_cpp_CStrList_add_FUN_004a2b80
                    (&local_624.base,(char *)(*(int *)((int)g_ActorClassRegistrations + iVar8) + 1))
          ;
        }
      }
      iVar10 = iVar10 + 1;
      iVar8 = iVar8 + 4;
    } while (iVar10 < g_NumActorClassTypes);
  }
  shape_edittool_cpp_CStrList_sort_FUN_004a2ec0(&local_624.base);
  pcVar4 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90(this_ptr->selected_actor);
  _sprintf
            (local_27c,"Change %s of type %s to new type",this_ptr->selected_actor,pcVar4);
  iVar5 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                    (&local_624,local_27c,-1,0);
  if (-1 < iVar5) {
    pcVar4 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_624.base,iVar5);
    _sprintf(local_88,"C%s",pcVar4);
    pCVar7 = core_actor_cpp_createActorByName_FUN_0040c430(local_88);
    (*((pCVar7->vtable)._ub)->setup)(pCVar7);
    iVar5 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                      (g_CEditorToolsPtr,"Attempt to transfer properties?");
    if (iVar5 != 0) {
      core_actor_cpp_CActorPropertyList_init_FUN_0040e130(&CStack_2b28);
      core_actor_cpp_CActorPropertyList_init_FUN_0040e130(&CStack_502c);
      (*((pCVar7->vtable)._ub)->getPropertyList)(pCVar7,&CStack_2b28);
      (*((this_ptr->selected_actor->vtable)._ub)->getPropertyList)
                (this_ptr->selected_actor,&CStack_502c);
      iStack_1c = 0;
      if (0 < CStack_2b28.count) {
        pCStack_18 = CStack_2b28.properties;
        do {
          iStack_24 = 0;
          if (0 < CStack_502c.count) {
            pCVar9 = CStack_502c.properties;
            do {
              if ((pCVar9->type == pCStack_18->type) &&
                 (iVar5 = _stricmp(pCVar9->name,pCStack_18->name),
                 iVar5 == 0)) {
                switch(pCVar9->type) {
                case PROP_INT:
                case PROP_ENUM_PAIR:
                  *(pCStack_18->data).v_int_ptr = *(pCVar9->data).v_int_ptr;
                  break;
                case PROP_FLOAT:
                  *(pCStack_18->data).v_int_ptr = *(pCVar9->data).v_int_ptr;
                  break;
                case PROP_VECTOR:
                  piVar2 = (pCVar9->data).v_int_ptr;
                  piVar3 = (pCStack_18->data).v_int_ptr;
                  if (piVar3 != piVar2) {
                    *piVar3 = *piVar2;
                    piVar3[1] = piVar2[1];
                    piVar3[2] = piVar2[2];
                  }
                  break;
                case PROP_STRING:
                case PROP_SOUND:
                case PROP_FILE:
                case PROP_EVENT:
                case PROP_BUTTON:
                  pCVar8 = (pCVar9->data).v_action_func_ptr;
                  pcVar12 = (char *)(pCStack_18->data).v_action_func_ptr;
                  do {
                    cVar2 = (char)*pCVar8;
                    *pcVar12 = cVar2;
                    if (cVar2 == '\0') break;
                    cVar3 = pCVar8[1];
                    pCVar8 = pCVar8 + 2;
                    ((CActorPropertyActionFunc *)pcVar12)[1] = cVar3;
                    pcVar12 = (char *)((CActorPropertyActionFunc *)pcVar12 + 2);
                  } while (cVar3 != (code)0x0);
                  break;
                case PROP_BOOL:
                case PROP_CHOICE:
                case PROP_GROUND_TYPE:
                  *(pCStack_18->data).v_int_ptr = *(pCVar9->data).v_int_ptr;
                  break;
                case PROP_MODEL_KFM:
                  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
                            ((pCStack_18->data).v_kfm_ptr,((pCVar9->data).v_kfm_ptr)->model_name);
                  break;
                case PROP_MODEL_DFM:
                  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
                            ((pCStack_18->data).v_dfm_ptr,((pCVar9->data).v_dfm_ptr)->model_name);
                }
              }
              iStack_24 = iStack_24 + 1;
              pCVar9 = pCVar9 + 1;
            } while (iStack_24 < CStack_502c.count);
          }
          pCStack_18 = pCStack_18 + 1;
          iStack_1c = iStack_1c + 1;
        } while (iStack_1c < CStack_2b28.count);
      }
    }
    pCVar6 = this_ptr->selected_actor;
    pCVar11 = pCVar7;
    do {
      cVar1 = pCVar6->actor_name[0];
      pCVar11->actor_name[0] = cVar1;
      if (cVar1 == '\0') break;
      cVar2 = pCVar6->actor_name[1];
      pCVar6 = (CDemonActor *)(pCVar6->actor_name + 2);
      pCVar11->actor_name[1] = cVar2;
      pCVar11 = (CDemonActor *)(pCVar11->actor_name + 2);
    } while (cVar2 != '\0');
    pCVar6 = this_ptr->selected_actor;
    (pCVar7->location).position.x = (pCVar6->location).position.x;
    (pCVar7->location).position.y = (pCVar6->location).position.y;
    (pCVar7->location).position.z = (pCVar6->location).position.z;
    (pCVar7->location).area_id = (pCVar6->location).area_id;
    pCVar6 = this_ptr->selected_actor;
    if (&pCVar7->orient != &pCVar6->orient) {
      (pCVar7->orient).vec.x = (pCVar6->orient).vec.x;
      (pCVar7->orient).vec.y = (pCVar6->orient).vec.y;
      (pCVar7->orient).vec.z = (pCVar6->orient).vec.z;
    }
    (*((pCVar7->vtable)._ub)->setup)(pCVar7);
    pCVar6 = this_ptr->selected_actor;
    core_msnedit_cpp_CDemonMission_selectActor_FUN_0053c140(this_ptr,(CDemonActor *)0x0);
    core_msnedit_cpp_CDemonMission_deleteActor_FUN_00538ea0(this_ptr,pCVar6);
    core_mission_cpp_CDemonMission_removeActor_FUN_00523f20(this_ptr,pCVar6,1);
    core_mission_cpp_CDemonMission_addActorToList_FUN_00523b70(this_ptr,pCVar7);
    core_mission_cpp_CDemonMission_buildSetActorList_FUN_00523e60(this_ptr);
    core_msnedit_cpp_CDemonMission_selectActor_FUN_0053c140(this_ptr,pCVar7);
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_624,0);
  return;
}
