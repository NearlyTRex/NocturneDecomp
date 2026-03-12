// Name: cockpit_ckptutil.c_loadRotatedBitmapFile_FUN_00434690
// Address: 00434690
// Address Range: [[00434690, 0043486c]]
// Convention: __cdecl
// Signature: char * __cdecl cockpit_ckptutil_c_loadRotatedBitmapFile_FUN_00434690(char *filename,char *buffer,int width,int height,void *optional_param)

#include "nocturne.h"

char * __cdecl cockpit_ckptutil_c_loadRotatedBitmapFile_FUN_00434690(char *filename,char *buffer,int width,int height,void *optional_param)

{
  int size;
  _FILE *file;
  int iVar1;
  uint uVar1;
  char *pcVar2;
  int in_stack_00000018;
  char local_6c [80];
  int local_1c;
  uint local_18;
  int local_14;
  
  size = width * height;
  if (buffer == (char *)0x0) {
    buffer = shape_memdbg_cpp_debugMalloc_FUN_0050f250(size,"..\\cockpit\\ckptutil.c",0x7bd);
    if (buffer == (char *)0x0) {
      _sprintf(local_6c,"Unable to allocate %u bytes for rotated bitmap file (%s).",size,filename);
      g_CurrentLineNumber = 0x7c0;
      g_CurrentFilename = "..\\cockpit\\ckptutil.c";
      core_main_c_displayErrorAndQuit_FUN_00506f10(local_6c);
    }
  }
  file = engine_dosio_c_getFile_FUN_00481a50("art",filename,"rb");
  if (file == (_FILE *)0x0) {
    _sprintf(local_6c,"Unable to open bitmap file (%s).",filename);
    g_CurrentFilename = "..\\cockpit\\ckptutil.c";
    g_CurrentLineNumber = 0x7c9;
    core_main_c_displayErrorAndQuit_FUN_00506f10(local_6c);
  }
  local_18 = 0;
  if (height != 0) {
    do {
      uVar1 = 0;
      pcVar2 = buffer + (height - local_18) + -1;
      if (width != 0) {
        do {
          iVar1 = _fgetc(file);
          if (iVar1 == -1) {
            _sprintf(local_6c,"Unable to read bitmap file (%s).",filename)
            ;
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\cockpit\\ckptutil.c",0x7d5);
            g_CurrentLineNumber = 0x7d6;
            g_CurrentFilename = "..\\cockpit\\ckptutil.c";
            core_main_c_displayErrorAndQuit_FUN_00506f10(local_6c);
          }
          local_14._0_1_ = (char)iVar1;
          uVar1 = uVar1 + 1;
          *pcVar2 = (char)local_14;
          pcVar2 = pcVar2 + height;
        } while (uVar1 < (uint)width);
      }
      local_18 = local_18 + 1;
    } while (local_18 < (uint)height);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\cockpit\\ckptutil.c",0x7de);
  if (optional_param == (void *)0x0) {
    return buffer;
  }
  cockpit_ckptutil_c_applyActPalette_FUN_004319b0(filename,buffer,size,in_stack_00000018);
  return buffer;
}
