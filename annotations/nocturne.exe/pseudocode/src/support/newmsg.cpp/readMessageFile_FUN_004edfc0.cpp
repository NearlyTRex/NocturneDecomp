// Name: support_newmsg.cpp_readMessageFile_FUN_004edfc0
// Address: 004edfc0
// Address Range: [[004edfc0, 004ee2e2]]
// Convention: __cdecl
// Signature: int __cdecl support_newmsg_cpp_readMessageFile_FUN_004edfc0(char *message_file)

#include "nocturne.h"

int __cdecl support_newmsg_cpp_readMessageFile_FUN_004edfc0(char *message_file)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  _FILE *file_handle;
  long lVar4;
  int iVar5;
  int iVar6;
  char (*pacVar7) [256];
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
  iVar3 = engine_dosio_cpp_getFileSize_FUN_004568c0(&CHAR_00h_0058c922,message_file);
  iVar5 = iVar3;
  if (0 < iVar3) {
    file_handle = engine_dosio_cpp_getFile_FUN_00456a60
                            (&CHAR_00h_0058c926,message_file,"rt");
    iVar5 = 0;
    if (file_handle != (_FILE *)0x0) {
      lVar4 = _ftell(file_handle);
      local_18 = iVar3 + lVar4;
      _fgets(local_31c,0xff,file_handle);
      _fscanf(file_handle,"%d\n",&local_1c);
      _fgets(local_31c,0xff,file_handle);
      _fscanf(file_handle,"%d\n",&g_UseOSFonts);
      if (local_1c != 0) {
        g_CurrentFilename = "..\\support\\newmsg.cpp";
        g_CurrentLineNumber = 82;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unknown message file version");
      }
      _fgets(local_31c,0xff,file_handle);
      _fscanf(file_handle,"\"%[^\"]\"\n",g_OSFontName);
      do {
        _fscanf(file_handle," ");
        lVar4 = _ftell(file_handle);
        if (local_18 <= lVar4) {
          _fclose(file_handle);
          if (0 < g_LocalizedStringCount) {
            pacVar9 = g_MessageKeyStorage;
            pacVar7 = g_MessageTextStorage;
            iVar3 = g_LocalizedStringCount * 4;
            iVar5 = 0;
            do {
              *(char (**) [128])((int)g_MessageKeys + iVar5) = pacVar9;
              *(char (**) [256])((int)g_MessageTexts + iVar5) = pacVar7;
              iVar5 = iVar5 + 4;
              pacVar7 = pacVar7 + 1;
              pacVar9 = pacVar9 + 1;
            } while (iVar5 < iVar3);
          }
          local_14 = 0;
          for (iVar5 = 0; iVar3 = local_14, iVar5 < g_LocalizedStringCount + -1; iVar5 = iVar5 + 1)
          {
            iVar11 = iVar5 + 1;
            if (iVar11 < g_LocalizedStringCount) {
              iVar8 = iVar11 * 4;
              do {
                iVar6 = _strcmp
                                  (*(char **)((int)g_MessageKeys + iVar3),
                                   *(char **)((int)g_MessageKeys + iVar8));
                if (0 < iVar6) {
                  uVar2 = *(uint *)((int)g_MessageKeys + iVar3);
                  *(uint *)((int)g_MessageKeys + iVar3) =
                       *(uint *)((int)g_MessageKeys + iVar8);
                  *(uint *)((int)g_MessageKeys + iVar8) = uVar2;
                  uVar2 = *(uint *)((int)g_MessageTexts + iVar3);
                  *(uint *)((int)g_MessageTexts + iVar3) =
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
          return g_LocalizedStringCount + -1;
        }
        iVar5 = _fscanf(file_handle,"\"%[^\"]\", \"%[^\"]\"\n",local_21c,local_11c);
        if (iVar5 != 2) {
          g_CurrentFilename = "..\\support\\newmsg.cpp";
          g_CurrentLineNumber = 99;
          core_main_c_displayErrorAndQuit_FUN_004c8440("Error reading %s",message_file);
        }
        if (499 < g_LocalizedStringCount) {
          g_CurrentFilename = "..\\support\\newmsg.cpp";
          g_CurrentLineNumber = 104;
          core_main_c_displayErrorAndQuit_FUN_004c8440
                    ("Too many messages in %s",message_file);
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
  }
  return iVar5;
}
