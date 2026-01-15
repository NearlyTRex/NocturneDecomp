// Name: support_newmsg.cpp_readMessageFile_FUN_00543e40
// Address: 00543e40
// Address Range: [[00543e40, 00544162]]
// Convention: __cdecl
// Signature: void support_newmsg.cpp_readMessageFile_FUN_00543e40(char * message_file)

#include "nocturne.h"

void __cdecl support_newmsg_cpp_readMessageFile_FUN_00543e40(char *message_file)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  FILE *file_handle;
  long lVar4;
  int iVar5;
  char (*pacVar6) [256];
  int iVar7;
  int iVar8;
  char (*pacVar9) [128];
  char *pcVar10;
  int iVar11;
  char *pcVar12;
  char local_31c [256];
  char local_21c [256];
  char local_11c [256];
  int local_1c;
  int local_18;
  int local_14;
  
  local_1c = 0;
  iVar3 = engine_dosio_c_getFileSize_FUN_00481880(&s_empty_0063e145,message_file);
  if ((iVar3 < 1) ||
     (file_handle = engine_dosio_c_getFile_FUN_00481a50
                              (&s_empty_0063e149,message_file,"rt"),
     file_handle == (FILE *)0x0)) {
    return;
  }
  lVar4 = crt_stdio_c_ftell_FUN_00601560(file_handle);
  local_18 = iVar3 + lVar4;
  crt_stdio_c_fgets_FUN_005fefd0(local_31c,0xff,file_handle);
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d\n",&local_1c);
  crt_stdio_c_fgets_FUN_005fefd0(local_31c,0xff,file_handle);
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d\n",&g_MessageCount);
  if (local_1c != 0) {
    g_CurrentFilename = "..\\support\\newmsg.cpp";
    g_CurrentLineNumber = 0x54;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Unknown message file version");
  }
  crt_stdio_c_fgets_FUN_005fefd0(local_31c,0xff,file_handle);
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"\"%[^\"]\"\n",g_OSFontName);
  do {
    crt_stdio_c_fscanf_FUN_005fe7c0(file_handle," ");
    lVar4 = crt_stdio_c_ftell_FUN_00601560(file_handle);
    if (local_18 <= lVar4) {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\support\\newmsg.cpp",0x72);
      if (0 < g_LocalizedStringCount) {
        pacVar9 = g_MessageKeyStorage;
        pacVar6 = g_MessageTextStorage;
        iVar7 = g_LocalizedStringCount * 4;
        iVar3 = 0;
        do {
          *(char (**) [128])((int)g_MessageKeys + iVar3) = pacVar9;
          *(char (**) [256])((int)g_MessageTexts + iVar3) = pacVar6;
          iVar3 = iVar3 + 4;
          pacVar6 = pacVar6 + 1;
          pacVar9 = pacVar9 + 1;
        } while (iVar3 < iVar7);
      }
      local_14 = 0;
      for (iVar3 = 0; iVar7 = local_14, iVar3 < g_LocalizedStringCount + -1; iVar3 = iVar3 + 1) {
        iVar11 = iVar3 + 1;
        if (iVar11 < g_LocalizedStringCount) {
          iVar8 = iVar11 * 4;
          do {
            iVar5 = crt_string_c_strcmp_FUN_005fef20
                              (*(char **)((int)g_MessageKeys + iVar7),
                               *(char **)((int)g_MessageKeys + iVar8));
            if (0 < iVar5) {
              uVar2 = *(uint *)((int)g_MessageKeys + iVar7);
              *(uint *)((int)g_MessageKeys + iVar7) =
                   *(uint *)((int)g_MessageKeys + iVar8);
              *(uint *)((int)g_MessageKeys + iVar8) = uVar2;
              uVar2 = *(uint *)((int)g_MessageTexts + iVar7);
              *(uint *)((int)g_MessageTexts + iVar7) =
                   *(uint *)((int)g_MessageTexts + iVar8);
              *(uint *)((int)g_MessageTexts + iVar8) = uVar2;
            }
            iVar11 = iVar11 + 1;
            iVar8 = iVar8 + 4;
          } while (iVar11 < g_LocalizedStringCount);
        }
        local_14 = local_14 + 4;
      }
      g_LocalizationLoaded = 1;
      return;
    }
    iVar3 = crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"\"%[^\"]\", \"%[^\"]\"\n",local_21c,local_11c);
    if (iVar3 != 2) {
      g_CurrentFilename = "..\\support\\newmsg.cpp";
      g_CurrentLineNumber = 0x65;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Error reading %s",message_file);
    }
    if (499 < g_LocalizedStringCount) {
      g_CurrentFilename = "..\\support\\newmsg.cpp";
      g_CurrentLineNumber = 0x6a;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Too many messages in %s",message_file);
    }
    pcVar10 = local_21c;
    pcVar12 = g_MessageKeyStorage[g_LocalizedStringCount];
    do {
      cVar1 = *pcVar10;
      *pcVar12 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar12[1] = cVar1;
      pcVar12 = pcVar12 + 2;
    } while (cVar1 != '\0');
    pcVar10 = local_11c;
    pcVar12 = g_MessageTextStorage[g_LocalizedStringCount];
    do {
      cVar1 = *pcVar10;
      *pcVar12 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar12[1] = cVar1;
      pcVar12 = pcVar12 + 2;
    } while (cVar1 != '\0');
    g_LocalizedStringCount = g_LocalizedStringCount + 1;
  } while( true );
}
