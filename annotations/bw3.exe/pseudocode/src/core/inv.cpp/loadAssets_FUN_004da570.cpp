// Name: core_inv.cpp_loadAssets_FUN_004da570
// Address: 004da570
// Address Range: [[004da570, 004da833]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_loadAssets_FUN_004da570(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_inv_cpp_loadAssets_FUN_004da570(void)

{
  _FILE *p_Var1;
  int iVar2;
  
  _DAT_01d70a34 = DAT_005fba1c;
  p_Var1 = engine_dosio_cpp_FUN_004659c0(&DAT_005c5f4e,"invsize.txt",&DAT_005c5f3f);
  if (p_Var1 != (_FILE *)0x0) {
    _fscanf(p_Var1,"%d,%d\n");
    _fclose(p_Var1);
  }
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
            (&CAlphaBitmap_01d70890,"phb_h",0x30,0x40);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
            (&CAlphaBitmap_01d708a4,"phb_o",0x30,0x40);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
            (&CAlphaBitmap_01d708b8,"phb_m",0x30,0x40);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460(&CAlphaBitmap_01d708cc,&DAT_005c5f6c,0x40,0x40)
  ;
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
            (CAlphaBitmap_ARRAY_01d708e0 + 0xc,"sps00",0x40,0x40);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
            (CAlphaBitmap_ARRAY_01d708e0 + 0xd,"sps01",0x40,0x40);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
            (CAlphaBitmap_ARRAY_01d708e0 + 0xe,"sps02",0x40,0x40);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
            (CAlphaBitmap_ARRAY_01d708e0 + 0xf,"sps03",0x40,0x40);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
            (CAlphaBitmap_ARRAY_01d708e0 + 8,"sps04",0x40,0x40);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
            (CAlphaBitmap_ARRAY_01d708e0 + 9,"sps05",0x40,0x40);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
            (CAlphaBitmap_ARRAY_01d708e0 + 10,"sps06",0x40,0x40);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
            (CAlphaBitmap_ARRAY_01d708e0 + 0xb,"sps07",0x40,0x40);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
            (CAlphaBitmap_ARRAY_01d708e0 + 4,"sps08",0x40,0x40);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
            (CAlphaBitmap_ARRAY_01d708e0 + 5,"sps09",0x40,0x40);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
            (CAlphaBitmap_ARRAY_01d708e0 + 6,"sps10",0x40,0x40);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
            (CAlphaBitmap_ARRAY_01d708e0 + 7,"sps11",0x40,0x40);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
            (CAlphaBitmap_ARRAY_01d708e0,"sps12",0x40,0x40);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
            (CAlphaBitmap_ARRAY_01d708e0 + 1,"sps13",0x40,0x40);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
            (CAlphaBitmap_ARRAY_01d708e0 + 2,"sps14",0x40,0x40);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
            (CAlphaBitmap_ARRAY_01d708e0 + 3,"sps15",0x40,0x40);
  _DAT_01d70a20 = 0xffffffff;
  if (g_CGamePtr->game_pixy < 0x180) {
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040da80(&CAlphaBitmap_01d70890,2,2);
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040da80(&CAlphaBitmap_01d708a4,2,2);
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040da80(&CAlphaBitmap_01d708b8,2,2);
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040da80(&CAlphaBitmap_01d708cc,2,2);
  }
  _DAT_01d5dc88 = 0;
  p_Var1 = engine_dosio_cpp_FUN_004659c0(&DAT_005c5fe1,"itemlist.txt",&DAT_005c5fd1);
  if (p_Var1 != (_FILE *)0x0) {
    while ((p_Var1->_flag & 0x10) == 0) {
      iVar2 = core_inv_cpp_loadItem_FUN_004da320
                        ((SInventoryItemInfo *)(_DAT_01d5dc88 * 0x300 + 0x1d5dc90),p_Var1);
      if (iVar2 == 0) break;
      _DAT_01d5dc88 = _DAT_01d5dc88 + 1;
    }
    _fclose(p_Var1);
  }
  return;
}
