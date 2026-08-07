// Name: cockpit_ckptutil.c_blitSpanBasedSpriteVerticallyClipped_FUN_0042e520
// Address: 0042e520
// Address Range: [[0042e520, 0042e6b6]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_blitSpanBasedSpriteVerticallyClipped_FUN_0042e520(void *sprite_data,void *span_data)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_blitSpanBasedSpriteVerticallyClipped_FUN_0042e520(void *sprite_data,void *span_data)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ColorConversionFunc *pCVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  pCVar4 = cockpit_ckptutil_c_FUN_0042d130();
  if (g_BitsPerPixel == 8) {
    iStack_2c = g_ClipTop;
    if (g_ClipTop <= g_ClipBottom) {
      iStack_34 = g_ClipTop * 0x84;
      iStack_38 = g_ClipTop << 2;
      do {
        iVar2 = *(int *)((int)g_ScreenBufferArray + iStack_38);
        iVar5 = iStack_2c * g_WindowWidth;
        iVar8 = 0;
        for (iVar7 = 0; piVar6 = (int *)(iStack_34 + (int)span_data), iVar7 < *piVar6;
            iVar7 = iVar7 + 1) {
          iVar1 = iVar8 + 0x44;
          iVar3 = *(int *)(iVar8 + 4 + (int)piVar6);
          iVar8 = iVar8 + 4;
          (*pCVar4)((void *)(iVar2 + iVar3),(void *)((int)sprite_data + iVar3 + iVar5),
                    *(int *)(iVar1 + (int)piVar6));
        }
        iStack_34 = iStack_34 + 0x84;
        iStack_38 = iStack_38 + 4;
        iStack_2c = iStack_2c + 1;
      } while (iStack_2c <= g_ClipBottom);
    }
  }
  else {
    iStack_30 = g_ClipTop;
    if (g_ClipTop <= g_ClipBottom) {
      iStack_3c = g_ClipTop * 0x84;
      iStack_40 = g_ClipTop << 2;
      do {
        iVar2 = *(int *)((int)g_ScreenBufferArray + iStack_40);
        iVar5 = iStack_30 * g_WindowWidth;
        iVar7 = 0;
        for (iVar8 = 0; piVar6 = (int *)(iStack_3c + (int)span_data), iVar8 < *piVar6;
            iVar8 = iVar8 + 1) {
          iVar1 = iVar7 + 0x44;
          iVar3 = *(int *)(iVar7 + 4 + (int)piVar6);
          iVar7 = iVar7 + 4;
          (*pCVar4)((void *)(iVar3 * 2 + iVar2),(void *)((int)sprite_data + iVar3 + iVar5),
                    *(int *)(iVar1 + (int)piVar6));
        }
        iStack_3c = iStack_3c + 0x84;
        iStack_40 = iStack_40 + 4;
        iStack_30 = iStack_30 + 1;
      } while (iStack_30 <= g_ClipBottom);
    }
  }
  return;
}
