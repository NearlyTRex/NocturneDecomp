// Name: core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0
// Address: 0040eed0
// MANUAL RECONSTRUCTION
// Address Range: [[0040eed0, 00410332]]
// Convention: __cdecl
// Signature: int __cdecl core_actor_cpp_CActorProperty_editInteractive_FUN_0040eed0(CActorProperty *this_ptr,CDemonActor *actor)

#include "nocturne.h"

int __cdecl core_actor_cpp_CActorProperty_editInteractive_FUN_0040eed0(CActorProperty *this_ptr,CDemonActor *actor)

{
  CVector3f *pCVar2;
  CRuleList *this_ptr_01;
  SMotion *pSVar6;
  char *pcVar7;
  int iVar3;
  SIZE_T SVar9;
  SIZE_T n;
  void *pvVar10;
  EGroundType type;
  int iVar5;
  int iVar13;
  SMotion *pSVar15;
  char *pcVar6;
  int iVar20;
  CPickList local_37ec;
  CPickList local_3444;
  CPickList local_309c;
  CPickList local_2cf4;
  CPickList local_294c;
  CPickList local_25a4;
  CPickList local_21fc;
  CPickList local_1e54;
  char local_1aac [512];
  char local_18ac [512];
  char local_16ac [512];
  char local_14ac [512];
  char local_12ac [512];
  char local_10ac [512];
  char local_eac [512];
  char local_cac [512];
  char local_aac [300];
  char local_980 [300];
  char local_854 [236];
  char local_750 [260];
  char local_64c [260];
  char local_548 [236];
  char local_444 [220];
  char local_368 [200];
  char local_2a0 [199];
  char acStack_1d9 [100];
  char local_175 [101];
  char local_110 [100];
  char local_ac [100];
  CVector3f local_48;
  float local_3c;
  CActorProperty *local_30;
  CActorProperty *local_2c;
  CDemonActor *local_28;
  CMotionList *local_24;
  int local_20;
  char (*local_1c) [30];
  CMotionList *local_18;
  char *local_14;
  CRuleList *pCVar5;
  CClothList *this_ptr_00;
  float local_38;
  float local_34;

  if (this_ptr->enabled_flag == 0) {
    return 0;
  }
  pcVar6 = this_ptr->name;
  _sprintf(local_2a0,"Enter %s for %s",pcVar6,actor->actor_name);
  switch(this_ptr->type) {
  case PROP_INT:
    local_2c = (CActorProperty *)(((this_ptr->data).v_dfm_ptr)->motion_controller).motion_list_ptr;
    while (iVar3 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                             (g_CEditorToolsPtr,local_2a0,(int *)&local_2c,(this_ptr->param1).v_int,
                              (this_ptr->param2).v_int,(this_ptr->param3).v_int,1), iVar3 != 0) {
      if (((this_ptr->callback).v_action_func == (CActorPropertyActionFunc *)0x0) ||
         (iVar3 = (*(this_ptr->callback).v_action_func)(actor,local_2c), iVar3 != 0)) {
        (((this_ptr->data).v_dfm_ptr)->motion_controller).motion_list_ptr = (CMotionList *)local_2c;
        if (this_ptr->auto_update_flag != 0) {
          (*((actor->vtable)._ub)->setup)(actor);
        }
        return 1;
      }
    }
    break;
  case PROP_FLOAT:
    local_30 = (CActorProperty *)(((this_ptr->data).v_dfm_ptr)->motion_controller).motion_list_ptr;
    while (iVar3 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                             (g_CEditorToolsPtr,local_2a0,(float *)&local_30,
                              (this_ptr->param1).v_int,(this_ptr->param2).v_float,
                              (this_ptr->param3).v_float,1), iVar3 != 0) {
      if (((this_ptr->callback).v_action_func == (CActorPropertyActionFunc *)0x0) ||
         (iVar3 = (*(this_ptr->callback).v_action_func)(actor,local_30), iVar3 != 0)) {
        (((this_ptr->data).v_dfm_ptr)->motion_controller).motion_list_ptr = (CMotionList *)local_30;
        if (this_ptr->auto_update_flag != 0) {
          (*((actor->vtable)._ub)->setup)(actor);
        }
        return 1;
      }
    }
    break;
  case PROP_VECTOR:
    local_48 = *(this_ptr->data).v_vector_ptr;
    do {
      iVar3 = shape_edittool_cpp_CEditorTools_promptForValidVector_FUN_004a0300
                        (g_CEditorToolsPtr,local_2a0,&local_48,1);
      if (iVar3 == 0) {
        return 0;
      }
      if ((this_ptr->callback).v_action_func == (CActorPropertyActionFunc *)0x0) break;
      local_3c = local_48.x;
      local_38 = local_48.y;
      local_34 = local_48.z;
      iVar3 = (*(this_ptr->callback).v_action_func)(actor,(CActorProperty *)&local_3c);
    } while (iVar3 == 0);
    pCVar2 = (this_ptr->data).v_vector_ptr;
    if (pCVar2 != &local_48) {
      *pCVar2 = local_48;
    }
    if (this_ptr->auto_update_flag != 0) {
      (*((actor->vtable)._ub)->setup)(actor);
    }
    return 1;
  case PROP_STRING:
    strcpy(local_aac,(this_ptr->data).v_string_ptr);
    do {
      iVar3 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                        (g_CEditorToolsPtr,local_2a0,local_aac,(this_ptr->param3).v_int,1);
      if (iVar3 == 0) {
        return 0;
      }
    } while (((this_ptr->callback).v_action_func != (CActorPropertyActionFunc *)0x0) &&
            (iVar3 = (*(this_ptr->callback).v_action_func)(actor,(CActorProperty *)local_aac),
            iVar3 == 0));
    strcpy((this_ptr->data).v_string_ptr,local_aac);
    if (this_ptr->auto_update_flag != 0) {
      (*((actor->vtable)._ub)->setup)(actor);
    }
    return 1;
  case PROP_BOOL:
    *(this_ptr->data).v_int_ptr = (uint)(*(this_ptr->data).v_int_ptr == 0);
    return 1;
  case PROP_CHOICE:
    local_28 = (CDemonActor *)(((this_ptr->data).v_dfm_ptr)->motion_controller).motion_list_ptr;
    iVar3 = core_msnedit_cpp_CDemonMission_pickActorDialog_FUN_0053cad0
                      (g_CDemonMissionPtr,actor,local_2a0,&local_28,(this_ptr->param1).v_int,
                       this_ptr->string2,(this_ptr->callback).v_filter_func,1);
    if (iVar3 != 0) {
      (((this_ptr->data).v_dfm_ptr)->motion_controller).motion_list_ptr = (CMotionList *)local_28;
      if (this_ptr->auto_update_flag == 0) {
        return 1;
      }
      (*((actor->vtable)._ub)->setup)(actor);
      return 1;
    }
    break;
  case PROP_MODEL_KFM:
    _sprintf
              (local_2a0,"Select model for actor %s.  Current model is %s.",actor->actor_name,
               ((this_ptr->data).v_kfm_ptr)->model_name);
    strcpy(local_854,((this_ptr->data).v_clothlist_ptr)->filenames[2] + 0x24);
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_37ec);
    shape_edittool_cpp_CStrList_populateFromFileSearch_FUN_004a35b0
              (&local_37ec.base,"models","*.kfm");
    shape_edittool_cpp_CStrList_sortAll_FUN_004a2ec0(&local_37ec.base);
    if ((this_ptr->param1).v_int != 0) {
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_37ec.base,"(none)");
    }
    do {
      iVar3 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        (&local_37ec,local_2a0,-1,0);
      if (iVar3 < 0) {
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_37ec,0);
        return 0;
      }
      if (((this_ptr->param1).v_int == 0) || (iVar3 != local_37ec.base.item_count + -1)) {
        shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80(&local_37ec.base,local_18ac,iVar3,0);
        shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80(&local_37ec.base,local_eac,iVar3,1);
        makepath(local_854,(char *)0x0,(char *)0x0,local_18ac,local_eac);
      }
      else {
        local_854[0] = '\0';
      }
    } while (((this_ptr->callback).v_action_func != (CActorPropertyActionFunc *)0x0) &&
            (iVar3 = (*(this_ptr->callback).v_action_func)(actor,(CActorProperty *)local_854),
            iVar3 == 0));
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
              ((this_ptr->data).v_kfm_ptr,local_854);
    if (this_ptr->auto_update_flag != 0) {
      (*((actor->vtable)._ub)->setup)(actor);
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_37ec,0);
    return 1;
  case PROP_MODEL_DFM:
    _sprintf
              (local_2a0,"Select model for actor %s.  Current model is %s.",actor->actor_name,
               ((this_ptr->data).v_dfm_ptr)->model_name);
    strcpy(local_548,((this_ptr->data).v_dfm_ptr)->model_name);
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_2cf4);
    shape_edittool_cpp_CStrList_populateFromFileSearch_FUN_004a35b0
              (&local_2cf4.base,"models","*.dfm");
    shape_edittool_cpp_CStrList_sortAll_FUN_004a2ec0(&local_2cf4.base);
    if ((this_ptr->param1).v_int != 0) {
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_2cf4.base,"(none)");
    }
    do {
      iVar3 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        (&local_2cf4,local_2a0,-1,0);
      if (iVar3 < 0) {
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_2cf4,0);
        return 0;
      }
      if (((this_ptr->param1).v_int == 0) || (iVar3 != local_2cf4.base.item_count + -1)) {
        shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80(&local_2cf4.base,local_12ac,iVar3,0);
        shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80(&local_2cf4.base,local_1aac,iVar3,1);
        makepath(local_548,(char *)0x0,(char *)0x0,local_12ac,local_1aac);
      }
      else {
        local_548[0] = '\0';
      }
    } while (((this_ptr->callback).v_action_func != (CActorPropertyActionFunc *)0x0) &&
            (iVar3 = (*(this_ptr->callback).v_action_func)(actor,(CActorProperty *)local_548),
            iVar3 == 0));
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
              ((this_ptr->data).v_dfm_ptr,local_548);
    if (this_ptr->auto_update_flag != 0) {
      (*((actor->vtable)._ub)->setup)(actor);
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_2cf4,0);
    return 1;
  case PROP_SOUND:
    iVar3 = core_sound_cpp_editSoundName_FUN_005b3de0((this_ptr->data).v_string_ptr,local_2a0);
    return iVar3;
  case PROP_GROUND_TYPE:
    type = GROUND_TYPE_DEFAULT;
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_3444);
    do {
      pcVar6 = core_ground_cpp_getGroundTypeName_FUN_004eed80(type);
      type = type + GROUND_TYPE_NONE;
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_3444.base,pcVar6);
    } while ((int)type < 0xe);
    iVar3 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      (&local_3444,local_2a0,*(this_ptr->data).v_int_ptr,0);
    if (-1 < iVar3) {
      *(this_ptr->data).v_int_ptr = iVar3;
      if (this_ptr->auto_update_flag != 0) {
        (*((actor->vtable)._ub)->setup)(actor);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_3444,0);
      return 1;
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_3444,0);
    return 0;
  case PROP_FILE:
    strcpy(local_750,(this_ptr->data).v_string_ptr);
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_309c);
    shape_edittool_cpp_CStrList_populateFromFileSearch_FUN_004a35b0
              (&local_309c.base,this_ptr->string1,this_ptr->string2);
    shape_edittool_cpp_CStrList_sortAll_FUN_004a2ec0(&local_309c.base);
    if ((this_ptr->param1).v_int != 0) {
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_309c.base,"(none)");
    }
    do {
      iVar3 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        (&local_309c,local_2a0,-1,0);
      if (iVar3 < 0) {
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_309c,0);
        return 0;
      }
      if (((this_ptr->param1).v_int == 0) || (iVar3 != local_309c.base.item_count + -1)) {
        shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80(&local_309c.base,local_cac,iVar3,0);
        shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80(&local_309c.base,local_10ac,iVar3,1);
        makepath(local_750,(char *)0x0,(char *)0x0,local_cac,local_10ac);
      }
      else {
        local_750[0] = '\0';
      }
    } while (((this_ptr->callback).v_action_func != (CActorPropertyActionFunc *)0x0) &&
            (iVar3 = (*(this_ptr->callback).v_action_func)(actor,(CActorProperty *)local_750),
            iVar3 == 0));
    strcpy((this_ptr->data).v_string_ptr,local_750);
    if (this_ptr->auto_update_flag != 0) {
      (*((actor->vtable)._ub)->setup)(actor);
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_309c,0);
    return 1;
  case PROP_EVENT:
    strcpy(local_ac,(this_ptr->data).v_string_ptr);
    while( true ) {
      iVar3 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                        (g_CEditorToolsPtr,local_2a0,local_ac,100,1);
      if (iVar3 == 0) {
        return 0;
      }
      pcVar6 = core_event_cpp_CEventList_validateCondition_FUN_004add00(g_CEventListPtr,local_ac);
      if (pcVar6 == (char *)0x0) break;
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar6);
    }
    strcpy((this_ptr->data).v_string_ptr,local_ac);
    if (this_ptr->auto_update_flag != 0) {
      (*((actor->vtable)._ub)->setup)(actor);
    }
    return 1;
  case PROP_BUTTON:
    strcpy(local_110,(this_ptr->data).v_string_ptr);
    while( true ) {
      iVar3 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                        (g_CEditorToolsPtr,local_2a0,local_110,100,1);
      if (iVar3 == 0) {
        return 0;
      }
      pcVar6 = core_event_cpp_CEventList_validateCommands_FUN_004add40(g_CEventListPtr,local_110);
      if (pcVar6 == (char *)0x0) break;
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar6);
    }
    strcpy((this_ptr->data).v_string_ptr,local_110);
    if (this_ptr->auto_update_flag != 0) {
      (*((actor->vtable)._ub)->setup)(actor);
    }
    return 1;
  case PROP_MOTION:
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_21fc);
    local_18 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                         ((this_ptr->data).v_motion_ptr);
    iVar3 = 0;
    local_20 = -1;
    if (0 < local_18->motion_count) {
      local_1c = local_18->state_names;
      pSVar15 = local_18->motions;
      local_24 = local_18;
      do {
        _sprintf
                  (local_980,"%s\t%s",pSVar15->motion_name,(char *)(local_1c + local_24->motions[0].state_index));
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_21fc.base,local_980);
        pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                           ((this_ptr->data).v_motion_ptr);
        if (pSVar6 == pSVar15) {
          local_20 = iVar3;
        }
        local_24 = (CMotionList *)(local_24->state_names[0x2d] + 2);
        iVar3 = iVar3 + 1;
        pSVar15 = pSVar15 + 1;
      } while (iVar3 < local_18->motion_count);
    }
    iVar3 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      (&local_21fc,local_2a0,local_20,0);
    if (-1 < iVar3) {
      core_motion_cpp_CMotionController_jumpToMotion_FUN_0052dde0
                ((this_ptr->data).v_motion_ptr,iVar3,0.0);
      if (this_ptr->auto_update_flag != 0) {
        (*((actor->vtable)._ub)->setup)(actor);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_21fc,0);
      return 1;
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_21fc,0);
    return 0;
  case PROP_CLOTH:
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_294c);
    shape_edittool_cpp_CStrList_populateFromFileSearch_FUN_004a35b0
              (&local_294c.base,"models","*.cth");
    shape_edittool_cpp_CStrList_sortAll_FUN_004a2ec0(&local_294c.base);
    if ((this_ptr->param1).v_int < ((this_ptr->data).v_clothlist_ptr)->count) {
      _sprintf
                (local_2a0,"Select %s for actor %s.  Current is %s.",pcVar6,actor->actor_name,
                 ((this_ptr->data).v_clothlist_ptr)->filenames[(this_ptr->param1).v_int]);
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_294c.base,"(remove cloth)");
    }
    else {
      _sprintf(local_2a0,"Add %s for actor %s.",pcVar6,actor->actor_name);
    }
    iVar3 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      (&local_294c,local_2a0,-1,0);
    if (iVar3 < 0) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_294c,0);
      return 0;
    }
    shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80(&local_294c.base,local_16ac,iVar3,0);
    shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80(&local_294c.base,local_14ac,iVar3,1);
    makepath(local_64c,(char *)0x0,(char *)0x0,local_16ac,local_14ac);
    this_ptr_00 = (this_ptr->data).v_clothlist_ptr;
    if ((this_ptr->param1).v_int < this_ptr_00->count) {
      if (iVar3 == local_294c.base.item_count + -1) {
        core_cloth_cpp_CClothList_remove_FUN_0043c170(this_ptr_00,(this_ptr->param1).v_int);
      }
      else {
        strcpy(this_ptr_00->filenames[(this_ptr->param1).v_int],local_64c);
      }
    }
    else {
      core_cloth_cpp_CClothList_add_FUN_0043c0f0(this_ptr_00,local_64c);
    }
    (*((actor->vtable)._ub)->setup)(actor);
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_294c,0);
    return 1;
  case PROP_ENUM_PAIR:
    iVar3 = -1;
    iVar5 = 0;
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_1e54);
    if (0 < (this_ptr->param1).v_int) {
      do {
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  (&local_1e54.base,((char **)(this_ptr->param2).v_ptr)[iVar5 * 2]);
        if (*(this_ptr->data).v_int_ptr == ((int *)(this_ptr->param2).v_ptr)[iVar5 * 2 + 1]) {
          iVar3 = iVar5;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < (this_ptr->param1).v_int);
    }
    if (((this_ptr->param1).v_int == 2) && (-1 < iVar3)) {
      pvVar10 = (this_ptr->param2).v_ptr;
      iVar3 = 1 - iVar3;
    }
    else {
      iVar3 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        (&local_1e54,local_2a0,iVar3,0);
      if (iVar3 < 0) goto LAB_00410163;
      pvVar10 = (this_ptr->param2).v_ptr;
    }
    *(this_ptr->data).v_int_ptr = ((uint *)pvVar10)[iVar3 * 2 + 1];
LAB_00410163:
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_1e54,0);
    return 0;
  case PROP_RULE:
    pCVar5 = (this_ptr->data).v_rulelist_ptr;
    iVar3 = (this_ptr->param1).v_int;
    if (iVar3 < pCVar5->list_size) {
      _sprintf
                (local_444,"%s => %s",(char *)(pCVar5->conditions + iVar3),(char *)(pCVar5->events + iVar3));
    }
    else {
      strcpy(local_444,"Condition => Event");
    }
LAB_0040fdd3:
    iVar3 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                      (g_CEditorToolsPtr,local_2a0,local_444,0xdc,1);
    if (iVar3 != 0) {
      if (local_444[0] == '\0') {
        if ((this_ptr->param1).v_int < ((this_ptr->data).v_rulelist_ptr)->list_size) {
          core_event_cpp_CRuleList_remove_FUN_004b17c0
                    ((this_ptr->data).v_rulelist_ptr,(this_ptr->param1).v_int);
        }
        return 1;
      }
      pcVar7 = strstr(local_444,"=>");
      if (pcVar7 == (char *)0x0) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Please input rule as \"<condition> => <event>\"");
      }
      else {
        *pcVar7 = '\0';
        strcpy(acStack_1d9 + 1,local_444);
        SVar9 = strlen(acStack_1d9 + 1);
        if (0 < (int)SVar9) {
          pcVar6 = acStack_1d9 + 1 + SVar9;
          do {
            if ((g_CharacterClassificationTable[(byte)(pcVar6[-1] + 1)] & 2) == 0) break;
            SVar9 = SVar9 - 1;
            pcVar6 = pcVar6 + -1;
          } while (0 < (int)SVar9);
        }
        (acStack_1d9 + 1)[SVar9] = '\0';
        local_14 = acStack_1d9 + 2;
        while ((g_CharacterClassificationTable[(byte)(acStack_1d9[1] + 1)] & 2) != 0) {
          memmove(acStack_1d9 + 1,local_14,SVar9);
          SVar9 = SVar9 - 1;
        }
        *pcVar7 = '=';
        strcpy(local_175 + 1,pcVar7 + 2);
        n = strlen(local_175 + 1);
        if (0 < (int)n) {
          pcVar6 = local_175 + 1 + n;
          do {
            if ((g_CharacterClassificationTable[(byte)(pcVar6[-1] + 1)] & 2) == 0) break;
            n = n - 1;
            pcVar6 = pcVar6 + -1;
          } while (0 < (int)n);
        }
        (local_175 + 1)[n] = '\0';
        while ((g_CharacterClassificationTable[(byte)(local_175[1] + 1)] & 2) != 0) {
          memmove(local_175 + 1,local_175 + 2,n);
          n = n - 1;
        }
        pcVar6 = core_event_cpp_CEventList_validateCondition_FUN_004add00
                           (g_CEventListPtr,acStack_1d9 + 1);
        if (pcVar6 == (char *)0x0) {
          pcVar6 = core_event_cpp_CEventList_validateCommands_FUN_004add40
                             (g_CEventListPtr,local_175 + 1);
          if (pcVar6 == (char *)0x0) {
            this_ptr_01 = (this_ptr->data).v_rulelist_ptr;
            if (this_ptr_01->list_size <= (this_ptr->param1).v_int) {
              core_event_cpp_CRuleList_insert_FUN_004b1680
                        (this_ptr_01,(this_ptr->param1).v_int,acStack_1d9 + 1,local_175 + 1);
              return 1;
            }
            strcpy(this_ptr_01->conditions[(this_ptr->param1).v_int],acStack_1d9 + 1);
            strcpy(this_ptr_01->events[(this_ptr->param1).v_int],local_175 + 1);
            return 1;
          }
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar6);
        }
        else {
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar6);
        }
      }
      goto LAB_0040fdd3;
    }
    break;
  case PROP_ACTION:
    iVar3 = (*(this_ptr->callback).v_action_func)(actor,this_ptr);
    if (iVar3 != 0) {
      if (this_ptr->auto_update_flag == 0) {
        return 1;
      }
      (*((actor->vtable)._ub)->setup)(actor);
      return 1;
    }
    break;
  case PROP_FLAGS:
    iVar13 = 0;
    while( true ) {
      iVar20 = 0;
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_25a4);
      do {
        pcVar6 = "disabled";
        if ((*(this_ptr->data).v_uint_ptr & g_PropertyFlagDefinitions[iVar20].mask) != 0) {
          pcVar6 = "enable";
        }
        _sprintf(local_368,"%s\t%s",g_PropertyFlagDefinitions[iVar20].name,pcVar6);
        iVar20 = iVar20 + 1;
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_25a4.base,local_368);
      } while (iVar20 != 2);
      iVar13 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                         (&local_25a4,local_2a0,iVar13,0);
      if (iVar13 < 0) break;
      *(this_ptr->data).v_uint_ptr =
           *(this_ptr->data).v_uint_ptr ^ g_PropertyFlagDefinitions[iVar13].mask;
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_25a4,0);
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_25a4,0);
    return 0;
  default:
    g_CurrentFilename = "..\\core\\actor.cpp";
    g_CurrentLineNumber = 4511;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Unknown CActorProperty type: %d",this_ptr->type)
    ;
    return 0;
  }
  return 0;
}
