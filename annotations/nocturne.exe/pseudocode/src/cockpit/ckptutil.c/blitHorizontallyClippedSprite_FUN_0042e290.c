// Name: cockpit_ckptutil.c_blitHorizontallyClippedSprite_FUN_0042e290
// Address: 0042e290
// Address Range: [[0042e290, 0042e3ca]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_blitHorizontallyClippedSprite_FUN_0042e290(void *sprite_data,int start_x,int dest_y,int end_x,int max_height,int unused_param,int src_y_offset,int src_stride)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_ckptutil_c_blitHorizontallyClippedSprite_FUN_0042e290(void *sprite_data,int start_x,int dest_y,int end_x,int max_height,int unused_param,int src_y_offset,int src_stride)

{
  int count;
  int iVar1;
  ColorConversionFunc *pCVar2;
  int iVar3;
  int iVar4;
  void *src_buffer;
  
  count = (end_x - start_x) + 1;
  iVar1 = _DAT_01bd2fa4 - _DAT_01bd2fa0;
  if (sprite_data != (void *)0x0) {
    pCVar2 = cockpit_ckptutil_c_FUN_0042d130();
    src_buffer = (void *)((int)sprite_data + start_x + g_WindowWidth / 2 + dest_y * src_stride);
    iVar4 = max_height - src_y_offset;
    iVar3 = (dest_y + src_y_offset) * 4;
    if (DAT_005b7624 == 8) {
      iVar3 = *(int *)(&DAT_01bd2fa0 + iVar3) + start_x;
      if (dest_y < iVar4) {
        do {
          (*pCVar2)((void *)(iVar3 - unused_param),src_buffer,count);
          dest_y = dest_y + 1;
          iVar3 = iVar3 + iVar1;
          src_buffer = (void *)((int)src_buffer + src_stride);
        } while (dest_y < iVar4);
        return;
      }
    }
    else {
      iVar3 = *(int *)(&DAT_01bd2fa0 + iVar3) + start_x * 2;
      if (dest_y < iVar4) {
        do {
          (*pCVar2)((void *)(iVar3 + unused_param * -2),src_buffer,count);
          dest_y = dest_y + 1;
          iVar3 = iVar3 + (iVar1 / 2) * 2;
          src_buffer = (void *)((int)src_buffer + src_stride);
        } while (dest_y < iVar4);
        return;
      }
    }
  }
  return;
}
