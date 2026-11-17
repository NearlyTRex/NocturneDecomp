// Name: cockpit_ckptutil.c_blitSpanBasedSpriteVerticallyClipped_FUN_0042d850
// Address: 0042d850
// Address Range: [[0042d850, 0042d9e6]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_blitSpanBasedSpriteVerticallyClipped_FUN_0042d850(void *sprite_data,void *span_data)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_blitSpanBasedSpriteVerticallyClipped_FUN_0042d850(void *sprite_data,void *span_data)

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
  
  pCVar4 = cockpit_ckptutil_c_getColorConversionFunction_FUN_0042c410();
  if (g_INT_006141c0 == 8) {
    iStack_2c = g_INT_01c35e4c;
    if (g_INT_01c35e4c <= g_INT_01c35e54) {
      iStack_34 = g_INT_01c35e4c * 0x84;
      iStack_38 = g_INT_01c35e4c << 2;
      do {
        iVar2 = *(int *)((int)g_ARRAY_PTR_01c2a38c + iStack_38);
        iVar5 = iStack_2c * g_INT_006141b8;
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
      } while (iStack_2c <= g_INT_01c35e54);
    }
  }
  else {
    iStack_30 = g_INT_01c35e4c;
    if (g_INT_01c35e4c <= g_INT_01c35e54) {
      iStack_3c = g_INT_01c35e4c * 0x84;
      iStack_40 = g_INT_01c35e4c << 2;
      do {
        iVar2 = *(int *)((int)g_ARRAY_PTR_01c2a38c + iStack_40);
        iVar5 = iStack_30 * g_INT_006141b8;
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
      } while (iStack_30 <= g_INT_01c35e54);
    }
  }
  return;
}
