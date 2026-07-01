// Name: core_script.cpp_CScript_buildParsedLines_FUN_0055a370
// Address: 0055a370
// MANUAL RECONSTRUCTION
// Address Range: [[0055a370, 0055a4ad]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_buildParsedLines_FUN_0055a370(CScript *this_ptr)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_buildParsedLines_FUN_0055a370(CScript *this_ptr)

{
  int iVar2;
  char *pcVar3;
  SScriptLine *pSVar4;
  char *pcVar4;
  int index;
  char *pcVar7;

  core_script_cpp_CScript_freeParsedLines_FUN_005598f0(this_ptr);
  index = 0;
  do {
    iVar2 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(&this_ptr->script_text);
    if (iVar2 <= index) {
      return;
    }
    pcVar7 = g_ScriptLineBuffer;
    pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&this_ptr->script_text,index);
    core_script_cpp_trimLine_FUN_005592c0(pcVar3,pcVar7);
    if (g_ScriptLineBuffer[0] != '\0') {
      pSVar4 = (SScriptLine *)shape_memdbg_cpp_debugRealloc_FUN_0050f540
                         (this_ptr->parsed_lines,(this_ptr->parsed_line_count + 1) * sizeof(SScriptLine),
                          "..\\core\\script.cpp",919);
      this_ptr->parsed_lines = pSVar4;
      if (pSVar4 == (SScriptLine *)0x0) {
        g_CurrentFilename = "..\\core\\script.cpp";
        g_CurrentLineNumber = 920;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory loading script at line %d",index + 1);
      }
      this_ptr->parsed_lines[this_ptr->parsed_line_count].line_number = index + 1;
      pcVar4 = (char *)shape_memdbg_cpp_debugMalloc_FUN_0050f250(strlen(g_ScriptLineBuffer) + 1,"..\\core\\script.cpp",922);
      this_ptr->parsed_lines[this_ptr->parsed_line_count].text = pcVar4;
      if (this_ptr->parsed_lines == (SScriptLine *)0x0) {
        g_CurrentFilename = "..\\core\\script.cpp";
        g_CurrentLineNumber = 923;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory loading script at line %d",index + 1);
      }
      strcpy(this_ptr->parsed_lines[this_ptr->parsed_line_count].text,g_ScriptLineBuffer);
      this_ptr->parsed_line_count = this_ptr->parsed_line_count + 1;
    }
    index = index + 1;
  } while( true );
}
