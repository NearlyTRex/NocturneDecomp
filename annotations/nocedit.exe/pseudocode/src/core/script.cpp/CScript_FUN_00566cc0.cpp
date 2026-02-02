// Name: core_script.cpp_CScript_FUN_00566cc0
// Address: 00566cc0
// Address Range: [[00566cc0, 00566f90]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_CScript_FUN_00566cc0 (CScript *this_ptr,char *param_2,int param_3,int param_4,uint *param_5,int *param_6, uint *param_7,int param_8)

#include "nocturne.h"

int __cdecl
core_script_cpp_CScript_FUN_00566cc0
          (CScript *this_ptr,char *param_2,int param_3,int param_4,uint *param_5,int *param_6,
          uint *param_7,int param_8)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  int count;
  uint uVar5;
  CStrList *pCVar6;
  uint buffer_index;
  char *pcVar7;
  byte bVar8;
  int local_20;
  int local_1c;
  
  bVar8 = 0;
  if (param_2 != (char *)0x0) {
    uVar4 = 0xffffffff;
    pcVar3 = param_2;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    count = ~uVar4 - 1;
    if ((0 < count) &&
       (iVar2 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(&this_ptr->script_text),
       0 < iVar2)) {
      if (param_3 < 0) {
        param_4 = param_4 + -1;
        param_3 = 9999;
      }
      if (param_4 < 0) {
        if (param_8 < 0) {
          iVar2 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(&this_ptr->script_text);
          param_4 = iVar2 + -1;
          param_3 = 9999;
        }
        else {
          param_4 = 0;
          param_3 = 0;
        }
      }
      uVar4 = core_script_cpp_CScript_editorX2Index_FUN_00566a90(this_ptr,param_4,param_3);
      pCVar6 = &this_ptr->script_text;
      if (param_8 < 1) {
        iVar2 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(pCVar6);
        if (iVar2 <= param_4) {
          iVar2 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(pCVar6);
          param_4 = iVar2 + -1;
          uVar4 = 9999;
        }
        pCVar6 = &this_ptr->script_text;
        for (local_20 = 0; iVar2 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(pCVar6),
            local_20 < iVar2 + 2; local_20 = local_20 + 1) {
          if (param_4 < 0) {
            iVar2 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(pCVar6);
            param_4 = iVar2 + -1;
          }
          pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(pCVar6,param_4);
          uVar5 = 0xffffffff;
          pcVar7 = pcVar3;
          do {
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + (uint)bVar8 * -2 + 1;
          } while (cVar1 != '\0');
          uVar5 = (~uVar5 - 1) - count;
          if ((int)uVar5 < (int)uVar4) {
            uVar4 = uVar5;
          }
          pcVar3 = pcVar3 + uVar4;
          for (; 0 < (int)uVar4; uVar4 = uVar4 - 1) {
            iVar2 = strnicmp(pcVar3,param_2,count);
            if (iVar2 == 0) {
              uVar5 = core_script_cpp_CScript_editorIndex2X_FUN_00566b30(this_ptr,param_4,uVar4);
              *param_5 = uVar5;
              uVar4 = core_script_cpp_CScript_editorIndex2X_FUN_00566b30
                                (this_ptr,param_4,uVar4 + count);
              *param_7 = uVar4;
              *param_6 = param_4;
              return 1;
            }
            pcVar3 = pcVar3 + -1;
          }
          uVar4 = 9999;
          param_4 = param_4 + -1;
        }
      }
      else {
        for (local_1c = 0; iVar2 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(pCVar6),
            local_1c < iVar2 + 2; local_1c = local_1c + 1) {
          iVar2 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(pCVar6);
          if (iVar2 <= param_4) {
            uVar4 = 0;
            param_4 = 0;
          }
          pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(pCVar6,param_4);
          uVar5 = 0xffffffff;
          pcVar7 = pcVar3;
          do {
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + (uint)bVar8 * -2 + 1;
          } while (cVar1 != '\0');
          pcVar3 = pcVar3 + uVar4;
          for (buffer_index = uVar4 + count; (int)buffer_index <= (int)(~uVar5 - 1);
              buffer_index = buffer_index + 1) {
            iVar2 = strnicmp(pcVar3,param_2,count);
            if (iVar2 == 0) {
              uVar4 = core_script_cpp_CScript_editorIndex2X_FUN_00566b30(this_ptr,param_4,uVar4);
              *param_5 = uVar4;
              uVar4 = core_script_cpp_CScript_editorIndex2X_FUN_00566b30
                                (this_ptr,param_4,buffer_index);
              *param_7 = uVar4;
              *param_6 = param_4;
              return 1;
            }
            pcVar3 = pcVar3 + 1;
            uVar4 = uVar4 + 1;
          }
          uVar4 = 0;
          param_4 = param_4 + 1;
        }
      }
    }
  }
  return 0;
}
