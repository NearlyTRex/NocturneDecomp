// Name: core_script.cpp_FUN_004fee30
// Address: 004fee30
// Address Range: [[004fee30, 004fef59]]
// Convention: unknown
// Signature: void core_script_cpp_FUN_004fee30(CScript *param_1)

#include "nocturne.h"

void core_script_cpp_FUN_004fee30(CScript *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  SScriptXRef *pSVar4;
  void *pvVar5;
  uint uVar6;
  int index;
  char *pcVar7;
  byte bVar8;
  byte *puVar9;
  
  bVar8 = 0;
  core_script_cpp_CScript_freeParsedLines_FUN_004fe550(param_1);
  index = 0;
  do {
    iVar2 = shape_edittool_cpp_CStrList_getItemCount_FUN_00477660
                      ((CStrList *)&param_1->parsed_line_count);
    if (iVar2 <= index) {
      return;
    }
    puVar9 = &DAT_01e55c18;
    pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_00474080
                       ((CStrList *)&param_1->parsed_line_count,index);
    core_script_cpp_trimLine_FUN_004fdf60(pcVar3,puVar9);
    if (DAT_01e55c18 != '\0') {
      pSVar4 = (SScriptXRef *)realloc
                         (param_1->xref_entries,(param_1->xref_count + 1) * 8);
      param_1->xref_entries = pSVar4;
      if (pSVar4 == (SScriptXRef *)0x0) {
        PTR_01cc4800 = "..\\core\\script.cpp";
        INT_01cc4804 = 0x398;
        core_main_c_FUN_004c8440("Out of memory loading script at line %d",index + 1);
      }
      *(int *)(param_1->xref_entries->name + param_1->xref_count * 8) = index + 1;
      uVar6 = 0xffffffff;
      pcVar3 = &DAT_01e55c18;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + (uint)bVar8 * -2 + 1;
      } while (cVar1 != '\0');
      pvVar5 = malloc(~uVar6);
      *(void **)(param_1->xref_entries->name + param_1->xref_count * 8 + 4) = pvVar5;
      if (param_1->xref_entries == (SScriptXRef *)0x0) {
        PTR_01cc4800 = "..\\core\\script.cpp";
        INT_01cc4804 = 0x39b;
        core_main_c_FUN_004c8440("Out of memory loading script at line %d",index + 1);
      }
      pcVar7 = &DAT_01e55c18;
      pcVar3 = *(char **)(param_1->xref_entries->name + param_1->xref_count * 8 + 4);
      do {
        cVar1 = *pcVar7;
        *pcVar3 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar3[1] = cVar1;
        pcVar3 = pcVar3 + 2;
      } while (cVar1 != '\0');
      param_1->xref_count = param_1->xref_count + 1;
    }
    index = index + 1;
  } while( true );
}
