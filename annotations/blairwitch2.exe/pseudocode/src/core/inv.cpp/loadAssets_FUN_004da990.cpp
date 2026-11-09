// Name: core_inv.cpp_loadAssets_FUN_004da990
// Address: 004da990
// Address Range: [[004da990, 004dacb8]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_loadAssets_FUN_004da990(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_inv_cpp_loadAssets_FUN_004da990(void)

{
  char cVar1;
  _FILE *p_Var2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  _DAT_01d02f40 = DAT_006141bc;
  p_Var2 = engine_dosio_cpp_FUN_00460c70(&DAT_005db441,"invsize.txt",&DAT_005db432);
  if (p_Var2 != (_FILE *)0x0) {
    _fscanf(p_Var2,"%d,%d\n",&DAT_00617cd0,&DAT_00617cd4);
    _fclose(p_Var2);
  }
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0
            (&CAlphaBitmap_01cf01b0,"invback",0x000000D0,0x00000060);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0
            (&CAlphaBitmap_01cf01c4,"invback2",0x00000060,0x00000060);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0
            (&CAlphaBitmap_01cf01d8,"weapback",0x000000D0,0x00000060);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0
            (&CAlphaBitmap_01cf01ec,"weapback2",0x00000060,0x00000060);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0
            (&CAlphaBitmap_01d02e08,"battery",0x10,0x20);
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
  pcVar5 = &DAT_01d02eec;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  engine_texture_cpp_FUN_00574e00(0x1d02ee4);
  if (*(int *)&g_CGamePtr->field_0x4 < 0x180) {
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
  _DAT_01cf0200 = 0;
  p_Var2 = engine_dosio_cpp_FUN_00460c70(&DAT_005db526,"itemlist.txt",&DAT_005db516);
  if (p_Var2 != (_FILE *)0x0) {
    while (((byte)p_Var2[0xc] & 0x10) == 0) {
      iVar3 = core_inv_cpp_loadItem_FUN_004da720(_DAT_01cf0200 * 0x300 + 0x1cf0208,p_Var2);
      if (iVar3 == 0) break;
      _DAT_01cf0200 = _DAT_01cf0200 + 1;
    }
    _fclose(p_Var2);
  }
  return;
}
