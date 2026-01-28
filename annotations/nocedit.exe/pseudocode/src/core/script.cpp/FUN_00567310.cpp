// Name: core_script.cpp_FUN_00567310
// Address: 00567310
// Address Range: [[00567310, 00567482]]
// Convention: unknown
// Signature: int core_script_cpp_FUN_00567310(void)

#include "nocturne.h"

/* Signature: byte core_script.cpp_FUN_00567310(byte param_1, uint param_2,
   uint param_3, uint param_4) */

int core_script_cpp_FUN_00567310(void)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int in_stack_00000008;
  CBitFont *in_stack_0000000c;
  int *in_stack_00000010;
  char local_1ac [400];
  int local_1c;
  int local_18;
  int local_14;
  
  local_1c = -1;
  iVar6 = 0;
  do {
    do {
      do {
        iVar5 = iVar6;
        pcVar7 = (char *)(in_stack_00000008 + iVar5);
        iVar6 = iVar5 + 1;
      } while ((g_CharacterClassificationTable[(byte)(*pcVar7 + 1)] & 2U) != 0);
      if (*pcVar7 == '\0') {
        return local_1c;
      }
      iVar3 = core_event_cpp_FUN_004b0f90();
    } while ((iVar3 == 0) && (*pcVar7 != '.'));
    iVar6 = iVar5;
    if (*(char *)(in_stack_00000008 + iVar5) == '.') {
      iVar6 = iVar5 + 1;
    }
    pcVar7 = (char *)(iVar6 + in_stack_00000008);
    iVar3 = 0;
    local_18 = iVar5;
    while( true ) {
      iVar4 = core_event_cpp_FUN_004b0f90();
      local_14 = iVar3 + 1;
      iVar5 = iVar6 + 1;
      if (iVar4 == 0) break;
      pcVar7 = pcVar7 + 1;
      local_1ac[iVar3] = *(char *)(in_stack_00000008 + iVar6);
      iVar6 = iVar5;
      iVar3 = local_14;
    }
    if (*pcVar7 == '(') {
      iVar4 = 1;
      pcVar7 = (char *)(iVar5 + in_stack_00000008);
      local_1ac[iVar3] = *(char *)(in_stack_00000008 + iVar6);
      cVar2 = *pcVar7;
      iVar6 = iVar5;
      iVar5 = local_14;
      while (iVar3 = iVar5, cVar2 != '\0') {
        if (*pcVar7 == '(') {
          iVar4 = iVar4 + 1;
        }
        if (*pcVar7 == ')') {
          iVar4 = iVar4 + -1;
        }
        pcVar7 = pcVar7 + 1;
        iVar3 = iVar5 + 1;
        pcVar1 = (char *)(in_stack_00000008 + iVar6);
        iVar6 = iVar6 + 1;
        local_1ac[iVar5] = *pcVar1;
        if (iVar4 < 1) break;
        iVar5 = iVar3;
        cVar2 = *pcVar7;
      }
    }
    if (0 < iVar3) {
      local_1ac[iVar3] = '\0';
      shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)in_stack_0000000c,local_1ac);
      if (((in_stack_00000010 != (int *)0x0) && (local_18 <= *in_stack_00000010)) &&
         (*in_stack_00000010 <= iVar6)) {
        *in_stack_00000010 = local_18;
        local_1c = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0(in_stack_0000000c);
        local_1c = local_1c + -1;
      }
    }
  } while( true );
}
