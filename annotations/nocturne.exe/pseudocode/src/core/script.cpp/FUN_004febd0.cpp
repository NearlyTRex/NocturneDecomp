// Name: core_script.cpp_FUN_004febd0
// Address: 004febd0
// Address Range: [[004febd0, 004fee22]]
// Convention: unknown
// Signature: undefined4 core_script_cpp_FUN_004febd0(CScript *param_1,char *param_2,int param_3)

#include "nocturne.h"

uint core_script_cpp_FUN_004febd0(CScript *param_1,char *param_2,int param_3)

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
  char local_31c [512];
  char local_11c [260];
  int local_18;
  CStrList *local_14;
  char *pcVar10;
  
  bVar11 = 0;
  local_14 = (CStrList *)&param_1->parsed_line_count;
  do {
    core_script_cpp_FUN_004fe500(param_1);
    iVar3 = engine_dosio_cpp_getFileSize_FUN_004568c0("world",param_2);
    if (iVar3 < 1) {
      return 1;
    }
    splitpath(param_2,(char *)0x0,(char *)0x0,local_11c,(char *)0x0);
    pcVar8 = ".txt";
    iVar7 = -1;
    pcVar10 = local_11c;
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
    core_script_cpp_CScript_dbLoad_FUN_00504e70(param_1,local_11c);
    file_handle = engine_dosio_cpp_getFile_FUN_00456a60("world",param_2,"rt");
    if (file_handle == (_FILE *)0x0) {
      return 1;
    }
    bVar2 = true;
    lVar4 = _ftell(file_handle);
    do {
      iVar7 = 0;
      while (lVar5 = _ftell(file_handle), lVar5 < iVar3 + lVar4) {
        iVar6 = _fgetc(file_handle);
        if (iVar6 == -1) goto LAB_004fecd4;
        if (iVar6 != 0xd) {
          if (iVar6 == 10) goto LAB_004fecd4;
          if (iVar6 == 0) {
            _fclose(file_handle);
            iVar3 = shape_edittool_cpp_CStrList_getItemCount_FUN_00477660
                              ((CStrList *)&param_1->parsed_line_count);
            shape_edittool_cpp_FUN_0046fcd0
                      (0x01BCD074,"Probable non-text file %s detected near line %d.  Cannot use script.",param_2,iVar3 + 1);
            core_script_cpp_FUN_004fe500(param_1);
            return 0;
          }
          local_31c[iVar7] = (char)iVar6;
          iVar7 = iVar7 + 1;
        }
      }
      bVar2 = false;
LAB_004fecd4:
      local_31c[iVar7] = '\0';
      shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_14,local_31c);
    } while (bVar2);
    _fclose(file_handle);
    core_script_cpp_FUN_004fee30(param_1);
    if (param_3 != 0) {
LAB_004fee03:
      core_script_cpp_FUN_004feff0(param_1);
      return 1;
    }
    iVar3 = core_script_cpp_FUN_004fef60(param_1,&local_18);
    shape_edittool_cpp_FUN_00476160(0x1e56c30);
    if (iVar3 == 0) goto LAB_004fee03;
    PTR_01cc4800 = "..\\core\\script.cpp";
    INT_01cc4804 = 0x372;
    core_main_c_FUN_004c8440("%s failed syntax check on line %d: %s",param_2,local_18 + 1,iVar3);
  } while( true );
}
