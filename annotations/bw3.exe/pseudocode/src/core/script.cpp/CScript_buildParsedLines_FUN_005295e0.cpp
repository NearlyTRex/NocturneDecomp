// Name: core_script.cpp_CScript_buildParsedLines_FUN_005295e0
// Address: 005295e0
// Address Range: [[005295e0, 00529709]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_buildParsedLines_FUN_005295e0(CScript *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_script_cpp_CScript_buildParsedLines_FUN_005295e0(CScript *this_ptr)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  SScriptLine *pSVar4;
  void *pvVar5;
  uint uVar6;
  int index;
  byte bVar7;
  char *pcVar8;
  
  bVar7 = 0;
  core_script_cpp_CScript_freeParsedLines_FUN_00528da0(this_ptr);
  index = 0;
  do {
    iVar2 = shape_edittool_cpp_FUN_00486af0(&this_ptr->script_text);
    if (iVar2 <= index) {
      return;
    }
    pcVar8 = &DAT_01ed6008;
    pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_00482440(&this_ptr->script_text,index);
    core_script_cpp_trimLine_FUN_00528790(pcVar3,pcVar8);
    if (DAT_01ed6008 != '\0') {
      pSVar4 = (SScriptLine *)realloc
                         (this_ptr->parsed_lines,(this_ptr->parsed_line_count + 1) * 8);
      this_ptr->parsed_lines = pSVar4;
      if (pSVar4 == (SScriptLine *)0x0) {
        _DAT_01d71de0 = "..\\core\\script.cpp";
        _DAT_01d71de4 = 0x3a4;
        core_main_c_FUN_004e4330("Out of memory loading script at line %d",index + 1);
      }
      *(int *)(this_ptr->parsed_lines + this_ptr->parsed_line_count * 8) = index + 1;
      uVar6 = 0xffffffff;
      pcVar3 = &DAT_01ed6008;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + (uint)bVar7 * -2 + 1;
      } while (cVar1 != '\0');
      pvVar5 = FUN_005a3650(~uVar6);
      *(void **)(this_ptr->parsed_lines + this_ptr->parsed_line_count * 8 + 4) = pvVar5;
      if (this_ptr->parsed_lines == (SScriptLine *)0x0) {
        _DAT_01d71de0 = "..\\core\\script.cpp";
        _DAT_01d71de4 = 0x3a7;
        core_main_c_FUN_004e4330("Out of memory loading script at line %d",index + 1);
      }
      pcVar8 = &DAT_01ed6008;
      pcVar3 = *(char **)(this_ptr->parsed_lines + this_ptr->parsed_line_count * 8 + 4);
      do {
        cVar1 = *pcVar8;
        *pcVar3 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        pcVar3[1] = cVar1;
        pcVar3 = pcVar3 + 2;
      } while (cVar1 != '\0');
      this_ptr->parsed_line_count = this_ptr->parsed_line_count + 1;
    }
    index = index + 1;
  } while( true );
}
