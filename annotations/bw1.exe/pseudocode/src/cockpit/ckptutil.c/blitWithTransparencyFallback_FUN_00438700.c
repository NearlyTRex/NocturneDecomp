// Name: cockpit_ckptutil.c_blitWithTransparencyFallback_FUN_00438700
// Address: 00438700
// Address Range: [[00438700, 0043878d]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_blitWithTransparencyFallback_FUN_00438700(void *src_data,int width,int height,void *background_base,int dest_x,int dest_y)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_blitWithTransparencyFallback_FUN_00438700(void *src_data,int width,int height,void *background_base,int dest_x,int dest_y)

{
  int iVar1;
  char *pcVar2;
  int iStack_18;
  int iStack_14;
  
  if (0 < height) {
    iStack_14 = dest_y;
    iStack_18 = 0;
    do {
      iVar1 = 0;
      if (0 < width) {
        pcVar2 = (char *)((int)src_data + iStack_18);
        do {
          if (*pcVar2 == '\0') {
            *pcVar2 = *(char *)(DAT_0061b498 * iStack_14 + iVar1 + dest_x + (int)background_base);
          }
          iVar1 = iVar1 + 1;
          pcVar2 = pcVar2 + 1;
        } while (iVar1 < width);
      }
      iStack_14 = iStack_14 + 1;
      iStack_18 = iStack_18 + width;
    } while (iStack_14 < dest_y + height);
  }
  return;
}
