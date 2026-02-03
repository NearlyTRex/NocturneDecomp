// Name: core_script.cpp_CScript_FUN_00559f80
// Address: 00559f80
// Address Range: [[00559f80, 0055a364]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_CScript_FUN_00559f80(CScript *this_ptr,char *param_2,int param_3)

#include "nocturne.h"

int __cdecl core_script_cpp_CScript_FUN_00559f80(CScript *this_ptr,char *param_2,int param_3)

{
  uint *puVar1;
  uint *puVar2;
  char cVar3;
  int iVar4;
  _FILE *p_Var5;
  long lVar6;
  long lVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  char *pcVar12;
  byte bVar14;
  CPickList local_790;
  char local_3e8 [512];
  char local_1e8 [260];
  char local_e4 [200];
  int local_1c;
  CStrList *local_18;
  int local_14;
  char *pcVar13;
  
  bVar14 = 0;
  local_18 = &this_ptr->script_text;
  do {
    core_script_cpp_CScript_FUN_00559870(this_ptr);
    iVar4 = engine_dosio_c_getFileSize_FUN_00481880("world",param_2);
    if (iVar4 < 1) {
      return 1;
    }
    splitpath(param_2,(char *)0x0,(char *)0x0,local_1e8,(char *)0x0);
    pcVar11 = ".txt";
    iVar10 = -1;
    pcVar13 = local_1e8;
    do {
      pcVar12 = pcVar13;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar12 = pcVar13 + (uint)bVar14 * -2 + 1;
      cVar3 = *pcVar13;
      pcVar13 = pcVar12;
    } while (cVar3 != '\0');
    pcVar12 = pcVar12 + -1;
    do {
      cVar3 = *pcVar11;
      *pcVar12 = cVar3;
      if (cVar3 == '\0') break;
      cVar3 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar12[1] = cVar3;
      pcVar12 = pcVar12 + 2;
    } while (cVar3 != '\0');
    core_script_cpp_CScript_dbLoad_FUN_005603c0(this_ptr,local_1e8);
    p_Var5 = engine_dosio_c_getFile_FUN_00481a50("world",param_2,"rt");
    if (p_Var5 == (_FILE *)0x0) {
      return 1;
    }
    lVar6 = _ftell(p_Var5);
    local_14 = 1;
    do {
      iVar10 = 0;
      while (lVar7 = _ftell(p_Var5), lVar7 < iVar4 + lVar6) {
        iVar9 = _fgetc(p_Var5);
        if (iVar9 == -1) goto LAB_0055a085;
        if (iVar9 != 0xd) {
          if (iVar9 == 10) goto LAB_0055a085;
          if (iVar9 == 0) {
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var5,"..\\core\\script.cpp",0x31b);
            iVar4 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(&this_ptr->script_text);
            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                      (g_CEditorToolsPtr,"Probable non-text file %s detected near line %d.  Cannot use script.",param_2,iVar4 + 1);
            core_script_cpp_CScript_FUN_00559870(this_ptr);
            return 0;
          }
          local_3e8[iVar10] = (char)iVar9;
          iVar10 = iVar10 + 1;
        }
      }
      local_14 = 0;
LAB_0055a085:
      local_3e8[iVar10] = '\0';
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(local_18,local_3e8);
    } while (local_14 != 0);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var5,"..\\core\\script.cpp",0x32d);
    core_script_cpp_CScript_FUN_0055a370(this_ptr);
    iVar4 = 0;
    p_Var5 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                       ("script.txt",(char *)0x0,"wt","..\\core\\script.cpp",
                        0x336);
    if (0 < this_ptr->parsed_line_count) {
      iVar10 = 0;
      do {
        puVar2 = (uint *)((int)&this_ptr->parsed_lines->text + iVar10);
        puVar1 = (uint *)((int)&this_ptr->parsed_lines->line_number + iVar10);
        iVar10 = iVar10 + 8;
        iVar4 = iVar4 + 1;
        _fprintf(p_Var5,"%4d | %s\n",*puVar1,*puVar2);
      } while (iVar4 < this_ptr->parsed_line_count);
    }
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var5,"..\\core\\script.cpp",0x33a);
    if (param_3 != 0) {
LAB_0055a34a:
      core_script_cpp_CScript_FUN_0055a540(this_ptr);
      return 1;
    }
    piVar8 = core_script_cpp_CScript_FUN_0055a4b0(this_ptr,&local_1c);
    shape_edittool_cpp_CPickList_clear_FUN_004a5770(&g_ScriptPickList);
    if (piVar8 == (int *)0x0) goto LAB_0055a34a;
    while( true ) {
      sprintf
                (&DAT_031089e8,"Syntax error on %s line %d:\n%s",param_2,local_1c + 1,piVar8);
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_790);
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                (&local_790.base,"Try to load the script again.  (You can ALT-TAB and edit the script now.)");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                (&local_790.base,"Don't use the script, just keep going.");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                (&local_790.base,"Execute NOTEPAD on the script right now.");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_790.base,"Cancel");
      iVar4 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        (&local_790,&DAT_031089e8,-1,0);
      if (iVar4 == 0) break;
      if (iVar4 == 1) {
        core_script_cpp_CScript_FUN_00559870(this_ptr);
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_790,0);
        return 1;
      }
      if (iVar4 != 2) {
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_790,0);
        return 0;
      }
      shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                (g_CEditorToolsPtr,"Note: This only works in NT.\nWhen you are done editing the script, close notepad\nand ALT-TAB back to Nocturne.\nThen you can try to reload the script.");
      sprintf(local_e4,"start notepad world\\%s",param_2);
      system(local_e4);
      engine_2d_c_clearInputAndWait_FUN_00403260();
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_790,0);
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_790,0);
  } while( true );
}
