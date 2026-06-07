// Name: core_msnedit.cpp_CDemonMission_changeActorType_FUN_0053d8b0
// Address: 0053d8b0
// MANUAL RECONSTRUCTION
// Address Range: [[0053d8b0, 0053dce8]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_changeActorType_FUN_0053d8b0(CDemonMission *this_ptr)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_CDemonMission_changeActorType_FUN_0053d8b0(CDemonMission *this_ptr)

{
  char *pcVar5;
  int iVar6;
  char *pcVar3;
  int iVar4;
  CDemonActor *pCVar7;
  CActorProperty *pCVar9;
  int iVar10;
  CDemonActor *pCVar5;
  CActorPropertyList CStack_502c;
  CActorPropertyList CStack_2b28;
  CPickList local_624;
  char local_27c [500];
  char local_88 [100];
  int iStack_24;
  int iStack_1c;
  CActorProperty *pCStack_18;
  int *piVar3;
  int *piVar2;
  
  if (this_ptr->selected_actor == (CDemonActor *)0x0) {
    return;
  }
  iVar10 = 0;
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_624);
  if (0 < g_NumActorClassTypes) {
    do {
      if (g_ActorClassRegistrations[iVar10]->factory_func != (CDemonActor_FactoryFunc *)0x0) {
        pcVar5 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90(this_ptr->selected_actor);
        iVar6 = _stricmp(g_ActorClassRegistrations[iVar10]->class_name,pcVar5);
        if (iVar6 != 0) {
          shape_edittool_cpp_CStrList_add_FUN_004a2b80
                    (&local_624.base,g_ActorClassRegistrations[iVar10]->class_name + 1);
        }
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < g_NumActorClassTypes);
  }
  shape_edittool_cpp_CStrList_sortAll_FUN_004a2ec0(&local_624.base);
  pcVar3 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90(this_ptr->selected_actor);
  _sprintf
            (local_27c,"Change %s of type %s to new type",this_ptr->selected_actor->actor_name,pcVar3);
  iVar4 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                    (&local_624,local_27c,-1,0);
  if (-1 < iVar4) {
    pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_624.base,iVar4);
    _sprintf(local_88,"C%s",pcVar3);
    pCVar7 = core_actor_cpp_createActorByName_FUN_0040c430(local_88);
    (*((pCVar7->vtable)._ub)->setup)(pCVar7);
    iVar4 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                      (g_CEditorToolsPtr,"Attempt to transfer properties?");
    if (iVar4 != 0) {
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
                 (iVar4 = _stricmp(pCVar9->name,pCStack_18->name),
                 iVar4 == 0)) {
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
                  strcpy((pCStack_18->data).v_string_ptr,(pCVar9->data).v_string_ptr);
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
    strcpy(pCVar7->actor_name,this_ptr->selected_actor->actor_name);
    pCVar5 = this_ptr->selected_actor;
    (pCVar7->location).position = (pCVar5->location).position;
    (pCVar7->location).area_id = (pCVar5->location).area_id;
    pCVar5 = this_ptr->selected_actor;
    if (&pCVar7->orient != &pCVar5->orient) {
      (pCVar7->orient).vec = (pCVar5->orient).vec;
    }
    (*((pCVar7->vtable)._ub)->setup)(pCVar7);
    pCVar5 = this_ptr->selected_actor;
    core_msnedit_cpp_CDemonMission_selectActor_FUN_0053c140(this_ptr,(CDemonActor *)0x0);
    core_msnedit_cpp_CDemonMission_deleteActor_FUN_00538ea0(this_ptr,pCVar5);
    core_mission_cpp_CDemonMission_removeActor_FUN_00523f20(this_ptr,pCVar5,1);
    core_mission_cpp_CDemonMission_addActorToList_FUN_00523b70(this_ptr,pCVar7);
    core_mission_cpp_CDemonMission_buildSetActorList_FUN_00523e60(this_ptr);
    core_msnedit_cpp_CDemonMission_selectActor_FUN_0053c140(this_ptr,pCVar7);
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_624,0);
  return;
}
