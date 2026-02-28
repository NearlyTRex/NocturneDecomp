// Name: core_msnedit.cpp_CDemonMission_editActorDetailed_FUN_0053b510
// Address: 0053b510
// Address Range: [[0053b510, 0053b9e7]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_editActorDetailed_FUN_0053b510(CDemonMission *this_ptr,int param_2)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_CDemonMission_editActorDetailed_FUN_0053b510(CDemonMission *this_ptr,int param_2)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  CDemonActor *pCVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  CActorPropertyList CStack_2bb0;
  CPickList local_6ac;
  char acStack_304 [300];
  char acStack_1d8 [200];
  char local_110 [200];
  CStrList CStack_48;
  CStrList local_38;
  uint local_28;
  char *pcStack_24;
  uint uStack_20;
  int iStack_1c;
  CDemonActor *local_18;
  int iStack_14;
  
  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20(&local_38);
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
          local_28 = (uint)*pbVar1;
          pcVar8 = pcVar8 + 1;
          pcVar6 = pcVar6 + 1;
        } while ((g_CharacterClassificationTable[(byte)(*pbVar1 + 1)] & 0xe0) != 0);
      } while ((local_28 == 0x2d) || (local_28 == 0x5f));
      *pcVar6 = '\0';
      iVar3 = _stricmp(local_110,"none");
      if ((iVar3 != 0) &&
         (iVar3 = _stricmp(local_110,"true"), iVar3 != 0)) {
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_38,local_110);
      }
    }
    cVar2 = *pcVar8;
  }
  core_mission_cpp_CDemonMission_countActors_FUN_00523cc0(this_ptr);
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_6ac);
  local_18 = this_ptr->first_actor;
  do {
    if (local_18 == (CDemonActor *)0x0) {
      if (local_6ac.base.item_count < 1) {
        shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                  (g_CEditorToolsPtr,"No actors relevent to the operation of this event.");
      }
      else {
        shape_edittool_cpp_CStrList_sort_FUN_004a2ec0(&local_6ac.base);
        _sprintf(acStack_304,"Actors relevent to \"%s\"",param_2 + 4);
        pcVar8 = (char *)shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                                   (&local_6ac,acStack_304,-1,0);
        if (-1 < (int)pcVar8) {
          shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
                    (&local_6ac.base,(int)acStack_304,pcVar8,0);
          pCVar4 = core_mission_cpp_CDemonMission_findActorByName_FUN_00524030(this_ptr,acStack_304)
          ;
          core_msnedit_cpp_CDemonMission_FUN_0053c140(this_ptr,(int)pCVar4);
        }
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_6ac,0);
      shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(&local_38,0);
      return;
    }
    core_actor_cpp_CActorPropertyList_init_FUN_0040e130(&CStack_2bb0);
    (*((local_18->vtable)._ub)->getPropertyList)(local_18,&CStack_2bb0);
    iStack_1c = 0;
    if (0 < local_38.item_count) {
      do {
        pcVar8 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_38,iStack_1c);
        iVar3 = _stricmp(pcVar8,local_18->actor_name);
        if (iVar3 == 0) {
          _sprintf(acStack_304,"%s\tReferenced by name",local_18);
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_6ac.base,acStack_304);
        }
        iStack_14 = 0;
        if (0 < CStack_2bb0.count) {
          pcStack_24 = CStack_2bb0.properties[0].name;
          do {
            iVar3 = iStack_14;
            if (CStack_2bb0.properties[iStack_14].type == PROP_EVENT) {
              shape_edittool_cpp_CStrList_ctor_FUN_004a2a20(&CStack_48);
              pcVar6 = CStack_2bb0.properties[iVar3].data.v_string_ptr;
              cVar2 = *pcVar6;
              while (cVar2 != '\0') {
                cVar2 = *pcVar6;
                if ((((g_CharacterClassificationTable[(byte)(cVar2 + 1)] & 0xe0) == 0) &&
                    (cVar2 != '-')) && (cVar2 != '_')) {
                  pcVar6 = pcVar6 + 1;
                }
                else {
                  pcVar7 = acStack_1d8;
                  do {
                    do {
                      *pcVar7 = *pcVar6;
                      pbVar1 = (byte *)(pcVar6 + 1);
                      uStack_20 = (uint)*pbVar1;
                      pcVar6 = pcVar6 + 1;
                      pcVar7 = pcVar7 + 1;
                    } while ((g_CharacterClassificationTable[(byte)(*pbVar1 + 1)] & 0xe0) != 0);
                  } while ((uStack_20 == 0x2d) || (uStack_20 == 0x5f));
                  *pcVar7 = '\0';
                  iVar3 = _stricmp(acStack_1d8,"none");
                  if ((iVar3 != 0) &&
                     (iVar3 = _stricmp(acStack_1d8,"true"),
                     iVar3 != 0)) {
                    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&CStack_48,acStack_1d8);
                  }
                }
                cVar2 = *pcVar6;
              }
              iVar3 = 0;
              if (0 < CStack_48.item_count) {
                do {
                  pcVar6 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&CStack_48,iVar3);
                  iVar5 = _stricmp(pcVar8,pcVar6);
                  if (iVar5 == 0) {
                    _sprintf
                              (acStack_304,"%s\tChecks for \"%s\" in \"%s\"",local_18,pcVar8,pcStack_24
                              );
                    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_6ac.base,acStack_304);
                    break;
                  }
                  iVar3 = iVar3 + 1;
                } while (iVar3 < CStack_48.item_count);
              }
              shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(&CStack_48,0);
            }
            pcStack_24 = pcStack_24 + 0xec;
            iStack_14 = iStack_14 + 1;
          } while (iStack_14 < CStack_2bb0.count);
        }
        iStack_1c = iStack_1c + 1;
      } while (iStack_1c < local_38.item_count);
    }
    local_18 = local_18->next_actor;
  } while( true );
}
