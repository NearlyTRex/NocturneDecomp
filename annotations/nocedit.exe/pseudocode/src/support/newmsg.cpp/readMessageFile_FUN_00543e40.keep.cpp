// Name: support_newmsg.cpp_readMessageFile_FUN_00543e40
// Address: 00543e40
// MANUAL RECONSTRUCTION
// Address Range: [[00543e40, 00544162]]
// Convention: __cdecl
// Signature: void __cdecl support_newmsg_cpp_readMessageFile_FUN_00543e40(char *message_file)

#include "nocturne.h"

void __cdecl support_newmsg_cpp_readMessageFile_FUN_00543e40(char *message_file)

{
  int iVar3;
  _FILE *file_handle;
  long lVar4;
  long lVar5;
  int iVar6;
  int iVar5;
  int iVar11;
  char local_31c [256];
  char local_21c [256];
  char local_11c [256];
  int local_1c;
  int local_18;
  char *uVar2;
  
  local_1c = 0;
  iVar3 = engine_dosio_cpp_getFileSize_FUN_00481880(&s_EmptyChar_0063e145,message_file);
  if ((iVar3 < 1) ||
     (file_handle = engine_dosio_cpp_getFile_FUN_00481a50
                              (&s_EmptyChar_0063e149,message_file,"rt"),
     file_handle == (_FILE *)0x0)) {
    return;
  }
  lVar4 = _ftell(file_handle);
  local_18 = iVar3 + lVar4;
  _fgets(local_31c,0xff,file_handle);
  _fscanf(file_handle,"%d\n",&local_1c);
  _fgets(local_31c,0xff,file_handle);
  _fscanf(file_handle,"%d\n",&g_MessageCount);
  if (local_1c != 0) {
    g_CurrentFilename = "..\\support\\newmsg.cpp";
    g_CurrentLineNumber = 0x54;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Unknown message file version");
  }
  _fgets(local_31c,0xff,file_handle);
  _fscanf(file_handle,"\"%[^\"]\"\n",g_OSFontName);
  do {
    _fscanf(file_handle," ");
    lVar5 = _ftell(file_handle);
    if (local_18 <= lVar5) {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\support\\newmsg.cpp",0x72);
      for (iVar6 = 0; iVar6 < g_LocalizedStringCount; iVar6 = iVar6 + 1) {
        g_MessageKeys[iVar6] = g_MessageKeyStorage[iVar6];
        g_MessageTexts[iVar6] = g_MessageTextStorage[iVar6];
      }
      for (iVar6 = 0; iVar6 < g_LocalizedStringCount + -1; iVar6 = iVar6 + 1) {
        iVar11 = iVar6 + 1;
        if (iVar11 < g_LocalizedStringCount) {
          do {
            iVar5 = _strcmp(g_MessageKeys[iVar6], g_MessageKeys[iVar11]);
            if (0 < iVar5) {
              uVar2 = g_MessageKeys[iVar6];
              g_MessageKeys[iVar6] = g_MessageKeys[iVar11];
              g_MessageKeys[iVar11] = uVar2;
              uVar2 = g_MessageTexts[iVar6];
              g_MessageTexts[iVar6] = g_MessageTexts[iVar11];
              g_MessageTexts[iVar11] = uVar2;
            }
            iVar11 = iVar11 + 1;
          } while (iVar11 < g_LocalizedStringCount);
        }
      }
      g_LocalizationLoaded = 1;
      return;
    }
    iVar6 = _fscanf(file_handle,"\"%[^\"]\", \"%[^\"]\"\n",local_21c,local_11c);
    if (iVar6 != 2) {
      g_CurrentFilename = "..\\support\\newmsg.cpp";
      g_CurrentLineNumber = 0x65;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Error reading %s",message_file);
    }
    if (499 < g_LocalizedStringCount) {
      g_CurrentFilename = "..\\support\\newmsg.cpp";
      g_CurrentLineNumber = 0x6a;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Too many messages in %s",message_file);
    }
    strcpy(g_MessageKeyStorage[g_LocalizedStringCount], local_21c);
    strcpy(g_MessageTextStorage[g_LocalizedStringCount], local_11c);
    g_LocalizedStringCount = g_LocalizedStringCount + 1;
  } while( true );
}
