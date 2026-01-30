// Name: core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0
// Address: 0040eed0
// Address Range: [[0040eed0, 0040ef00] [0040ef93, 0040fffd] [004100ee, 00410332]]
// Convention: __cdecl
// Signature: int __cdecl core_actor_cpp_CActorProperty_editInteractive_FUN_0040eed0 (CActorProperty *this_ptr,CDemonActor *actor)

#include "nocturne.h"

int __cdecl
core_actor_cpp_CActorProperty_editInteractive_FUN_0040eed0
          (CActorProperty *this_ptr,CDemonActor *actor)

{
  char cVar1;
  float *pfVar2;
  CVector3f *pCVar3;
  int *piVar4;
  int extraout_EAX;
  SMotion *pSVar5;
  char *pcVar6;
  uint uVar7;
  SIZE_T SVar8;
  void *pvVar9;
  byte *pbVar10;
  char *pcVar11;
  int iVar12;
  byte *pbVar13;
  SMotion *pSVar14;
  CClothList *pCVar15;
  char *pcVar16;
  CRuleList *pCVar17;
  int iVar18;
  int iVar19;
  byte bVar20;
  uint in_stack_ffffc814;
  uint in_stack_ffffc818;
  char **in_stack_ffffc81c;
  CStrList_vtable *in_stack_ffffc820;
  uint in_stack_ffffc824;
  uint in_stack_ffffc828;
  byte local_3444 [936];
  CPickList local_309c;
  CPickList local_2cf4;
  byte local_294c [936];
  CPickList local_25a4;
  byte local_21fc [936];
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
  char local_854 [260];
  byte local_750 [260];
  char local_64c [260];
  char local_548 [260];
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
  float local_30;
  int local_2c;
  int local_28;
  CMotionList *local_24;
  int local_20;
  char (*local_1c) [30];
  CMotionList *local_18;
  char *local_14;
  
  bVar20 = 0;
  if (this_ptr->enabled_flag == 0) {
    return 0;
  }
  pcVar6 = this_ptr->name;
  sprintf(local_2a0,"Enter %s for %s",pcVar6,actor);
  switch(this_ptr->type) {
  case 0:
    local_2c = *(int *)this_ptr->data_ptr;
    while (iVar12 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                              (g_CEditorToolsPtr,local_2a0,&local_2c,this_ptr->min_or_index,
                               (int)this_ptr->min_ptr_or_choice,this_ptr->max_or_param,1),
          iVar12 != 0) {
      if ((this_ptr->validator_or_callback == (void *)0x0) ||
         (iVar12 = (*this_ptr->validator_or_callback)(), iVar12 != 0)) {
        *(int *)this_ptr->data_ptr = local_2c;
        if (this_ptr->auto_update_flag != 0) {
          (*((actor->vtable)._ub)->setup)(actor);
        }
        return 1;
      }
    }
    break;
  case 1:
    local_30 = *(float *)this_ptr->data_ptr;
    while (iVar12 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                              (g_CEditorToolsPtr,local_2a0,&local_30,this_ptr->min_or_index,
                               (float)this_ptr->min_ptr_or_choice,(float)this_ptr->max_or_param,1),
          iVar12 != 0) {
      if ((this_ptr->validator_or_callback == (void *)0x0) ||
         (iVar12 = (*this_ptr->validator_or_callback)(), iVar12 != 0)) {
        *(float *)this_ptr->data_ptr = local_30;
        if (this_ptr->auto_update_flag != 0) {
          (*((actor->vtable)._ub)->setup)(actor);
        }
        return 1;
      }
    }
    break;
  case 2:
    pfVar2 = this_ptr->data_ptr;
    local_48.x = *pfVar2;
    local_48.y = pfVar2[1];
    local_48.z = pfVar2[2];
    do {
      iVar12 = shape_edittool_cpp_CEditorTools_promptForValidVector_FUN_004a0300
                         (g_CEditorToolsPtr,local_2a0,&local_48,1);
      if (iVar12 == 0) {
        return 0;
      }
      if (this_ptr->validator_or_callback == (void *)0x0) break;
      local_3c = local_48.x;
      local_38 = local_48.y;
      local_34 = local_48.z;
      iVar12 = (*this_ptr->validator_or_callback)();
    } while (iVar12 == 0);
    pCVar3 = this_ptr->data_ptr;
    if (pCVar3 != &local_48) {
      pCVar3->x = local_48.x;
      pCVar3->y = local_48.y;
      pCVar3->z = local_48.z;
    }
    if (this_ptr->auto_update_flag != 0) {
      (*((actor->vtable)._ub)->setup)(actor);
    }
    return 1;
  case 3:
    pcVar6 = local_aac;
    pcVar11 = this_ptr->data_ptr;
    do {
      cVar1 = *pcVar11;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
    do {
      iVar12 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                         (g_CEditorToolsPtr,local_2a0,local_aac,this_ptr->max_or_param,1);
      if (iVar12 == 0) {
        return 0;
      }
    } while ((this_ptr->validator_or_callback != (void *)0x0) &&
            (iVar12 = (*this_ptr->validator_or_callback)(), iVar12 == 0));
    pcVar6 = local_aac;
    pcVar11 = this_ptr->data_ptr;
    do {
      cVar1 = *pcVar6;
      *pcVar11 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar11[1] = cVar1;
      pcVar11 = pcVar11 + 2;
    } while (cVar1 != '\0');
    if (this_ptr->auto_update_flag != 0) {
      (*((actor->vtable)._ub)->setup)(actor);
    }
    return 1;
  case 4:
    *(uint *)this_ptr->data_ptr = (uint)(*(int *)this_ptr->data_ptr == 0);
    return 1;
  case 5:
    local_28 = *(int *)this_ptr->data_ptr;
    iVar12 = core_msnedit_cpp_CDemonMission_FUN_0053cad0
                       (g_CDemonMissionPtr,(int)actor,local_2a0,&local_28,this_ptr->min_or_index,
                        (int)(this_ptr->unknown + 0x18),(int)this_ptr->validator_or_callback,1);
    if (iVar12 != 0) {
      *(int *)this_ptr->data_ptr = local_28;
      if (this_ptr->auto_update_flag == 0) {
        return 1;
      }
      (*((actor->vtable)._ub)->setup)(actor);
      return 1;
    }
    break;
  case 6:
    sprintf
              (local_2a0,"Select model for actor %s.  Current model is %s.",actor,(int)this_ptr->data_ptr + 0x78);
    pcVar6 = local_854;
    pcVar11 = (char *)((int)this_ptr->data_ptr + 0x78);
    do {
      cVar1 = *pcVar11;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xffffc814);
    shape_edittool_cpp_CStrList_populateFromFileSearch_FUN_004a35b0
              ((CStrList *)&stack0xffffc814,"models","*.kfm");
    shape_edittool_cpp_CStrList_sort_FUN_004a2ec0((CStrList *)&stack0xffffc814);
    if (this_ptr->min_or_index != 0) {
      shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xffffc814,"(none)");
    }
    do {
      pcVar6 = (char *)shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                                 ((CPickList *)&stack0xffffc814,local_2a0,-1,0);
      if ((int)pcVar6 < 0) {
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  ((CPickList *)&stack0xffffc814,0,in_stack_ffffc814,in_stack_ffffc818,
                   (uint)in_stack_ffffc81c,(uint)in_stack_ffffc820,in_stack_ffffc824);
        return 0;
      }
      if ((this_ptr->min_or_index == 0) || (pcVar6 != (char *)(in_stack_ffffc814 - 1))) {
        shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
                  ((CStrList *)&stack0xffffc814,(int)local_18ac,pcVar6,0);
        shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
                  ((CStrList *)&stack0xffffc814,(int)local_eac,pcVar6,1);
        makepath(local_854,(char *)0x0,(char *)0x0,local_18ac,local_eac);
      }
      else {
        local_854[0] = '\0';
      }
    } while ((this_ptr->validator_or_callback != (void *)0x0) &&
            (iVar12 = (*this_ptr->validator_or_callback)(), iVar12 == 0));
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(this_ptr->data_ptr,local_854);
    if (this_ptr->auto_update_flag != 0) {
      (*((actor->vtable)._ub)->setup)(actor);
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)&stack0xffffc814,0,in_stack_ffffc814,in_stack_ffffc818,
               (uint)in_stack_ffffc81c,(uint)in_stack_ffffc820,in_stack_ffffc824);
    return 1;
  case 7:
    sprintf
              (local_2a0,"Select model for actor %s.  Current model is %s.",actor,(int)this_ptr->data_ptr + 0x2260)
    ;
    pcVar6 = local_548;
    pcVar11 = (char *)((int)this_ptr->data_ptr + 0x2260);
    do {
      cVar1 = *pcVar11;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_2cf4);
    shape_edittool_cpp_CStrList_populateFromFileSearch_FUN_004a35b0
              (&local_2cf4.base,"models","*.dfm");
    shape_edittool_cpp_CStrList_sort_FUN_004a2ec0(&local_2cf4.base);
    if (this_ptr->min_or_index != 0) {
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_2cf4.base,"(none)");
    }
    do {
      pcVar6 = (char *)shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                                 (&local_2cf4,local_2a0,-1,0);
      if ((int)pcVar6 < 0) {
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  (&local_2cf4,0,in_stack_ffffc814,in_stack_ffffc818,(uint)in_stack_ffffc81c,
                   (uint)in_stack_ffffc820,in_stack_ffffc824);
        return 0;
      }
      if ((this_ptr->min_or_index == 0) || (pcVar6 != (char *)(local_2cf4.base.item_count + -1))) {
        shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
                  (&local_2cf4.base,(int)local_12ac,pcVar6,0);
        shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
                  (&local_2cf4.base,(int)local_1aac,pcVar6,1);
        makepath(local_548,(char *)0x0,(char *)0x0,local_12ac,local_1aac);
      }
      else {
        local_548[0] = '\0';
      }
    } while ((this_ptr->validator_or_callback != (void *)0x0) &&
            (iVar12 = (*this_ptr->validator_or_callback)(), iVar12 == 0));
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840(this_ptr->data_ptr,local_548);
    if (this_ptr->auto_update_flag != 0) {
      (*((actor->vtable)._ub)->setup)(actor);
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              (&local_2cf4,0,in_stack_ffffc814,in_stack_ffffc818,(uint)in_stack_ffffc81c,
               (uint)in_stack_ffffc820,in_stack_ffffc824);
    return 1;
  case 8:
    core_sound_cpp_editSoundName_FUN_005b3de0(this_ptr->data_ptr,local_2a0);
    return extraout_EAX;
  case 9:
    iVar12 = 0;
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)local_3444);
    do {
      pcVar6 = core_ground_cpp_getGroundTypeName_FUN_004eed80(iVar12);
      iVar12 = iVar12 + 1;
      shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)local_3444,pcVar6);
    } while (iVar12 < 0xe);
    iVar12 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                       ((CPickList *)local_3444,local_2a0,*(int *)this_ptr->data_ptr,0);
    if (-1 < iVar12) {
      *(int *)this_ptr->data_ptr = iVar12;
      if (this_ptr->auto_update_flag != 0) {
        (*((actor->vtable)._ub)->setup)(actor);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)(local_3444 + 4),0,in_stack_ffffc818,(uint)in_stack_ffffc81c,
                 (uint)in_stack_ffffc820,in_stack_ffffc824,in_stack_ffffc828);
      return 1;
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)local_3444,0,in_stack_ffffc814,in_stack_ffffc818,(uint)in_stack_ffffc81c
               ,(uint)in_stack_ffffc820,in_stack_ffffc824);
    return 0;
  case 10:
    pbVar13 = local_750;
    pbVar10 = this_ptr->data_ptr;
    do {
      bVar20 = *pbVar10;
      *pbVar13 = bVar20;
      if (bVar20 == 0) break;
      bVar20 = pbVar10[1];
      pbVar10 = pbVar10 + 2;
      pbVar13[1] = bVar20;
      pbVar13 = pbVar13 + 2;
    } while (bVar20 != 0);
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_309c);
    shape_edittool_cpp_CStrList_populateFromFileSearch_FUN_004a35b0
              (&local_309c.base,this_ptr->unknown + 4,this_ptr->unknown + 0x18);
    shape_edittool_cpp_CStrList_sort_FUN_004a2ec0(&local_309c.base);
    if (this_ptr->min_or_index != 0) {
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_309c.base,"(none)");
    }
    do {
      pcVar6 = (char *)shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                                 (&local_309c,local_2a0,-1,0);
      if ((int)pcVar6 < 0) {
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  (&local_309c,0,in_stack_ffffc814,in_stack_ffffc818,(uint)in_stack_ffffc81c,
                   (uint)in_stack_ffffc820,in_stack_ffffc824);
        return 0;
      }
      if ((this_ptr->min_or_index == 0) || (pcVar6 != (char *)(local_309c.base.item_count + -1))) {
        shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
                  (&local_309c.base,(int)local_cac,pcVar6,0);
        shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
                  (&local_309c.base,(int)local_10ac,pcVar6,1);
        makepath
                  ((char *)local_750,(char *)0x0,(char *)0x0,local_cac,local_10ac);
      }
      else {
        local_750[0] = (byte)((uint)pcVar6 >> 8) ^
                       (byte)((uint)(local_309c.base.item_count + -1) >> 8);
      }
    } while ((this_ptr->validator_or_callback != (void *)0x0) &&
            (iVar12 = (*this_ptr->validator_or_callback)(), iVar12 == 0));
    pbVar13 = local_750;
    pbVar10 = this_ptr->data_ptr;
    do {
      bVar20 = *pbVar13;
      *pbVar10 = bVar20;
      if (bVar20 == 0) break;
      bVar20 = pbVar13[1];
      pbVar13 = pbVar13 + 2;
      pbVar10[1] = bVar20;
      pbVar10 = pbVar10 + 2;
    } while (bVar20 != 0);
    if (this_ptr->auto_update_flag != 0) {
      (*((actor->vtable)._ub)->setup)(actor);
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              (&local_309c,0,in_stack_ffffc814,in_stack_ffffc818,(uint)in_stack_ffffc81c,
               (uint)in_stack_ffffc820,in_stack_ffffc824);
    return 1;
  case 0xb:
    pcVar6 = local_ac;
    pcVar11 = this_ptr->data_ptr;
    do {
      cVar1 = *pcVar11;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
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
    pcVar11 = this_ptr->data_ptr;
    do {
      cVar1 = *pcVar6;
      *pcVar11 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar11[1] = cVar1;
      pcVar11 = pcVar11 + 2;
    } while (cVar1 != '\0');
    if (this_ptr->auto_update_flag != 0) {
      (*((actor->vtable)._ub)->setup)(actor);
    }
    return 1;
  case 0xc:
    pcVar6 = local_110;
    pcVar11 = this_ptr->data_ptr;
    do {
      cVar1 = *pcVar11;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
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
    pcVar11 = this_ptr->data_ptr;
    do {
      cVar1 = *pcVar6;
      *pcVar11 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar11[1] = cVar1;
      pcVar11 = pcVar11 + 2;
    } while (cVar1 != '\0');
    if (this_ptr->auto_update_flag != 0) {
      (*((actor->vtable)._ub)->setup)(actor);
    }
    return 1;
  case 0xd:
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)local_21fc);
    local_18 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0(this_ptr->data_ptr);
    iVar12 = 0;
    local_20 = -1;
    if (0 < local_18->motion_count) {
      local_1c = local_18->state_names;
      pSVar14 = local_18->motions;
      local_24 = local_18;
      do {
        sprintf
                  (local_980,"%s\t%s",pSVar14,local_1c + local_24->motions[0].state_index);
        shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)local_21fc,local_980);
        pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(this_ptr->data_ptr)
        ;
        if (pSVar5 == pSVar14) {
          local_20 = iVar12;
        }
        local_24 = (CMotionList *)(local_24->state_names[0x2d] + 2);
        iVar12 = iVar12 + 1;
        pSVar14 = pSVar14 + 1;
      } while (iVar12 < local_18->motion_count);
    }
    iVar12 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                       ((CPickList *)local_21fc,local_2a0,local_20,0);
    if (-1 < iVar12) {
      core_motion_cpp_CMotionController_jumpToMotion_FUN_0052dde0(this_ptr->data_ptr,iVar12,0.0);
      if (this_ptr->auto_update_flag != 0) {
        (*((actor->vtable)._ub)->setup)(actor);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)(local_21fc + 4),0,in_stack_ffffc818,(uint)in_stack_ffffc81c,
                 (uint)in_stack_ffffc820,in_stack_ffffc824,in_stack_ffffc828);
      return 1;
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)local_21fc,0,in_stack_ffffc814,in_stack_ffffc818,(uint)in_stack_ffffc81c
               ,(uint)in_stack_ffffc820,in_stack_ffffc824);
    return 0;
  case 0xe:
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)local_294c);
    shape_edittool_cpp_CStrList_populateFromFileSearch_FUN_004a35b0
              ((CStrList *)local_294c,"models","*.cth");
    shape_edittool_cpp_CStrList_sort_FUN_004a2ec0((CStrList *)local_294c);
    if (this_ptr->min_or_index < *(int *)this_ptr->data_ptr) {
      sprintf
                (local_2a0,"Select %s for actor %s.  Current is %s.",pcVar6,actor,
                 (int *)((int)this_ptr->data_ptr + (this_ptr->min_or_index * 10 + 1) * 4));
      shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)local_294c,"(remove cloth)");
    }
    else {
      sprintf(local_2a0,"Add %s for actor %s.",pcVar6,actor);
    }
    pcVar6 = (char *)shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                               ((CPickList *)local_294c,local_2a0,-1,0);
    if ((int)pcVar6 < 0) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)local_294c,0,in_stack_ffffc814,in_stack_ffffc818,
                 (uint)in_stack_ffffc81c,(uint)in_stack_ffffc820,in_stack_ffffc824);
      return 0;
    }
    shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
              ((CStrList *)local_294c,(int)local_16ac,pcVar6,0);
    shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
              ((CStrList *)local_294c,(int)local_14ac,pcVar6,1);
    makepath(local_64c,(char *)0x0,(char *)0x0,local_16ac,local_14ac);
    pCVar15 = this_ptr->data_ptr;
    if (this_ptr->min_or_index < pCVar15->unk) {
      if (pcVar6 == (char *)(local_294c._0_4_ + -1)) {
        core_cloth_cpp_CClothList_remove_FUN_0043c170(pCVar15);
      }
      else {
        pcVar6 = local_64c;
        pCVar15 = pCVar15 + this_ptr->min_or_index * 10 + 1;
        do {
          cVar1 = *pcVar6;
          *(char *)&pCVar15->unk = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar6[1];
          pcVar6 = pcVar6 + 2;
          *(char *)((int)&pCVar15->unk + 1) = cVar1;
          pCVar15 = (CClothList *)((int)&pCVar15->unk + 2);
        } while (cVar1 != '\0');
      }
    }
    else {
      core_cloth_cpp_CClothList_add_FUN_0043c0f0(pCVar15);
    }
    (*((actor->vtable)._ub)->setup)(actor);
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)(local_294c + 4),0,in_stack_ffffc818,(uint)in_stack_ffffc81c,
               (uint)in_stack_ffffc820,in_stack_ffffc824,in_stack_ffffc828);
    return 1;
  case 0xf:
    iVar12 = -1;
    iVar19 = 0;
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_1e54);
    if (0 < this_ptr->min_or_index) {
      iVar18 = 0;
      do {
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  (&local_1e54.base,*(char **)(iVar18 + (int)this_ptr->min_ptr_or_choice));
        if (*(int *)this_ptr->data_ptr == *(int *)((int)this_ptr->min_ptr_or_choice + iVar18 + 4)) {
          iVar12 = iVar19;
        }
        iVar19 = iVar19 + 1;
        iVar18 = iVar18 + 8;
      } while (iVar19 < this_ptr->min_or_index);
    }
    if ((this_ptr->min_or_index == 2) && (-1 < iVar12)) {
      pvVar9 = this_ptr->min_ptr_or_choice;
      iVar12 = (1 - iVar12) * 8;
    }
    else {
      iVar12 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                         (&local_1e54,local_2a0,iVar12,0);
      if (iVar12 < 0) goto LAB_00410163;
      iVar12 = iVar12 << 3;
      pvVar9 = this_ptr->min_ptr_or_choice;
    }
    *(uint *)this_ptr->data_ptr = *(uint *)((int)pvVar9 + iVar12 + 4);
LAB_00410163:
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              (&local_1e54,0,in_stack_ffffc814,in_stack_ffffc818,(uint)in_stack_ffffc81c,
               (uint)in_stack_ffffc820,in_stack_ffffc824);
    return 0;
  case 0x10:
    piVar4 = this_ptr->data_ptr;
    iVar12 = this_ptr->min_or_index;
    if (iVar12 < *piVar4) {
      sprintf
                (local_444,"%s => %s",piVar4 + iVar12 * 0x19 + 1,piVar4 + iVar12 * 0x19 + 0x7e);
    }
    else {
      pcVar11 = "Condition => Event";
      pcVar6 = local_444;
      do {
        cVar1 = *pcVar11;
        *pcVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar11[1];
        pcVar11 = pcVar11 + 2;
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
    }
LAB_0040fdd3:
    iVar12 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                       (g_CEditorToolsPtr,local_2a0,local_444,0xdc,1);
    if (iVar12 != 0) {
      if (local_444[0] == '\0') {
        if (this_ptr->min_or_index < this_ptr->data_ptr->list_size) {
          core_event_cpp_CRuleList_remove_FUN_004b17c0(this_ptr->data_ptr);
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
        pcVar16 = acStack_1d9 + 1;
        *pcVar6 = '\0';
        do {
          cVar1 = *pcVar11;
          *pcVar16 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar11[1];
          pcVar11 = pcVar11 + 2;
          pcVar16[1] = cVar1;
          pcVar16 = pcVar16 + 2;
        } while (cVar1 != '\0');
        uVar7 = 0xffffffff;
        pcVar11 = acStack_1d9 + 1;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = *pcVar11;
          pcVar11 = pcVar11 + (uint)bVar20 * -2 + 1;
        } while (cVar1 != '\0');
        SVar8 = ~uVar7 - 1;
        if (0 < (int)SVar8) {
          pcVar11 = acStack_1d9 + ~uVar7;
          do {
            if ((g_CharacterClassificationTable[(byte)(pcVar11[-1] + 1)] & 2U) == 0) break;
            SVar8 = SVar8 - 1;
            pcVar11 = pcVar11 + -1;
          } while (0 < (int)SVar8);
        }
        (acStack_1d9 + 1)[SVar8] = '\0';
        local_14 = acStack_1d9 + 2;
        while ((g_CharacterClassificationTable[(byte)(acStack_1d9[1] + 1)] & 2U) != 0) {
          memmove(acStack_1d9 + 1,local_14,SVar8);
          SVar8 = SVar8 - 1;
        }
        pcVar11 = local_175 + 1;
        *pcVar6 = '=';
        do {
          cVar1 = pcVar6[2];
          *pcVar11 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar6[3];
          pcVar11[1] = cVar1;
          pcVar11 = pcVar11 + 2;
          pcVar6 = pcVar6 + 2;
        } while (cVar1 != '\0');
        uVar7 = 0xffffffff;
        pcVar6 = local_175 + 1;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + (uint)bVar20 * -2 + 1;
        } while (cVar1 != '\0');
        SVar8 = ~uVar7 - 1;
        if (0 < (int)SVar8) {
          pcVar6 = local_175 + ~uVar7;
          do {
            if ((g_CharacterClassificationTable[(byte)(pcVar6[-1] + 1)] & 2U) == 0) break;
            SVar8 = SVar8 - 1;
            pcVar6 = pcVar6 + -1;
          } while (0 < (int)SVar8);
        }
        (local_175 + 1)[SVar8] = '\0';
        while ((g_CharacterClassificationTable[(byte)(local_175[1] + 1)] & 2U) != 0) {
          memmove(local_175 + 1,local_175 + 2,SVar8);
          SVar8 = SVar8 - 1;
        }
        pcVar6 = (char *)core_event_cpp_CEventList_FUN_004add00(g_CEventListPtr);
        if (pcVar6 == (char *)0x0) {
          pcVar6 = (char *)core_event_cpp_CEventList_FUN_004add40(g_CEventListPtr);
          if (pcVar6 == (char *)0x0) {
            pCVar17 = this_ptr->data_ptr;
            if (pCVar17->list_size <= this_ptr->min_or_index) {
              core_event_cpp_CRuleList_insert_FUN_004b1680(pCVar17);
              return 1;
            }
            pCVar17 = pCVar17 + this_ptr->min_or_index * 0x19 + 1;
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
  case 0x11:
    iVar12 = (*this_ptr->validator_or_callback)();
    if (iVar12 != 0) {
      if (this_ptr->auto_update_flag == 0) {
        return 1;
      }
      (*((actor->vtable)._ub)->setup)(actor);
      return 1;
    }
    break;
  case 0x12:
    iVar12 = 0;
    while( true ) {
      iVar19 = 0;
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_25a4);
      do {
        pcVar6 = "disabled";
        if ((*(uint *)this_ptr->data_ptr & *(uint *)((int)&0x00000001 + iVar19)) != 0) {
          pcVar6 = "enable";
        }
        sprintf
                  (local_368,"%s\t%s",*(uint *)((int)&PTR_s_thrust_0066e310 + iVar19),
                   pcVar6);
        iVar19 = iVar19 + 8;
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_25a4.base,local_368);
      } while (iVar19 != 0x10);
      iVar12 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                         (&local_25a4,local_2a0,iVar12,0);
      if (iVar12 < 0) break;
      *(uint *)this_ptr->data_ptr = *(uint *)this_ptr->data_ptr ^ (&0x00000001)[iVar12 * 2];
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                (&local_25a4,0,in_stack_ffffc814,in_stack_ffffc818,(uint)in_stack_ffffc81c,
                 (uint)in_stack_ffffc820,in_stack_ffffc824);
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              (&local_25a4,0,in_stack_ffffc814,in_stack_ffffc818,(uint)in_stack_ffffc81c,
               (uint)in_stack_ffffc820,in_stack_ffffc824);
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
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    *(char *)((int)&pCVar17->list_size + 1) = cVar1;
    pCVar17 = (CRuleList *)((int)&pCVar17->list_size + 2);
    if (cVar1 == '\0') break;
LAB_00410083:
    cVar1 = *pcVar6;
    *(char *)&pCVar17->list_size = cVar1;
    if (cVar1 == '\0') break;
  }
  pcVar6 = local_175 + 1;
  pcVar11 = (char *)((int)this_ptr->data_ptr + this_ptr->min_or_index * 100 + 0x1f8);
  do {
    cVar1 = *pcVar6;
    *pcVar11 = cVar1;
    if (cVar1 == '\0') {
      return 1;
    }
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar11[1] = cVar1;
    pcVar11 = pcVar11 + 2;
  } while (cVar1 != '\0');
  return 1;
}
