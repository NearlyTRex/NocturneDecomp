// Name: core_script.cpp_CScript_tokenizeAtCursor_FUN_00567310
// Address: 00567310
// Address Range: [[00567310, 00567482]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_CScript_tokenizeAtCursor_FUN_00567310(CScript *this_ptr,char *input_text,CStrList *tokens_out,int *cursor_pos)

#include "nocturne.h"

int __cdecl core_script_cpp_CScript_tokenizeAtCursor_FUN_00567310(CScript *this_ptr,char *input_text,CStrList *tokens_out,int *cursor_pos)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar8;
  char *pcVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  char local_1ac [400];
  int local_1c;
  int local_18;
  int local_14;
  char cVar2;
  char *pcVar1;
  
  local_1c = -1;
  iVar8 = 0;
  do {
    do {
      do {
        iVar6 = iVar8;
        pbVar1 = (byte *)(input_text + iVar6);
        iVar8 = iVar6 + 1;
      } while ((g_CharacterClassificationTable[(byte)(*pbVar1 + 1)] & 2) != 0);
      if (*pbVar1 == 0) {
        return local_1c;
      }
      iVar3 = core_event_cpp_isValidIdentifierChar_FUN_004b0f90((uint)*pbVar1);
    } while ((iVar3 == 0) && (*pbVar1 != 0x2e));
    iVar7 = iVar6;
    if (input_text[iVar6] == '.') {
      iVar7 = iVar6 + 1;
    }
    pbVar8 = (byte *)(input_text + iVar7);
    iVar9 = 0;
    while( true ) {
      iVar4 = core_event_cpp_isValidIdentifierChar_FUN_004b0f90((uint)*pbVar8);
      iVar8 = iVar7 + 1;
      if (iVar4 == 0) break;
      pbVar8 = pbVar8 + 1;
      local_1ac[iVar9] = input_text[iVar7];
      iVar7 = iVar8;
      iVar9 = iVar9 + 1;
    }
    if (*pbVar8 == 0x28) {
      iVar5 = 1;
      pcVar5 = input_text + iVar8;
      local_1ac[iVar9] = input_text[iVar7];
      cVar2 = *pcVar5;
      iVar2 = iVar9 + 1;
      iVar7 = iVar8;
      while (iVar9 = iVar2, cVar2 != '\0') {
        if (*pcVar5 == '(') {
          iVar5 = iVar5 + 1;
        }
        if (*pcVar5 == ')') {
          iVar5 = iVar5 + -1;
        }
        pcVar5 = pcVar5 + 1;
        iVar9 = iVar2 + 1;
        pcVar1 = input_text + iVar7;
        iVar7 = iVar7 + 1;
        local_1ac[iVar2] = *pcVar1;
        if (iVar5 < 1) break;
        iVar2 = iVar9;
        cVar2 = *pcVar5;
      }
    }
    iVar8 = iVar7;
    if (0 < iVar9) {
      local_1ac[iVar9] = '\0';
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(tokens_out,local_1ac);
      iVar8 = iVar7;
      if (((cursor_pos != (int *)0x0) && (iVar8 = iVar7, iVar6 <= *cursor_pos)) &&
         (iVar8 = iVar7, *cursor_pos <= iVar7)) {
        *cursor_pos = iVar6;
        iVar8 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(tokens_out);
        local_1c = iVar8 + -1;
        iVar8 = iVar7;
      }
    }
  } while( true );
}
