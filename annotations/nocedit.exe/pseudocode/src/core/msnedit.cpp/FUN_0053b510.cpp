// Name: core_msnedit.cpp_FUN_0053b510
// Address: 0053b510
// Address Range: [[0053b510, 0053b9e7]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_FUN_0053b510()

#include "nocturne.h"

/* Signature: byte core_msnedit.cpp_FUN_0053b510(uint param_1, uint param_2) */

void core_msnedit_cpp_FUN_0053b510(void)

{
  byte *pbVar1;
  char cVar2;
  CDemonActor *pCVar3;
  int iVar4;
  CStrList *str1;
  int iVar5;
  int iVar6;
  char *pcVar7;
  float *pfVar8;
  char *pcVar9;
  CDemonActor *unaff_EBP;
  CDemonMission *in_stack_00000004;
  int in_stack_00000008;
  CStrList *in_stack_ffffd450;
  CDemonActor *in_stack_ffffd454;
  uint in_stack_ffffd458;
  uint in_stack_ffffd45c;
  uint in_stack_ffffd460;
  byte auStack_2b9c [100];
  uint auStack_2b38 [2339];
  CPickList local_6ac;
  char acStack_304 [8];
  CDemonActor CStack_2fc;
  char local_110 [208];
  byte auStack_40 [16];
  CStrList CStack_30;
  byte *puStack_1c;
  CDemonActor *local_18;
  int iStack_14;
  
  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20((CStrList *)(auStack_40 + 8));
  pcVar9 = *(char **)(in_stack_00000008 + 0x68);
  cVar2 = *pcVar9;
  while (cVar2 != '\0') {
    cVar2 = *pcVar9;
    if ((((g_CharacterClassificationTable[(byte)(cVar2 + 1)] & 0xe0U) == 0) && (cVar2 != '-')) &&
       (cVar2 != '_')) {
      pcVar9 = pcVar9 + 1;
    }
    else {
      pcVar7 = local_110;
      do {
        do {
          *pcVar7 = *pcVar9;
          pbVar1 = (byte *)(pcVar9 + 1);
          CStack_30.data_array = (char **)(uint)*pbVar1;
          pcVar9 = pcVar9 + 1;
          pcVar7 = pcVar7 + 1;
        } while ((g_CharacterClassificationTable[(byte)(*pbVar1 + 1)] & 0xe0U) != 0);
      } while ((CStack_30.data_array == (char **)0x2d) || (CStack_30.data_array == (char **)0x5f));
      *pcVar7 = '\0';
      iVar4 = crt_string_c_stricmp_FUN_005fe7f0(local_110,"none");
      if ((iVar4 != 0) &&
         (iVar4 = crt_string_c_stricmp_FUN_005fe7f0(local_110,"true"), iVar4 != 0)) {
        shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(auStack_40 + 8),local_110);
      }
    }
    cVar2 = *pcVar9;
  }
  core_mission_cpp_CDemonMission_FUN_00523cc0(in_stack_00000004);
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_6ac);
  local_18 = in_stack_00000004->first_actor;
  pCVar3 = local_18;
  do {
    if (pCVar3 == (CDemonActor *)0x0) {
      if (local_6ac.base_strlist.item_count < 1) {
        shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                  (g_CEditorToolsPtr,"No actors relevent to the operation of this event.");
      }
      else {
        shape_edittool_cpp_CStrList_sort_FUN_004a2ec0(&local_6ac.base_strlist);
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (acStack_304,"Actors relevent to \"%s\"",in_stack_00000008 + 4);
        pcVar9 = (char *)shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                                   (&local_6ac,acStack_304,-1,0);
        if (-1 < (int)pcVar9) {
          shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
                    (&local_6ac.base_strlist,(int)acStack_304,pcVar9,0);
          core_mission_cpp_CDemonMission_FUN_00524030(in_stack_00000004);
          core_msnedit_cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140();
        }
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                (&local_6ac,0,(uint)in_stack_ffffd450,(uint)in_stack_ffffd454,in_stack_ffffd458,
                 in_stack_ffffd45c,in_stack_ffffd460);
      shape_edittool_cpp_CStrList_dtor_FUN_004a2a40
                ((CStrList *)(auStack_40 + 8),0,(uint)in_stack_ffffd450);
      return;
    }
    core_actor_cpp_FUN_0040e130();
    (*((local_18->vtable)._ub)->getPropertyList)(local_18,(CActorPropertyList *)&stack0xffffd450);
    iStack_14 = 0;
    if (0 < CStack_30.item_count) {
      do {
        str1 = (CStrList *)
               shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&CStack_30,iStack_14);
        in_stack_ffffd450 = str1;
        in_stack_ffffd454 = unaff_EBP;
        iVar4 = crt_string_c_stricmp_FUN_005fe7f0((char *)str1,unaff_EBP->actor_name);
        if (iVar4 == 0) {
          crt_stdio_c_sprintf_FUN_005fdbd0(CStack_2fc.actor_name,"%s\tReferenced by name");
          in_stack_ffffd454 = &CStack_2fc;
          in_stack_ffffd450 = (CStrList *)&local_6ac.base_strlist.data_array;
          shape_edittool_cpp_CStrList_add_FUN_004a2b80
                    (in_stack_ffffd450,in_stack_ffffd454->actor_name);
        }
        iVar4 = 0;
        if (0 < (int)in_stack_ffffd45c) {
          puStack_1c = auStack_2b9c;
          do {
            if (*(int *)(auStack_2b9c + iVar4 * 0xec + -4) == 0xb) {
              shape_edittool_cpp_CStrList_ctor_FUN_004a2a20((CStrList *)auStack_40);
              pcVar9 = (char *)auStack_2b38[iVar4 * 0x3b];
              cVar2 = *pcVar9;
              while (cVar2 != '\0') {
                cVar2 = *pcVar9;
                if ((((g_CharacterClassificationTable[(byte)(cVar2 + 1)] & 0xe0U) == 0) &&
                    (cVar2 != '-')) && (cVar2 != '_')) {
                  pcVar9 = pcVar9 + 1;
                }
                else {
                  pfVar8 = &CStack_2fc.previous_transform_state.position.y;
                  do {
                    do {
                      *(char *)pfVar8 = *pcVar9;
                      pbVar1 = (byte *)(pcVar9 + 1);
                      local_18 = (CDemonActor *)(uint)*pbVar1;
                      pcVar9 = pcVar9 + 1;
                      pfVar8 = (float *)((int)pfVar8 + 1);
                    } while ((g_CharacterClassificationTable[(byte)(*pbVar1 + 1)] & 0xe0U) != 0);
                  } while ((local_18 == (CDemonActor *)0x2d) || (local_18 == (CDemonActor *)0x5f));
                  *(char *)pfVar8 = '\0';
                  iVar5 = crt_string_c_stricmp_FUN_005fe7f0
                                    ((char *)&CStack_2fc.previous_transform_state.position.y,
                                     "none");
                  if ((iVar5 != 0) &&
                     (iVar5 = crt_string_c_stricmp_FUN_005fe7f0
                                        ((char *)&CStack_2fc.previous_transform_state.position.y,
                                         "true"), iVar5 != 0)) {
                    shape_edittool_cpp_CStrList_add_FUN_004a2b80
                              ((CStrList *)auStack_40,
                               (char *)&CStack_2fc.previous_transform_state.position.y);
                  }
                }
                cVar2 = *pcVar9;
              }
              iVar5 = 0;
              if (0 < (int)auStack_40._0_4_) {
                do {
                  pcVar9 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                                     ((CStrList *)auStack_40,iVar5);
                  iVar6 = crt_string_c_stricmp_FUN_005fe7f0((char *)str1,pcVar9);
                  if (iVar6 == 0) {
                    crt_stdio_c_sprintf_FUN_005fdbd0
                              (CStack_2fc.actor_name,"%s\tChecks for \"%s\" in \"%s\"",unaff_EBP);
                    shape_edittool_cpp_CStrList_add_FUN_004a2b80
                              ((CStrList *)&local_6ac.base_strlist.data_array,CStack_2fc.actor_name)
                    ;
                    break;
                  }
                  iVar5 = iVar5 + 1;
                } while (iVar5 < (int)auStack_40._0_4_);
              }
              in_stack_ffffd454 = (CDemonActor *)0x0;
              in_stack_ffffd450 = (CStrList *)auStack_40;
              shape_edittool_cpp_CStrList_dtor_FUN_004a2a40
                        (in_stack_ffffd450,0,(uint)in_stack_ffffd450);
            }
            puStack_1c = puStack_1c + 0xec;
            iVar4 = iVar4 + 1;
          } while (iVar4 < (int)in_stack_ffffd45c);
        }
        iStack_14 = iStack_14 + 1;
      } while (iStack_14 < CStack_30.item_count);
    }
    unaff_EBP = unaff_EBP->next_actor;
    pCVar3 = unaff_EBP;
  } while( true );
}
