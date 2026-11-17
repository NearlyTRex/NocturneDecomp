// Name: cockpit_ckptutil.c_loadRotatedBitmapFile_FUN_0042f330
// Address: 0042f330
// Address Range: [[0042f330, 0042f4ee]]
// Convention: __cdecl
// Signature: char * __cdecl cockpit_ckptutil_c_loadRotatedBitmapFile_FUN_0042f330(char *filename,char *buffer,int width,int height,int apply_palette,int palette_index)

#include "nocturne.h"

char * __cdecl cockpit_ckptutil_c_loadRotatedBitmapFile_FUN_0042f330(char *filename,char *buffer,int width,int height,int apply_palette,int palette_index)

{
  _FILE *file;
  uint uVar1;
  char *pcVar2;
  char acStack_6c [80];
  ulong uStack_1c;
  uint uStack_18;
  int iStack_14;
  
  uStack_1c = width * height;
  if (buffer == (char *)0x0) {
    buffer = malloc(uStack_1c);
    if (buffer == (char *)0x0) {
      _sprintf(acStack_6c,"Unable to allocate %u bytes for rotated bitmap file (%s).");
      g_INT_01d046a4 = 0x7e5;
      g_CHAR_PTR_01d046a0 = "..\\cockpit\\ckptutil.c";
      core_main_c_displayErrorAndQuit_FUN_004e4500(acStack_6c);
    }
  }
  file = engine_dosio_cpp_getFile_FUN_00460c70("art",filename,"rb");
  if (file == (_FILE *)0x0) {
    _sprintf(acStack_6c,"Unable to open bitmap file (%s).");
    g_CHAR_PTR_01d046a0 = "..\\cockpit\\ckptutil.c";
    g_INT_01d046a4 = 0x7ee;
    core_main_c_displayErrorAndQuit_FUN_004e4500(acStack_6c);
  }
  uStack_18 = 0;
  if (height != 0) {
    do {
      uVar1 = 0;
      pcVar2 = buffer + (height - uStack_18) + -1;
      if (width != 0) {
        do {
          iStack_14 = _fgetc(file);
          if (iStack_14 == -1) {
            _sprintf(acStack_6c,"Unable to read bitmap file (%s).");
            _fclose(file);
            g_INT_01d046a4 = 0x7fb;
            g_CHAR_PTR_01d046a0 = "..\\cockpit\\ckptutil.c";
            core_main_c_displayErrorAndQuit_FUN_004e4500(acStack_6c);
          }
          uVar1 = uVar1 + 1;
          *pcVar2 = (char)iStack_14;
          pcVar2 = pcVar2 + height;
        } while (uVar1 < (uint)width);
      }
      uStack_18 = uStack_18 + 1;
    } while (uStack_18 < (uint)height);
  }
  _fclose(file);
  if (apply_palette == 0) {
    return buffer;
  }
  cockpit_ckptutil_c_applyActPalette_FUN_0042c670(filename,buffer,uStack_1c,palette_index);
  return (char *)palette_index;
}
