// Name: core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0
// Address: 0040eed0
// Address Range: [[0040eed0, 0040ef00] [0040ef93, 0040fffd] [004100ee, 00410332]]
// Convention: __cdecl
// Signature: int core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0(CActorProperty * this_ptr, CDemonActor * actor)

#include "nocturne.h"

int __cdecl
core_actor_cpp_CActorProperty_editInteractive_FUN_0040eed0
          (CActorProperty *this_ptr,CDemonActor *actor)

{
  CClothList CVar1;
  char cVar2;
  float *pfVar3;
  CVector3f *pCVar4;
  int *piVar5;
  bool bVar6;
  undefined3 extraout_var;
  int extraout_EAX;
  SMotion *pSVar7;
  char *pcVar8;
  uint uVar9;
  SIZE_T SVar10;
  void *pvVar11;
  BADSPACEBASE *in_ESP;
  byte *pbVar12;
  CClothList *pCVar13;
  char *pcVar14;
  int iVar15;
  byte *pbVar16;
  SMotion *pSVar17;
  CClothList *pCVar18;
  char *pcVar19;
  CRuleList *pCVar20;
  int iVar21;
  int iVar22;
  byte bVar23;
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
  CClothList local_64c [260];
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
  uint local_28;
  CMotionList *local_24;
  int local_20;
  char (*local_1c) [30];
  CMotionList *local_18;
  char *local_14;
  
  bVar23 = 0;
  if (this_ptr->enabled_flag == 0) {
    return 0;
  }
  pcVar8 = this_ptr->name;
  crt_stdio_c_sprintf_FUN_005fdbd0(local_2a0,"Enter %s for %s",pcVar8,actor);
  switch(this_ptr->type) {
  case 0:
                    /* WARNING: Load size is inaccurate */
    local_2c = *this_ptr->data_ptr;
    while (bVar6 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                             (g_CEditorToolsPtr,local_2a0,&local_2c,SUB41 /* extract 2-byte value */(this_ptr->min_or_index,0),
                              (int)this_ptr->min_ptr_or_choice,this_ptr->max_or_param,true),
          CONCAT31 /* combine 2-byte values */(extraout_var,bVar6) != 0) {
      if ((this_ptr->validator_or_callback == (void *)0x0) ||
         (iVar15 = (*(code *)this_ptr->validator_or_callback)(), iVar15 != 0)) {
        *(int *)this_ptr->data_ptr = local_2c;
        if (this_ptr->auto_update_flag != 0) {
          (*actor->vtable->setup)(actor);
        }
        return 1;
      }
    }
    break;
  case 1:
                    /* WARNING: Load size is inaccurate */
    local_30 = *this_ptr->data_ptr;
    while (iVar15 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                              (g_CEditorToolsPtr,local_2a0,&local_30,SUB41 /* extract 2-byte value */(this_ptr->min_or_index,0)
                               ,(float)this_ptr->min_ptr_or_choice,(float)this_ptr->max_or_param,
                               true), iVar15 != 0) {
      if ((this_ptr->validator_or_callback == (void *)0x0) ||
         (iVar15 = (*(code *)this_ptr->validator_or_callback)(), iVar15 != 0)) {
        *(float *)this_ptr->data_ptr = local_30;
        if (this_ptr->auto_update_flag != 0) {
          (*actor->vtable->setup)(actor);
        }
        return 1;
      }
    }
    break;
  case 2:
    pfVar3 = (float *)this_ptr->data_ptr;
    local_48.x = *pfVar3;
    local_48.y = pfVar3[1];
    local_48.z = pfVar3[2];
    do {
      iVar15 = shape_edittool_cpp_CEditorTools_promptForValidVector_FUN_004a0300
                         (g_CEditorToolsPtr,local_2a0,&local_48,true);
      if (iVar15 == 0) {
        return 0;
      }
      if (this_ptr->validator_or_callback == (void *)0x0) break;
      local_3c = local_48.x;
      local_38 = local_48.y;
      local_34 = local_48.z;
      iVar15 = (*(code *)this_ptr->validator_or_callback)();
    } while (iVar15 == 0);
    pCVar4 = (CVector3f *)this_ptr->data_ptr;
    if (pCVar4 != &local_48) {
      pCVar4->x = local_48.x;
      pCVar4->y = local_48.y;
      pCVar4->z = local_48.z;
    }
    if (this_ptr->auto_update_flag != 0) {
      (*actor->vtable->setup)(actor);
    }
    return 1;
  case 3:
    pcVar8 = local_aac;
    pcVar14 = (char *)this_ptr->data_ptr;
    do {
      cVar2 = *pcVar14;
      *pcVar8 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar14[1];
      pcVar14 = pcVar14 + 2;
      pcVar8[1] = cVar2;
      pcVar8 = pcVar8 + 2;
    } while (cVar2 != '\0');
    do {
      iVar15 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                         (g_CEditorToolsPtr,local_2a0,local_aac,this_ptr->max_or_param,1);
      if (iVar15 == 0) {
        return 0;
      }
    } while ((this_ptr->validator_or_callback != (void *)0x0) &&
            (iVar15 = (*(code *)this_ptr->validator_or_callback)(), iVar15 == 0));
    pcVar8 = local_aac;
    pcVar14 = (char *)this_ptr->data_ptr;
    do {
      cVar2 = *pcVar8;
      *pcVar14 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar14[1] = cVar2;
      pcVar14 = pcVar14 + 2;
    } while (cVar2 != '\0');
    if (this_ptr->auto_update_flag != 0) {
      (*actor->vtable->setup)(actor);
    }
    return 1;
  case 4:
                    /* WARNING: Load size is inaccurate */
    *(uint *)this_ptr->data_ptr = (uint)(*this_ptr->data_ptr == 0);
    return 1;
  case 5:
                    /* WARNING: Load size is inaccurate */
    local_28 = *this_ptr->data_ptr;
    iVar15 = core_msnedit_cpp_RunNoneFunctorForCancelAndElse_FUN_0053cad0();
    if (iVar15 != 0) {
      *(uint *)this_ptr->data_ptr = local_28;
      if (this_ptr->auto_update_flag == 0) {
        return 1;
      }
      (*actor->vtable->setup)(actor);
      return 1;
    }
    break;
  case 6:
    crt_stdio_c_sprintf_FUN_005fdbd0
              (local_2a0,"Select model for actor %s.  Current model is %s.",actor,(int)this_ptr->data_ptr + 0x78);
    pcVar8 = local_854;
    pcVar14 = (char *)((int)this_ptr->data_ptr + 0x78);
    do {
      cVar2 = *pcVar14;
      *pcVar8 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar14[1];
      pcVar14 = pcVar14 + 2;
      pcVar8[1] = cVar2;
      pcVar8 = pcVar8 + 2;
    } while (cVar2 != '\0');
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xffffc814);
    shape_edittool_cpp_CStrList_populateFromFileSearch_FUN_004a35b0
              ((CStrList *)&stack0xffffc814,"models","*.kfm");
    shape_edittool_cpp_CStrList_sort_FUN_004a2ec0((CStrList *)&stack0xffffc814);
    if (this_ptr->min_or_index != 0) {
      shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xffffc814,"(none)");
    }
    do {
      pcVar8 = (char *)shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                                 ((CPickList *)&stack0xffffc814,local_2a0,-1,0);
      if ((int)pcVar8 < 0) {
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  ((CPickList *)&stack0xffffc814,0,in_stack_ffffc814,in_stack_ffffc818,
                   (uint)in_stack_ffffc81c,(uint)in_stack_ffffc820,in_stack_ffffc824);
        return 0;
      }
      if ((this_ptr->min_or_index == 0) || (pcVar8 != (char *)(in_stack_ffffc814 - 1))) {
        shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
                  ((CStrList *)&stack0xffffc814,(int)local_18ac,pcVar8,0);
        shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
                  ((CStrList *)&stack0xffffc814,(int)local_eac,pcVar8,1);
        crt_file_c_makepath_FUN_005febfc(local_854,(char *)0x0,(char *)0x0,local_18ac,local_eac);
      }
      else {
        local_854[0] = '\0';
      }
    } while ((this_ptr->validator_or_callback != (void *)0x0) &&
            (iVar15 = (*(code *)this_ptr->validator_or_callback)(), iVar15 == 0));
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
              ((CKeyFramedModelInstance *)this_ptr->data_ptr,local_854);
    if (this_ptr->auto_update_flag != 0) {
      (*actor->vtable->setup)(actor);
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)&stack0xffffc814,0,in_stack_ffffc814,in_stack_ffffc818,
               (uint)in_stack_ffffc81c,(uint)in_stack_ffffc820,in_stack_ffffc824);
    return 1;
  case 7:
    crt_stdio_c_sprintf_FUN_005fdbd0
              (local_2a0,"Select model for actor %s.  Current model is %s.",actor,(int)this_ptr->data_ptr + 0x2260)
    ;
    pcVar8 = local_548;
    pcVar14 = (char *)((int)this_ptr->data_ptr + 0x2260);
    do {
      cVar2 = *pcVar14;
      *pcVar8 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar14[1];
      pcVar14 = pcVar14 + 2;
      pcVar8[1] = cVar2;
      pcVar8 = pcVar8 + 2;
    } while (cVar2 != '\0');
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_2cf4);
    shape_edittool_cpp_CStrList_populateFromFileSearch_FUN_004a35b0
              (&local_2cf4.base_strlist,"models","*.dfm");
    shape_edittool_cpp_CStrList_sort_FUN_004a2ec0(&local_2cf4.base_strlist);
    if (this_ptr->min_or_index != 0) {
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_2cf4.base_strlist,"(none)");
    }
    do {
      pcVar8 = (char *)shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                                 (&local_2cf4,local_2a0,-1,0);
      if ((int)pcVar8 < 0) {
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  (&local_2cf4,0,in_stack_ffffc814,in_stack_ffffc818,(uint)in_stack_ffffc81c,
                   (uint)in_stack_ffffc820,in_stack_ffffc824);
        return 0;
      }
      if ((this_ptr->min_or_index == 0) ||
         (pcVar8 != (char *)(local_2cf4.base_strlist.item_count + -1))) {
        shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
                  (&local_2cf4.base_strlist,(int)local_12ac,pcVar8,0);
        shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
                  (&local_2cf4.base_strlist,(int)local_1aac,pcVar8,1);
        crt_file_c_makepath_FUN_005febfc(local_548,(char *)0x0,(char *)0x0,local_12ac,local_1aac);
      }
      else {
        local_548[0] = '\0';
      }
    } while ((this_ptr->validator_or_callback != (void *)0x0) &&
            (iVar15 = (*(code *)this_ptr->validator_or_callback)(), iVar15 == 0));
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
              ((CDeformableModelInstance *)this_ptr->data_ptr,local_548);
    if (this_ptr->auto_update_flag != 0) {
      (*actor->vtable->setup)(actor);
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              (&local_2cf4,0,in_stack_ffffc814,in_stack_ffffc818,(uint)in_stack_ffffc81c,
               (uint)in_stack_ffffc820,in_stack_ffffc824);
    return 1;
  case 8:
    core_sound_cpp_editSoundName_FUN_005b3de0((char *)this_ptr->data_ptr,local_2a0);
    return extraout_EAX;
  case 9:
    iVar15 = 0;
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)local_3444);
    do {
      pcVar8 = core_ground_cpp_getGroundTypeName_FUN_004eed80(iVar15);
      iVar15 = iVar15 + 1;
      shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)local_3444,pcVar8);
    } while (iVar15 < 0xe);
                    /* WARNING: Load size is inaccurate */
    iVar15 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                       ((CPickList *)local_3444,local_2a0,*this_ptr->data_ptr,0);
    if (-1 < iVar15) {
      *(int *)this_ptr->data_ptr = iVar15;
      if (this_ptr->auto_update_flag != 0) {
        (*actor->vtable->setup)(actor);
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
    pbVar16 = local_750;
    pbVar12 = (byte *)this_ptr->data_ptr;
    do {
      bVar23 = *pbVar12;
      *pbVar16 = bVar23;
      if (bVar23 == 0) break;
      bVar23 = pbVar12[1];
      pbVar12 = pbVar12 + 2;
      pbVar16[1] = bVar23;
      pbVar16 = pbVar16 + 2;
    } while (bVar23 != 0);
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_309c);
    shape_edittool_cpp_CStrList_populateFromFileSearch_FUN_004a35b0
              (&local_309c.base_strlist,this_ptr->field8_0x6c + 4,this_ptr->field8_0x6c + 0x18);
    shape_edittool_cpp_CStrList_sort_FUN_004a2ec0(&local_309c.base_strlist);
    if (this_ptr->min_or_index != 0) {
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_309c.base_strlist,"(none)");
    }
    do {
      pcVar8 = (char *)shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                                 (&local_309c,local_2a0,-1,0);
      if ((int)pcVar8 < 0) {
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  (&local_309c,0,in_stack_ffffc814,in_stack_ffffc818,(uint)in_stack_ffffc81c,
                   (uint)in_stack_ffffc820,in_stack_ffffc824);
        return 0;
      }
      if ((this_ptr->min_or_index == 0) ||
         (pcVar8 != (char *)(local_309c.base_strlist.item_count + -1))) {
        shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
                  (&local_309c.base_strlist,(int)local_cac,pcVar8,0);
        shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
                  (&local_309c.base_strlist,(int)local_10ac,pcVar8,1);
        crt_file_c_makepath_FUN_005febfc
                  ((char *)local_750,(char *)0x0,(char *)0x0,local_cac,local_10ac);
      }
      else {
        local_750[0] = (byte)((uint)pcVar8 >> 8) ^
                       (byte)((uint)(local_309c.base_strlist.item_count + -1) >> 8);
      }
    } while ((this_ptr->validator_or_callback != (void *)0x0) &&
            (iVar15 = (*(code *)this_ptr->validator_or_callback)(), iVar15 == 0));
    pbVar16 = local_750;
    pbVar12 = (byte *)this_ptr->data_ptr;
    do {
      bVar23 = *pbVar16;
      *pbVar12 = bVar23;
      if (bVar23 == 0) break;
      bVar23 = pbVar16[1];
      pbVar16 = pbVar16 + 2;
      pbVar12[1] = bVar23;
      pbVar12 = pbVar12 + 2;
    } while (bVar23 != 0);
    if (this_ptr->auto_update_flag != 0) {
      (*actor->vtable->setup)(actor);
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              (&local_309c,0,in_stack_ffffc814,in_stack_ffffc818,(uint)in_stack_ffffc81c,
               (uint)in_stack_ffffc820,in_stack_ffffc824);
    return 1;
  case 0xb:
    pcVar8 = local_ac;
    pcVar14 = (char *)this_ptr->data_ptr;
    do {
      cVar2 = *pcVar14;
      *pcVar8 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar14[1];
      pcVar14 = pcVar14 + 2;
      pcVar8[1] = cVar2;
      pcVar8 = pcVar8 + 2;
    } while (cVar2 != '\0');
    while( true ) {
      iVar15 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                         (g_CEditorToolsPtr,local_2a0,local_ac,100,1);
      if (iVar15 == 0) {
        return 0;
      }
      pcVar8 = (char *)core_event_cpp_CEventList_FUN_004add00(g_CEventListPtr);
      if (pcVar8 == (char *)0x0) break;
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar8);
    }
    pcVar8 = local_ac;
    pcVar14 = (char *)this_ptr->data_ptr;
    do {
      cVar2 = *pcVar8;
      *pcVar14 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar14[1] = cVar2;
      pcVar14 = pcVar14 + 2;
    } while (cVar2 != '\0');
    if (this_ptr->auto_update_flag != 0) {
      (*actor->vtable->setup)(actor);
    }
    return 1;
  case 0xc:
    pcVar8 = local_110;
    pcVar14 = (char *)this_ptr->data_ptr;
    do {
      cVar2 = *pcVar14;
      *pcVar8 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar14[1];
      pcVar14 = pcVar14 + 2;
      pcVar8[1] = cVar2;
      pcVar8 = pcVar8 + 2;
    } while (cVar2 != '\0');
    while( true ) {
      iVar15 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                         (g_CEditorToolsPtr,local_2a0,local_110,100,1);
      if (iVar15 == 0) {
        return 0;
      }
      pcVar8 = (char *)core_event_cpp_CEventList_FUN_004add40(g_CEventListPtr);
      if (pcVar8 == (char *)0x0) break;
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar8);
    }
    pcVar8 = local_110;
    pcVar14 = (char *)this_ptr->data_ptr;
    do {
      cVar2 = *pcVar8;
      *pcVar14 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar14[1] = cVar2;
      pcVar14 = pcVar14 + 2;
    } while (cVar2 != '\0');
    if (this_ptr->auto_update_flag != 0) {
      (*actor->vtable->setup)(actor);
    }
    return 1;
  case 0xd:
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)local_21fc);
    local_18 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                         ((CMotionController *)this_ptr->data_ptr);
    iVar15 = 0;
    local_20 = -1;
    if (0 < local_18->motion_count) {
      local_1c = local_18->state_names;
      pSVar17 = local_18->motions;
      local_24 = local_18;
      do {
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (local_980,"%s\t%s",pSVar17,local_1c + local_24->motions[0].state_index);
        shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)local_21fc,local_980);
        pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                           ((CMotionController *)this_ptr->data_ptr);
        if (pSVar7 == pSVar17) {
          local_20 = iVar15;
        }
        local_24 = (CMotionList *)(local_24->state_names[0x2d] + 2);
        iVar15 = iVar15 + 1;
        pSVar17 = pSVar17 + 1;
      } while (iVar15 < local_18->motion_count);
    }
    iVar15 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                       ((CPickList *)local_21fc,local_2a0,local_20,0);
    if (-1 < iVar15) {
      core_motion_cpp_CMotionController_jumpToMotion_FUN_0052dde0
                ((CMotionController *)this_ptr->data_ptr,iVar15,0.0);
      if (this_ptr->auto_update_flag != 0) {
        (*actor->vtable->setup)(actor);
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
                    /* WARNING: Load size is inaccurate */
    if (this_ptr->min_or_index < *this_ptr->data_ptr) {
      crt_stdio_c_sprintf_FUN_005fdbd0
                (local_2a0,"Select %s for actor %s.  Current is %s.",pcVar8,actor,
                 (int *)((int)this_ptr->data_ptr + (this_ptr->min_or_index * 10 + 1) * 4));
      shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)local_294c,"(remove cloth)");
    }
    else {
      crt_stdio_c_sprintf_FUN_005fdbd0(local_2a0,"Add %s for actor %s.",pcVar8,actor);
    }
    pcVar8 = (char *)shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                               ((CPickList *)local_294c,local_2a0,-1,0);
    if ((int)pcVar8 < 0) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)local_294c,0,in_stack_ffffc814,in_stack_ffffc818,
                 (uint)in_stack_ffffc81c,(uint)in_stack_ffffc820,in_stack_ffffc824);
      return 0;
    }
    shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
              ((CStrList *)local_294c,(int)local_16ac,pcVar8,0);
    shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
              ((CStrList *)local_294c,(int)local_14ac,pcVar8,1);
    crt_file_c_makepath_FUN_005febfc
              ((char *)local_64c,(char *)0x0,(char *)0x0,local_16ac,local_14ac);
    pCVar18 = (CClothList *)this_ptr->data_ptr;
    if (this_ptr->min_or_index < *(int *)pCVar18) {
      if (pcVar8 == (char *)(local_294c._0_4_ + -1)) {
        core_cloth_cpp_CClothList_remove_FUN_0043c170(pCVar18);
      }
      else {
        pCVar13 = local_64c;
        pCVar18 = pCVar18 + this_ptr->min_or_index * 0x28 + 4;
        do {
          CVar1 = *pCVar13;
          *pCVar18 = CVar1;
          if (CVar1 == (CClothList)0x0) break;
          CVar1 = pCVar13[1];
          pCVar13 = pCVar13 + 2;
          pCVar18[1] = CVar1;
          pCVar18 = pCVar18 + 2;
        } while (CVar1 != (CClothList)0x0);
      }
    }
    else {
      core_cloth_cpp_CClothList_add_FUN_0043c0f0(pCVar18);
    }
    (*actor->vtable->setup)(actor);
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)(local_294c + 4),0,in_stack_ffffc818,(uint)in_stack_ffffc81c,
               (uint)in_stack_ffffc820,in_stack_ffffc824,in_stack_ffffc828);
    return 1;
  case 0xf:
    iVar15 = -1;
    iVar22 = 0;
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_1e54);
    if (0 < this_ptr->min_or_index) {
      iVar21 = 0;
      do {
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  (&local_1e54.base_strlist,*(char **)(iVar21 + (int)this_ptr->min_ptr_or_choice));
                    /* WARNING: Load size is inaccurate */
        if (*this_ptr->data_ptr == *(int *)((int)this_ptr->min_ptr_or_choice + iVar21 + 4)) {
          iVar15 = iVar22;
        }
        iVar22 = iVar22 + 1;
        iVar21 = iVar21 + 8;
      } while (iVar22 < this_ptr->min_or_index);
    }
    if ((this_ptr->min_or_index == 2) && (-1 < iVar15)) {
      pvVar11 = this_ptr->min_ptr_or_choice;
      iVar15 = (1 - iVar15) * 8;
    }
    else {
      iVar15 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                         (&local_1e54,local_2a0,iVar15,0);
      if (iVar15 < 0) goto LAB_00410163;
      iVar15 = iVar15 << 3;
      pvVar11 = this_ptr->min_ptr_or_choice;
    }
    *(uint *)this_ptr->data_ptr = *(uint *)((int)pvVar11 + iVar15 + 4);
LAB_00410163:
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              (&local_1e54,0,in_stack_ffffc814,in_stack_ffffc818,(uint)in_stack_ffffc81c,
               (uint)in_stack_ffffc820,in_stack_ffffc824);
    return 0;
  case 0x10:
    piVar5 = (int *)this_ptr->data_ptr;
    iVar15 = this_ptr->min_or_index;
    if (iVar15 < *piVar5) {
      crt_stdio_c_sprintf_FUN_005fdbd0
                (local_444,"%s => %s",piVar5 + iVar15 * 0x19 + 1,piVar5 + iVar15 * 0x19 + 0x7e);
    }
    else {
      pcVar14 = "Condition => Event";
      pcVar8 = local_444;
      do {
        cVar2 = *pcVar14;
        *pcVar8 = cVar2;
        if (cVar2 == '\0') break;
        cVar2 = pcVar14[1];
        pcVar14 = pcVar14 + 2;
        pcVar8[1] = cVar2;
        pcVar8 = pcVar8 + 2;
      } while (cVar2 != '\0');
    }
LAB_0040fdd3:
    iVar15 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                       (g_CEditorToolsPtr,local_2a0,local_444,0xdc,1);
    if (iVar15 != 0) {
      if (local_444[0] == '\0') {
        if (this_ptr->min_or_index < ((CRuleList *)this_ptr->data_ptr)->list_size) {
          core_event_cpp_CRuleList_remove_FUN_004b17c0((CRuleList *)this_ptr->data_ptr);
        }
        return 1;
      }
      pcVar8 = crt_string_c_strstr_FUN_005fedd0(local_444,"=>");
      if (pcVar8 == (char *)0x0) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Please input rule as \"<condition> => <event>\"");
      }
      else {
        pcVar14 = local_444;
        pcVar19 = acStack_1d9 + 1;
        *pcVar8 = '\0';
        do {
          cVar2 = *pcVar14;
          *pcVar19 = cVar2;
          if (cVar2 == '\0') break;
          cVar2 = pcVar14[1];
          pcVar14 = pcVar14 + 2;
          pcVar19[1] = cVar2;
          pcVar19 = pcVar19 + 2;
        } while (cVar2 != '\0');
        uVar9 = 0xffffffff;
        pcVar14 = acStack_1d9 + 1;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar2 = *pcVar14;
          pcVar14 = pcVar14 + (uint)bVar23 * -2 + 1;
        } while (cVar2 != '\0');
        SVar10 = ~uVar9 - 1;
        if (0 < (int)SVar10) {
          pcVar14 = acStack_1d9 + ~uVar9;
          do {
            if ((g_CharacterClassificationTable[(byte)(pcVar14[-1] + 1)] & 2U) == 0) break;
            SVar10 = SVar10 - 1;
            pcVar14 = pcVar14 + -1;
          } while (0 < (int)SVar10);
        }
        (acStack_1d9 + 1)[SVar10] = '\0';
        local_14 = acStack_1d9 + 2;
        while ((g_CharacterClassificationTable[(byte)(acStack_1d9[1] + 1)] & 2U) != 0) {
          crt_string_c_memmove_FUN_005fe5e0(acStack_1d9 + 1,local_14,SVar10);
          SVar10 = SVar10 - 1;
        }
        pcVar14 = local_175 + 1;
        *pcVar8 = '=';
        do {
          cVar2 = pcVar8[2];
          *pcVar14 = cVar2;
          if (cVar2 == '\0') break;
          cVar2 = pcVar8[3];
          pcVar14[1] = cVar2;
          pcVar14 = pcVar14 + 2;
          pcVar8 = pcVar8 + 2;
        } while (cVar2 != '\0');
        uVar9 = 0xffffffff;
        pcVar8 = local_175 + 1;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar2 = *pcVar8;
          pcVar8 = pcVar8 + (uint)bVar23 * -2 + 1;
        } while (cVar2 != '\0');
        SVar10 = ~uVar9 - 1;
        if (0 < (int)SVar10) {
          pcVar8 = local_175 + ~uVar9;
          do {
            if ((g_CharacterClassificationTable[(byte)(pcVar8[-1] + 1)] & 2U) == 0) break;
            SVar10 = SVar10 - 1;
            pcVar8 = pcVar8 + -1;
          } while (0 < (int)SVar10);
        }
        (local_175 + 1)[SVar10] = '\0';
        while ((g_CharacterClassificationTable[(byte)(local_175[1] + 1)] & 2U) != 0) {
          crt_string_c_memmove_FUN_005fe5e0(local_175 + 1,local_175 + 2,SVar10);
          SVar10 = SVar10 - 1;
        }
        pcVar8 = (char *)core_event_cpp_CEventList_FUN_004add00(g_CEventListPtr);
        if (pcVar8 == (char *)0x0) {
          pcVar8 = (char *)core_event_cpp_CEventList_FUN_004add40(g_CEventListPtr);
          if (pcVar8 == (char *)0x0) {
            pCVar20 = (CRuleList *)this_ptr->data_ptr;
            if (pCVar20->list_size <= this_ptr->min_or_index) {
              core_event_cpp_CRuleList_insert_FUN_004b1680(pCVar20);
              return 1;
            }
            pCVar20 = pCVar20 + this_ptr->min_or_index * 0x19 + 1;
            pcVar8 = acStack_1d9 + 1;
            goto LAB_00410083;
          }
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar8);
        }
        else {
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar8);
        }
      }
      goto LAB_0040fdd3;
    }
    break;
  case 0x11:
    iVar15 = (*(code *)this_ptr->validator_or_callback)();
    if (iVar15 != 0) {
      if (this_ptr->auto_update_flag == 0) {
        return 1;
      }
      (*actor->vtable->setup)(actor);
      return 1;
    }
    break;
  case 0x12:
    iVar15 = 0;
    while( true ) {
      iVar22 = 0;
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_25a4);
      do {
                    /* WARNING: Load size is inaccurate */
        pcVar8 = "disabled";
        if ((*this_ptr->data_ptr & *(uint *)((int)&DAT_0066e30c + iVar22)) != 0) {
          pcVar8 = "enable";
        }
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (local_368,"%s\t%s",*(uint *)((int)&PTR_s_thrust_0066e310 + iVar22),
                   pcVar8);
        iVar22 = iVar22 + 8;
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_25a4.base_strlist,local_368);
      } while (iVar22 != 0x10);
      iVar15 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                         (&local_25a4,local_2a0,iVar15,0);
      if (iVar15 < 0) break;
                    /* WARNING: Load size is inaccurate */
      *(uint *)this_ptr->data_ptr = *this_ptr->data_ptr ^ (&DAT_0066e30c)[iVar15 * 2];
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
    cVar2 = pcVar8[1];
    pcVar8 = pcVar8 + 2;
    *(char *)((int)&pCVar20->list_size + 1) = cVar2;
    pCVar20 = (CRuleList *)((int)&pCVar20->list_size + 2);
    if (cVar2 == '\0') break;
LAB_00410083:
    cVar2 = *pcVar8;
    *(char *)&pCVar20->list_size = cVar2;
    if (cVar2 == '\0') break;
  }
  pcVar8 = local_175 + 1;
  pcVar14 = (char *)((int)this_ptr->data_ptr + this_ptr->min_or_index * 100 + 0x1f8);
  do {
    cVar2 = *pcVar8;
    *pcVar14 = cVar2;
    if (cVar2 == '\0') {
      return 1;
    }
    cVar2 = pcVar8[1];
    pcVar8 = pcVar8 + 2;
    pcVar14[1] = cVar2;
    pcVar14 = pcVar14 + 2;
  } while (cVar2 != '\0');
  return 1;
}
