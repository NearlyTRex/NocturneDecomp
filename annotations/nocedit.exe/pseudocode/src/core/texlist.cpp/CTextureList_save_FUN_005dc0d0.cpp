// Name: core_texlist.cpp_CTextureList_save_FUN_005dc0d0
// Address: 005dc0d0
// Address Range: [[005dc0d0, 005dc22c]]
// Convention: __cdecl
// Signature: void core_texlist.cpp_CTextureList_save_FUN_005dc0d0(CTextureList * this_ptr, char * filename)

#include "nocturne.h"

void __cdecl core_texlist_cpp_CTextureList_save_FUN_005dc0d0(CTextureList *this_ptr,char *filename)

{
  char cVar1;
  FILE *pFVar2;
  FILE *unaff_EBX;
  BADSPACEBASE *in_ESP;
  FILE *unaff_ESI;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  
  pcVar4 = &stack0xfffffeec;
  do {
    cVar1 = *filename;
    *pcVar4 = cVar1;
    pcVar3 = &stack0xfffffeec;
    if (cVar1 == '\0') break;
    cVar1 = filename[1];
    filename = filename + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
    pcVar3 = &stack0xfffffeec;
  } while (cVar1 != '\0');
  do {
    pcVar4 = pcVar3;
    if (*pcVar3 == '.') goto LAB_005dc120;
    if (*pcVar3 == '\0') break;
    pcVar4 = pcVar3 + 1;
    if (*pcVar4 == '.') goto LAB_005dc120;
    pcVar3 = pcVar3 + 2;
  } while (*pcVar4 != '\0');
  pcVar4 = (char *)0x0;
LAB_005dc120:
  if (pcVar4 == (char *)0x0) {
    g_CurrentFilename = "..\\core\\texlist.cpp";
    g_CurrentLineNumber = 0xad;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CTextureList::save - No extension found");
  }
  pcVar3 = ".tex";
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pFVar2 = engine_dosio_c_getFile_FUN_00481a50("data",&stack0xfffffef0,"wt");
  if (pFVar2 == (FILE *)0x0) {
    g_CurrentFilename = "..\\core\\texlist.cpp";
    g_CurrentLineNumber = 0xb6;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CTextureList::save - Bad filename!");
  }
  iVar5 = 0;
  crt_stdio_c_fprintf_FUN_005fe6d0(unaff_ESI,"%d\n");
  if (0 < this_ptr->texture_count) {
    do {
      iVar5 = iVar5 + 1;
      crt_stdio_c_fprintf_FUN_005fe6d0(unaff_EBX,"%s,%d\n");
    } while (iVar5 < this_ptr->texture_count);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(unaff_EBX,"..\\core\\texlist.cpp",0xc3);
  return;
}
