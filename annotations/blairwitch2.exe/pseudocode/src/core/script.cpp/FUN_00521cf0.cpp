// Name: core_script.cpp_FUN_00521cf0
// Address: 00521cf0
// Address Range: [[00521cf0, 00521ebc]]
// Convention: unknown
// Signature: undefined4 core_script_cpp_FUN_00521cf0(CScript *param_1,char *param_2)

#include "nocturne.h"

uint core_script_cpp_FUN_00521cf0(CScript *param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  _FILE *file_handle;
  long lVar4;
  long lVar5;
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
  core_script_cpp_FUN_00521630(param_1);
  iVar3 = engine_dosio_cpp_getFileSize_FUN_00460aa0("world",param_2);
  if (0 < iVar3) {
    splitpath(param_2,(char *)0x0,(char *)0x0,local_118,(char *)0x0);
    pcVar8 = &DAT_005e2ed4;
    iVar7 = -1;
    pcVar10 = local_118;
    do {
      pcVar9 = pcVar10;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
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
    core_script_cpp_CScript_dbLoad_FUN_00529c10(param_1,local_118);
    file_handle = engine_dosio_cpp_FUN_00460c70("world",param_2,&DAT_005e2ed9);
    if (file_handle != (_FILE *)0x0) {
      lVar4 = _ftell(file_handle);
      local_14 = &param_1->script_text;
      bVar2 = true;
      do {
        iVar7 = 0;
        while( true ) {
          lVar5 = _ftell(file_handle);
          if (iVar3 + lVar4 <= lVar5) break;
          iVar6 = _fgetc(file_handle);
          if (iVar6 == -1) goto LAB_00521df0;
          if (iVar6 != 0xd) {
            if (iVar6 == 10) goto LAB_00521df0;
            if (iVar6 == 0) {
              _fclose(file_handle);
              shape_edittool_cpp_FUN_004858f0(&param_1->script_text);
              shape_edittool_cpp_CEditorTools_showError_FUN_0047be40
                        (g_CEditorToolsPtr,"Probable non-text file %s detected near line %d.  Cannot use script.");
              core_script_cpp_FUN_00521630(param_1);
              return 0;
            }
            local_318[iVar7] = (char)iVar6;
            iVar7 = iVar7 + 1;
          }
        }
        bVar2 = false;
LAB_00521df0:
        local_318[iVar7] = '\0';
        shape_edittool_cpp_CStrList_add_FUN_00480e70(local_14,local_318);
        if (!bVar2) {
          _fclose(file_handle);
          core_script_cpp_CScript_buildParsedLines_FUN_00521ec0(param_1);
          core_script_cpp_CScript_initRuntime_FUN_00522080(param_1);
          return 1;
        }
      } while( true );
    }
  }
  return 1;
}
