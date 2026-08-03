// Name: cockpit_ckptutil.c_readBitmapFile_FUN_0042d240
// Address: 0042d240
// Address Range: [[0042d240, 0042d360]]
// Convention: __cdecl
// Signature: void * __cdecl cockpit_ckptutil_c_readBitmapFile_FUN_0042d240(char *filename,void *buffer,int size)

#include "nocturne.h"

void * __cdecl cockpit_ckptutil_c_readBitmapFile_FUN_0042d240(char *filename,void *buffer,int size)

{
  _FILE *file;
  SIZE_T SVar1;
  byte local_60 [80];
  
  if (buffer == (void *)0x0) {
    buffer = malloc(size);
    if (buffer == (void *)0x0) {
      _sprintf(local_60,"Unable to allocate %u bytes for bitmap file (%s).",size,filename);
      g_CHAR_PTR_01cc4800 = "..\\cockpit\\ckptutil.c";
      g_INT_01cc4804 = 0xd2;
      core_main_c_FUN_004c8440(local_60);
    }
  }
  file = engine_dosio_cpp_getFile_FUN_00456a60("art",filename,"rb");
  if (file == (_FILE *)0x0) {
    _sprintf(local_60,"Unable to open bitmap file (%s).",filename);
    g_CHAR_PTR_01cc4800 = "..\\cockpit\\ckptutil.c";
    g_INT_01cc4804 = 0xdb;
    core_main_c_FUN_004c8440(local_60);
  }
  SVar1 = _fread(buffer,size,1,file);
  if (SVar1 == 1) {
    _fclose(file);
    return buffer;
  }
  _sprintf(local_60,"Unable to read bitmap file (%s).",filename);
  _fclose(file);
  g_INT_01cc4804 = 0xe3;
  g_CHAR_PTR_01cc4800 = "..\\cockpit\\ckptutil.c";
  core_main_c_FUN_004c8440(local_60);
  _fclose(file);
  return buffer;
}
