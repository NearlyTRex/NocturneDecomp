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
  
  _DAT_01cc30a0 = g_WindowHeight;
  p_Var1 = engine_dosio_cpp_getFile_FUN_00456a60
                     ("data","invsize.txt","rt");
  if (p_Var1 != (_FILE *)0x0) {
    _fscanf(p_Var1,"%d,%d\n",&INT_005bab60,&INT_005bab64);
    _fclose(p_Var1);
  }
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0
            (&g_InvBackgroundBitmap,"invback",INT_005bab60,INT_005bab64);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0
            (&g_InvBackground2Bitmap,"invback2",INT_005bab64,INT_005bab64);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0
            (&g_WeapBackgroundBitmap,"weapback",INT_005bab60,INT_005bab64);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0
            (&g_WeapBackground2Bitmap,"weapback2",INT_005bab64,INT_005bab64);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0
            (&g_BatteryIconBitmap,"battery",0x10,0x20);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0(&g_HealthBar1Bitmap,"hbar1",0x1b,0x40)
  ;
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0(&g_HealthBar2Bitmap,"hbar2",0x1b,0x40)
  ;
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0
            (&g_TommyClipIconBitmap,"tommyclip24x24",0x18,0x18);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0
            (&g_BulletIconBitmap,"bullet24x24",0x18,0x18);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0
            (&g_LithiumIconBitmap,"lithium24x24",0x18,0x18);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0
            (&g_MercuryBulletIconBitmap,"mercurybullet24x24",0x18,0x18);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0
            (&g_ShotShellIconBitmap,"shotshell24x24",0x18,0x18);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0
            (&g_SilverBulletIconBitmap,"silverbullet24x24",0x18,0x18);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0
            (&g_HolyBulletIconBitmap,"holybullet24x24",0x18,0x18);
  if (g_CGamePtr->game_pixy < 0x180) {
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040e9e0(&g_InvBackground2Bitmap,2,2);
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040e9e0(&g_WeapBackground2Bitmap,2,2);
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040e9e0(&g_HealthBar1Bitmap,2,2);
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040e9e0(&g_HealthBar2Bitmap,2,2);
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040e9e0(&g_TommyClipIconBitmap,2,2);
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040e9e0(&g_BulletIconBitmap,2,2);
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040e9e0(&g_LithiumIconBitmap,2,2);
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040e9e0(&g_MercuryBulletIconBitmap,2,2);
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040e9e0(&g_ShotShellIconBitmap,2,2);
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040e9e0(&g_SilverBulletIconBitmap,2,2);
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040e9e0(&g_HolyBulletIconBitmap,2,2);
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
