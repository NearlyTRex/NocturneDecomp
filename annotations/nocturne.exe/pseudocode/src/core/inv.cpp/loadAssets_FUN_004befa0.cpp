// Name: core_inv.cpp_loadAssets_FUN_004befa0
// Address: 004befa0
// Address Range: [[004befa0, 004bf26e]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_loadAssets_FUN_004befa0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_inv_cpp_loadAssets_FUN_004befa0(void)

{
  _FILE *p_Var1;
  int iVar2;
  
  _DAT_01cc30a0 = DAT_005b7620;
  p_Var1 = engine_dosio_cpp_getFile_FUN_00456a60
                     ("data","invsize.txt","rt");
  if (p_Var1 != (_FILE *)0x0) {
    _fscanf(p_Var1,"%d,%d\n");
    _fclose(p_Var1);
  }
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0
            ((CAlphaBitmap *)0x1cb0380,"invback",INT_005bab60,INT_005bab64);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0
            ((CAlphaBitmap *)0x1cb0394,"invback2",INT_005bab64,INT_005bab64);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0
            ((CAlphaBitmap *)0x1cb03a8,"weapback",INT_005bab60,INT_005bab64);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0
            ((CAlphaBitmap *)0x1cb03bc,"weapback2",INT_005bab64,INT_005bab64);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0
            ((CAlphaBitmap *)0x1cc2fd8,"battery",0x10,0x20);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0
            ((CAlphaBitmap *)0x1cc2fec,"hbar1",0x1b,0x40);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0
            ((CAlphaBitmap *)0x1cc3000,"hbar2",0x1b,0x40);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0
            ((CAlphaBitmap *)0x1cc3014,"tommyclip24x24",0x18,0x18);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0
            ((CAlphaBitmap *)0x1cc3028,"bullet24x24",0x18,0x18);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0
            ((CAlphaBitmap *)0x1cc303c,"lithium24x24",0x18,0x18);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0
            ((CAlphaBitmap *)0x1cc3050,"mercurybullet24x24",0x18,0x18);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0
            ((CAlphaBitmap *)0x1cc3064,"shotshell24x24",0x18,0x18);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0
            ((CAlphaBitmap *)0x1cc3078,"silverbullet24x24",0x18,0x18);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0
            ((CAlphaBitmap *)0x1cc308c,"holybullet24x24",0x18,0x18);
  if (*(int *)(0x01C775EC + 4) < 0x180) {
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040e9e0((CAlphaBitmap *)0x1cb0394,2,2);
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040e9e0((CAlphaBitmap *)0x1cb03bc,2,2);
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040e9e0((CAlphaBitmap *)0x1cc2fec,2,2);
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040e9e0((CAlphaBitmap *)0x1cc3000,2,2);
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040e9e0((CAlphaBitmap *)0x1cc3014,2,2);
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040e9e0((CAlphaBitmap *)0x1cc3028,2,2);
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040e9e0((CAlphaBitmap *)0x1cc303c,2,2);
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040e9e0((CAlphaBitmap *)0x1cc3050,2,2);
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040e9e0((CAlphaBitmap *)0x1cc3064,2,2);
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040e9e0((CAlphaBitmap *)0x1cc3078,2,2);
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040e9e0((CAlphaBitmap *)0x1cc308c,2,2);
  }
  _DAT_01cb03d0 = 0;
  p_Var1 = engine_dosio_cpp_getFile_FUN_00456a60
                     (&DAT_00586e60,"itemlist.txt","rt");
  if (p_Var1 != (_FILE *)0x0) {
    while ((p_Var1->_flag & 0x10) == 0) {
      iVar2 = core_inv_cpp_loadItem_FUN_004bed80
                        ((SInventoryItemInfo *)(_DAT_01cb03d0 * 0x300 + 0x1cb03d8),p_Var1);
      if (iVar2 == 0) break;
      _DAT_01cb03d0 = _DAT_01cb03d0 + 1;
    }
    _fclose(p_Var1);
  }
  return;
}
