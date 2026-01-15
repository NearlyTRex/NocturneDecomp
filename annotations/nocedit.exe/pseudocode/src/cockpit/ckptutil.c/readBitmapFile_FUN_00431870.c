// Name: cockpit_ckptutil.c_readBitmapFile_FUN_00431870
// Address: 00431870
// Address Range: [[00431870, 004319a8]]
// Convention: __cdecl
// Signature: void * cockpit_ckptutil.c_readBitmapFile_FUN_00431870(char * filename, void * buffer, int size)

#include "nocturne.h"

void * __cdecl cockpit_ckptutil_c_readBitmapFile_FUN_00431870(char *filename,void *buffer,int size)

{
  FILE *file;
  SIZE_T SVar1;
  char local_60 [80];
  
  if (buffer == (void *)0x0) {
    buffer = shape_memdbg_cpp_debugMalloc_FUN_0050f250(size,"..\\cockpit\\ckptutil.c",0xd7);
    if (buffer == (void *)0x0) {
      crt_stdio_c_sprintf_FUN_005fdbd0(local_60,"Unable to allocate %u bytes for bitmap file (%s).",size,filename);
      g_CurrentFilename = "..\\cockpit\\ckptutil.c";
      g_CurrentLineNumber = 0xda;
      core_main_c_displayErrorAndQuit_FUN_00506f10(local_60);
    }
  }
  file = engine_dosio_c_getFile_FUN_00481a50("art",filename,"rb");
  if (file == (FILE *)0x0) {
    crt_stdio_c_sprintf_FUN_005fdbd0(local_60,"Unable to open bitmap file (%s).",filename);
    g_CurrentFilename = "..\\cockpit\\ckptutil.c";
    g_CurrentLineNumber = 0xe3;
    core_main_c_displayErrorAndQuit_FUN_00506f10(local_60);
  }
  SVar1 = crt_stdio_c_fread_FUN_005fd990(buffer,size,1,file);
  if (SVar1 != 1) {
    crt_stdio_c_sprintf_FUN_005fdbd0(local_60,"Unable to read bitmap file (%s).",filename);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\cockpit\\ckptutil.c",0xea);
    g_CurrentLineNumber = 0xeb;
    g_CurrentFilename = "..\\cockpit\\ckptutil.c";
    core_main_c_displayErrorAndQuit_FUN_00506f10(local_60);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\cockpit\\ckptutil.c",0xee);
  return buffer;
}
