// Name: core_msnedit.cpp_CDemonMission_editActorDetailed_FUN_0053b510
// Address: 0053b510
// Address Range: [[0053b510, 0053b9e7]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_editActorDetailed_FUN_0053b510(CDemonMission *this_ptr,CActorProperty *property)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_CDemonMission_editActorDetailed_FUN_0053b510(CDemonMission *this_ptr,CActorProperty *property)

{
  char cVar1;
  byte bVar2;
  CDemonActor *this_ptr_00;
  int iVar5;
  char *str1;
  int iVar3;
  CDemonActor *actor;
  char *str2;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  CActorPropertyActionFunc *pCVar9;
  char *pcVar10;
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
  char cVar4;
  byte *pbVar2;
  byte *pcVar1;
  code cVar3;
  
  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20(&local_38);
  pCVar9 = (property->data).v_action_func_ptr;
  cVar3 = *pCVar9;
  while (cVar3 != (code)0x0) {
    cVar1 = (char)*pCVar9;
    if ((((g_CharacterClassificationTable[(byte)(cVar1 + 1)] & 0xe0) == 0) && (cVar1 != '-')) &&
       (cVar1 != '_')) {
      pCVar9 = pCVar9 + 1;
    }
    else {
      pcVar7 = local_110;
      do {
        do {
          *pcVar7 = (char)*pCVar9;
          pcVar1 = pCVar9 + 1;
          cVar1 = *pcVar1;
          pCVar9 = pCVar9 + 1;
          pcVar7 = pcVar7 + 1;
        } while ((g_CharacterClassificationTable[(byte)(cVar1 + 1)] & 0xe0) != 0);
      } while ((cVar1 == '-') || (cVar1 == '_'));
      *pcVar7 = '\0';
      iVar5 = _stricmp(local_110,"none");
      if ((iVar5 != 0) &&
         (iVar3 = _stricmp(local_110,"true"), iVar3 != 0)) {
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
        shape_edittool_cpp_CStrList_sort_FUN_004a2ec0(&local_6ac.base);
        _sprintf
                  (acStack_304,"Actors relevent to \"%s\"",property->name);
        iVar3 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                          (&local_6ac,acStack_304,-1,0);
        if (-1 < iVar3) {
          shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80(&local_6ac.base,acStack_304,iVar3,0);
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
        iVar3 = _stricmp(str1,this_ptr_00->actor_name);
        if (iVar3 == 0) {
          _sprintf(acStack_304,"%s\tReferenced by name",this_ptr_00)
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
                cVar1 = *pcVar10;
                if ((((g_CharacterClassificationTable[(byte)(cVar1 + 1)] & 0xe0) == 0) &&
                    (cVar1 != '-')) && (cVar1 != '_')) {
                  pcVar10 = pcVar10 + 1;
                }
                else {
                  pcVar8 = acStack_1d8;
                  do {
                    do {
                      *pcVar8 = *pcVar10;
                      pbVar2 = (byte *)(pcVar10 + 1);
                      bVar2 = *pbVar2;
                      pcVar10 = pcVar10 + 1;
                      pcVar8 = pcVar8 + 1;
                    } while ((g_CharacterClassificationTable[(byte)(bVar2 + 1)] & 0xe0) != 0);
                  } while ((bVar2 == 0x2d) || (bVar2 == 0x5f));
                  *pcVar8 = '\0';
                  iVar3 = _stricmp(acStack_1d8,"none");
                  if ((iVar3 != 0) &&
                     (iVar3 = _stricmp(acStack_1d8,"true"),
                     iVar3 != 0)) {
                    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&CStack_48,acStack_1d8);
                  }
                }
                cVar4 = *pcVar10;
              }
              iVar3 = 0;
              if (0 < CStack_48.item_count) {
                do {
                  str2 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&CStack_48,iVar3);
                  iVar6 = _stricmp(str1,str2);
                  if (iVar6 == 0) {
                    _sprintf
                              (acStack_304,"%s\tChecks for \"%s\" in \"%s\"",this_ptr_00,str1,
                               pcStack_24);
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
    this_ptr_00 = this_ptr_00->next_actor;
  } while( true );
}
