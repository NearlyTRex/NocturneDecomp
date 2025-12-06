// Name: engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0
// Address: 004105d0
// Address Range: [[004105d0, 00410942]]
// Convention: __cdecl
// Signature: void engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0(CAlphaBitmap * this_ptr, char * filename, int width, int height)

#include "nocturne.h"

void __cdecl
engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0
          (CAlphaBitmap *this_ptr,char *filename,int width,int height)

{
  char *pcVar1;
  uint *puVar2;
  FILE *pFVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  BADSPACEBASE *in_ESP;
  uint uVar8;
  FILE *in_stack_00000014;
  int in_stack_00000018;
  int in_stack_0000001c;
  uint in_stack_00000024;
  FILE *in_stack_00000028;
  FILE *in_stack_0000002c;
  FILE *in_stack_00000030;
  FILE *in_stack_00000034;
  SIZE_T in_stack_00000038;
  SIZE_T in_stack_00000060;
  SIZE_T in_stack_00000064;
  byte *puStack_e0;
  
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_00410560(this_ptr);
  this_ptr->width = height;
  this_ptr->height = (int)in_stack_00000014;
  pcVar1 = (char *)shape_memdbg_cpp_debugMalloc_FUN_0050f250
                             (height * (int)in_stack_00000014,"..\\engine\\alphabit.cpp",0x52);
  this_ptr->ptrRaw = pcVar1;
  if (pcVar1 == (char *)0x0) {
    g_CurrentFilename = "..\\engine\\alphabit.cpp";
    g_CurrentLineNumber = 0x53;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CAlphaBitmap::load - Out of memory");
  }
  pcVar1 = (char *)shape_memdbg_cpp_debugMalloc_FUN_0050f250
                             (in_stack_00000018 * in_stack_0000001c,"..\\engine\\alphabit.cpp",
                              0x55);
  this_ptr->ptrOpa = pcVar1;
  if (pcVar1 == (char *)0x0) {
    g_CurrentFilename = "..\\engine\\alphabit.cpp";
    g_CurrentLineNumber = 0x56;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CAlphaBitmap::load - Out of memory");
  }
  puVar2 = (uint *)shape_memdbg_cpp_debugMalloc_FUN_0050f250
                             (0x400,"..\\engine\\alphabit.cpp",0x58);
  this_ptr->ptrAct = puVar2;
  if (puVar2 == (uint *)0x0) {
    g_CurrentFilename = "..\\engine\\alphabit.cpp";
    g_CurrentLineNumber = 0x59;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CAlphaBitmap::load - Out of memory");
  }
  crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff08,"%s.raw",in_stack_00000024);
  pFVar3 = engine_dosio_c_getFile_FUN_00481a50("art",&stack0xffffff0c,"rb");
  if (pFVar3 == (FILE *)0x0) {
    g_CurrentFilename = "..\\engine\\alphabit.cpp";
    g_CurrentLineNumber = 0x5f;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CAlphaBitmap::load - Can't open %s");
  }
  crt_stdio_c_fread_FUN_005fd990
            (this_ptr->ptrRaw,(SIZE_T)in_stack_00000034,in_stack_00000038,in_stack_00000014);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(in_stack_00000014,"..\\engine\\alphabit.cpp",0x61);
  crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff1c,"%s.act");
  pFVar3 = engine_dosio_c_getFile_FUN_00481a50("art",(char *)&puStack_e0,"rb");
  puStack_e0 = &stack0xffffff24;
  if (pFVar3 == (FILE *)0x0) {
    g_CurrentFilename = "..\\engine\\alphabit.cpp";
    g_CurrentLineNumber = 0x65;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CAlphaBitmap::load - Can't open %s");
  }
  iVar7 = 0;
  do {
    puStack_e0 = (byte *)0x410794;
    iVar4 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000028);
    iVar5 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_0000002c);
    uVar6 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000030);
    if (g_BitsPerPixel == 0x20) {
      uVar8 = iVar5 << ((byte)g_GreenBitPosition & 0x1f) | iVar4 << ((byte)g_RedBitPosition & 0x1f);
      uVar6 = uVar6 << ((byte)g_BlueBitPosition & 0x1f);
    }
    else {
      uVar8 = iVar4 << 0x10 | iVar5 << 8;
    }
    iVar4 = iVar7 + 4;
    *(uint *)(iVar7 + (int)this_ptr->ptrAct) = uVar8 | uVar6;
    iVar7 = iVar4;
  } while (iVar4 != 0x400);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(in_stack_00000034,"..\\engine\\alphabit.cpp",0x6d);
  crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff38,"%s.opa");
  pFVar3 = engine_dosio_c_getFile_FUN_00481a50("art",&stack0xffffff3c,"rb");
  if (pFVar3 == (FILE *)0x0) {
    iVar4 = in_stack_00000060 * in_stack_00000064;
    iVar7 = 0;
    if (0 < iVar4) {
      do {
        while (this_ptr->ptrAct[(byte)this_ptr->ptrRaw[iVar7]] != 0) {
          this_ptr->ptrOpa[iVar7] = -1;
          iVar7 = iVar7 + 1;
          if (iVar4 <= iVar7) {
            return;
          }
        }
        this_ptr->ptrOpa[iVar7] = '\0';
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar4);
    }
    return;
  }
  crt_stdio_c_fread_FUN_005fd990(this_ptr->ptrOpa,in_stack_00000060,in_stack_00000064,pFVar3);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar3,"..\\engine\\alphabit.cpp",0x73);
  return;
}
