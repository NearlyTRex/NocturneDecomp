// Name: cockpit_ckptutil.c_blitVerticalColumn_FUN_00432a10
// Address: 00432a10
// Address Range: [[00432a10, 00432ae7]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_blitVerticalColumn_FUN_00432a10(void * sprite_data, void * unused_param, int start_x, int start_y, int end_x, int end_y)

#include "nocturne.h"

void __cdecl
cockpit_ckptutil_c_blitVerticalColumn_FUN_00432a10
          (void *sprite_data,void *unused_param,int start_x,int start_y,int end_x,int end_y)

{
  int *piVar1;
  ColorConversionFunc *pCVar2;
  int iVar3;
  int iVar4;
  int local_14;
  
  if (sprite_data != (void *)0x0) {
    pCVar2 = cockpit_ckptutil_c_getColorConversionFunction_FUN_00431760();
    iVar4 = start_y * 4;
    if (g_BitsPerPixel == 8) {
      if (start_y < end_y) {
        do {
          iVar3 = g_WindowWidth * start_y;
          piVar1 = (int *)((int)g_ScreenBufferArray + iVar4);
          iVar4 = iVar4 + 4;
          start_y = start_y + 1;
          (*pCVar2)((void *)(*piVar1 + start_x),(void *)((int)unused_param + iVar3 + start_x),
                    local_14);
        } while (start_y < end_y);
        return;
      }
    }
    else if (start_y < end_y) {
      do {
        iVar3 = g_WindowWidth * start_y;
        piVar1 = (int *)((int)g_ScreenBufferArray + iVar4);
        iVar4 = iVar4 + 4;
        start_y = start_y + 1;
        (*pCVar2)((void *)(*piVar1 + start_x * 2),(void *)(iVar3 + start_x + (int)unused_param),
                  local_14);
      } while (start_y < end_y);
      return;
    }
  }
  return;
}
