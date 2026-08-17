// Name: cockpit_ckptutil.c_loadRotatedBitmapFile_FUN_00430210
// Address: 00430210
// Address Range: [[00430210, 004303ce]]
// Convention: __cdecl
// Signature: char * __cdecl cockpit_ckptutil_c_loadRotatedBitmapFile_FUN_00430210(char *filename,char *buffer,int width,int height,int apply_palette,int palette_index)

#include "nocturne.h"

char * __cdecl cockpit_ckptutil_c_loadRotatedBitmapFile_FUN_00430210(char *filename,char *buffer,int width,int height,int apply_palette,int palette_index)

{
  _FILE *file;
  uint uVar1;
  char *pcVar2;
  char local_6c [80];
  ulong local_1c;
  uint local_18;
  int local_14;
  
  local_1c = width * height;
  if (buffer == (char *)0x0) {
    buffer = malloc(local_1c);
    if (buffer == (char *)0x0) {
      _sprintf(local_6c,"Unable to allocate %u bytes for rotated bitmap file (%s).",local_1c,filename);
      g_CurrentLineNumber = 1976;
      g_CurrentFilename = "..\\cockpit\\ckptutil.c";
      core_main_c_displayErrorAndQuit_FUN_004c8440(local_6c);
    }
  }
  file = engine_dosio_cpp_getFile_FUN_00456a60("art",filename,"rb");
  if (file == (_FILE *)0x0) {
    _sprintf(local_6c,"Unable to open bitmap file (%s).",filename);
    g_CurrentFilename = "..\\cockpit\\ckptutil.c";
    g_CurrentLineNumber = 1985;
    core_main_c_displayErrorAndQuit_FUN_004c8440(local_6c);
  }
  local_18 = 0;
  if (height != 0) {
    do {
      uVar1 = 0;
      pcVar2 = buffer + (height - local_18) + -1;
      if (width != 0) {
        do {
          local_14 = _fgetc(file);
          if (local_14 == -1) {
            _sprintf(local_6c,"Unable to read bitmap file (%s).",filename);
            _fclose(file);
            g_CurrentLineNumber = 1998;
            g_CurrentFilename = "..\\cockpit\\ckptutil.c";
            core_main_c_displayErrorAndQuit_FUN_004c8440(local_6c);
          }
          uVar1 = uVar1 + 1;
          *pcVar2 = (char)local_14;
          pcVar2 = pcVar2 + height;
        } while (uVar1 < (uint)width);
      }
      local_18 = local_18 + 1;
    } while (local_18 < (uint)height);
  }
  _fclose(file);
  if (apply_palette == 0) {
    return buffer;
  }
  cockpit_ckptutil_c_applyActPalette_FUN_0042d370(filename,buffer,local_1c,palette_index);
  return buffer;
}
