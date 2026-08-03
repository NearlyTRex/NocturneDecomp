// Name: core_script.cpp_FUN_004fee30
// Address: 004fee30
// Address Range: [[004fee30, 004fef59]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_FUN_004fee30(CScript *this_ptr)

#include "nocturne.h"

void __cdecl core_script_cpp_FUN_004fee30(CScript *this_ptr)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  SScriptLine *pSVar4;
  uint uVar5;
  int index;
  byte bVar6;
  char *pcVar7;
  
  bVar6 = 0;
  core_script_cpp_CScript_freeParsedLines_FUN_004fe550(this_ptr);
  index = 0;
  do {
    iVar2 = shape_edittool_cpp_CStrList_getItemCount_FUN_00477660(&this_ptr->script_text);
    if (iVar2 <= index) {
      return;
    }
    pcVar7 = &DAT_01e55c18;
    pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_00474080(&this_ptr->script_text,index);
    core_script_cpp_trimLine_FUN_004fdf60(pcVar3,pcVar7);
    if (DAT_01e55c18 != '\0') {
      pSVar4 = (SScriptLine *)realloc
                         (this_ptr->parsed_lines,(this_ptr->parsed_line_count + 1) * 8);
      this_ptr->parsed_lines = pSVar4;
      if (pSVar4 == (SScriptLine *)0x0) {
        g_CHAR_PTR_01cc4800 = "..\\core\\script.cpp";
        g_INT_01cc4804 = 0x398;
        core_main_c_FUN_004c8440("Out of memory loading script at line %d",index + 1);
      }
      this_ptr->parsed_lines[this_ptr->parsed_line_count].line_number = index + 1;
      uVar5 = 0xffffffff;
      pcVar3 = &DAT_01e55c18;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + (uint)bVar6 * -2 + 1;
      } while (cVar1 != '\0');
      pcVar3 = (char *)malloc(~uVar5);
      this_ptr->parsed_lines[this_ptr->parsed_line_count].text = pcVar3;
      if (this_ptr->parsed_lines == (SScriptLine *)0x0) {
        g_CHAR_PTR_01cc4800 = "..\\core\\script.cpp";
        g_INT_01cc4804 = 0x39b;
        core_main_c_FUN_004c8440("Out of memory loading script at line %d",index + 1);
      }
      pcVar7 = &DAT_01e55c18;
      pcVar3 = this_ptr->parsed_lines[this_ptr->parsed_line_count].text;
      do {
        cVar1 = *pcVar7;
        *pcVar3 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar3[1] = cVar1;
        pcVar3 = pcVar3 + 2;
      } while (cVar1 != '\0');
      this_ptr->parsed_line_count = this_ptr->parsed_line_count + 1;
    }
    index = index + 1;
  } while( true );
}
