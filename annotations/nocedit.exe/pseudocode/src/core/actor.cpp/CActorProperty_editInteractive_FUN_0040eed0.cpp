// Name: core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0
// Address: 0040eed0
// Address Range: [[0040eed0, 00410332]]
// Convention: __cdecl
// Signature: int __cdecl core_actor_cpp_CActorProperty_editInteractive_FUN_0040eed0 (CActorProperty *this_ptr,CDemonActor *actor)

#include "nocturne.h"

/* WARNING: Variable defined which should be unmapped: local_37ec */

int __cdecl
core_actor_cpp_CActorProperty_editInteractive_FUN_0040eed0
          (CActorProperty *this_ptr,CDemonActor *actor)

{
  byte uVar1;
  char cVar2;
  CVector3f *pCVar3;
  CClothList *this_ptr_00;
  CRuleList *pCVar4;
  SMotion *pSVar5;
  char *pcVar6;
  uint uVar7;
  SIZE_T SVar8;
  void *pvVar9;
  CActorProperty *pCVar10;
  char *pcVar11;
  int iVar12;
  SMotion *pSVar13;
  char (*pacVar14) [40];
  char *pcVar15;
  char (*pacVar16) [100];
  int iVar17;
  int iVar18;
  byte bVar19;
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
  CActorProperty local_aac;
  char local_980 [300];
  CActorProperty local_854;
  CActorProperty local_750;
  char local_64c [260];
  CActorProperty local_548;
  char local_444 [220];
  char local_368 [200];
  char local_2a0 [199];
  char acStack_1d9 [100];
  char local_175 [101];
  char local_110 [100];
  char local_ac [100];
  CVector3f local_48;
  float local_3c;
  float local_38;
  float local_34;
  CMotionList *local_30;
  CMotionList *local_2c;
  int local_28;
  CMotionList *local_24;
  int local_20;
  char (*local_1c) [30];
  CMotionList *local_18;
  char *local_14;
  
  bVar19 = 0;
  if (this_ptr->enabled_flag == 0) {
    return 0;
  }
  pcVar6 = this_ptr->name;
  _sprintf(local_2a0,"Enter %s for %s",pcVar6,actor);
  switch(this_ptr->type) {
  case PROP_INT:
    local_2c = (((this_ptr->data).v_dfm_ptr)->motion_controller).motion_list_ptr;
    while (iVar12 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                              (g_CEditorToolsPtr,local_2a0,(int *)&local_2c,(this_ptr->param1).v_int
                               ,(this_ptr->param2).v_int,(this_ptr->param3).v_int,1), iVar12 != 0) {
      if (((this_ptr->callback).v_action_func == (CActorPropertyActionFunc *)0x0) ||
         (iVar12 = (*(this_ptr->callback).v_action_func)(actor,(CActorProperty *)local_2c),
         iVar12 != 0)) {
        (((this_ptr->data).v_dfm_ptr)->motion_controller).motion_list_ptr = local_2c;
        if (this_ptr->auto_update_flag != 0) {
          (*((actor->vtable)._ub)->setup)(actor);
        }
        return 1;
      }
    }
    break;
  case PROP_FLOAT:
    local_30 = (((this_ptr->data).v_dfm_ptr)->motion_controller).motion_list_ptr;
    while (iVar12 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                              (g_CEditorToolsPtr,local_2a0,(float *)&local_30,
                               (this_ptr->param1).v_int,(this_ptr->param2).v_float,
                               (this_ptr->param3).v_float,1), iVar12 != 0) {
      if (((this_ptr->callback).v_action_func == (CActorPropertyActionFunc *)0x0) ||
         (iVar12 = (*(this_ptr->callback).v_action_func)(actor,(CActorProperty *)local_30),
         iVar12 != 0)) {
        (((this_ptr->data).v_dfm_ptr)->motion_controller).motion_list_ptr = local_30;
        if (this_ptr->auto_update_flag != 0) {
          (*((actor->vtable)._ub)->setup)(actor);
        }
        return 1;
      }
    }
    break;
  case PROP_VECTOR:
    pCVar3 = (this_ptr->data).v_vector_ptr;
    local_48.x = pCVar3->x;
    local_48.y = pCVar3->y;
    local_48.z = pCVar3->z;
    do {
      iVar12 = shape_edittool_cpp_CEditorTools_promptForValidVector_FUN_004a0300
                         (g_CEditorToolsPtr,local_2a0,&local_48,1);
      if (iVar12 == 0) {
        return 0;
      }
      if ((this_ptr->callback).v_action_func == (CActorPropertyActionFunc *)0x0) break;
      local_3c = local_48.x;
      local_38 = local_48.y;
      local_34 = local_48.z;
      iVar12 = (*(this_ptr->callback).v_action_func)(actor,(CActorProperty *)&local_3c);
    } while (iVar12 == 0);
    pCVar3 = (this_ptr->data).v_vector_ptr;
    if (pCVar3 != &local_48) {
      pCVar3->x = local_48.x;
      pCVar3->y = local_48.y;
      pCVar3->z = local_48.z;
    }
    if (this_ptr->auto_update_flag != 0) {
      (*((actor->vtable)._ub)->setup)(actor);
    }
    return 1;
  case PROP_STRING:
    pCVar10 = &local_aac;
    pcVar6 = (this_ptr->data).v_string_ptr;
    do {
      uVar1 = *pcVar6;
      *(byte *)&pCVar10->type = uVar1;
      if (uVar1 == PROP_INT) break;
      bVar19 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      *(byte *)((int)&pCVar10->type + 1) = bVar19;
      pCVar10 = (CActorProperty *)((int)&pCVar10->type + 2);
    } while (bVar19 != 0);
    do {
      iVar12 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                         (g_CEditorToolsPtr,local_2a0,(char *)&local_aac,(this_ptr->param3).v_int,1)
      ;
      if (iVar12 == 0) {
        return 0;
      }
    } while (((this_ptr->callback).v_action_func != (CActorPropertyActionFunc *)0x0) &&
            (iVar12 = (*(this_ptr->callback).v_action_func)(actor,&local_aac), iVar12 == 0));
    pCVar10 = &local_aac;
    pcVar6 = (this_ptr->data).v_string_ptr;
    do {
      uVar1 = (byte)pCVar10->type;
      *pcVar6 = uVar1;
      if (uVar1 == PROP_INT) break;
      bVar19 = *(byte *)((int)&pCVar10->type + 1);
      pCVar10 = (CActorProperty *)((int)&pCVar10->type + 2);
      pcVar6[1] = bVar19;
      pcVar6 = pcVar6 + 2;
    } while (bVar19 != 0);
    if (this_ptr->auto_update_flag != 0) {
      (*((actor->vtable)._ub)->setup)(actor);
    }
    return 1;
  case PROP_BOOL:
    *(this_ptr->data).v_int_ptr = (uint)(*(this_ptr->data).v_int_ptr == 0);
    return 1;
  case PROP_CHOICE:
    local_28 = *(this_ptr->data).v_int_ptr;
    iVar12 = core_msnedit_cpp_CDemonMission_FUN_0053cad0
                       (g_CDemonMissionPtr,(int)actor,local_2a0,&local_28,(this_ptr->param1).v_int,
                        (int)this_ptr->string2,(int)this_ptr->callback,1);
    if (iVar12 != 0) {
      *(this_ptr->data).v_int_ptr = local_28;
      if (this_ptr->auto_update_flag == 0) {
        return 1;
      }
      (*((actor->vtable)._ub)->setup)(actor);
      return 1;
    }
    break;
  case PROP_MODEL_KFM:
    _sprintf
              (local_2a0,"Select model for actor %s.  Current model is %s.",actor,
               ((this_ptr->data).v_kfm_ptr)->model_name);
    pCVar10 = &local_854;
    pcVar6 = ((this_ptr->data).v_clothlist_ptr)->filenames[2] + 0x24;
    do {
      uVar1 = *pcVar6;
      *(byte *)&pCVar10->type = uVar1;
      if (uVar1 == PROP_INT) break;
      bVar19 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      *(byte *)((int)&pCVar10->type + 1) = bVar19;
      pCVar10 = (CActorProperty *)((int)&pCVar10->type + 2);
    } while (bVar19 != 0);
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_37ec);
    shape_edittool_cpp_CStrList_populateFromFileSearch_FUN_004a35b0
              (&local_37ec.base,"models","*.kfm");
    shape_edittool_cpp_CStrList_sort_FUN_004a2ec0(&local_37ec.base);
    if ((this_ptr->param1).v_int != 0) {
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_37ec.base,"(none)");
    }
    do {
      pcVar6 = (char *)shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                                 (&local_37ec,local_2a0,-1,0);
      if ((int)pcVar6 < 0) {
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_37ec,0);
        return 0;
      }
      if (((this_ptr->param1).v_int == 0) || (pcVar6 != (char *)(local_37ec.base.item_count + -1)))
      {
        shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
                  (&local_37ec.base,(int)local_18ac,pcVar6,0);
        shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
                  (&local_37ec.base,(int)local_eac,pcVar6,1);
        makepath
                  ((char *)&local_854,(char *)0x0,(char *)0x0,local_18ac,local_eac);
      }
      else {
        local_854.type._0_1_ = PROP_INT;
      }
    } while (((this_ptr->callback).v_action_func != (CActorPropertyActionFunc *)0x0) &&
            (iVar12 = (*(this_ptr->callback).v_action_func)(actor,&local_854), iVar12 == 0));
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
              ((this_ptr->data).v_kfm_ptr,(char *)&local_854);
    if (this_ptr->auto_update_flag != 0) {
      (*((actor->vtable)._ub)->setup)(actor);
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_37ec,0);
    return 1;
  case PROP_MODEL_DFM:
    _sprintf
              (local_2a0,"Select model for actor %s.  Current model is %s.",actor,
               ((this_ptr->data).v_dfm_ptr)->model_name);
    pCVar10 = &local_548;
    pcVar6 = ((this_ptr->data).v_dfm_ptr)->model_name;
    do {
      uVar1 = *pcVar6;
      *(byte *)&pCVar10->type = uVar1;
      if (uVar1 == PROP_INT) break;
      bVar19 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      *(byte *)((int)&pCVar10->type + 1) = bVar19;
      pCVar10 = (CActorProperty *)((int)&pCVar10->type + 2);
    } while (bVar19 != 0);
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_2cf4);
    shape_edittool_cpp_CStrList_populateFromFileSearch_FUN_004a35b0
              (&local_2cf4.base,"models","*.dfm");
    shape_edittool_cpp_CStrList_sort_FUN_004a2ec0(&local_2cf4.base);
    if ((this_ptr->param1).v_int != 0) {
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_2cf4.base,"(none)");
    }
    do {
      pcVar6 = (char *)shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                                 (&local_2cf4,local_2a0,-1,0);
      if ((int)pcVar6 < 0) {
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_2cf4,0);
        return 0;
      }
      if (((this_ptr->param1).v_int == 0) || (pcVar6 != (char *)(local_2cf4.base.item_count + -1)))
      {
        shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
                  (&local_2cf4.base,(int)local_12ac,pcVar6,0);
        shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
                  (&local_2cf4.base,(int)local_1aac,pcVar6,1);
        makepath
                  ((char *)&local_548,(char *)0x0,(char *)0x0,local_12ac,local_1aac);
      }
      else {
        local_548.type._0_1_ = PROP_INT;
      }
    } while (((this_ptr->callback).v_action_func != (CActorPropertyActionFunc *)0x0) &&
            (iVar12 = (*(this_ptr->callback).v_action_func)(actor,&local_548), iVar12 == 0));
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
              ((this_ptr->data).v_dfm_ptr,(char *)&local_548);
    if (this_ptr->auto_update_flag != 0) {
      (*((actor->vtable)._ub)->setup)(actor);
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_2cf4,0);
    return 1;
  case PROP_SOUND:
    iVar12 = core_sound_cpp_editSoundName_FUN_005b3de0((this_ptr->data).v_string_ptr,local_2a0);
    return iVar12;
  case PROP_GROUND_TYPE:
    iVar12 = 0;
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_3444);
    do {
      pcVar6 = core_ground_cpp_getGroundTypeName_FUN_004eed80(iVar12);
      iVar12 = iVar12 + 1;
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_3444.base,pcVar6);
    } while (iVar12 < 0xe);
    iVar12 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                       (&local_3444,local_2a0,*(this_ptr->data).v_int_ptr,0);
    if (-1 < iVar12) {
      *(this_ptr->data).v_int_ptr = iVar12;
      if (this_ptr->auto_update_flag != 0) {
        (*((actor->vtable)._ub)->setup)(actor);
      }
      local_37ec.base.item_count = 0;
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80((CPickList *)&local_3444.base.capacity,0);
      return 1;
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_3444,0);
    return 0;
  case PROP_FILE:
    pCVar10 = &local_750;
    pcVar6 = (this_ptr->data).v_string_ptr;
    do {
      uVar1 = *pcVar6;
      *(byte *)&pCVar10->type = uVar1;
      if (uVar1 == PROP_INT) break;
      bVar19 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      *(byte *)((int)&pCVar10->type + 1) = bVar19;
      pCVar10 = (CActorProperty *)((int)&pCVar10->type + 2);
    } while (bVar19 != 0);
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_309c);
    shape_edittool_cpp_CStrList_populateFromFileSearch_FUN_004a35b0
              (&local_309c.base,this_ptr->string1,this_ptr->string2);
    shape_edittool_cpp_CStrList_sort_FUN_004a2ec0(&local_309c.base);
    if ((this_ptr->param1).v_int != 0) {
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_309c.base,"(none)");
    }
    do {
      pcVar6 = (char *)shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                                 (&local_309c,local_2a0,-1,0);
      if ((int)pcVar6 < 0) {
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_309c,0);
        return 0;
      }
      if (((this_ptr->param1).v_int == 0) || (pcVar6 != (char *)(local_309c.base.item_count + -1)))
      {
        shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
                  (&local_309c.base,(int)local_cac,pcVar6,0);
        shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
                  (&local_309c.base,(int)local_10ac,pcVar6,1);
        makepath
                  ((char *)&local_750,(char *)0x0,(char *)0x0,local_cac,local_10ac);
      }
      else {
        local_750.type._0_1_ =
             (char)((uint)pcVar6 >> 8) ^ (char)((uint)(local_309c.base.item_count + -1) >> 8);
      }
    } while (((this_ptr->callback).v_action_func != (CActorPropertyActionFunc *)0x0) &&
            (iVar12 = (*(this_ptr->callback).v_action_func)(actor,&local_750), iVar12 == 0));
    pCVar10 = &local_750;
    pcVar6 = (this_ptr->data).v_string_ptr;
    do {
      uVar1 = (byte)pCVar10->type;
      *pcVar6 = uVar1;
      if (uVar1 == PROP_INT) break;
      bVar19 = *(byte *)((int)&pCVar10->type + 1);
      pCVar10 = (CActorProperty *)((int)&pCVar10->type + 2);
      pcVar6[1] = bVar19;
      pcVar6 = pcVar6 + 2;
    } while (bVar19 != 0);
    if (this_ptr->auto_update_flag != 0) {
      (*((actor->vtable)._ub)->setup)(actor);
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_309c,0);
    return 1;
  case PROP_EVENT:
    pcVar6 = local_ac;
    pcVar11 = (this_ptr->data).v_string_ptr;
    do {
      cVar2 = *pcVar11;
      *pcVar6 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar6[1] = cVar2;
      pcVar6 = pcVar6 + 2;
    } while (cVar2 != '\0');
    while( true ) {
      iVar12 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                         (g_CEditorToolsPtr,local_2a0,local_ac,100,1);
      if (iVar12 == 0) {
        return 0;
      }
      pcVar6 = (char *)core_event_cpp_CEventList_FUN_004add00(g_CEventListPtr);
      if (pcVar6 == (char *)0x0) break;
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar6);
    }
    pcVar6 = local_ac;
    pcVar11 = (this_ptr->data).v_string_ptr;
    do {
      cVar2 = *pcVar6;
      *pcVar11 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar11[1] = cVar2;
      pcVar11 = pcVar11 + 2;
    } while (cVar2 != '\0');
    if (this_ptr->auto_update_flag != 0) {
      (*((actor->vtable)._ub)->setup)(actor);
    }
    return 1;
  case PROP_BUTTON:
    pcVar6 = local_110;
    pcVar11 = (this_ptr->data).v_string_ptr;
    do {
      cVar2 = *pcVar11;
      *pcVar6 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar6[1] = cVar2;
      pcVar6 = pcVar6 + 2;
    } while (cVar2 != '\0');
    while( true ) {
      iVar12 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                         (g_CEditorToolsPtr,local_2a0,local_110,100,1);
      if (iVar12 == 0) {
        return 0;
      }
      pcVar6 = (char *)core_event_cpp_CEventList_FUN_004add40(g_CEventListPtr);
      if (pcVar6 == (char *)0x0) break;
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar6);
    }
    pcVar6 = local_110;
    pcVar11 = (this_ptr->data).v_string_ptr;
    do {
      cVar2 = *pcVar6;
      *pcVar11 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar11[1] = cVar2;
      pcVar11 = pcVar11 + 2;
    } while (cVar2 != '\0');
    if (this_ptr->auto_update_flag != 0) {
      (*((actor->vtable)._ub)->setup)(actor);
    }
    return 1;
  case PROP_MOTION:
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_21fc);
    local_18 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                         ((this_ptr->data).v_motion_ptr);
    iVar12 = 0;
    local_20 = -1;
    if (0 < local_18->motion_count) {
      local_1c = local_18->state_names;
      pSVar13 = local_18->motions;
      local_24 = local_18;
      do {
        _sprintf
                  (local_980,"%s\t%s",pSVar13,local_1c + local_24->motions[0].state_index);
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_21fc.base,local_980);
        pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                           ((this_ptr->data).v_motion_ptr);
        if (pSVar5 == pSVar13) {
          local_20 = iVar12;
        }
        local_24 = (CMotionList *)(local_24->state_names[0x2d] + 2);
        iVar12 = iVar12 + 1;
        pSVar13 = pSVar13 + 1;
      } while (iVar12 < local_18->motion_count);
    }
    iVar12 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                       (&local_21fc,local_2a0,local_20,0);
    if (-1 < iVar12) {
      core_motion_cpp_CMotionController_jumpToMotion_FUN_0052dde0
                ((this_ptr->data).v_motion_ptr,iVar12,0.0);
      if (this_ptr->auto_update_flag != 0) {
        (*((actor->vtable)._ub)->setup)(actor);
      }
      local_37ec.base.item_count = 0;
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80((CPickList *)&local_21fc.base.capacity,0);
      return 1;
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_21fc,0);
    return 0;
  case PROP_CLOTH:
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_294c);
    shape_edittool_cpp_CStrList_populateFromFileSearch_FUN_004a35b0
              (&local_294c.base,"models","*.cth");
    shape_edittool_cpp_CStrList_sort_FUN_004a2ec0(&local_294c.base);
    if ((this_ptr->param1).v_int < ((this_ptr->data).v_kfm_ptr)->part_visibility_flags[0]) {
      _sprintf
                (local_2a0,"Select %s for actor %s.  Current is %s.",pcVar6,actor,
                 ((this_ptr->data).v_kfm_ptr)->part_visibility_flags +
                 (this_ptr->param1).v_int * 10 + 1);
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_294c.base,"(remove cloth)");
    }
    else {
      _sprintf(local_2a0,"Add %s for actor %s.",pcVar6,actor);
    }
    pcVar6 = (char *)shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                               (&local_294c,local_2a0,-1,0);
    if ((int)pcVar6 < 0) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_294c,0);
      return 0;
    }
    shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80(&local_294c.base,(int)local_16ac,pcVar6,0);
    shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80(&local_294c.base,(int)local_14ac,pcVar6,1);
    makepath(local_64c,(char *)0x0,(char *)0x0,local_16ac,local_14ac);
    this_ptr_00 = (this_ptr->data).v_clothlist_ptr;
    if ((this_ptr->param1).v_int < this_ptr_00->count) {
      if (pcVar6 == (char *)(local_294c.base.item_count + -1)) {
        core_cloth_cpp_CClothList_remove_FUN_0043c170(this_ptr_00,(this_ptr->param1).v_int);
      }
      else {
        pcVar6 = local_64c;
        pacVar14 = this_ptr_00->filenames + (this_ptr->param1).v_int;
        do {
          cVar2 = *pcVar6;
          (*pacVar14)[0] = cVar2;
          if (cVar2 == '\0') break;
          cVar2 = pcVar6[1];
          pcVar6 = pcVar6 + 2;
          (*pacVar14)[1] = cVar2;
          pacVar14 = (char (*) [40])(*pacVar14 + 2);
        } while (cVar2 != '\0');
      }
    }
    else {
      core_cloth_cpp_CClothList_add_FUN_0043c0f0(this_ptr_00,local_64c);
    }
    (*((actor->vtable)._ub)->setup)(actor);
    local_37ec.base.item_count = 0;
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80((CPickList *)&local_294c.base.capacity,0);
    return 1;
  case PROP_ENUM_PAIR:
    iVar12 = -1;
    iVar18 = 0;
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_1e54);
    if (0 < (this_ptr->param1).v_int) {
      iVar17 = 0;
      do {
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  (&local_1e54.base,*(char **)(iVar17 + (int)(this_ptr->param2).v_ptr));
        if (*(this_ptr->data).v_int_ptr == *(int *)((this_ptr->param2).v_int + 4 + iVar17)) {
          iVar12 = iVar18;
        }
        iVar18 = iVar18 + 1;
        iVar17 = iVar17 + 8;
      } while (iVar18 < (this_ptr->param1).v_int);
    }
    if (((this_ptr->param1).v_int == 2) && (-1 < iVar12)) {
      pvVar9 = (this_ptr->param2).v_ptr;
      iVar12 = (1 - iVar12) * 8;
    }
    else {
      iVar12 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                         (&local_1e54,local_2a0,iVar12,0);
      if (iVar12 < 0) goto LAB_00410163;
      iVar12 = iVar12 << 3;
      pvVar9 = (this_ptr->param2).v_ptr;
    }
    *(this_ptr->data).v_int_ptr = *(int *)((int)pvVar9 + iVar12 + 4);
LAB_00410163:
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_1e54,0);
    return 0;
  case PROP_RULE:
    pCVar4 = (this_ptr->data).v_rulelist_ptr;
    iVar12 = (this_ptr->param1).v_int;
    if (iVar12 < pCVar4->list_size) {
      _sprintf
                (local_444,"%s => %s",pCVar4->conditions + iVar12,pCVar4->events + iVar12);
    }
    else {
      pcVar11 = "Condition => Event";
      pcVar6 = local_444;
      do {
        cVar2 = *pcVar11;
        *pcVar6 = cVar2;
        if (cVar2 == '\0') break;
        cVar2 = pcVar11[1];
        pcVar11 = pcVar11 + 2;
        pcVar6[1] = cVar2;
        pcVar6 = pcVar6 + 2;
      } while (cVar2 != '\0');
    }
LAB_0040fdd3:
    iVar12 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                       (g_CEditorToolsPtr,local_2a0,local_444,0xdc,1);
    if (iVar12 != 0) {
      if (local_444[0] == '\0') {
        if ((this_ptr->param1).v_int < ((this_ptr->data).v_rulelist_ptr)->list_size) {
          core_event_cpp_CRuleList_remove_FUN_004b17c0((this_ptr->data).v_rulelist_ptr);
        }
        return 1;
      }
      pcVar6 = strstr(local_444,"=>");
      if (pcVar6 == (char *)0x0) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Please input rule as \"<condition> => <event>\"");
      }
      else {
        pcVar11 = local_444;
        pcVar15 = acStack_1d9 + 1;
        *pcVar6 = '\0';
        do {
          cVar2 = *pcVar11;
          *pcVar15 = cVar2;
          if (cVar2 == '\0') break;
          cVar2 = pcVar11[1];
          pcVar11 = pcVar11 + 2;
          pcVar15[1] = cVar2;
          pcVar15 = pcVar15 + 2;
        } while (cVar2 != '\0');
        uVar7 = 0xffffffff;
        pcVar11 = acStack_1d9 + 1;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar2 = *pcVar11;
          pcVar11 = pcVar11 + (uint)bVar19 * -2 + 1;
        } while (cVar2 != '\0');
        SVar8 = ~uVar7 - 1;
        if (0 < (int)SVar8) {
          pcVar11 = acStack_1d9 + ~uVar7;
          do {
            if ((g_CharacterClassificationTable[(byte)(pcVar11[-1] + 1)] & 2) == 0) break;
            SVar8 = SVar8 - 1;
            pcVar11 = pcVar11 + -1;
          } while (0 < (int)SVar8);
        }
        (acStack_1d9 + 1)[SVar8] = '\0';
        local_14 = acStack_1d9 + 2;
        while ((g_CharacterClassificationTable[(byte)(acStack_1d9[1] + 1)] & 2) != 0) {
          memmove(acStack_1d9 + 1,local_14,SVar8);
          SVar8 = SVar8 - 1;
        }
        pcVar11 = local_175 + 1;
        *pcVar6 = '=';
        do {
          cVar2 = pcVar6[2];
          *pcVar11 = cVar2;
          if (cVar2 == '\0') break;
          cVar2 = pcVar6[3];
          pcVar11[1] = cVar2;
          pcVar11 = pcVar11 + 2;
          pcVar6 = pcVar6 + 2;
        } while (cVar2 != '\0');
        uVar7 = 0xffffffff;
        pcVar6 = local_175 + 1;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + (uint)bVar19 * -2 + 1;
        } while (cVar2 != '\0');
        SVar8 = ~uVar7 - 1;
        if (0 < (int)SVar8) {
          pcVar6 = local_175 + ~uVar7;
          do {
            if ((g_CharacterClassificationTable[(byte)(pcVar6[-1] + 1)] & 2) == 0) break;
            SVar8 = SVar8 - 1;
            pcVar6 = pcVar6 + -1;
          } while (0 < (int)SVar8);
        }
        (local_175 + 1)[SVar8] = '\0';
        while ((g_CharacterClassificationTable[(byte)(local_175[1] + 1)] & 2) != 0) {
          memmove(local_175 + 1,local_175 + 2,SVar8);
          SVar8 = SVar8 - 1;
        }
        pcVar6 = (char *)core_event_cpp_CEventList_FUN_004add00(g_CEventListPtr);
        if (pcVar6 == (char *)0x0) {
          pcVar6 = (char *)core_event_cpp_CEventList_FUN_004add40(g_CEventListPtr);
          if (pcVar6 == (char *)0x0) {
            pCVar4 = (this_ptr->data).v_rulelist_ptr;
            if (pCVar4->list_size <= (this_ptr->param1).v_int) {
              core_event_cpp_CRuleList_insert_FUN_004b1680(pCVar4);
              return 1;
            }
            pacVar16 = pCVar4->conditions + (this_ptr->param1).v_int;
            pcVar6 = acStack_1d9 + 1;
            goto LAB_00410083;
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
    iVar12 = (*(this_ptr->callback).v_action_func)(actor,this_ptr);
    if (iVar12 != 0) {
      if (this_ptr->auto_update_flag == 0) {
        return 1;
      }
      local_37ec.base.capacity = (int)actor;
      local_37ec.base.item_count = 0x4102c1;
      (*((actor->vtable)._ub)->setup)(actor);
      return 1;
    }
    break;
  case PROP_FLAGS:
    iVar12 = 0;
    while( true ) {
      iVar18 = 0;
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_25a4);
      do {
        pcVar6 = "disabled";
        if ((*(this_ptr->data).v_uint_ptr & *(uint *)((int)&0x00000001 + iVar18)) != 0) {
          pcVar6 = "enable";
        }
        _sprintf
                  (local_368,"%s\t%s",*(uint *)((int)&PTR_s_thrust_0066e310 + iVar18),
                   pcVar6);
        iVar18 = iVar18 + 8;
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_25a4.base,local_368);
      } while (iVar18 != 0x10);
      iVar12 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                         (&local_25a4,local_2a0,iVar12,0);
      if (iVar12 < 0) break;
      *(this_ptr->data).v_uint_ptr = *(this_ptr->data).v_uint_ptr ^ (&0x00000001)[iVar12 * 2];
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_25a4,0);
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_25a4,0);
    return 0;
  default:
    g_CurrentFilename = "..\\core\\actor.cpp";
    g_CurrentLineNumber = 0x119f;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Unknown CActorProperty type: %d",this_ptr->type)
    ;
    return 0;
  }
  return 0;
  while( true ) {
    cVar2 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    (*pacVar16)[1] = cVar2;
    pacVar16 = (char (*) [100])(*pacVar16 + 2);
    if (cVar2 == '\0') break;
LAB_00410083:
    cVar2 = *pcVar6;
    (*pacVar16)[0] = cVar2;
    if (cVar2 == '\0') break;
  }
  pcVar6 = local_175 + 1;
  pcVar11 = (char *)((int)((this_ptr->data).v_dfm_ptr)->transformed_vertices +
                    (this_ptr->param1).v_int * 100 + 0x1a0);
  do {
    cVar2 = *pcVar6;
    *pcVar11 = cVar2;
    if (cVar2 == '\0') {
      return 1;
    }
    cVar2 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar11[1] = cVar2;
    pcVar11 = pcVar11 + 2;
  } while (cVar2 != '\0');
  return 1;
}
