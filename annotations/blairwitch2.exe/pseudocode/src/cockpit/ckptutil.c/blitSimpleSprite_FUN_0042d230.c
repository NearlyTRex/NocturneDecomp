// Name: cockpit_ckptutil.c_blitSimpleSprite_FUN_0042d230
// Address: 0042d230
// Address Range: [[0042d230, 0042d380]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_blitSimpleSprite_FUN_0042d230(void *sprite_data,int dest_x,int dest_y,int width,int height)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_blitSimpleSprite_FUN_0042d230(void *sprite_data,int dest_x,int dest_y,int width,int height)

{
  ColorConversionFunc *pCVar1;
  int iVar2;
  byte *puVar3;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  iVar2 = (int)g_ScreenBufferArray[1] - (int)g_ScreenBufferArray[0];
  if (sprite_data != (void *)0x0) {
    pCVar1 = cockpit_ckptutil_c_getColorConversionFunction_FUN_0042c410();
    if (g_INT_006141c0 == 8) {
      puVar3 = g_ScreenBufferArray[dest_y] + dest_x;
      iStack_18 = 0;
      if (0 < height) {
        do {
          (*pCVar1)(puVar3,sprite_data,width);
          sprite_data = (void *)((int)sprite_data + width);
          iStack_18 = iStack_18 + 1;
          puVar3 = puVar3 + iVar2;
        } while (iStack_18 < height);
        return;
      }
    }
    else if (g_INT_006141c0 == 0x10) {
      puVar3 = g_ScreenBufferArray[dest_y] + dest_x * 2;
      iStack_14 = 0;
      if (0 < height) {
        do {
          (*pCVar1)(puVar3,sprite_data,width);
          sprite_data = (void *)((int)sprite_data + width);
          iStack_14 = iStack_14 + 1;
          puVar3 = puVar3 + (iVar2 / 2) * 2;
        } while (iStack_14 < height);
        return;
      }
    }
    else {
      puVar3 = g_ScreenBufferArray[dest_y] + dest_x * 4;
      iStack_1c = 0;
      if (0 < height) {
        do {
          (*pCVar1)(puVar3,sprite_data,width);
          sprite_data = (void *)((int)sprite_data + width);
          iStack_1c = iStack_1c + 1;
          puVar3 = puVar3 + ((int)((iVar2 + (iVar2 >> 0x1f) * -4) - (uint)((iVar2 >> 0x1f) << 1 < 0)
                                  ) >> 2) * 4;
        } while (iStack_1c < height);
        return;
      }
    }
  }
  return;
}
