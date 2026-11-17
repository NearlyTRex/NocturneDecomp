// Name: cockpit_ckptutil.c_blitVerticalColumn_FUN_00438410
// Address: 00438410
// Address Range: [[00438410, 004384e7]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_blitVerticalColumn_FUN_00438410(void *sprite_data,void *unused_param,int start_x,int start_y,int end_x,int end_y)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_blitVerticalColumn_FUN_00438410(void *sprite_data,void *unused_param,int start_x,int start_y,int end_x,int end_y)

{
  int *piVar1;
  int count;
  ColorConversionFunc *pCVar2;
  int iVar3;
  int iVar4;
  
  count = (end_x - start_x) + 1;
  if (sprite_data != (void *)0x0) {
    pCVar2 = cockpit_ckptutil_c_getColorConversionFunction_FUN_00437270();
    iVar4 = start_y * 4;
    if (g_INT_0061b4a0 == 8) {
      if (start_y < end_y) {
        do {
          iVar3 = g_INT_0061b498 * start_y;
          piVar1 = (int *)((int)g_ScreenBufferArray + iVar4);
          iVar4 = iVar4 + 4;
          start_y = start_y + 1;
          (*pCVar2)((void *)(*piVar1 + start_x),(void *)((int)sprite_data + iVar3 + start_x),count);
        } while (start_y < end_y);
        return;
      }
    }
    else if (start_y < end_y) {
      do {
        iVar3 = g_INT_0061b498 * start_y;
        piVar1 = (int *)((int)g_ScreenBufferArray + iVar4);
        iVar4 = iVar4 + 4;
        start_y = start_y + 1;
        (*pCVar2)((void *)(*piVar1 + start_x * 2),(void *)(iVar3 + start_x + (int)sprite_data),count
                 );
      } while (start_y < end_y);
      return;
    }
  }
  return;
}
