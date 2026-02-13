// Name: core_script.cpp_CScript_tokenizeAtCursor_FUN_00567310
// Address: 00567310
// Address Range: [[00567310, 00567482]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_CScript_tokenizeAtCursor_FUN_00567310 (CScript *this_ptr,char *input_text,CStrList *tokens_out,int *cursor_pos)

#include "nocturne.h"

int __cdecl
core_script_cpp_CScript_tokenizeAtCursor_FUN_00567310
          (CScript *this_ptr,char *input_text,CStrList *tokens_out,int *cursor_pos)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  char local_1ac [400];
  int local_1c;
  int local_18;
  int local_14;
  
  local_1c = -1;
  iVar7 = 0;
  do {
    do {
      do {
        iVar6 = iVar7;
        pbVar8 = (byte *)(input_text + iVar6);
        iVar7 = iVar6 + 1;
      } while ((g_CharacterClassificationTable[(byte)(*pbVar8 + 1)] & 2) != 0);
      if (*pbVar8 == 0) {
        return local_1c;
      }
      iVar3 = core_event_cpp_isValidIdentifierChar_FUN_004b0f90((uint)*pbVar8);
    } while ((iVar3 == 0) && (*pbVar8 != 0x2e));
    iVar7 = iVar6;
    if (input_text[iVar6] == '.') {
      iVar7 = iVar6 + 1;
    }
    pbVar8 = (byte *)(input_text + iVar7);
    iVar3 = 0;
    local_18 = iVar6;
    while( true ) {
      iVar4 = core_event_cpp_isValidIdentifierChar_FUN_004b0f90((uint)*pbVar8);
      local_14 = iVar3 + 1;
      iVar6 = iVar7 + 1;
      if (iVar4 == 0) break;
      pbVar8 = pbVar8 + 1;
      local_1ac[iVar3] = input_text[iVar7];
      iVar7 = iVar6;
      iVar3 = local_14;
    }
    if (*pbVar8 == 0x28) {
      iVar4 = 1;
      pcVar5 = input_text + iVar6;
      local_1ac[iVar3] = input_text[iVar7];
      cVar2 = *pcVar5;
      iVar7 = iVar6;
      iVar6 = local_14;
      while (iVar3 = iVar6, cVar2 != '\0') {
        if (*pcVar5 == '(') {
          iVar4 = iVar4 + 1;
        }
        if (*pcVar5 == ')') {
          iVar4 = iVar4 + -1;
        }
        pcVar5 = pcVar5 + 1;
        iVar3 = iVar6 + 1;
        pcVar1 = input_text + iVar7;
        iVar7 = iVar7 + 1;
        local_1ac[iVar6] = *pcVar1;
        if (iVar4 < 1) break;
        iVar6 = iVar3;
        cVar2 = *pcVar5;
      }
    }
    if (0 < iVar3) {
      local_1ac[iVar3] = '\0';
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(tokens_out,local_1ac);
      if (((cursor_pos != (int *)0x0) && (local_18 <= *cursor_pos)) && (*cursor_pos <= iVar7)) {
        *cursor_pos = local_18;
        local_1c = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(tokens_out);
        local_1c = local_1c + -1;
      }
    }
  } while( true );
}
