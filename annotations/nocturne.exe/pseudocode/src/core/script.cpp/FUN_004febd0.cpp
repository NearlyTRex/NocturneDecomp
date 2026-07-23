// Name: FUN_004febd0
// Address: 004febd0
// Address Range: [[004febd0, 004fee22]]
// Convention: unknown
// Signature: undefined4 FUN_004febd0(int param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004febd0(int param_1,uint param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  byte bVar11;
  byte local_31c [512];
  char local_11c [260];
  int local_18;
  int local_14;
  char *pcVar10;
  
  bVar11 = 0;
  local_14 = param_1 + 0x30;
  do {
    FUN_004fe500(param_1);
    iVar3 = engine_dosio_cpp_getFileSize_FUN_004568c0("world",param_2);
    if (iVar3 < 1) {
      return 1;
    }
    splitpath(param_2,0,0,local_11c,0);
    pcVar8 = ".txt";
    iVar6 = -1;
    pcVar10 = local_11c;
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
    core_script_cpp_CScript_dbLoad_FUN_00504e70(param_1,local_11c);
    iVar6 = engine_dosio_cpp_getFile_FUN_00456a60("world",param_2,"rt");
    if (iVar6 == 0) {
      return 1;
    }
    bVar2 = true;
    iVar4 = _ftell(iVar6);
    do {
      iVar7 = 0;
      while (iVar5 = _ftell(iVar6), iVar5 < iVar3 + iVar4) {
        iVar5 = _fgetc(iVar6);
        if (iVar5 == -1) goto LAB_004fecd4;
        if (iVar5 != 0xd) {
          if (iVar5 == 10) goto LAB_004fecd4;
          if (iVar5 == 0) {
            _fclose(iVar6);
            iVar3 = shape_edittool_cpp_CStrList_getItemCount_FUN_00477660(param_1 + 0x30);
            FUN_0046fcd0(0x01BCD074,"Probable non-text file %s detected near line %d.  Cannot use script.",param_2,iVar3 + 1)
            ;
            FUN_004fe500(param_1);
            return 0;
          }
          local_31c[iVar7] = (char)iVar5;
          iVar7 = iVar7 + 1;
        }
      }
      bVar2 = false;
LAB_004fecd4:
      local_31c[iVar7] = 0;
      shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_14,local_31c);
    } while (bVar2);
    _fclose(iVar6);
    FUN_004fee30(param_1);
    if (param_3 != 0) {
LAB_004fee03:
      FUN_004feff0(param_1);
      return 1;
    }
    iVar3 = FUN_004fef60(param_1,&local_18);
    FUN_00476160(0x1e56c30);
    if (iVar3 == 0) goto LAB_004fee03;
    _DAT_01cc4800 = "..\\core\\script.cpp";
    _DAT_01cc4804 = 0x372;
    FUN_004c8440("%s failed syntax check on line %d: %s",param_2,local_18 + 1,iVar3);
  } while( true );
}
