// Name: cockpit_ckptutil.c_applyColorPalette_FUN_004319b0
// Address: 00431830
// Address Range: [[00431830, 0043186e]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_applyColorPalette_FUN_004319b0 (char *filename,void *bitmap_buffer,int bitmap_size,int palette_index)

#include "nocturne.h"

void __cdecl
cockpit_ckptutil_c_applyColorPalette_FUN_004319b0
          (char *filename,void *bitmap_buffer,int bitmap_size,int palette_index)

{
  if (bitmap_buffer == (void *)0x0) {
    return;
  }
  cockpit_ckptutil_c_readBitmapFile_FUN_00431870(filename,bitmap_buffer,bitmap_size);
  cockpit_ckptutil_c_applyActPalette_FUN_004319b0(filename,bitmap_buffer,bitmap_size,palette_index);
  return;
}
