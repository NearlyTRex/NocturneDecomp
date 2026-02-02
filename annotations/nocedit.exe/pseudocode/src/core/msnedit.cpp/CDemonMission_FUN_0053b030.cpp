// Name: core_msnedit.cpp_CDemonMission_FUN_0053b030
// Address: 0053b030
// Address Range: [[0053b030, 0053b507]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053b030(CDemonMission *this_ptr,int param_2)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053b030(CDemonMission *this_ptr,int param_2)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  CDemonActor *pCVar4;
  int iVar5;
  char *pcVar6;
  float *pfVar7;
  char *pcVar8;
  CDemonActor *unaff_EBP;
  CDemonActor *in_stack_ffffd450;
  CDemonActor *in_stack_ffffd454;
  EActorPropertyType in_stack_ffffd458;
  uint in_stack_ffffd45c;
  uint in_stack_ffffd460;
  byte auStack_2b9c [100];
  uint auStack_2b38 [2339];
  byte local_6ac [936];
  char acStack_304 [8];
  CDemonActor CStack_2fc;
  char local_110 [208];
  byte auStack_40 [16];
  CStrList CStack_30;
  byte *puStack_1c;
  CDemonActor *local_18;
  int iStack_14;
  float fVar9;
  
  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20((CStrList *)(auStack_40 + 8));
  pcVar8 = *(char **)(param_2 + 0x68);
  cVar2 = *pcVar8;
  while (cVar2 != '\0') {
    cVar2 = *pcVar8;
    if ((((g_CharacterClassificationTable[(byte)(cVar2 + 1)] & 0xe0) == 0) && (cVar2 != '-')) &&
       (cVar2 != '_')) {
      pcVar8 = pcVar8 + 1;
    }
    else {
      pcVar6 = local_110;
      do {
        do {
          *pcVar6 = *pcVar8;
          pbVar1 = (byte *)(pcVar8 + 1);
          CStack_30.data_array = (char **)(uint)*pbVar1;
          pcVar8 = pcVar8 + 1;
          pcVar6 = pcVar6 + 1;
        } while ((g_CharacterClassificationTable[(byte)(*pbVar1 + 1)] & 0xe0) != 0);
      } while ((CStack_30.data_array == (char **)0x2d) || (CStack_30.data_array == (char **)0x5f));
      *pcVar6 = '\0';
      iVar3 = stricmp(local_110,"none");
      if ((iVar3 != 0) &&
         (iVar3 = stricmp(local_110,"true"), iVar3 != 0)) {
        shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(auStack_40 + 8),local_110);
      }
    }
    cVar2 = *pcVar8;
  }
  core_mission_cpp_CDemonMission_FUN_00523cc0(this_ptr);
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)local_6ac);
  local_18 = this_ptr->first_actor;
  pCVar4 = local_18;
  do {
    if (pCVar4 == (CDemonActor *)0x0) {
      if ((int)local_6ac._0_4_ < 1) {
        shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                  (g_CEditorToolsPtr,"No actors relevent to the testing of this condition.");
      }
      else {
        shape_edittool_cpp_CStrList_sort_FUN_004a2ec0((CStrList *)local_6ac);
        sprintf(acStack_304,"Actors relevent to \"%s\"",param_2 + 4);
        pcVar8 = (char *)shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                                   ((CPickList *)local_6ac,acStack_304,-1,0);
        if (-1 < (int)pcVar8) {
          shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
                    ((CStrList *)local_6ac,(int)acStack_304,pcVar8,0);
          pcVar8 = core_mission_cpp_CDemonMission_FUN_00524030(this_ptr);
          core_msnedit_cpp_CDemonMission_FUN_0053c140(this_ptr,(int)pcVar8);
        }
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)local_6ac,0,(uint)in_stack_ffffd450,(uint)in_stack_ffffd454,
                 in_stack_ffffd458,in_stack_ffffd45c,in_stack_ffffd460);
      shape_edittool_cpp_CStrList_dtor_FUN_004a2a40
                ((CStrList *)(auStack_40 + 8),0,(uint)in_stack_ffffd450);
      return;
    }
    core_actor_cpp_FUN_0040e130();
    (*((local_18->vtable)._ub)->getPropertyList)(local_18,(CActorPropertyList *)&stack0xffffd450);
    iStack_14 = 0;
    if (0 < CStack_30.item_count) {
      do {
        pCVar4 = (CDemonActor *)
                 shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&CStack_30,iStack_14);
        in_stack_ffffd450 = pCVar4;
        in_stack_ffffd454 = unaff_EBP;
        iVar3 = stricmp((char *)pCVar4,unaff_EBP->actor_name);
        if (iVar3 == 0) {
          sprintf(CStack_2fc.actor_name,"%s\tReferenced by name");
          in_stack_ffffd454 = &CStack_2fc;
          in_stack_ffffd450 = (CDemonActor *)(local_6ac + 8);
          shape_edittool_cpp_CStrList_add_FUN_004a2b80
                    ((CStrList *)in_stack_ffffd450,in_stack_ffffd454->actor_name);
        }
        fVar9 = 0.0;
        if (0 < (int)in_stack_ffffd45c) {
          puStack_1c = auStack_2b9c;
          do {
            if (*(int *)(auStack_2b9c + (int)fVar9 * 0xec + -4) == 0xc) {
              shape_edittool_cpp_CStrList_ctor_FUN_004a2a20((CStrList *)auStack_40);
              pcVar8 = (char *)auStack_2b38[(int)fVar9 * 0x3b];
              cVar2 = *pcVar8;
              while (cVar2 != '\0') {
                cVar2 = *pcVar8;
                if ((((g_CharacterClassificationTable[(byte)(cVar2 + 1)] & 0xe0) == 0) &&
                    (cVar2 != '-')) && (cVar2 != '_')) {
                  pcVar8 = pcVar8 + 1;
                }
                else {
                  pfVar7 = &CStack_2fc.previous_transform_state.position.y;
                  do {
                    do {
                      *(char *)pfVar7 = *pcVar8;
                      pbVar1 = (byte *)(pcVar8 + 1);
                      local_18 = (CDemonActor *)(uint)*pbVar1;
                      pcVar8 = pcVar8 + 1;
                      pfVar7 = (float *)((int)pfVar7 + 1);
                    } while ((g_CharacterClassificationTable[(byte)(*pbVar1 + 1)] & 0xe0) != 0);
                  } while ((local_18 == (CDemonActor *)0x2d) || (local_18 == (CDemonActor *)0x5f));
                  *(char *)pfVar7 = '\0';
                  iVar3 = stricmp
                                    ((char *)&CStack_2fc.previous_transform_state.position.y,
                                     "none");
                  if ((iVar3 != 0) &&
                     (iVar3 = stricmp
                                        ((char *)&CStack_2fc.previous_transform_state.position.y,
                                         "true"), iVar3 != 0)) {
                    shape_edittool_cpp_CStrList_add_FUN_004a2b80
                              ((CStrList *)auStack_40,
                               (char *)&CStack_2fc.previous_transform_state.position.y);
                  }
                }
                cVar2 = *pcVar8;
              }
              iVar3 = 0;
              if (0 < (int)auStack_40._0_4_) {
                do {
                  pcVar8 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                                     ((CStrList *)auStack_40,iVar3);
                  iVar5 = stricmp((char *)pCVar4,pcVar8);
                  if (iVar5 == 0) {
                    sprintf
                              (CStack_2fc.actor_name,"%s\tRaises \"%s\" in \"%s\"",unaff_EBP);
                    shape_edittool_cpp_CStrList_add_FUN_004a2b80
                              ((CStrList *)(local_6ac + 8),CStack_2fc.actor_name);
                    break;
                  }
                  iVar3 = iVar3 + 1;
                } while (iVar3 < (int)auStack_40._0_4_);
              }
              in_stack_ffffd454 = (CDemonActor *)0x0;
              in_stack_ffffd450 = (CDemonActor *)auStack_40;
              shape_edittool_cpp_CStrList_dtor_FUN_004a2a40
                        ((CStrList *)in_stack_ffffd450,0,(uint)in_stack_ffffd450);
            }
            puStack_1c = puStack_1c + 0xec;
            fVar9 = (float)((int)fVar9 + 1);
          } while ((int)fVar9 < (int)in_stack_ffffd45c);
        }
        iStack_14 = iStack_14 + 1;
      } while (iStack_14 < CStack_30.item_count);
    }
    unaff_EBP = unaff_EBP->next_actor;
    pCVar4 = unaff_EBP;
  } while( true );
}
