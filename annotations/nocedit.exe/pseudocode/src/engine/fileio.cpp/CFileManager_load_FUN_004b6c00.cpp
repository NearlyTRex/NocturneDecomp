// Name: engine_fileio.cpp_CFileManager_load_FUN_004b6c00
// Address: 004b6c00
// Address Range: [[004b6c00, 004b6e0c]]
// Convention: __cdecl
// Signature: void __cdecl engine_fileio_cpp_CFileManager_load_FUN_004b6c00(CFileManager *this_ptr)

#include "nocturne.h"

void __cdecl engine_fileio_cpp_CFileManager_load_FUN_004b6c00(CFileManager *this_ptr)

{
  char cVar2;
  byte bVar3;
  _FILE *file;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar4;
  uint uVar5;
  char (*str2) [128];
  char *pcVar6;
  char (*pacVar7) [128];
  byte *pbVar8;
  byte *pbVar5;
  char *str1;
  char (*pacVar9) [128];
  byte bVar10;
  byte local_224 [512];
  int local_24;
  int local_20;
  int local_1c;
  char (*local_18) [128];
  int local_14;
  char cVar1;
  
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
      pbVar5 = local_224;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pbVar5;
        pbVar5 = (byte *)((char *)pbVar5 + (uint)bVar10 * -2 + 1);
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
    local_24 = 0;
    do {
      if (this_ptr->tracked_file_count + -1 <= local_20) {
        return;
      }
      local_14 = local_20 + 1;
      if (local_14 < this_ptr->tracked_file_count) {
        str2 = this_ptr->file_entries + local_20 + 1;
        do {
          str1 = this_ptr->file_entries[0] + local_24;
          iVar4 = _stricmp(str1,*str2);
          pcVar6 = str1;
          pbVar5 = local_224;
          if (0 < iVar4) {
            do {
              cVar2 = *pcVar6;
              *pbVar5 = cVar2;
              pacVar7 = str2;
              if (cVar2 == '\0') break;
              cVar2 = pcVar6[1];
              ((char *)pbVar5)[1] = cVar2;
              pcVar6 = pcVar6 + 2;
              pbVar5 = (byte *)((char *)pbVar5 + 2);
            } while (cVar2 != '\0');
            do {
              cVar2 = (*pacVar7)[0];
              *str1 = cVar2;
              pbVar8 = local_224;
              pacVar9 = str2;
              if (cVar2 == '\0') break;
              cVar2 = (*pacVar7)[1];
              pacVar7 = (char (*) [128])(*pacVar7 + 2);
              str1[1] = cVar2;
              str1 = str1 + 2;
              pbVar8 = local_224;
            } while (cVar2 != '\0');
            do {
              bVar3 = *pbVar8;
              (*pacVar9)[0] = bVar3;
              if (bVar3 == 0) break;
              bVar3 = pbVar8[1];
              (*pacVar9)[1] = bVar3;
              pacVar9 = (char (*) [128])(*pacVar9 + 2);
              pbVar8 = pbVar8 + 2;
            } while (bVar3 != 0);
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
