// Name: cockpit_ckptutil.c_blitSpanBasedSpriteVerticallyClipped_FUN_00432b60
// Address: 00432b60
// Address Range: [[00432b60, 00432cf6]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_blitSpanBasedSpriteVerticallyClipped_FUN_00432b60(void * sprite_data, void * span_data)

#include "nocturne.h"

void __cdecl
cockpit_ckptutil_c_blitSpanBasedSpriteVerticallyClipped_FUN_00432b60
          (void *sprite_data,void *span_data)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ColorConversionFunc *pCVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  pCVar4 = cockpit_ckptutil_c_getColorConversionFunction_FUN_00431760();
  if (g_BitsPerPixel == 8) {
    local_2c = g_ClipTop;
    if (g_ClipTop <= g_ClipBottom) {
      local_34 = g_ClipTop * 0x84;
      local_38 = g_ClipTop << 2;
      do {
        iVar2 = *(int *)((int)g_ScreenBufferArray + local_38);
        iVar5 = local_2c * g_WindowWidth;
        iVar8 = 0;
        for (iVar7 = 0; piVar6 = (int *)(local_34 + (int)span_data), iVar7 < *piVar6;
            iVar7 = iVar7 + 1) {
          iVar1 = iVar8 + 0x44;
          iVar3 = *(int *)(iVar8 + 4 + (int)piVar6);
          iVar8 = iVar8 + 4;
          (*pCVar4)((void *)(iVar2 + iVar3),(void *)((int)sprite_data + iVar3 + iVar5),
                    *(int *)(iVar1 + (int)piVar6));
        }
        local_34 = local_34 + 0x84;
        local_38 = local_38 + 4;
        local_2c = local_2c + 1;
      } while (local_2c <= g_ClipBottom);
    }
  }
  else {
    local_30 = g_ClipTop;
    if (g_ClipTop <= g_ClipBottom) {
      local_3c = g_ClipTop * 0x84;
      local_40 = g_ClipTop << 2;
      do {
        iVar2 = *(int *)((int)g_ScreenBufferArray + local_40);
        iVar5 = local_30 * g_WindowWidth;
        iVar7 = 0;
        for (iVar8 = 0; piVar6 = (int *)(local_3c + (int)span_data), iVar8 < *piVar6;
            iVar8 = iVar8 + 1) {
          iVar1 = iVar7 + 0x44;
          iVar3 = *(int *)(iVar7 + 4 + (int)piVar6);
          iVar7 = iVar7 + 4;
          (*pCVar4)((void *)(iVar3 * 2 + iVar2),(void *)((int)sprite_data + iVar3 + iVar5),
                    *(int *)(iVar1 + (int)piVar6));
        }
        local_3c = local_3c + 0x84;
        local_40 = local_40 + 4;
        local_30 = local_30 + 1;
      } while (local_30 <= g_ClipBottom);
    }
  }
  return;
}
