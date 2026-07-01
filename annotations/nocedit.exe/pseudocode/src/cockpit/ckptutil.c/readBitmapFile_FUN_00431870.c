// Name: cockpit_ckptutil.c_readBitmapFile_FUN_00431870
// Address: 00431870
// Address Range: [[00431870, 004319a8]]
// Convention: __cdecl
// Signature: void * __cdecl cockpit_ckptutil_c_readBitmapFile_FUN_00431870(char *filename,void *buffer,int size)

#include "nocturne.h"

void * __cdecl cockpit_ckptutil_c_readBitmapFile_FUN_00431870(char *filename,void *buffer,int size)

{
  _FILE *file;
  SIZE_T SVar1;
  char local_60 [80];
  
  if (buffer == (void *)0x0) {
    buffer = shape_memdbg_cpp_debugMalloc_FUN_0050f250(size,"..\\cockpit\\ckptutil.c",215);
    if (buffer == (void *)0x0) {
      _sprintf(local_60,"Unable to allocate %u bytes for bitmap file (%s).",size,filename);
      g_CurrentFilename = "..\\cockpit\\ckptutil.c";
      g_CurrentLineNumber = 218;
      core_main_c_displayErrorAndQuit_FUN_00506f10(local_60);
    }
  }
  file = engine_dosio_cpp_getFile_FUN_00481a50("art",filename,"rb");
  if (file == (_FILE *)0x0) {
    _sprintf(local_60,"Unable to open bitmap file (%s).",filename);
    g_CurrentFilename = "..\\cockpit\\ckptutil.c";
    g_CurrentLineNumber = 227;
    core_main_c_displayErrorAndQuit_FUN_00506f10(local_60);
  }
  SVar1 = _fread(buffer,size,1,file);
  if (SVar1 != 1) {
    _sprintf(local_60,"Unable to read bitmap file (%s).",filename);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\cockpit\\ckptutil.c",234);
    g_CurrentLineNumber = 235;
    g_CurrentFilename = "..\\cockpit\\ckptutil.c";
    core_main_c_displayErrorAndQuit_FUN_00506f10(local_60);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\cockpit\\ckptutil.c",238);
  return buffer;
}
