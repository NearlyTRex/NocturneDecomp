// Name: core_main.c_showPromoScreen_FUN_004c8eb0
// Address: 004c8eb0
// Address Range: [[004c8eb0, 004c90d9]]
// Convention: unknown
// Signature: void core_main_c_showPromoScreen_FUN_004c8eb0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_main_c_showPromoScreen_FUN_004c8eb0(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *text;
  int iVar5;
  char local_110 [256];
  
  iVar1 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(_DAT_014b9900,0x58);
  wincore_winrun_cpp_getTime_FUN_00558a30();
  engine_2d_c_clearInputAndWait_FUN_00403f50();
  uVar2 = rand();
  _sprintf(local_110,"load%d",(uVar2 & 3) + 1);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0
            ((CAlphaBitmap *)0x1cc480c,local_110,0x280,0x1e0);
  engine_special_cpp_clearScreen_FUN_0052ee70();
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040e710((CAlphaBitmap *)0x1cc480c,0,0,0xffff);
  iVar3 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0
                    (_DAT_014b98f8,"In stores 10/26/99");
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (_DAT_014b98f8,"In stores 10/26/99",0x140 - iVar3 / 2,0xdc,7,0);
  iVar3 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0
                    (_DAT_014b98f8,"www.nocturnegame.com");
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (_DAT_014b98f8,"www.nocturnegame.com",0x140 - iVar3 / 2,0x1e0 - iVar1,7,0);
  iVar5 = 0xa0000;
  wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
  iVar3 = wincore_winrun_cpp_getTime_FUN_00558a30();
  do {
    wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
    iVar4 = wincore_winrun_cpp_getTime_FUN_00558a30();
    _DAT_01bd1d80 = (iVar4 - iVar3) / 0x12;
    if (0x7fffffff < _DAT_01bd1d80) {
      _DAT_01bd1d80 = 0;
    }
    if (0x4000 < (int)_DAT_01bd1d80) {
      _DAT_01bd1d80 = 0x4000;
    }
    iVar5 = iVar5 - _DAT_01bd1d80;
    iVar3 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x2a);
  } while (((iVar3 == 0) ||
           (iVar3 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,1), iVar3 == 0)) &&
          (iVar3 = iVar4, 0 < iVar5));
  text = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Press any key to continue...");
  iVar3 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0(_DAT_014b98f8,text);
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (_DAT_014b98f8,text,0x140 - iVar3 / 2,iVar1 * -2 + 0x1e0,7,0);
  wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
  engine_2d_c_clearInputAndWait_FUN_00403f50();
  wincore_winrun_cpp_getNextKeypress_FUN_00558b00();
  engine_2d_c_clearInputAndWait_FUN_00403f50();
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040e360((CAlphaBitmap *)0x1cc480c);
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040e360((CAlphaBitmap *)0x1cc4820);
  return;
}
