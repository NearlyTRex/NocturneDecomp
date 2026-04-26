// Name: cockpit_ckptutil.c_blitWithTransparencyFallback_FUN_00432d00
// Address: 00432d00
// MANUAL RECONSTRUCTION
// Address Range: [[00432d00, 00432d8d]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_blitWithTransparencyFallback_FUN_00432d00(void *src_data,int width,int height,void *background_base,int dest_x,int dest_y)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_blitWithTransparencyFallback_FUN_00432d00(void *src_data,int width,int height,void *background_base,int dest_x,int dest_y)

{
  int iVar1;
  char *pcVar2;
  int local_18;
  int local_14;
  
  if (0 < height) {
    local_14 = dest_y;
    local_18 = 0;
    do {
      iVar1 = 0;
      if (0 < width) {
        pcVar2 = (char *)src_data + local_18;
        do {
          if (*pcVar2 == '\0') {
            *pcVar2 = *((char *)background_base + g_WindowWidth * local_14 + iVar1 + dest_x);
          }
          iVar1 = iVar1 + 1;
          pcVar2 = pcVar2 + 1;
        } while (iVar1 < width);
      }
      local_14 = local_14 + 1;
      local_18 = local_18 + width;
    } while (local_14 < dest_y + height);
  }
  return;
}
