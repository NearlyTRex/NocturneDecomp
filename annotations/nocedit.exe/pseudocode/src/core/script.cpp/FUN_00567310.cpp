// Name: core_script.cpp_FUN_00567310
// Address: 00567310
// Address Range: [[00567310, 00567482]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_00567310()

#include "nocturne.h"

/* Signature: byte core_script.cpp_FUN_00567310(byte param_1, uint param_2,
   uint param_3, uint param_4) */

uint core_script_cpp_FUN_00567310(void)

{
  int iVar1;
  int iVar2;
  byte *puVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  BADSPACEBASE *in_ESP;
  char *pcVar9;
  int in_stack_00000008;
  CStrList *in_stack_00000010;
  CBitFont *in_stack_00000014;
  int *in_stack_00000018;
  
  iVar2 = 0;
  do {
    do {
      do {
        iVar8 = iVar2;
        pcVar9 = (char *)(in_stack_00000008 + iVar8);
        iVar2 = iVar8 + 1;
      } while ((g_CharacterClassificationTable[(byte)(*pcVar9 + 1)] & 2U) != 0);
      if (*pcVar9 == '\0') {
        return 0xffffffff;
      }
      iVar5 = core_event_cpp_FUN_004b0f90();
    } while ((iVar5 == 0) && (*pcVar9 != '.'));
    if (*(char *)(in_stack_00000008 + iVar8) == '.') {
      iVar8 = iVar8 + 1;
    }
    pcVar9 = (char *)(iVar8 + in_stack_00000008);
    iVar5 = 0;
    while( true ) {
      iVar6 = core_event_cpp_FUN_004b0f90();
      iVar1 = iVar5 + 1;
      iVar2 = iVar8 + 1;
      if (iVar6 == 0) break;
      pcVar9 = pcVar9 + 1;
      (&stack0xfffffe54)[iVar5] = *(byte *)(in_stack_00000008 + iVar8);
      iVar8 = iVar2;
      iVar5 = iVar1;
    }
    if (*pcVar9 == '(') {
      iVar7 = 1;
      pcVar9 = (char *)(iVar2 + in_stack_00000008);
      (&stack0xfffffe54)[iVar5] = *(byte *)(in_stack_00000008 + iVar8);
      cVar4 = *pcVar9;
      iVar6 = iVar1;
      iVar8 = iVar2;
      while (iVar5 = iVar6, cVar4 != '\0') {
        if (*pcVar9 == '(') {
          iVar7 = iVar7 + 1;
        }
        if (*pcVar9 == ')') {
          iVar7 = iVar7 + -1;
        }
        pcVar9 = pcVar9 + 1;
        iVar5 = iVar6 + 1;
        puVar3 = (byte *)(in_stack_00000008 + iVar8);
        iVar8 = iVar8 + 1;
        (&stack0xfffffe58)[iVar6] = *puVar3;
        if (iVar7 < 1) break;
        iVar6 = iVar5;
        cVar4 = *pcVar9;
      }
    }
    iVar2 = iVar8;
    if (0 < iVar5) {
      (&stack0xfffffe54)[iVar5] = 0;
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(in_stack_00000010,&stack0xfffffe54);
      if (((in_stack_00000018 != (int *)0x0) && (iVar1 <= *in_stack_00000018)) &&
         (*in_stack_00000018 <= iVar8)) {
        *in_stack_00000018 = iVar1;
        shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0(in_stack_00000014);
      }
    }
  } while( true );
}
