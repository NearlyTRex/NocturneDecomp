// Name: core_ground.cpp_CGround_load_FUN_004ef030
// Address: 004ef030
// Address Range: [[004ef030, 004ef370]]
// Convention: __cdecl
// Signature: int core_ground.cpp_CGround_load_FUN_004ef030(CGround * this_ptr, char * filename)

#include "nocturne.h"

int __cdecl core_ground_cpp_CGround_load_FUN_004ef030(CGround *this_ptr,char *filename)

{
  char cVar1;
  byte *pbVar2;
  FILE *pFVar3;
  uint uVar4;
  int extraout_EAX;
  BADSPACEBASE *in_ESP;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  char *in_stack_00000018;
  char *in_stack_00000028;
  char acStack_70 [76];
  char *local_24;
  char *local_20;
  char *local_1c;
  char *local_18;
  char *local_14;
  int iVar8;
  
  pcVar6 = &stack0xffffff34;
  pcVar5 = &stack0xffffff34;
  do {
    cVar1 = *filename;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = filename[1];
    filename = filename + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  local_24 = "data";
  local_20 = "rb";
  do {
    pcVar6 = pcVar5;
    if (*pcVar5 == '.') goto LAB_004ef09d;
    if (*pcVar5 == '\0') break;
    pcVar6 = pcVar5 + 1;
    if (*pcVar6 == '.') goto LAB_004ef09d;
    pcVar5 = pcVar5 + 2;
  } while (*pcVar6 != '\0');
  pcVar6 = (char *)0x0;
LAB_004ef09d:
  if (pcVar6 == (char *)0x0) {
    g_CurrentFilename = "..\\core\\ground.cpp";
    g_CurrentLineNumber = 0x40;
    core_main_c_displayErrorAndQuit_FUN_00506f10("eopen - ext not found!");
  }
  pcVar6 = pcVar6 + 1;
  pcVar5 = "raw";
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  pFVar3 = engine_dosio_c_getFile_FUN_00481a50(local_20,&stack0xffffff38,local_1c);
  if (pFVar3 == (FILE *)0x0) {
    g_CurrentFilename = "..\\core\\ground.cpp";
    g_CurrentLineNumber = 0x44;
    core_main_c_displayErrorAndQuit_FUN_00506f10("eopen - Cannot open file");
  }
  iVar8 = 0;
  if (0 < this_ptr->height) {
    do {
      iVar7 = 0;
      if (0 < this_ptr->width) {
        do {
          if ((pFVar3->_cnt < 1) || ((byte)*pFVar3->_ptr - 0xd < 0xfe)) {
            uVar4 = crt_stdio_c_fgetc_FUN_005fe840(pFVar3);
          }
          else {
            pFVar3->_cnt = pFVar3->_cnt + -1;
            pbVar2 = (byte *)pFVar3->_ptr;
            pFVar3->_ptr = (char *)(pbVar2 + 1);
            uVar4 = (uint)*pbVar2;
          }
          *(short *)((int)this_ptr->terrain_data + (iVar8 * this_ptr->width + iVar7) * 4) =
               (short)(uVar4 << 7);
          iVar7 = iVar7 + 1;
        } while (iVar7 < this_ptr->width);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < this_ptr->height);
  }
  pcVar6 = acStack_70;
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar3,"..\\core\\ground.cpp",0x102);
  local_18 = "data";
  local_1c = "rb";
  do {
    cVar1 = *in_stack_00000018;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = in_stack_00000018[1];
    in_stack_00000018 = in_stack_00000018 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  pcVar6 = acStack_70 + 4;
  do {
    pcVar5 = pcVar6;
    if (*pcVar6 == '.') goto LAB_004ef1f1;
    if (*pcVar6 == '\0') break;
    pcVar5 = pcVar6 + 1;
    if (*pcVar5 == '.') goto LAB_004ef1f1;
    pcVar6 = pcVar6 + 2;
  } while (*pcVar5 != '\0');
  pcVar5 = (char *)0x0;
LAB_004ef1f1:
  if (pcVar5 == (char *)0x0) {
    g_CurrentFilename = "..\\core\\ground.cpp";
    g_CurrentLineNumber = 0x40;
    core_main_c_displayErrorAndQuit_FUN_00506f10("eopen - ext not found!");
  }
  pcVar5 = pcVar5 + 1;
  pcVar6 = "clr";
  do {
    cVar1 = *pcVar6;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  pFVar3 = engine_dosio_c_getFile_FUN_00481a50(local_14,acStack_70 + 8,local_18);
  if (pFVar3 == (FILE *)0x0) {
    g_CurrentFilename = "..\\core\\ground.cpp";
    g_CurrentLineNumber = 0x44;
    core_main_c_displayErrorAndQuit_FUN_00506f10("eopen - Cannot open file");
  }
  filename = (char *)0x0;
  if (0 < this_ptr->height) {
    do {
      iVar8 = 0;
      if (0 < this_ptr->width) {
        do {
          iVar7 = (int)filename * this_ptr->width + iVar8;
          iVar8 = iVar8 + 1;
          crt_stdio_c_fread_FUN_005fd990
                    ((void *)((int)this_ptr->terrain_data + iVar7 * 4 + 2),1,2,pFVar3);
        } while (iVar8 < this_ptr->width);
      }
      filename = filename + 1;
    } while ((int)filename < this_ptr->height);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar3,"..\\core\\ground.cpp",0x10c);
  core_texlist_cpp_CTextureList_load_FUN_005dbe00(this_ptr->texture_list,in_stack_00000028);
  return extraout_EAX;
}
