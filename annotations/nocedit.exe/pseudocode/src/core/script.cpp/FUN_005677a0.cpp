// Name: core_script.cpp_FUN_005677a0
// Address: 005677a0
// Address Range: [[005677a0, 00567bba]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_005677a0()

#include "nocturne.h"

/* Signature: byte core_script.cpp_FUN_005677a0(uint param_1, uint param_2,
   uint param_3) */

uint core_script_cpp_FUN_005677a0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  int in_stack_00000004;
  char *in_stack_00000008;
  char *in_stack_0000000c;
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
  if (0 < *(int *)(in_stack_00000004 + 0x28)) {
    local_1c = 0;
    do {
      local_14 = (char *)(local_1c + *(int *)(in_stack_00000004 + 0x2c));
      iVar2 = shape_edittool_cpp_CStrList_findString_FUN_004a3030(&local_748.base,local_14);
      if (iVar2 < 0) {
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_748.base,local_14);
        iVar2 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0((CBitFont *)&local_748);
      }
      else {
        iVar2 = iVar2 + 1;
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
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (local_e4,"Script\tLn %d",*(uint *)(local_14 + 0x10c));
      }
      else {
        core_actor_cpp_FUN_0040e130();
        (**(code **)(*(int *)(*(int *)(local_14 + 0x104) + 0x154) + 0xd4))();
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (local_e4,"%s\t%s",*(uint *)(local_14 + 0x104),
                   &stack0xffffd3c0 + *(int *)(local_14 + 0x108) * 0xec);
      }
      crt_stdio_c_sprintf_FUN_005fdbd0(local_3a0,"\t%s\t%s",local_1ac,local_e4);
      shape_edittool_cpp_CPickList_insert_FUN_004a5670(&local_748,iVar2,(int)local_3a0);
      *(int *)(local_14 + 0x110) = iVar2;
      if (0 < local_18) {
        iVar3 = 0;
        do {
          iVar5 = *(int *)(in_stack_00000004 + 0x2c) + iVar3;
          iVar4 = *(int *)(iVar5 + 0x110);
          if (iVar2 <= iVar4) {
            *(int *)(iVar5 + 0x110) = iVar4 + 1;
          }
          iVar3 = iVar3 + 0x114;
        } while (iVar3 < local_18 * 0x114);
      }
      local_1c = local_1c + 0x114;
      local_18 = local_18 + 1;
    } while (local_18 < *(int *)(in_stack_00000004 + 0x28));
  }
  iVar2 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0((CBitFont *)&local_748);
  if (iVar2 < 1) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Nothing to choose from!");
  }
  else {
    shape_edittool_cpp_CPickList_setSelectedResult_FUN_004a3e10(&local_748,1);
    iVar3 = 0;
    iVar2 = shape_edittool_cpp_CStrList_findString_FUN_004a3030(&local_748.base,in_stack_0000000c);
    iVar2 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      (&local_748,in_stack_00000008,iVar2,iVar3);
    if (-1 < iVar2) {
      iVar3 = 0;
      if (0 < *(int *)(in_stack_00000004 + 0x28)) {
        iVar4 = *(int *)(in_stack_00000004 + 0x2c);
        do {
          if (iVar2 == *(int *)(iVar4 + 0x110)) {
            if (*(int *)(iVar4 + 0x104) == 0) {
              iVar2 = *(int *)(iVar4 + 0x10c) + -1;
              if (iVar2 != DAT_0310fd48) {
                DAT_0310fd44 = *(int *)(iVar4 + 0x104);
                DAT_0310fd48 = iVar2;
                core_script_cpp_FUN_005644e0();
                core_script_cpp_CScript_CallingScriptEditorX2_2_FUN_00566910();
                core_script_cpp_CScript_Unk18_FUN_005669a0();
              }
            }
            else {
              core_msnedit_cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140();
            }
            goto LAB_005679f9;
          }
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + 0x114;
        } while (iVar3 < *(int *)(in_stack_00000004 + 0x28));
      }
      pcVar6 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_748.base,iVar2);
      do {
        cVar1 = *pcVar6;
        *in_stack_0000000c = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        in_stack_0000000c[1] = cVar1;
        in_stack_0000000c = in_stack_0000000c + 2;
      } while (cVar1 != '\0');
      uVar8 = 1;
      goto LAB_00567a01;
    }
  }
LAB_005679f9:
  uVar8 = 0;
LAB_00567a01:
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            (&local_748,0,in_stack_ffffd3b4,in_stack_ffffd3b8,in_stack_ffffd3bc,in_stack_ffffd3c0,
             in_stack_ffffd3c4);
  return uVar8;
}
