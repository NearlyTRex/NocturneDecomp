// Name: core_script.cpp_FUN_004fee30
// Address: 004fee30
// Address Range: [[004fee30, 004fef59]]
// Convention: unknown
// Signature: void core_script_cpp_FUN_004fee30(int param_1)

#include "nocturne.h"

void core_script_cpp_FUN_004fee30(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  byte bVar8;
  
  bVar8 = 0;
  core_script_cpp_CScript_freeParsedLines_FUN_004fe550(param_1);
  iVar5 = 0;
  do {
    iVar2 = shape_edittool_cpp_CStrList_getItemCount_FUN_00477660(param_1 + 0x30);
    if (iVar2 <= iVar5) {
      return;
    }
    uVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_00474080(param_1 + 0x30,iVar5,&DAT_01e55c18)
    ;
    core_script_cpp_trimLine_FUN_004fdf60(uVar3);
    if (DAT_01e55c18 != '\0') {
      iVar2 = realloc
                        (*(uint *)(param_1 + 0x2c),(*(int *)(param_1 + 0x28) + 1) * 8);
      *(int *)(param_1 + 0x2c) = iVar2;
      if (iVar2 == 0) {
        PTR_01cc4800 = "..\\core\\script.cpp";
        INT_01cc4804 = 0x398;
        core_main_c_FUN_004c8440("Out of memory loading script at line %d",iVar5 + 1);
      }
      *(int *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x28) * 8) = iVar5 + 1;
      uVar4 = 0xffffffff;
      pcVar7 = &DAT_01e55c18;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + (uint)bVar8 * -2 + 1;
      } while (cVar1 != '\0');
      uVar3 = malloc(~uVar4);
      *(uint *)(*(int *)(param_1 + 0x2c) + 4 + *(int *)(param_1 + 0x28) * 8) = uVar3;
      if (*(int *)(param_1 + 0x2c) == 0) {
        PTR_01cc4800 = "..\\core\\script.cpp";
        INT_01cc4804 = 0x39b;
        core_main_c_FUN_004c8440("Out of memory loading script at line %d",iVar5 + 1);
      }
      pcVar6 = &DAT_01e55c18;
      pcVar7 = *(char **)(*(int *)(param_1 + 0x2c) + 4 + *(int *)(param_1 + 0x28) * 8);
      do {
        cVar1 = *pcVar6;
        *pcVar7 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar7[1] = cVar1;
        pcVar7 = pcVar7 + 2;
      } while (cVar1 != '\0');
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    }
    iVar5 = iVar5 + 1;
  } while( true );
}
