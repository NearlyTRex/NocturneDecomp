// Name: core_script.cpp_CScript_ScriptErrorStartNotepad_FUN_00559f80
// Address: 00559f80
// Address Range: [[00559f80, 0055a364]]
// Convention: unknown
// Signature: undefined4 core_script_cpp_CScript_ScriptErrorStartNotepad_FUN_00559f80(void)

#include "nocturne.h"

/* Signature: byte core_script.cpp_CScript_ScriptErrorStartNotepad(uint pScript,
   uint sFilename, uint param_3) */

uint core_script_cpp_CScript_ScriptErrorStartNotepad_FUN_00559f80(void)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  _FILE *p_Var4;
  long lVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  byte bVar12;
  int in_stack_00000004;
  char *in_stack_00000008;
  int in_stack_0000000c;
  uint in_stack_fffff870;
  uint in_stack_fffff874;
  char **in_stack_fffff878;
  CStrList_vtable *in_stack_fffff87c;
  uint in_stack_fffff880;
  char local_3e8 [512];
  char local_1e8 [260];
  char local_e4 [200];
  int local_1c;
  CStrList *local_18;
  int local_14;
  char *pcVar11;
  
  bVar12 = 0;
  local_18 = (CStrList *)(in_stack_00000004 + 0x38);
  do {
    core_script_cpp_CScript_FreeSomething1_FUN_00559870();
    iVar3 = engine_dosio_c_getFileSize_FUN_00481880("world",in_stack_00000008);
    if (iVar3 < 1) {
      return 1;
    }
    splitpath
              (in_stack_00000008,(char *)0x0,(char *)0x0,local_1e8,(char *)0x0);
    pcVar9 = ".txt";
    iVar8 = -1;
    pcVar11 = local_1e8;
    do {
      pcVar10 = pcVar11;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar10 = pcVar11 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar10;
    } while (cVar2 != '\0');
    pcVar10 = pcVar10 + -1;
    do {
      cVar2 = *pcVar9;
      *pcVar10 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar10[1] = cVar2;
      pcVar10 = pcVar10 + 2;
    } while (cVar2 != '\0');
    core_script_cpp_CScript_dbLoad_FUN_005603c0();
    p_Var4 = engine_dosio_c_getFile_FUN_00481a50("world",in_stack_00000008,"rt");
    if (p_Var4 == (_FILE *)0x0) {
      return 1;
    }
    lVar5 = _ftell(p_Var4);
    local_14 = 1;
    do {
      iVar8 = 0;
      while (lVar6 = _ftell(p_Var4), lVar6 < iVar3 + lVar5) {
        iVar7 = _fgetc(p_Var4);
        if (iVar7 == -1) goto LAB_0055a085;
        if (iVar7 != 0xd) {
          if (iVar7 == 10) goto LAB_0055a085;
          if (iVar7 == 0) {
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var4,"..\\core\\script.cpp",0x31b);
            iVar3 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0
                              ((CBitFont *)(in_stack_00000004 + 0x38));
            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                      (g_CEditorToolsPtr,"Probable non-text file %s detected near line %d.  Cannot use script.",in_stack_00000008,
                       iVar3 + 1);
            core_script_cpp_CScript_FreeSomething1_FUN_00559870();
            return 0;
          }
          local_3e8[iVar8] = (char)iVar7;
          iVar8 = iVar8 + 1;
        }
      }
      local_14 = 0;
LAB_0055a085:
      local_3e8[iVar8] = '\0';
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(local_18,local_3e8);
    } while (local_14 != 0);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var4,"..\\core\\script.cpp",0x32d);
    core_script_cpp_CScript_LoadingScriptFile_FUN_0055a370();
    iVar3 = 0;
    p_Var4 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                       ("script.txt",(char *)0x0,"wt","..\\core\\script.cpp",
                        0x336);
    if (0 < *(int *)(in_stack_00000004 + 0x30)) {
      iVar8 = 0;
      do {
        iVar7 = iVar8 + 4;
        puVar1 = (uint *)(iVar8 + *(int *)(in_stack_00000004 + 0x34));
        iVar8 = iVar8 + 8;
        iVar3 = iVar3 + 1;
        _fprintf(p_Var4,"%4d | %s\n",*puVar1,
                   *(uint *)(iVar7 + *(int *)(in_stack_00000004 + 0x34)));
      } while (iVar3 < *(int *)(in_stack_00000004 + 0x30));
    }
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var4,"..\\core\\script.cpp",0x33a);
    if (in_stack_0000000c != 0) {
LAB_0055a34a:
      core_script_cpp_FUN_0055a540();
      return 1;
    }
    iVar3 = core_script_cpp_CScript_StepThroughWholeScript_FUN_0055a4b0();
    shape_edittool_cpp_CPickList_clear_FUN_004a5770(&DAT_0310f4b0);
    if (iVar3 == 0) goto LAB_0055a34a;
    while( true ) {
      sprintf
                (&DAT_031089e8,"Syntax error on %s line %d:\n%s",in_stack_00000008,local_1c + 1,
                 iVar3);
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffff870);
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                ((CStrList *)&stack0xfffff870,"Try to load the script again.  (You can ALT-TAB and edit the script now.)");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                ((CStrList *)&stack0xfffff870,"Don't use the script, just keep going.");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                ((CStrList *)&stack0xfffff870,"Execute NOTEPAD on the script right now.");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff870,"Cancel");
      iVar8 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        ((CPickList *)&stack0xfffff870,&DAT_031089e8,-1,0);
      if (iVar8 == 0) break;
      if (iVar8 == 1) {
        core_script_cpp_CScript_FreeSomething1_FUN_00559870();
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  ((CPickList *)&stack0xfffff870,0,in_stack_fffff870,in_stack_fffff874,
                   (uint)in_stack_fffff878,(uint)in_stack_fffff87c,in_stack_fffff880);
        return 1;
      }
      if (iVar8 != 2) {
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  ((CPickList *)&stack0xfffff870,0,in_stack_fffff870,in_stack_fffff874,
                   (uint)in_stack_fffff878,(uint)in_stack_fffff87c,in_stack_fffff880);
        return 0;
      }
      shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                (g_CEditorToolsPtr,"Note: This only works in NT.\nWhen you are done editing the script, close notepad\nand ALT-TAB back to Nocturne.\nThen you can try to reload the script.");
      sprintf(local_e4,"start notepad world\\%s",in_stack_00000008);
      system(local_e4);
      engine_2d_c_clearInputAndWait_FUN_00403260();
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xfffff870,0,in_stack_fffff870,in_stack_fffff874,
                 (uint)in_stack_fffff878,(uint)in_stack_fffff87c,in_stack_fffff880);
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)&stack0xfffff870,0,in_stack_fffff870,in_stack_fffff874,
               (uint)in_stack_fffff878,(uint)in_stack_fffff87c,in_stack_fffff880);
  } while( true );
}
