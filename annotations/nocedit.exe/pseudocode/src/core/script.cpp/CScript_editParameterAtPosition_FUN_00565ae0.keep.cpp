// Name: core_script.cpp_CScript_editParameterAtPosition_FUN_00565ae0
// Address: 00565ae0
// MANUAL RECONSTRUCTION
// Address Range: [[00565ae0, 00565c6c]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_editParameterAtPosition_FUN_00565ae0(CScript *this_ptr,int column,int line)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_editParameterAtPosition_FUN_00565ae0(CScript *this_ptr,int column,int line)

{
  char cVar2;
  int iVar2;
  int iVar3;
  char *input_text;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar4;
  char *pcVar6;
  char *pcVar8;
  char *pcVar9;
  byte bVar8;
  CCmdParse *parse_out;
  CCmdParse CStack_2a38;
  CCmdParm local_910;
  char local_5e8 [500];
  char local_3f4 [500];
  char local_200 [500];
  char cVar1;
  CCmdParm *parm_out;
  
  bVar8 = 0;
  if (-1 < line) {
    iVar2 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(&this_ptr->script_text);
    if (line < iVar2) {
      iVar3 = core_script_cpp_CScript_editorX2Index_FUN_00566a90(this_ptr,line,column);
      parse_out = &CStack_2a38;
      parm_out = &local_910;
      pcVar4 = local_5e8;
      pcVar8 = local_3f4;
      pcVar9 = local_200;
      input_text = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&this_ptr->script_text,line)
      ;
      iVar3 = core_script_cpp_parseCommandWithDefaultTemplates_FUN_00561c70
                        (input_text,pcVar9,pcVar8,pcVar4,iVar3,parm_out,parse_out);
      if (0 < iVar3) {
        iVar3 = core_script_cpp_editParameterValue_FUN_00562920
                          (local_3f4,iVar3,&local_910,&CStack_2a38);
        if (iVar3 != 0) {
          pcVar5 = local_200;
          pcVar6 = g_CurrentLineBuffer + 1;
          do {
            cVar1 = *pcVar5;
            *pcVar6 = cVar1;
            if (cVar1 == '\0') break;
            cVar2 = pcVar5[1];
            pcVar5 = pcVar5 + 2;
            pcVar6[1] = cVar2;
            pcVar6 = pcVar6 + 2;
          } while (cVar2 != '\0');
          strcat(g_CurrentLineBuffer + 1,local_3f4);
          strcat(g_CurrentLineBuffer + 1,local_5e8);
          core_script_cpp_CScript_editorPutLine_FUN_005662a0(this_ptr,line);
          g_CurrentEditingLine = line;
          uVar3 = 0xffffffff;
          pcVar4 = local_200;
          do {
            if (uVar3 == 0) break;
            uVar3 = uVar3 - 1;
            cVar2 = *pcVar4;
            pcVar4 = pcVar4 + (uint)bVar8 * -2 + 1;
          } while (cVar2 != '\0');
          uVar4 = 0xffffffff;
          pcVar4 = local_3f4;
          do {
            if (uVar4 == 0) break;
            uVar4 = uVar4 - 1;
            cVar2 = *pcVar4;
            pcVar4 = pcVar4 + (uint)bVar8 * -2 + 1;
          } while (cVar2 != '\0');
          g_CurrentEditingColumn =
               core_script_cpp_CScript_editorIndex2X_FUN_00566b30
                         (this_ptr,line,~uVar4 + (~uVar3 - 2));
          core_script_cpp_clearSelections_FUN_005644e0();
          core_script_cpp_CScript_updateCursorBounds_FUN_00566910(this_ptr);
          core_script_cpp_CScript_updateScrollPosition_FUN_005669a0(this_ptr);
          return;
        }
      }
    }
  }
  return;
}
