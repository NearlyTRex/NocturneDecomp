// Name: engine_fileio.cpp_CFileManager_load_FUN_004b6c00
// Address: 004b6c00
// Address Range: [[004b6c00, 004b6e0c]]
// Convention: __cdecl
// Signature: void __cdecl engine_fileio_cpp_CFileManager_load_FUN_004b6c00(CFileManager *this_ptr)

#include "nocturne.h"

void __cdecl engine_fileio_cpp_CFileManager_load_FUN_004b6c00(CFileManager *this_ptr)

{
  char cVar1;
  _FILE *file;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char (*str2) [128];
  char *pcVar6;
  char (*pacVar7) [128];
  byte *pbVar8;
  char *str1;
  char (*pacVar9) [128];
  byte bVar10;
  byte local_224 [512];
  int local_24;
  int local_20;
  int local_1c;
  char (*local_18) [128];
  int local_14;
  
  bVar10 = 0;
  this_ptr->tracked_file_count = 0;
  file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                   ("level.lst",(char *)0x0,"rt","..\\engine\\fileio.cpp",
                    0x906);
  if (file == (_FILE *)0x0) {
    g_CurrentFilename = "..\\engine\\fileio.cpp";
    g_CurrentLineNumber = 0x907;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to open read level.lst");
  }
LAB_004b6c3c:
  iVar2 = _fscanf(file," %[^\n]\n",local_224);
  if (iVar2 != -1) {
    uVar5 = 0;
    do {
      uVar4 = 0xffffffff;
      pbVar8 = local_224;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pbVar8;
        pbVar8 = (byte *)((char *)pbVar8 + (uint)bVar10 * -2 + 1);
      } while (cVar1 != '\0');
      if (~uVar4 - 1 <= uVar5) goto LAB_004b6ca0;
      iVar3 = toupper((uint)local_224[uVar5]);
      local_224[uVar5] = (byte)iVar3;
      uVar5 = uVar5 + 1;
    } while( true );
  }
  goto LAB_004b6cb3;
LAB_004b6ca0:
  engine_fileio_cpp_CFileManager_registerFiles_FUN_004b5640(this_ptr,(char *)local_224);
LAB_004b6cb3:
  if (iVar2 == -1) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\engine\\fileio.cpp",0x914);
    local_20 = 0;
    local_18 = this_ptr->file_entries;
    local_24 = 0;
    do {
      if (this_ptr->tracked_file_count + -1 <= local_20) {
        return;
      }
      local_14 = local_20 + 1;
      if (local_14 < this_ptr->tracked_file_count) {
        local_1c = local_24;
        str2 = local_18 + local_14;
        do {
          str1 = *local_18 + local_1c;
          iVar2 = _stricmp(str1,*str2);
          pcVar6 = str1;
          pbVar8 = local_224;
          if (0 < iVar2) {
            do {
              cVar1 = *pcVar6;
              *pbVar8 = cVar1;
              pacVar7 = str2;
              if (cVar1 == '\0') break;
              cVar1 = pcVar6[1];
              ((char *)pbVar8)[1] = cVar1;
              pcVar6 = pcVar6 + 2;
              pbVar8 = (byte *)((char *)pbVar8 + 2);
            } while (cVar1 != '\0');
            do {
              cVar1 = (*pacVar7)[0];
              *str1 = cVar1;
              pbVar8 = local_224;
              pacVar9 = str2;
              if (cVar1 == '\0') break;
              cVar1 = (*pacVar7)[1];
              str1[1] = cVar1;
              str1 = str1 + 2;
              pbVar8 = local_224;
              pacVar7 = (char (*) [128])(*pacVar7 + 2);
            } while (cVar1 != '\0');
            do {
              cVar1 = *pbVar8;
              (*pacVar9)[0] = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = ((char *)pbVar8)[1];
              (*pacVar9)[1] = cVar1;
              pbVar8 = (byte *)((char *)pbVar8 + 2);
              pacVar9 = (char (*) [128])(*pacVar9 + 2);
            } while (cVar1 != '\0');
          }
          local_14 = local_14 + 1;
          str2 = str2 + 1;
        } while (local_14 < this_ptr->tracked_file_count);
      }
      local_20 = local_20 + 1;
      local_24 = local_24 + 0x80;
    } while( true );
  }
  goto LAB_004b6c3c;
}
