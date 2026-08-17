// Name: support_newmsg.cpp_FUN_004edfc0
// Address: 004edfc0
// Address Range: [[004edfc0, 004ee2e2]]
// Convention: unknown
// Signature: int support_newmsg_cpp_FUN_004edfc0(char *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int support_newmsg_cpp_FUN_004edfc0(char *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  _FILE *file_handle;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  char local_31c [256];
  char local_21c [256];
  char local_11c [256];
  int local_1c;
  int local_18;
  int local_14;
  
  local_1c = 0;
  iVar3 = engine_dosio_cpp_getFileSize_FUN_004568c0(&CHAR_00h_0058c922,param_1);
  iVar5 = iVar3;
  if (0 < iVar3) {
    file_handle = engine_dosio_cpp_getFile_FUN_00456a60(&CHAR_00h_0058c926,param_1,"rt");
    iVar5 = 0;
    if (file_handle != (_FILE *)0x0) {
      lVar4 = _ftell(file_handle);
      local_18 = iVar3 + lVar4;
      _fgets(local_31c,0xff,file_handle);
      _fscanf(file_handle,"%d\n",&local_1c);
      _fgets(local_31c,0xff,file_handle);
      _fscanf(file_handle,"%d\n",&DAT_01d16810);
      if (local_1c != 0) {
        g_CurrentFilename = "..\\support\\newmsg.cpp";
        g_CurrentLineNumber = 82;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unknown message file version");
      }
      _fgets(local_31c,0xff,file_handle);
      _fscanf(file_handle,"\"%[^\"]\"\n",&DAT_005bdf50);
      do {
        _fscanf(file_handle," ");
        lVar4 = _ftell(file_handle);
        if (local_18 <= lVar4) {
          _fclose(file_handle);
          if (0 < _DAT_01d16818) {
            iVar8 = 0x1d177c0;
            iVar3 = 0x1d271c0;
            iVar7 = _DAT_01d16818 * 4;
            iVar5 = 0;
            do {
              *(int *)(iVar5 + 0x1d1681c) = iVar8;
              *(int *)(iVar5 + 0x1d16fec) = iVar3;
              iVar5 = iVar5 + 4;
              iVar3 = iVar3 + 0x100;
              iVar8 = iVar8 + 0x80;
            } while (iVar5 < iVar7);
          }
          local_14 = 0;
          for (iVar5 = 0; iVar3 = local_14, iVar5 < _DAT_01d16818 + -1; iVar5 = iVar5 + 1) {
            iVar7 = iVar5 + 1;
            if (iVar7 < _DAT_01d16818) {
              iVar8 = iVar7 * 4;
              do {
                iVar6 = _strcmp
                                  (*(char **)(iVar3 + 0x1d1681c),*(char **)(iVar8 + 0x1d1681c));
                if (0 < iVar6) {
                  uVar2 = *(uint *)(iVar3 + 0x1d1681c);
                  *(uint *)(iVar3 + 0x1d1681c) = *(uint *)(iVar8 + 0x1d1681c);
                  *(uint *)(iVar8 + 0x1d1681c) = uVar2;
                  uVar2 = *(uint *)(iVar3 + 0x1d16fec);
                  *(uint *)(iVar3 + 0x1d16fec) = *(uint *)(iVar8 + 0x1d16fec);
                  *(uint *)(iVar8 + 0x1d16fec) = uVar2;
                }
                iVar7 = iVar7 + 1;
                iVar8 = iVar8 + 4;
              } while (iVar7 < _DAT_01d16818);
            }
            local_14 = local_14 + 4;
          }
          _DAT_01d16814 = 1;
          return _DAT_01d16818 + -1;
        }
        iVar5 = _fscanf(file_handle,"\"%[^\"]\", \"%[^\"]\"\n",local_21c,local_11c);
        if (iVar5 != 2) {
          g_CurrentFilename = "..\\support\\newmsg.cpp";
          g_CurrentLineNumber = 99;
          core_main_c_displayErrorAndQuit_FUN_004c8440("Error reading %s",param_1);
        }
        if (499 < _DAT_01d16818) {
          g_CurrentFilename = "..\\support\\newmsg.cpp";
          g_CurrentLineNumber = 104;
          core_main_c_displayErrorAndQuit_FUN_004c8440("Too many messages in %s",param_1);
        }
        pcVar9 = local_21c;
        pcVar10 = (char *)(_DAT_01d16818 * 0x80 + 0x1d177c0);
        do {
          cVar1 = *pcVar9;
          *pcVar10 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar9[1];
          pcVar9 = pcVar9 + 2;
          pcVar10[1] = cVar1;
          pcVar10 = pcVar10 + 2;
        } while (cVar1 != '\0');
        pcVar9 = local_11c;
        pcVar10 = (char *)(_DAT_01d16818 * 0x100 + 0x1d271c0);
        do {
          cVar1 = *pcVar9;
          *pcVar10 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar9[1];
          pcVar9 = pcVar9 + 2;
          pcVar10[1] = cVar1;
          pcVar10 = pcVar10 + 2;
        } while (cVar1 != '\0');
        _DAT_01d16818 = _DAT_01d16818 + 1;
      } while( true );
    }
  }
  return iVar5;
}
