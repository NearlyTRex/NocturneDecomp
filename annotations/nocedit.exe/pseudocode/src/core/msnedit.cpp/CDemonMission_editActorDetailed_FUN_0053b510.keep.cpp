// Name: core_msnedit.cpp_CDemonMission_editActorDetailed_FUN_0053b510
// Address: 0053b510
// MANUAL RECONSTRUCTION
// Address Range: [[0053b510, 0053b9e7]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_editActorDetailed_FUN_0053b510(CDemonMission *this_ptr,CActorProperty *property)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_CDemonMission_editActorDetailed_FUN_0053b510(CDemonMission *this_ptr,CActorProperty *property)

{
  byte bVar1;
  CDemonActor *this_ptr_00;
  int iVar5;
  char *str1;
  int iVar2;
  CDemonActor *actor;
  char *str2;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char *pCVar9;
  char *pcVar10;
  CActorPropertyList CStack_2bb0;
  CPickList local_6ac;
  char acStack_304 [300];
  char acStack_1d8 [200];
  char local_110 [200];
  CStrList CStack_48;
  CStrList local_38;
  char *pcStack_24;
  int iStack_1c;
  int iStack_14;
  char cVar4;
  byte *pbVar2;
  char *pcVar1;
  char cVar3;
  
  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20(&local_38);
  pCVar9 = (property->data).v_string_ptr;
  cVar3 = *pCVar9;
  while (cVar3 != '\0') {
    cVar3 = *pCVar9;
    if ((((g_CharacterClassificationTable[(byte)(cVar3 + 1)] & 0xe0) == 0) && (cVar3 != '-')) &&
       (cVar3 != '_')) {
      pCVar9 = pCVar9 + 1;
    }
    else {
      pcVar7 = local_110;
      do {
        do {
          *pcVar7 = *pCVar9;
          pcVar1 = pCVar9 + 1;
          cVar3 = *pcVar1;
          pCVar9 = pCVar9 + 1;
          pcVar7 = pcVar7 + 1;
        } while ((g_CharacterClassificationTable[(byte)(cVar3 + 1)] & 0xe0) != 0);
      } while ((cVar3 == '-') || (cVar3 == '_'));
      *pcVar7 = '\0';
      iVar5 = _stricmp(local_110,"none");
      if ((iVar5 != 0) &&
         (iVar2 = _stricmp(local_110,"true"), iVar2 != 0)) {
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_38,local_110);
      }
    }
    cVar3 = *pCVar9;
  }
  core_mission_cpp_CDemonMission_countActors_FUN_00523cc0(this_ptr);
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_6ac);
  this_ptr_00 = this_ptr->first_actor;
  do {
    if (this_ptr_00 == (CDemonActor *)0x0) {
      if (local_6ac.base.item_count < 1) {
        shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                  (g_CEditorToolsPtr,"No actors relevent to the operation of this event.");
      }
      else {
        shape_edittool_cpp_CStrList_sortAll_FUN_004a2ec0(&local_6ac.base);
        _sprintf
                  (acStack_304,"Actors relevent to \"%s\"",property->name);
        iVar2 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                          (&local_6ac,acStack_304,-1,0);
        if (-1 < iVar2) {
          shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80(&local_6ac.base,acStack_304,iVar2,0);
          actor = core_mission_cpp_CDemonMission_findActorByName_FUN_00524030(this_ptr,acStack_304);
          core_msnedit_cpp_CDemonMission_selectActor_FUN_0053c140(this_ptr,actor);
        }
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_6ac,0);
      shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(&local_38,0);
      return;
    }
    core_actor_cpp_CActorPropertyList_init_FUN_0040e130(&CStack_2bb0);
    (*((this_ptr_00->vtable)._ub)->getPropertyList)(this_ptr_00,&CStack_2bb0);
    iStack_1c = 0;
    if (0 < local_38.item_count) {
      do {
        str1 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_38,iStack_1c);
        iVar2 = _stricmp(str1,this_ptr_00->actor_name);
        if (iVar2 == 0) {
          _sprintf(acStack_304,"%s\tReferenced by name",this_ptr_00->actor_name)
          ;
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_6ac.base,acStack_304);
        }
        iStack_14 = 0;
        if (0 < CStack_2bb0.count) {
          pcStack_24 = CStack_2bb0.properties[0].name;
          do {
            if (CStack_2bb0.properties[iStack_14].type == PROP_EVENT) {
              shape_edittool_cpp_CStrList_ctor_FUN_004a2a20(&CStack_48);
              pcVar10 = CStack_2bb0.properties[iStack_14].data.v_string_ptr;
              cVar4 = *pcVar10;
              while (cVar4 != '\0') {
                cVar3 = *pcVar10;
                if ((((g_CharacterClassificationTable[(byte)(cVar3 + 1)] & 0xe0) == 0) &&
                    (cVar3 != '-')) && (cVar3 != '_')) {
                  pcVar10 = pcVar10 + 1;
                }
                else {
                  pcVar8 = acStack_1d8;
                  do {
                    do {
                      *pcVar8 = *pcVar10;
                      pbVar2 = (byte *)(pcVar10 + 1);
                      bVar1 = *pbVar2;
                      pcVar10 = pcVar10 + 1;
                      pcVar8 = pcVar8 + 1;
                    } while ((g_CharacterClassificationTable[(byte)(bVar1 + 1)] & 0xe0) != 0);
                  } while ((bVar1 == 0x2d) || (bVar1 == 0x5f));
                  *pcVar8 = '\0';
                  iVar2 = _stricmp(acStack_1d8,"none");
                  if ((iVar2 != 0) &&
                     (iVar2 = _stricmp(acStack_1d8,"true"),
                     iVar2 != 0)) {
                    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&CStack_48,acStack_1d8);
                  }
                }
                cVar4 = *pcVar10;
              }
              iVar2 = 0;
              if (0 < CStack_48.item_count) {
                do {
                  str2 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&CStack_48,iVar2);
                  iVar6 = _stricmp(str1,str2);
                  if (iVar6 == 0) {
                    _sprintf
                              (acStack_304,"%s\tChecks for \"%s\" in \"%s\"",this_ptr_00->actor_name,str1,
                               pcStack_24);
                    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_6ac.base,acStack_304);
                    break;
                  }
                  iVar2 = iVar2 + 1;
                } while (iVar2 < CStack_48.item_count);
              }
              shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(&CStack_48,0);
            }
            pcStack_24 = pcStack_24 + sizeof(CActorProperty);
            iStack_14 = iStack_14 + 1;
          } while (iStack_14 < CStack_2bb0.count);
        }
        iStack_1c = iStack_1c + 1;
      } while (iStack_1c < local_38.item_count);
    }
    this_ptr_00 = this_ptr_00->next_actor;
  } while( true );
}
