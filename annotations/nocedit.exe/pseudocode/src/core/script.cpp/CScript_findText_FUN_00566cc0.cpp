// Name: core_script.cpp_CScript_findText_FUN_00566cc0
// Address: 00566cc0
// Address Range: [[00566cc0, 00566f90]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_CScript_findText_FUN_00566cc0(CScript *this_ptr,char *search_str,int start_col,int start_line,uint *found_col,int *found_line,uint *found_end_col,int direction)

#include "nocturne.h"

int __cdecl core_script_cpp_CScript_findText_FUN_00566cc0(CScript *this_ptr,char *search_str,int start_col,int start_line,uint *found_col,int *found_line,uint *found_end_col,int direction)

{
  char cVar2;
  int iVar2;
  uint uVar3;
  int iVar4;
  char *pcVar3;
  CStrList *this_ptr_00;
  uint uVar4;
  int count;
  uint uVar5;
  uint uVar6;
  CStrList *pCVar6;
  uint buffer_index;
  char *pcVar8;
  char *pcVar7;
  byte bVar8;
  int local_20;
  int local_1c;
  char cVar1;
  
  bVar8 = 0;
  if (search_str != (char *)0x0) {
    uVar4 = 0xffffffff;
    pcVar8 = search_str;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    count = ~uVar4 - 1;
    if ((0 < count) &&
       (iVar2 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(&this_ptr->script_text),
       0 < iVar2)) {
      if (start_col < 0) {
        start_line = start_line + -1;
        start_col = 9999;
      }
      if (start_line < 0) {
        if (direction < 0) {
          iVar4 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(&this_ptr->script_text);
          start_line = iVar4 + -1;
          start_col = 9999;
        }
        else {
          start_line = 0;
          start_col = 0;
        }
      }
      uVar3 = core_script_cpp_CScript_editorX2Index_FUN_00566a90(this_ptr,start_line,start_col);
      pCVar6 = &this_ptr->script_text;
      if (direction < 1) {
        iVar4 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(pCVar6);
        if (iVar4 <= start_line) {
          iVar4 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(pCVar6);
          start_line = iVar4 + -1;
          uVar3 = 9999;
        }
        this_ptr_00 = &this_ptr->script_text;
        for (local_20 = 0;
            iVar4 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(this_ptr_00),
            local_20 < iVar4 + 2; local_20 = local_20 + 1) {
          if (start_line < 0) {
            iVar4 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(this_ptr_00);
            start_line = iVar4 + -1;
          }
          pcVar8 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(this_ptr_00,start_line);
          uVar6 = 0xffffffff;
          pcVar7 = pcVar8;
          do {
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            pcVar7 = pcVar7 + (uint)bVar8 * -2 + 1;
            cVar2 = *pcVar7;
            pcVar7 = pcVar7;
          } while (cVar2 != '\0');
          uVar6 = (~uVar6 - 1) - count;
          if ((int)uVar6 < (int)uVar3) {
            uVar3 = uVar6;
          }
          pcVar8 = pcVar8 + uVar3;
          for (; 0 < (int)uVar3; uVar3 = uVar3 - 1) {
            iVar4 = _strnicmp(pcVar8,search_str,count);
            if (iVar4 == 0) {
              uVar6 = core_script_cpp_CScript_editorIndex2X_FUN_00566b30(this_ptr,start_line,uVar3);
              *found_col = uVar6;
              uVar3 = core_script_cpp_CScript_editorIndex2X_FUN_00566b30
                                (this_ptr,start_line,uVar3 + count);
              *found_end_col = uVar3;
              *found_line = start_line;
              return 1;
            }
            pcVar8 = pcVar8 + -1;
          }
          uVar3 = 9999;
          start_line = start_line + -1;
        }
      }
      else {
        for (local_1c = 0; iVar4 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(pCVar6),
            local_1c < iVar4 + 2; local_1c = local_1c + 1) {
          iVar4 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(pCVar6);
          if (iVar4 <= start_line) {
            uVar3 = 0;
            start_line = 0;
          }
          pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(pCVar6,start_line);
          uVar5 = 0xffffffff;
          pcVar8 = pcVar3;
          do {
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            cVar2 = *pcVar8;
            pcVar8 = pcVar8 + (uint)bVar8 * -2 + 1;
          } while (cVar2 != '\0');
          pcVar8 = pcVar3 + uVar3;
          for (buffer_index = uVar3 + count; (int)buffer_index <= (int)(~uVar5 - 1);
              buffer_index = buffer_index + 1) {
            iVar4 = _strnicmp(pcVar8,search_str,count);
            if (iVar4 == 0) {
              uVar3 = core_script_cpp_CScript_editorIndex2X_FUN_00566b30(this_ptr,start_line,uVar3);
              *found_col = uVar3;
              uVar3 = core_script_cpp_CScript_editorIndex2X_FUN_00566b30
                                (this_ptr,start_line,buffer_index);
              *found_end_col = uVar3;
              *found_line = start_line;
              return 1;
            }
            pcVar8 = pcVar8 + 1;
            uVar3 = uVar3 + 1;
          }
          uVar3 = 0;
          start_line = start_line + 1;
        }
      }
    }
  }
  return 0;
}
