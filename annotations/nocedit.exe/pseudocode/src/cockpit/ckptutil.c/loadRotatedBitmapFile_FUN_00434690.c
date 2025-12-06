// Name: cockpit_ckptutil.c_loadRotatedBitmapFile_FUN_00434690
// Address: 00434690
// Address Range: [[00434690, 0043486c]]
// Convention: __cdecl
// Signature: char * cockpit_ckptutil.c_loadRotatedBitmapFile_FUN_00434690(char * filename, char * buffer, int width, int height, void * optional_param)

#include "nocturne.h"

char * __cdecl
cockpit_ckptutil_c_loadRotatedBitmapFile_FUN_00434690
          (char *filename,char *buffer,int width,int height,void *optional_param)

{
  FILE *file;
  int iVar1;
  void *pvVar2;
  char *pcVar3;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  uint bitmap_size;
  char *in_stack_00000020;
  char *in_stack_00000024;
  char *in_stack_00000028;
  int in_stack_00000030;
  int in_stack_00000034;
  char acStack_48 [44];
  int local_1c;
  uint local_18;
  
  local_1c = width * height;
  if (buffer == (char *)0x0) {
    pvVar2 = shape_memdbg_cpp_debugMalloc_FUN_0050f250(local_1c,"..\\cockpit\\ckptutil.c",0x7bd)
    ;
    if (pvVar2 == (void *)0x0) {
      crt_stdio_c_sprintf_FUN_005fdbd0
                (&stack0xffffff98,"Unable to allocate %u bytes for rotated bitmap file (%s).",local_18,0);
      g_CurrentLineNumber = 0x7c0;
      g_CurrentFilename = "..\\cockpit\\ckptutil.c";
      core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xffffff9c);
    }
  }
  file = engine_dosio_c_getFile_FUN_00481a50("art",(char *)height,"rb");
  if (file == (FILE *)0x0) {
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffffa4,"Unable to open bitmap file (%s).");
    g_CurrentFilename = "..\\cockpit\\ckptutil.c";
    g_CurrentLineNumber = 0x7c9;
    core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xffffffa8);
  }
  bitmap_size = 0;
  if (height != 0) {
    do {
      pcVar3 = (char *)0x0;
      pcVar4 = in_stack_00000020 + (height - bitmap_size) + -1;
      if (in_stack_00000024 != (char *)0x0) {
        do {
          iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
          if (iVar1 == -1) {
            crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffffb0,"Unable to read bitmap file (%s).");
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\cockpit\\ckptutil.c",0x7d5);
            g_CurrentLineNumber = 0x7d6;
            g_CurrentFilename = "..\\cockpit\\ckptutil.c";
            core_main_c_displayErrorAndQuit_FUN_00506f10(acStack_48);
          }
          pcVar3 = pcVar3 + 1;
          *pcVar4 = (char)filename;
          pcVar4 = pcVar4 + height;
        } while (pcVar3 < in_stack_00000024);
      }
      bitmap_size = bitmap_size + 1;
    } while (bitmap_size < (uint)height);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\cockpit\\ckptutil.c",0x7de);
  if (in_stack_00000030 == 0) {
    return in_stack_00000024;
  }
  cockpit_ckptutil_c_applyActPalette_FUN_004319b0
            (in_stack_00000020,in_stack_00000024,bitmap_size,in_stack_00000034);
  return in_stack_00000028;
}
