// Name: core_script.cpp_FUN_00529410
// Address: 00529410
// Address Range: [[00529410, 005295dc]]
// Convention: unknown
// Signature: undefined4 core_script_cpp_FUN_00529410(CScript *param_1,char *param_2)

#include "nocturne.h"

uint core_script_cpp_FUN_00529410(CScript *param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  _FILE *p_Var4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  byte bVar11;
  char local_318 [512];
  char local_118 [260];
  CStrList *local_14;
  char *pcVar10;
  
  bVar11 = 0;
  core_script_cpp_FUN_00528d50(param_1);
  iVar3 = engine_dosio_cpp_getFileSize_FUN_004657f0("world",param_2);
  if (0 < iVar3) {
    splitpath(param_2,(char *)0x0,(char *)0x0,local_118,(char *)0x0);
    pcVar8 = &DAT_005cde39;
    iVar6 = -1;
    pcVar10 = local_118;
    do {
      pcVar9 = pcVar10;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar9 = pcVar10 + (uint)bVar11 * -2 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar9;
    } while (cVar1 != '\0');
    pcVar9 = pcVar9 + -1;
    do {
      cVar1 = *pcVar8;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    core_script_cpp_CScript_dbLoad_FUN_00530610(param_1,local_118);
    p_Var4 = engine_dosio_cpp_FUN_004659c0("world",param_2,&DAT_005cde3e);
    if (p_Var4 != (_FILE *)0x0) {
      iVar6 = _ftell(p_Var4);
      local_14 = &param_1->script_text;
      bVar2 = true;
      do {
        iVar7 = 0;
        while( true ) {
          iVar5 = _ftell(p_Var4);
          if (iVar3 + iVar6 <= iVar5) break;
          iVar5 = _fgetc(p_Var4);
          if (iVar5 == -1) goto LAB_00529510;
          if (iVar5 != 0xd) {
            if (iVar5 == 10) goto LAB_00529510;
            if (iVar5 == 0) {
              _fclose(p_Var4);
              shape_edittool_cpp_FUN_00486af0(&param_1->script_text);
              shape_edittool_cpp_CEditorTools_showError_FUN_0047cf40
                        (g_CEditorToolsPtr,"Probable non-text file %s detected near line %d.  Cannot use script.");
              core_script_cpp_FUN_00528d50(param_1);
              return 0;
            }
            local_318[iVar7] = (char)iVar5;
            iVar7 = iVar7 + 1;
          }
        }
        bVar2 = false;
LAB_00529510:
        local_318[iVar7] = '\0';
        shape_edittool_cpp_CStrList_add_FUN_00482070(local_14,local_318);
        if (!bVar2) {
          _fclose(p_Var4);
          core_script_cpp_CScript_buildParsedLines_FUN_005295e0(param_1);
          core_script_cpp_CScript_initRuntime_FUN_005297a0(param_1);
          return 1;
        }
      } while( true );
    }
  }
  return 1;
}
