// Name: core_inv.cpp_loadAssets_FUN_004fd220
// Address: 004fd220
// Address Range: [[004fd220, 004fd502]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_loadAssets_FUN_004fd220(void)

#include "nocturne.h"

void __cdecl core_inv_cpp_loadAssets_FUN_004fd220(void)

{
  _FILE *p_Var1;
  int iVar2;
  
  g_InventoryScreenHeight = g_WindowHeight;
  p_Var1 = engine_dosio_cpp_getFile_FUN_00481a50
                     ("data","invsize.txt","rt");
  if (p_Var1 != (_FILE *)0x0) {
    _fscanf(p_Var1,"%d,%d\n",&g_InventoryWidth,&g_InventoryHeight);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var1,"..\\core\\inv.cpp",313);
  }
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0
            (&g_InvBackgroundBitmap,"invback",g_InventoryWidth,g_InventoryHeight);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0
            (&g_InvBackground2Bitmap,"invback2",g_InventoryHeight,g_InventoryHeight);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0
            (&g_WeapBackgroundBitmap,"weapback",g_InventoryWidth,g_InventoryHeight);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0
            (&g_WeapBackground2Bitmap,"weapback2",g_InventoryHeight,g_InventoryHeight);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0
            (&g_BatteryIconBitmap,"battery",0x10,0x20);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0(&g_HealthBar1Bitmap,"hbar1",0x1b,0x40)
  ;
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0(&g_HealthBar2Bitmap,"hbar2",0x1b,0x40)
  ;
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0
            (&g_TommyClipIconBitmap,"tommyclip24x24",0x18,0x18);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0
            (&g_BulletIconBitmap,"bullet24x24",0x18,0x18);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0
            (&g_LithiumIconBitmap,"lithium24x24",0x18,0x18);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0
            (&g_MercuryBulletIconBitmap,"mercurybullet24x24",0x18,0x18);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0
            (&g_ShotShellIconBitmap,"shotshell24x24",0x18,0x18);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0
            (&g_SilverBulletIconBitmap,"silverbullet24x24",0x18,0x18);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0
            (&g_HolyBulletIconBitmap,"holybullet24x24",0x18,0x18);
  if (g_CGamePtr->game_pixy < 0x180) {
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_00410c20(&g_InvBackground2Bitmap,2,2);
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_00410c20(&g_WeapBackground2Bitmap,2,2);
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_00410c20(&g_HealthBar1Bitmap,2,2);
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_00410c20(&g_HealthBar2Bitmap,2,2);
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_00410c20(&g_TommyClipIconBitmap,2,2);
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_00410c20(&g_BulletIconBitmap,2,2);
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_00410c20(&g_LithiumIconBitmap,2,2);
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_00410c20(&g_MercuryBulletIconBitmap,2,2);
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_00410c20(&g_ShotShellIconBitmap,2,2);
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_00410c20(&g_SilverBulletIconBitmap,2,2);
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_00410c20(&g_HolyBulletIconBitmap,2,2);
  }
  g_ItemDefinitionCount = 0;
  p_Var1 = engine_dosio_cpp_getFile_FUN_00481a50
                     (&s_EmptyChar_006304c1,"itemlist.txt","rt");
  if (p_Var1 != (_FILE *)0x0) {
    while ((p_Var1->_flag & 0x10) == 0) {
      iVar2 = core_inv_cpp_loadItem_FUN_004fcfe0
                        (g_ItemDefinitionArray + g_ItemDefinitionCount,p_Var1);
      if (iVar2 == 0) break;
      g_ItemDefinitionCount = g_ItemDefinitionCount + 1;
    }
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var1,"..\\core\\inv.cpp",361);
  }
  return;
}
