// Name: cockpit_ckptutil.c_applyColorPalette_FUN_0042d200
// Address: 0042d200
// Address Range: [[0042d200, 0042d23e]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_applyColorPalette_FUN_0042d200(char *filename,void *bitmap_buffer,int bitmap_size,int palette_index)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_applyColorPalette_FUN_0042d200(char *filename,void *bitmap_buffer,int bitmap_size,int palette_index)

{
  if (bitmap_buffer == (void *)0x0) {
    return;
  }
  cockpit_ckptutil_c_readBitmapFile_FUN_0042d240(filename,bitmap_buffer,bitmap_size);
  cockpit_ckptutil_c_applyActPalette_FUN_0042d370(filename,bitmap_buffer,bitmap_size,palette_index);
  return;
}
