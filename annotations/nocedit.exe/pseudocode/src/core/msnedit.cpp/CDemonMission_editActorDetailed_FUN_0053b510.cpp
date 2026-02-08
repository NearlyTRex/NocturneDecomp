// Name: core_msnedit.cpp_CDemonMission_editActorDetailed_FUN_0053b510
// Address: 0053b510
// Address Range: [[0053b510, 0053b9e7]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_editActorDetailed_FUN_0053b510(CDemonMission *this_ptr,int param_2)

#include "nocturne.h"

void __cdecl
core_msnedit_cpp_CDemonMission_editActorDetailed_FUN_0053b510(CDemonMission *this_ptr,int param_2)

{
  byte *pbVar1;
  char cVar2;
  CDemonActor *pCVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  CDemonActor *unaff_EBP;
  int iStack_2ba4;
  int iStack_2ba0;
  byte auStack_2b9c [100];
  uint auStack_2b38 [2339];
  CPickList local_6ac;
  char acStack_304 [8];
  char acStack_2fc [300];
  char acStack_1d0 [192];
  char local_110 [208];
  byte auStack_40 [16];
  CStrList CStack_30;
  byte *puStack_1c;
  CDemonActor *local_18;
  int iStack_14;
  
  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20((CStrList *)(auStack_40 + 8));
  pcVar9 = *(char **)(param_2 + 0x68);
  cVar2 = *pcVar9;
  while (cVar2 != '\0') {
    cVar2 = *pcVar9;
    if ((((g_CharacterClassificationTable[(byte)(cVar2 + 1)] & 0xe0) == 0) && (cVar2 != '-')) &&
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
        } while ((g_CharacterClassificationTable[(byte)(*pbVar1 + 1)] & 0xe0) != 0);
      } while ((CStack_30.data_array == (char **)0x2d) || (CStack_30.data_array == (char **)0x5f));
      *pcVar7 = '\0';
      iVar4 = stricmp(local_110,"none");
      if ((iVar4 != 0) &&
         (iVar4 = stricmp(local_110,"true"), iVar4 != 0)) {
        shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(auStack_40 + 8),local_110);
      }
    }
    cVar2 = *pcVar9;
  }
  core_mission_cpp_CDemonMission_countActors_FUN_00523cc0(this_ptr);
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_6ac);
  local_18 = this_ptr->first_actor;
  pCVar3 = local_18;
  do {
    if (pCVar3 == (CDemonActor *)0x0) {
      if (local_6ac.base.item_count < 1) {
        shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                  (g_CEditorToolsPtr,"No actors relevent to the operation of this event.");
      }
      else {
        shape_edittool_cpp_CStrList_sort_FUN_004a2ec0(&local_6ac.base);
        _sprintf(acStack_304,"Actors relevent to \"%s\"",param_2 + 4);
        pcVar9 = (char *)shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                                   (&local_6ac,acStack_304,-1,0);
        if (-1 < (int)pcVar9) {
          shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
                    (&local_6ac.base,(int)acStack_304,pcVar9,0);
          pcVar9 = core_mission_cpp_CDemonMission_findActorByName_FUN_00524030(this_ptr,acStack_304)
          ;
          core_msnedit_cpp_CDemonMission_FUN_0053c140(this_ptr,(int)pcVar9);
        }
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_6ac,0);
      shape_edittool_cpp_CStrList_dtor_FUN_004a2a40((CStrList *)(auStack_40 + 8),0);
      return;
    }
    core_actor_cpp_CActorPropertyList_init_FUN_0040e130((CActorPropertyList *)&stack0xffffd450);
    (*((local_18->vtable)._ub)->getPropertyList)(local_18,(CActorPropertyList *)&stack0xffffd450);
    iStack_14 = 0;
    if (0 < CStack_30.item_count) {
      do {
        pcVar9 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&CStack_30,iStack_14);
        iVar4 = stricmp(pcVar9,unaff_EBP->actor_name);
        if (iVar4 == 0) {
          _sprintf(acStack_2fc,"%s\tReferenced by name");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80
                    ((CStrList *)&local_6ac.base.data_array,acStack_2fc);
        }
        iVar4 = 0;
        if (0 < iStack_2ba4) {
          puStack_1c = auStack_2b9c;
          do {
            if ((&iStack_2ba0)[iVar4 * 0x3b] == 0xb) {
              shape_edittool_cpp_CStrList_ctor_FUN_004a2a20((CStrList *)auStack_40);
              pcVar7 = (char *)auStack_2b38[iVar4 * 0x3b];
              cVar2 = *pcVar7;
              while (cVar2 != '\0') {
                cVar2 = *pcVar7;
                if ((((g_CharacterClassificationTable[(byte)(cVar2 + 1)] & 0xe0) == 0) &&
                    (cVar2 != '-')) && (cVar2 != '_')) {
                  pcVar7 = pcVar7 + 1;
                }
                else {
                  pcVar8 = acStack_1d0;
                  do {
                    do {
                      *pcVar8 = *pcVar7;
                      pbVar1 = (byte *)(pcVar7 + 1);
                      local_18 = (CDemonActor *)(uint)*pbVar1;
                      pcVar7 = pcVar7 + 1;
                      pcVar8 = pcVar8 + 1;
                    } while ((g_CharacterClassificationTable[(byte)(*pbVar1 + 1)] & 0xe0) != 0);
                  } while ((local_18 == (CDemonActor *)0x2d) || (local_18 == (CDemonActor *)0x5f));
                  *pcVar8 = '\0';
                  iVar5 = stricmp(acStack_1d0,"none");
                  if ((iVar5 != 0) &&
                     (iVar5 = stricmp(acStack_1d0,"true"),
                     iVar5 != 0)) {
                    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)auStack_40,acStack_1d0)
                    ;
                  }
                }
                cVar2 = *pcVar7;
              }
              iVar5 = 0;
              if (0 < (int)auStack_40._0_4_) {
                do {
                  pcVar7 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                                     ((CStrList *)auStack_40,iVar5);
                  iVar6 = stricmp(pcVar9,pcVar7);
                  if (iVar6 == 0) {
                    _sprintf
                              (acStack_2fc,"%s\tChecks for \"%s\" in \"%s\"",unaff_EBP);
                    shape_edittool_cpp_CStrList_add_FUN_004a2b80
                              ((CStrList *)&local_6ac.base.data_array,acStack_2fc);
                    break;
                  }
                  iVar5 = iVar5 + 1;
                } while (iVar5 < (int)auStack_40._0_4_);
              }
              shape_edittool_cpp_CStrList_dtor_FUN_004a2a40((CStrList *)auStack_40,0);
            }
            puStack_1c = puStack_1c + 0xec;
            iVar4 = iVar4 + 1;
          } while (iVar4 < iStack_2ba4);
        }
        iStack_14 = iStack_14 + 1;
      } while (iStack_14 < CStack_30.item_count);
    }
    unaff_EBP = unaff_EBP->next_actor;
    pCVar3 = unaff_EBP;
  } while( true );
}
