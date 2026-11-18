// Name: core_inv.cpp_loadAssets_FUN_004da990
// Address: 004da990
// Address Range: [[004da990, 004dacb8]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_loadAssets_FUN_004da990(void)

#include "nocturne.h"

void __cdecl core_inv_cpp_loadAssets_FUN_004da990(void)

{
  char cVar1;
  _FILE *p_Var2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  g_InventoryScreenHeight = g_INT_006141bc;
  p_Var2 = engine_dosio_cpp_getFile_FUN_00460c70
                     ("data","invsize.txt","rt");
  if (p_Var2 != (_FILE *)0x0) {
    _fscanf(p_Var2,"%d,%d\n");
    _fclose(p_Var2);
  }
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0
            (&g_InvBackgroundBitmap,"invback",g_InventoryWidth,g_InventoryHeight);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0
            (&CAlphaBitmap_01cf01c4,"invback2",g_InventoryHeight,g_InventoryHeight);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0
            (&g_WeapBackgroundBitmap,"weapback",g_InventoryWidth,g_InventoryHeight);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0
            (&CAlphaBitmap_01cf01ec,"weapback2",g_InventoryHeight,g_InventoryHeight);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0
            (&g_BatteryIconBitmap,"battery",0x10,0x20);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0
            (&CAlphaBitmap_01d02e1c,"hbar1",0x1b,0x40);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0
            (&CAlphaBitmap_01d02e30,"hbar2",0x1b,0x40);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0
            (&CAlphaBitmap_01d02e44,"tommyclip24x24",0x18,0x18);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0
            (&CAlphaBitmap_01d02e58,"bullet24x24",0x18,0x18);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0
            (&CAlphaBitmap_01d02e6c,"lithium24x24",0x18,0x18);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0
            (&CAlphaBitmap_01d02e80,"mercurybullet24x24",0x18,0x18);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0
            (&CAlphaBitmap_01d02e94,"shotshell24x24",0x18,0x18);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0
            (&CAlphaBitmap_01d02ea8,"silverbullet24x24",0x18,0x18);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0
            (&CAlphaBitmap_01d02ebc,"holybullet24x24",0x18,0x18);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0
            (&CAlphaBitmap_01d02ed0,"compass_background",0x40,0x40);
  pcVar4 = "compass_arrow.raw";
  pcVar5 = g_SMRGLTextureBasic_01d02ee4.texture_name;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  engine_texture_cpp_ensureTextureLoaded_FUN_00574e00(&g_SMRGLTextureBasic_01d02ee4);
  if (g_CGamePtr->game_pixy < 0x180) {
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040dbd0(&CAlphaBitmap_01cf01c4,2,2);
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040dbd0(&CAlphaBitmap_01cf01ec,2,2);
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040dbd0(&CAlphaBitmap_01d02e1c,2,2);
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040dbd0(&CAlphaBitmap_01d02e30,2,2);
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040dbd0(&CAlphaBitmap_01d02e44,2,2);
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040dbd0(&CAlphaBitmap_01d02e58,2,2);
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040dbd0(&CAlphaBitmap_01d02e6c,2,2);
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040dbd0(&CAlphaBitmap_01d02e80,2,2);
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040dbd0(&CAlphaBitmap_01d02e94,2,2);
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040dbd0(&CAlphaBitmap_01d02ea8,2,2);
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040dbd0(&CAlphaBitmap_01d02ebc,2,2);
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040dbd0(&CAlphaBitmap_01d02ed0,2,2);
  }
  g_ItemDefinitionCount = 0;
  p_Var2 = engine_dosio_cpp_getFile_FUN_00460c70
                     (&g_CHAR_005db526,"itemlist.txt","rt");
  if (p_Var2 != (_FILE *)0x0) {
    while ((p_Var2->_flag & 0x10) == 0) {
      iVar3 = core_inv_cpp_loadItem_FUN_004da720
                        (g_ItemDefinitionArray + g_ItemDefinitionCount,p_Var2);
      if (iVar3 == 0) break;
      g_ItemDefinitionCount = g_ItemDefinitionCount + 1;
    }
    _fclose(p_Var2);
  }
  return;
}
