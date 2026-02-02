// Name: core_script.cpp_CScript_FUN_005677a0
// Address: 005677a0
// Address Range: [[005677a0, 00567bba]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_CScript_FUN_005677a0(CScript *this_ptr,char *param_2,char *param_3)

#include "nocturne.h"

int __cdecl core_script_cpp_CScript_FUN_005677a0(CScript *this_ptr,char *param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  char *pcVar6;
  char *pcVar7;
  uint in_stack_ffffd3b4;
  uint in_stack_ffffd3b8;
  uint in_stack_ffffd3bc;
  uint in_stack_ffffd3c0;
  uint in_stack_ffffd3c4;
  CPickList local_748;
  char local_3a0 [500];
  char local_1ac [200];
  char local_e4 [200];
  int local_1c;
  int local_18;
  char *local_14;
  
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_748);
  local_18 = 0;
  if (0 < this_ptr->unk3) {
    local_1c = 0;
    do {
      local_14 = (char *)(local_1c + (int)this_ptr->unk4);
      iVar3 = shape_edittool_cpp_CStrList_findString_FUN_004a3030(&local_748.base,local_14);
      if (iVar3 < 0) {
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_748.base,local_14);
        iVar3 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(&local_748.base);
      }
      else {
        iVar3 = iVar3 + 1;
      }
      switch(*(uint *)(local_14 + 0x100)) {
      case 0:
        pcVar6 = "Event tested";
        break;
      case 1:
        pcVar6 = "Event raised";
        break;
      case 2:
        pcVar6 = "Persistent event";
        break;
      case 3:
        pcVar6 = "Game flag";
        break;
      case 4:
        pcVar6 = "Timer";
        break;
      case 5:
      case 6:
        pcVar6 = "Counter";
        break;
      case 7:
        pcVar6 = "Actor referenced";
        break;
      case 8:
        pcVar6 = "Sfx set";
        break;
      case 9:
        pcVar6 = "Sfx referenced";
        break;
      case 10:
        pcVar6 = "Actor variable set";
        break;
      case 0xb:
        pcVar6 = "Actor variable referenced";
        break;
      case 0xc:
        pcVar6 = "Ini file variable";
        break;
      default:
        pcVar6 = "????";
      }
      pcVar7 = local_1ac;
      do {
        cVar1 = *pcVar6;
        *pcVar7 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar7[1] = cVar1;
        pcVar7 = pcVar7 + 2;
      } while (cVar1 != '\0');
      if (*(int *)(local_14 + 0x104) == 0) {
        sprintf
                  (local_e4,"Script\tLn %d",*(uint *)(local_14 + 0x10c));
      }
      else {
        core_actor_cpp_FUN_0040e130();
        (**(code **)(*(int *)(*(int *)(local_14 + 0x104) + 0x154) + 0xd4))();
        sprintf
                  (local_e4,"%s\t%s",*(uint *)(local_14 + 0x104),
                   &stack0xffffd3c0 + *(int *)(local_14 + 0x108) * 0xec);
      }
      sprintf(local_3a0,"\t%s\t%s",local_1ac,local_e4);
      shape_edittool_cpp_CPickList_insert_FUN_004a5670(&local_748,iVar3,(int)local_3a0);
      *(int *)(local_14 + 0x110) = iVar3;
      if (0 < local_18) {
        iVar4 = 0;
        do {
          iVar2 = *(int *)((int)this_ptr->unk4 + iVar4 + 0x110);
          if (iVar3 <= iVar2) {
            *(int *)((int)this_ptr->unk4 + iVar4 + 0x110) = iVar2 + 1;
          }
          iVar4 = iVar4 + 0x114;
        } while (iVar4 < local_18 * 0x114);
      }
      local_1c = local_1c + 0x114;
      local_18 = local_18 + 1;
    } while (local_18 < this_ptr->unk3);
  }
  iVar3 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(&local_748.base);
  if (iVar3 < 1) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Nothing to choose from!");
  }
  else {
    shape_edittool_cpp_CPickList_setSelectedResult_FUN_004a3e10(&local_748,1);
    iVar4 = 0;
    iVar3 = shape_edittool_cpp_CStrList_findString_FUN_004a3030(&local_748.base,param_3);
    iVar3 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      (&local_748,param_2,iVar3,iVar4);
    if (-1 < iVar3) {
      iVar4 = 0;
      if (0 < this_ptr->unk3) {
        pvVar5 = this_ptr->unk4;
        do {
          if (iVar3 == *(int *)((int)pvVar5 + 0x110)) {
            iVar3 = *(int *)((int)pvVar5 + 0x104);
            if (iVar3 == 0) {
              iVar4 = *(int *)((int)pvVar5 + 0x10c) + -1;
              if (iVar4 != g_CurrentEditingLine) {
                g_CurrentEditingColumn = iVar3;
                g_CurrentEditingLine = iVar4;
                core_script_cpp_FUN_005644e0();
                core_script_cpp_CScript_updateCursorBounds_FUN_00566910(this_ptr);
                core_script_cpp_CScript_updateScrollPosition_FUN_005669a0(this_ptr);
              }
            }
            else {
              core_msnedit_cpp_CDemonMission_FUN_0053c140(g_CDemonMissionPtr,iVar3);
            }
            goto LAB_005679f9;
          }
          iVar4 = iVar4 + 1;
          pvVar5 = (void *)((int)pvVar5 + 0x114);
        } while (iVar4 < this_ptr->unk3);
      }
      pcVar6 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_748.base,iVar3);
      do {
        cVar1 = *pcVar6;
        *param_3 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        param_3[1] = cVar1;
        param_3 = param_3 + 2;
      } while (cVar1 != '\0');
      iVar3 = 1;
      goto LAB_00567a01;
    }
  }
LAB_005679f9:
  iVar3 = 0;
LAB_00567a01:
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            (&local_748,0,in_stack_ffffd3b4,in_stack_ffffd3b8,in_stack_ffffd3bc,in_stack_ffffd3c0,
             in_stack_ffffd3c4);
  return iVar3;
}
