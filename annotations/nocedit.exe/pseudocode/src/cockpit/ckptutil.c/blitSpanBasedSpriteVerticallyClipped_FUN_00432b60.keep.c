// Name: cockpit_ckptutil.c_blitSpanBasedSpriteVerticallyClipped_FUN_00432b60
// Address: 00432b60
// MANUAL RECONSTRUCTION
// Address Range: [[00432b60, 00432cf6]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_blitSpanBasedSpriteVerticallyClipped_FUN_00432b60(void *sprite_data,void *span_data)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_blitSpanBasedSpriteVerticallyClipped_FUN_00432b60(void *sprite_data,void *span_data)

{
  byte *iVar2;
  ushort *iVar6;
  int iVar9;
  ColorConversionFunc *pCVar4;
  int iVar5;
  int *piVar6;
  int iVar10;
  int *piVar11;
  int iVar7;
  int iVar13;
  int local_34;
  int local_3c;
  int local_30;
  int local_2c;
  int iVar3;
  byte *p_sprite;

  pCVar4 = cockpit_ckptutil_c_getColorConversionFunction_FUN_00431760();
  p_sprite = (byte *)sprite_data;
  if (g_BitsPerPixel == 8) {
    local_2c = g_ClipTop;
    if (g_ClipTop <= g_ClipBottom) {
      local_34 = g_ClipTop * 0x84;
      do {
        iVar2 = (byte *)g_ScreenBufferArray[local_2c];
        iVar5 = local_2c * g_WindowWidth;
        for (iVar7 = 0; piVar6 = (int *)((char *)span_data + local_34), iVar7 < *piVar6;
            iVar7 = iVar7 + 1) {
          iVar3 = piVar6[iVar7 + 1];
          (*pCVar4)(iVar2 + iVar3, p_sprite + iVar3 + iVar5, piVar6[iVar7 + 17]);
        }
        local_34 = local_34 + 0x84;
        local_2c = local_2c + 1;
      } while (local_2c <= g_ClipBottom);
    }
  }
  else {
    local_30 = g_ClipTop;
    if (g_ClipTop <= g_ClipBottom) {
      local_3c = g_ClipTop * 0x84;
      do {
        iVar6 = (ushort *)g_ScreenBufferArray[local_30];
        iVar10 = local_30 * g_WindowWidth;
        for (iVar13 = 0; piVar11 = (int *)((char *)span_data + local_3c), iVar13 < *piVar11;
            iVar13 = iVar13 + 1) {
          iVar9 = piVar11[iVar13 + 1];
          (*pCVar4)(iVar6 + iVar9, p_sprite + iVar9 + iVar10, piVar11[iVar13 + 17]);
        }
        local_3c = local_3c + 0x84;
        local_30 = local_30 + 1;
      } while (local_30 <= g_ClipBottom);
    }
  }
  return;
}
