// Name: core_script.cpp_CScript_FUN_00567310
// Address: 00567310
// Address Range: [[00567310, 00567482]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_CScript_FUN_00567310(CScript *this_ptr,int param_2,CBitFont *param_3,int *param_4)

#include "nocturne.h"

int __cdecl
core_script_cpp_CScript_FUN_00567310(CScript *this_ptr,int param_2,CBitFont *param_3,int *param_4)

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
        pbVar8 = (byte *)(param_2 + iVar6);
        iVar7 = iVar6 + 1;
      } while ((g_CharacterClassificationTable[(byte)(*pbVar8 + 1)] & 2U) != 0);
      if (*pbVar8 == 0) {
        return local_1c;
      }
      iVar3 = core_event_cpp_FUN_004b0f90((uint)*pbVar8);
    } while ((iVar3 == 0) && (*pbVar8 != 0x2e));
    iVar7 = iVar6;
    if (*(char *)(param_2 + iVar6) == '.') {
      iVar7 = iVar6 + 1;
    }
    pbVar8 = (byte *)(iVar7 + param_2);
    iVar3 = 0;
    local_18 = iVar6;
    while( true ) {
      iVar4 = core_event_cpp_FUN_004b0f90((uint)*pbVar8);
      local_14 = iVar3 + 1;
      iVar6 = iVar7 + 1;
      if (iVar4 == 0) break;
      pbVar8 = pbVar8 + 1;
      local_1ac[iVar3] = *(char *)(param_2 + iVar7);
      iVar7 = iVar6;
      iVar3 = local_14;
    }
    if (*pbVar8 == 0x28) {
      iVar4 = 1;
      pcVar5 = (char *)(iVar6 + param_2);
      local_1ac[iVar3] = *(char *)(param_2 + iVar7);
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
        pcVar1 = (char *)(param_2 + iVar7);
        iVar7 = iVar7 + 1;
        local_1ac[iVar6] = *pcVar1;
        if (iVar4 < 1) break;
        iVar6 = iVar3;
        cVar2 = *pcVar5;
      }
    }
    if (0 < iVar3) {
      local_1ac[iVar3] = '\0';
      shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)param_3,local_1ac);
      if (((param_4 != (int *)0x0) && (local_18 <= *param_4)) && (*param_4 <= iVar7)) {
        *param_4 = local_18;
        local_1c = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0(param_3);
        local_1c = local_1c + -1;
      }
    }
  } while( true );
}
