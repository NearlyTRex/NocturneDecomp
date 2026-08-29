// Name: core_main.c_showPromoScreen_FUN_00508340
// Address: 00508340
// MANUAL RECONSTRUCTION
// Address Range: [[00508340, 00508569]]
// Convention: __cdecl
// Signature: void __cdecl core_main_c_showPromoScreen_FUN_00508340(void)

#include "nocturne.h"

void __cdecl core_main_c_showPromoScreen_FUN_00508340(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar2;
  int iVar4;
  char *text;
  int iVar5;
  char local_110 [256];

  iVar1 = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(g_ThemeFont,0x58);
  wincore_winrun_cpp_getTime_FUN_005f2dc0();
  engine_2d_c_clearInputAndWait_FUN_00403260();
#if NOCTURNE_AUTHENTIC_RNG
  uVar2 = rand();
#else
  uVar2 = nocturne_rng_fx();
#endif
  _sprintf(local_110,"load%d",(uVar2 & 3) + 1);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0(&g_LoadingScreenBitmap1,local_110,0x280,0x1e0);
  engine_special_cpp_clearScreen_FUN_005b3e70();
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950(&g_LoadingScreenBitmap1,0,0,0xffff);
  iVar3 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80
                    (g_MediumFont,"In stores 10/26/99");
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (g_MediumFont,"In stores 10/26/99",0x140 - iVar3 / 2,0xdc,7,0);
  iVar2 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80
                    (g_MediumFont,"www.nocturnegame.com");
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (g_MediumFont,"www.nocturnegame.com",0x140 - iVar2 / 2,0x1e0 - iVar1,7,0);
  iVar5 = 0xa0000;
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  iVar2 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  do {
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    iVar4 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
    g_GlobalDeltaTimeInt = (iVar4 - iVar2) / 0x12;
    if (0x7fffffff < (uint)g_GlobalDeltaTimeInt) {
      g_GlobalDeltaTimeInt = 0;
    }
    if (0x4000 < g_GlobalDeltaTimeInt) {
      g_GlobalDeltaTimeInt = 0x4000;
    }
    iVar5 = iVar5 - g_GlobalDeltaTimeInt;
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
  } while (((iVar2 == 0) ||
           (iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_ESCAPE), iVar2 == 0)) &&
          (iVar2 = iVar4, 0 < iVar5));
  text = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Press any key to continue...");
  iVar2 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(g_MediumFont,text);
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (g_MediumFont,text,0x140 - iVar2 / 2,iVar1 * -2 + 0x1e0,7,0);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_00410560(&g_LoadingScreenBitmap1);
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_00410560(&g_LoadingScreenBitmap2);
  return;
}
