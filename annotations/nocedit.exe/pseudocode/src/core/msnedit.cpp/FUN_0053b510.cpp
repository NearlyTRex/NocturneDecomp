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
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  BADSPACEBASE *in_ESP;
  char *unaff_ESI;
  CDemonMission *in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  CDemonMission *in_stack_00000018;
  CDemonMission *in_stack_ffffd460;
  char *in_stack_ffffd464;
  uint in_stack_ffffd468;
  uint in_stack_ffffd46c;
  uint in_stack_ffffd470;
  uint auStack_2b38 [2341];
  byte auStack_6a4 [8];
  byte auStack_69c [936];
  byte auStack_2f4 [4];
  char acStack_2f0 [4];
  char acStack_2ec [284];
  char acStack_1d0 [8];
  char acStack_1c8 [180];
  char acStack_114 [4];
  char local_110 [4];
  char acStack_10c [204];
  byte auStack_40 [8];
  byte local_38 [12];
  byte auStack_2c [12];
  CDemonActor *pCStack_20;
  byte *local_18;
  int index;
  
  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20((CStrList *)local_38);
  pcVar8 = *(char **)(in_stack_0000000c + 0x68);
  cVar2 = *pcVar8;
  while (cVar2 != '\0') {
    cVar2 = *pcVar8;
    if ((((g_CharacterClassificationTable[(byte)(cVar2 + 1)] & 0xe0U) == 0) && (cVar2 != '-')) &&
       (cVar2 != '_')) {
      pcVar8 = pcVar8 + 1;
    }
    else {
      pcVar6 = acStack_10c;
      do {
        do {
          *pcVar6 = *pcVar8;
          pbVar1 = (byte *)(pcVar8 + 1);
          auStack_2c._8_4_ = ZEXT14(*pbVar1);
          pcVar8 = pcVar8 + 1;
          pcVar6 = pcVar6 + 1;
        } while ((g_CharacterClassificationTable[(byte)(*pbVar1 + 1)] & 0xe0U) != 0);
      } while (((char **)auStack_2c._8_4_ == (char **)0x2d) ||
              ((char **)auStack_2c._8_4_ == (char **)0x5f));
      *pcVar6 = '\0';
      iVar3 = crt_string_c_stricmp_FUN_005fe7f0(acStack_10c,"none");
      if ((iVar3 != 0) &&
         (iVar3 = crt_string_c_stricmp_FUN_005fe7f0(acStack_114,"true"), iVar3 != 0)) {
        shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(local_38 + 4),local_110);
      }
    }
    cVar2 = *pcVar8;
  }
  core_mission_cpp_CDemonMission_FUN_00523cc0(in_stack_00000008);
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)auStack_6a4);
  iVar3 = *(int *)(in_stack_00000010 + 0x548);
  do {
    if (iVar3 == 0) {
      if ((int)auStack_6a4._4_4_ < 1) {
        shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                  (g_CEditorToolsPtr,"No actors relevent to the operation of this event.");
      }
      else {
        shape_edittool_cpp_CStrList_sort_FUN_004a2ec0((CStrList *)(auStack_6a4 + 4));
        crt_stdio_c_sprintf_FUN_005fdbd0(auStack_69c + 0x3a0,"Actors relevent to \"%s\"");
        pcVar8 = (char *)shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                                   ((CPickList *)(auStack_6a4 + 4),auStack_69c + 0x3a4,-1,0);
        if (-1 < (int)pcVar8) {
          shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
                    ((CStrList *)auStack_69c,(int)auStack_2f4,pcVar8,0);
          in_stack_ffffd464 = core_mission_cpp_CDemonMission_FUN_00524030(in_stack_00000018);
          core_msnedit_cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140();
          in_stack_ffffd460 = in_stack_00000018;
        }
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)auStack_69c,0,(uint)in_stack_ffffd460,(uint)in_stack_ffffd464,
                 in_stack_ffffd468,in_stack_ffffd46c,in_stack_ffffd470);
      shape_edittool_cpp_CStrList_dtor_FUN_004a2a40
                ((CStrList *)(auStack_2c + 8),0,(uint)in_stack_ffffd464);
      return;
    }
    core_actor_cpp_FUN_0040e130();
    (*pCStack_20->vtable->getPropertyList)(pCStack_20,(CActorPropertyList *)&stack0xffffd448);
    index = 0;
    if (0 < (int)auStack_2c._0_4_) {
      do {
        pcVar8 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)auStack_2c,index);
        iVar4 = crt_string_c_stricmp_FUN_005fe7f0(pcVar8,unaff_ESI);
        if (iVar4 == 0) {
          crt_stdio_c_sprintf_FUN_005fdbd0(acStack_2f0,"%s\tReferenced by name");
          in_stack_ffffd464 = acStack_2ec;
          in_stack_ffffd460 = (CDemonMission *)(auStack_69c + 8);
          shape_edittool_cpp_CStrList_add_FUN_004a2b80
                    ((CStrList *)in_stack_ffffd460,in_stack_ffffd464);
        }
        unaff_ESI = (char *)0x0;
        if (0 < (int)in_stack_ffffd460) {
          local_18 = &stack0xffffd468;
          do {
            if (*(int *)(&stack0xffffd464 + (int)unaff_ESI * 0xec) == 0xb) {
              pcVar6 = auStack_40 + 4;
              shape_edittool_cpp_CStrList_ctor_FUN_004a2a20((CStrList *)pcVar6);
              pcVar9 = (char *)auStack_2b38[(int)unaff_ESI * 0x3b];
              cVar2 = *pcVar9;
              while (cVar2 != '\0') {
                cVar2 = *pcVar9;
                if ((((g_CharacterClassificationTable[(byte)(cVar2 + 1)] & 0xe0U) == 0) &&
                    (cVar2 != '-')) && (cVar2 != '_')) {
                  pcVar9 = pcVar9 + 1;
                }
                else {
                  pcVar7 = acStack_1d0;
                  do {
                    do {
                      *pcVar7 = *pcVar9;
                      pbVar1 = (byte *)(pcVar9 + 1);
                      local_18 = (byte *)(uint)*pbVar1;
                      pcVar9 = pcVar9 + 1;
                      pcVar7 = pcVar7 + 1;
                    } while ((g_CharacterClassificationTable[(byte)(*pbVar1 + 1)] & 0xe0U) != 0);
                  } while ((local_18 == (byte *)0x2d) || (local_18 == (byte *)0x5f));
                  *pcVar7 = '\0';
                  iVar4 = crt_string_c_stricmp_FUN_005fe7f0(acStack_1d0,"none");
                  if (iVar4 != 0) {
                    pcVar6 = "true";
                    iVar4 = crt_string_c_stricmp_FUN_005fe7f0(acStack_1d0 + 4,"true");
                    if (iVar4 != 0) {
                      pcVar6 = (char *)auStack_40;
                      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                                ((CStrList *)auStack_40,acStack_1c8);
                    }
                  }
                }
                cVar2 = *pcVar9;
              }
              iVar4 = 0;
              if (0 < (int)auStack_40._0_4_) {
                do {
                  pcVar6 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                                     ((CStrList *)auStack_40,iVar4);
                  iVar5 = crt_string_c_stricmp_FUN_005fe7f0(pcVar8,pcVar6);
                  if (iVar5 == 0) {
                    crt_stdio_c_sprintf_FUN_005fdbd0
                              (auStack_69c + 0x3a0,"%s\tChecks for \"%s\" in \"%s\"");
                    pcVar6 = auStack_69c + 0x3a4;
                    shape_edittool_cpp_CStrList_add_FUN_004a2b80
                              ((CStrList *)(auStack_6a4 + 4),pcVar6);
                    break;
                  }
                  iVar4 = iVar4 + 1;
                } while (iVar4 < (int)auStack_40._0_4_);
              }
              shape_edittool_cpp_CStrList_dtor_FUN_004a2a40((CStrList *)auStack_40,0,(uint)pcVar6);
            }
            local_18 = local_18 + 0xec;
            unaff_ESI = unaff_ESI + 1;
          } while ((int)unaff_ESI < (int)in_stack_ffffd460);
        }
        index = index + 1;
      } while (index < (int)auStack_2c._0_4_);
    }
    iVar3 = *(int *)(iVar3 + 0x14c);
  } while( true );
}
