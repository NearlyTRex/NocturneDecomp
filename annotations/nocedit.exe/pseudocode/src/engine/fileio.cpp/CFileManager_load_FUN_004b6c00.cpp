// Name: engine_fileio.cpp_CFileManager_load_FUN_004b6c00
// Address: 004b6c00
// Address Range: [[004b6c00, 004b6e0c]]
// Convention: __cdecl
// Signature: void engine_fileio.cpp_CFileManager_load_FUN_004b6c00(CFileManager * this_ptr)

#include "nocturne.h"

void __cdecl engine_fileio_cpp_CFileManager_load_FUN_004b6c00(CFileManager *this_ptr)

{
  char cVar1;
  FILE *file;
  int iVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBX;
  uint uVar5;
  char (*str2) [128];
  BADSPACEBASE *in_ESP;
  char *pcVar6;
  char (*pacVar7) [128];
  char *pcVar8;
  char *pcVar9;
  char *str1;
  byte bVar10;
  CFileManager *in_stack_00000010;
  int in_stack_00000014;
  uint uStack_218;
  byte auStack_214 [508];
  int local_18;
  int local_14;
  
  bVar10 = 0;
  this_ptr->tracked_file_count = 0;
  file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                   ("level.lst",(char *)0x0,"rt","..\\engine\\fileio.cpp",
                    0x906);
  if (file == (FILE *)0x0) {
    g_CurrentFilename = "..\\engine\\fileio.cpp";
    g_CurrentLineNumber = 0x907;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to open read level.lst");
  }
LAB_004b6c3c:
  iVar2 = crt_stdio_c_fscanf_FUN_005fe7c0(file," %[^\n]\n",&stack0xfffffde4);
  if (iVar2 != -1) {
    uVar5 = 0;
    do {
      uVar4 = 0xffffffff;
      pcVar6 = (char *)&uStack_218;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + (uint)bVar10 * -2 + 1;
      } while (cVar1 != '\0');
      if (~uVar4 - 1 <= uVar5) goto LAB_004b6ca0;
      iVar3 = crt_ctype_c_toupper_FUN_005ff9e0((uint)(byte)auStack_214[uVar5 - 4]);
      auStack_214[uVar5] = (char)iVar3;
      uVar5 = uVar5 + 1;
    } while( true );
  }
  goto LAB_004b6cb3;
LAB_004b6ca0:
  engine_fileio_cpp_CFileManager_registerFiles_FUN_004b5640(in_stack_00000010,(char *)&uStack_218);
LAB_004b6cb3:
  if (iVar2 == -1) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\engine\\fileio.cpp",0x914);
    local_14 = 0;
    local_18 = 0;
    do {
      iVar2 = local_18;
      if (in_stack_00000010->tracked_file_count + -1 <= local_14) {
        return;
      }
      if (local_14 + 1 < in_stack_00000010->tracked_file_count) {
        str2 = in_stack_00000010->file_entries + local_14 + 1;
        do {
          str1 = in_stack_00000010->file_entries[0] + iVar2;
          iVar3 = crt_string_c_stricmp_FUN_005fe7f0(str1,*str2);
          pcVar9 = (char *)&uStack_218;
          pcVar8 = (char *)&uStack_218;
          pcVar6 = str1;
          if (0 < iVar3) {
            do {
              cVar1 = *pcVar6;
              *pcVar9 = cVar1;
              pacVar7 = str2;
              if (cVar1 == '\0') break;
              cVar1 = pcVar6[1];
              pcVar9[1] = cVar1;
              pcVar9 = pcVar9 + 2;
              pcVar6 = pcVar6 + 2;
            } while (cVar1 != '\0');
            do {
              cVar1 = (*pacVar7)[0];
              *str1 = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = (*pacVar7)[1];
              str1[1] = cVar1;
              str1 = str1 + 2;
              pacVar7 = (char (*) [128])(*pacVar7 + 2);
            } while (cVar1 != '\0');
            uStack_218 = str2;
            pacVar7 = str2;
            do {
              cVar1 = *pcVar8;
              (*pacVar7)[0] = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar8[1];
              pcVar8 = pcVar8 + 2;
              (*pacVar7)[1] = cVar1;
              pacVar7 = (char (*) [128])(*pacVar7 + 2);
            } while (cVar1 != '\0');
          }
          unaff_EBX = unaff_EBX + 1;
          str2 = str2 + 1;
        } while (unaff_EBX < *(int *)(in_stack_00000014 + 4));
      }
      local_14 = local_14 + 1;
      local_18 = local_18 + 0x80;
    } while( true );
  }
  goto LAB_004b6c3c;
}
