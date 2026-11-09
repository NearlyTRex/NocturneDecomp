// Name: core_script.cpp_FUN_00543e00
// Address: 00543e00
// Address Range: [[00543e00, 00543fcc]]
// Convention: unknown
// Signature: undefined4 core_script_cpp_FUN_00543e00(CScript *param_1,char *param_2)

#include "nocturne.h"

uint core_script_cpp_FUN_00543e00(CScript *param_1,char *param_2)

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
  core_script_cpp_FUN_00543740(param_1);
  iVar3 = engine_dosio_cpp_getFileSize_FUN_00478fb0("world",param_2);
  if (0 < iVar3) {
    splitpath(param_2,(char *)0x0,(char *)0x0,local_118,(char *)0x0);
    pcVar8 = &DAT_005ee1d8;
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
    core_script_cpp_CScript_dbLoad_FUN_0054af20(param_1,local_118);
    p_Var4 = engine_dosio_cpp_FUN_00479180("world",param_2,&DAT_005ee1dd);
    if (p_Var4 != (_FILE *)0x0) {
      iVar6 = _ftell(p_Var4);
      local_14 = (CStrList *)&param_1->field_0x34;
      bVar2 = true;
      do {
        iVar7 = 0;
        while( true ) {
          iVar5 = _ftell(p_Var4);
          if (iVar3 + iVar6 <= iVar5) break;
          iVar5 = _fgetc(p_Var4);
          if (iVar5 == -1) goto LAB_00543f00;
          if (iVar5 != 0xd) {
            if (iVar5 == 10) goto LAB_00543f00;
            if (iVar5 == 0) {
              _fclose(p_Var4);
              iVar3 = shape_edittool_cpp_FUN_0049df50((CStrList *)&param_1->field_0x34);
              shape_edittool_cpp_FUN_004943a0
                        (g_CEditorToolsPtr,"Probable non-text file %s detected near line %d.  Cannot use script.",param_2,iVar3 + 1);
              core_script_cpp_FUN_00543740(param_1);
              return 0;
            }
            local_318[iVar7] = (char)iVar5;
            iVar7 = iVar7 + 1;
          }
        }
        bVar2 = false;
LAB_00543f00:
        local_318[iVar7] = '\0';
        shape_edittool_cpp_CStrList_add_FUN_004994d0(local_14,local_318);
        if (!bVar2) {
          _fclose(p_Var4);
          core_script_cpp_FUN_00543fd0(param_1);
          core_script_cpp_FUN_00544190(param_1);
          return 1;
        }
      } while( true );
    }
  }
  return 1;
}
