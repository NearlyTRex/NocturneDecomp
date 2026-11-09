// Name: core_inv.cpp_FUN_004f70e0
// Address: 004f70e0
// Address Range: [[004f70e0, 004f759a]]
// Convention: unknown
// Signature: void core_inv_cpp_FUN_004f70e0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_inv_cpp_FUN_004f70e0(void)

{
  char cVar1;
  _FILE *p_Var2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  _DAT_01d1bc5c = DAT_0061b49c;
  p_Var2 = engine_dosio_cpp_FUN_00479180(&DAT_005e6087,"invsize.txt",&DAT_005e6078);
  if (p_Var2 != (_FILE *)0x0) {
    _fscanf(p_Var2,"%d,%d\n",&DAT_0061f1a0,&DAT_0061f1a4);
    _fclose(p_Var2);
  }
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220
            (&CAlphaBitmap_01d08d78,"invback",0x000000D0,0x00000060);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220
            (&CAlphaBitmap_01d08d8c,"invback2",0x00000060,0x00000060);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220
            (&CAlphaBitmap_01d08da0,"weapback",0x000000D0,0x00000060);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220
            (&CAlphaBitmap_01d08db4,"weapback2",0x00000060,0x00000060);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220
            (&CAlphaBitmap_01d1b9d0,"battery",0x10,0x20);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220
            (&CAlphaBitmap_01d1b9e4,"hbar1",0x1b,0x40);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220
            (&CAlphaBitmap_01d1b9f8,"hbar2",0x1b,0x40);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220
            (&CAlphaBitmap_01d1ba0c,"tommyclip24x24",0x18,0x18);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220
            (&CAlphaBitmap_01d1ba20,"bullet24x24",0x18,0x18);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220
            (&CAlphaBitmap_01d1ba34,"lithium24x24",0x18,0x18);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220
            (&CAlphaBitmap_01d1ba48,"mercurybullet24x24",0x18,0x18);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220
            (&CAlphaBitmap_01d1ba5c,"shotshell24x24",0x18,0x18);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220
            (&CAlphaBitmap_01d1ba70,"silverbullet24x24",0x18,0x18);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220
            (&CAlphaBitmap_01d1ba84,"holybullet24x24",0x18,0x18);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220
            (&CAlphaBitmap_01d1baf4,"sps100x82",100,0x52);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220
            (CAlphaBitmap_ARRAY_01d1bb08,"spsf1",0x40,0x40);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220
            (CAlphaBitmap_ARRAY_01d1bb08 + 1,"spsf2",0x40,0x40);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220
            (CAlphaBitmap_ARRAY_01d1bb08 + 2,"spsf3",0x40,0x40);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220
            (CAlphaBitmap_ARRAY_01d1bb08 + 3,"spsf4",0x40,0x40);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220
            (CAlphaBitmap_ARRAY_01d1bb08 + 4,"spsl1",0x40,0x40);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220
            (CAlphaBitmap_ARRAY_01d1bb08 + 5,"spsl2",0x40,0x40);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220
            (CAlphaBitmap_ARRAY_01d1bb08 + 6,"spsl3",0x40,0x40);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220
            (CAlphaBitmap_ARRAY_01d1bb08 + 7,"spsl4",0x40,0x40);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220
            (CAlphaBitmap_ARRAY_01d1bb08 + 8,"spsm1",0x40,0x40);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220
            (CAlphaBitmap_ARRAY_01d1bb08 + 9,"spsm2",0x40,0x40);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220
            (CAlphaBitmap_ARRAY_01d1bb08 + 10,"spsm3",0x40,0x40);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220
            (CAlphaBitmap_ARRAY_01d1bb08 + 0xb,"spsm4",0x40,0x40);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220
            (CAlphaBitmap_ARRAY_01d1bb08 + 0xc,"spss1",0x40,0x40);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220
            (CAlphaBitmap_ARRAY_01d1bb08 + 0xd,"spss2",0x40,0x40);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220
            (CAlphaBitmap_ARRAY_01d1bb08 + 0xe,"spss3",0x40,0x40);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220
            (CAlphaBitmap_ARRAY_01d1bb08 + 0xf,"spss4",0x40,0x40);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220
            (&CAlphaBitmap_01d1ba98,"compass_background",0x40,0x40);
  pcVar4 = "compass_arrow.raw";
  pcVar5 = &DAT_01d1bab4;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  engine_texture_cpp_FUN_00597a20(0x1d1baac);
  _DAT_01d1bc48 = 0xffffffff;
  if (*(int *)&g_CGamePtr->field_0x4 < 0x180) {
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040d840(&CAlphaBitmap_01d08d8c,2,2);
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040d840(&CAlphaBitmap_01d08db4,2,2);
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040d840(&CAlphaBitmap_01d1b9e4,2,2);
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040d840(&CAlphaBitmap_01d1b9f8,2,2);
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040d840(&CAlphaBitmap_01d1ba0c,2,2);
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040d840(&CAlphaBitmap_01d1ba20,2,2);
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040d840(&CAlphaBitmap_01d1ba34,2,2);
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040d840(&CAlphaBitmap_01d1ba48,2,2);
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040d840(&CAlphaBitmap_01d1ba5c,2,2);
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040d840(&CAlphaBitmap_01d1ba70,2,2);
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040d840(&CAlphaBitmap_01d1ba84,2,2);
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040d840(&CAlphaBitmap_01d1ba98,2,2);
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040d840(&CAlphaBitmap_01d1baf4,2,2);
  }
  _DAT_01d08dc8 = 0;
  p_Var2 = engine_dosio_cpp_FUN_00479180(&DAT_005e61d6,"itemlist.txt",&DAT_005e61c6);
  if (p_Var2 != (_FILE *)0x0) {
    while (((byte)p_Var2[0xc] & 0x10) == 0) {
      iVar3 = core_inv_cpp_loadItem_FUN_004f6e90(_DAT_01d08dc8 * 0x300 + 0x1d08dd0,p_Var2);
      if (iVar3 == 0) break;
      _DAT_01d08dc8 = _DAT_01d08dc8 + 1;
    }
    _fclose(p_Var2);
  }
  return;
}
