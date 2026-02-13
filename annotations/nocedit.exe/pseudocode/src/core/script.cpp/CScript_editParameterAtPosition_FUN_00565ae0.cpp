// Name: core_script.cpp_CScript_editParameterAtPosition_FUN_00565ae0
// Address: 00565ae0
// Address Range: [[00565ae0, 00565c6c]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_editParameterAtPosition_FUN_00565ae0(CScript *this_ptr,int column,int line)

#include "nocturne.h"

void __cdecl
core_script_cpp_CScript_editParameterAtPosition_FUN_00565ae0(CScript *this_ptr,int column,int line)

{
  char cVar1;
  int iVar2;
  char *input_text;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  byte bVar8;
  CCmdParm *parm_out;
  CCmdParse *parse_out;
  CCmdParse CStack_2a38;
  CCmdParm local_910;
  char local_5e8 [500];
  char local_3f4 [500];
  char local_200 [500];
  
  bVar8 = 0;
  if (-1 < line) {
    iVar2 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(&this_ptr->script_text);
    if (line < iVar2) {
      iVar2 = core_script_cpp_CScript_editorX2Index_FUN_00566a90(this_ptr,line,column);
      parse_out = &CStack_2a38;
      parm_out = &local_910;
      pcVar5 = local_5e8;
      pcVar6 = local_3f4;
      pcVar7 = local_200;
      input_text = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&this_ptr->script_text,line)
      ;
      iVar2 = core_script_cpp_parseCommandWithDefaultTemplates_FUN_00561c70
                        (input_text,pcVar7,pcVar6,pcVar5,iVar2,parm_out,parse_out);
      if (0 < iVar2) {
        iVar2 = core_script_cpp_editParameterValue_FUN_00562920
                          (local_3f4,iVar2,&local_910,(char *)&CStack_2a38);
        if (iVar2 != 0) {
          pcVar5 = local_200;
          pcVar6 = g_CurrentLineBuffer + 1;
          do {
            cVar1 = *pcVar5;
            *pcVar6 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar5[1];
            pcVar5 = pcVar5 + 2;
            pcVar6[1] = cVar1;
            pcVar6 = pcVar6 + 2;
          } while (cVar1 != '\0');
          pcVar5 = local_3f4;
          iVar2 = -1;
          pcVar6 = g_CurrentLineBuffer + 1;
          do {
            pcVar7 = pcVar6;
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            pcVar7 = pcVar6 + (uint)bVar8 * -2 + 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar7;
          } while (cVar1 != '\0');
          pcVar7 = pcVar7 + -1;
          do {
            cVar1 = *pcVar5;
            *pcVar7 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar5[1];
            pcVar5 = pcVar5 + 2;
            pcVar7[1] = cVar1;
            pcVar7 = pcVar7 + 2;
          } while (cVar1 != '\0');
          pcVar5 = local_5e8;
          iVar2 = -1;
          pcVar6 = g_CurrentLineBuffer + 1;
          do {
            pcVar7 = pcVar6;
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            pcVar7 = pcVar6 + (uint)bVar8 * -2 + 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar7;
          } while (cVar1 != '\0');
          pcVar7 = pcVar7 + -1;
          do {
            cVar1 = *pcVar5;
            *pcVar7 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar5[1];
            pcVar5 = pcVar5 + 2;
            pcVar7[1] = cVar1;
            pcVar7 = pcVar7 + 2;
          } while (cVar1 != '\0');
          core_script_cpp_CScript_editorPutLine_FUN_005662a0(this_ptr,line);
          g_CurrentEditingLine = line;
          uVar3 = 0xffffffff;
          pcVar5 = local_200;
          do {
            if (uVar3 == 0) break;
            uVar3 = uVar3 - 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar5 + (uint)bVar8 * -2 + 1;
          } while (cVar1 != '\0');
          uVar4 = 0xffffffff;
          pcVar5 = local_3f4;
          do {
            if (uVar4 == 0) break;
            uVar4 = uVar4 - 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar5 + (uint)bVar8 * -2 + 1;
          } while (cVar1 != '\0');
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
