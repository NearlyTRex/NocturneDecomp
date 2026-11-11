// Name: engine_2d.c_initGraphicsSystem_FUN_00401010
// Address: 00401010
// Address Range: [[00401010, 00401115]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_initGraphicsSystem_FUN_00401010(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_2d_c_initGraphicsSystem_FUN_00401010(void)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  CInStreamFile local_30;
  
  DAT_0061b4a0 = 0x20;
  wincore_wddvmem_cpp_FUN_005ac040(0x280,0x1e0);
  wincore_wddvmem_cpp_FUN_005ac300(0x280,0x1e0,0x20);
  engine_2d_c_FUN_00401590("vga.act");
  engine_2d_c_loadOrBuildColorMap_FUN_00402940("vga.map");
  wincore_wddvmem_cpp_setupColorPalette_FUN_005acec0();
  _DAT_01c4f030 = 0xffffffff;
  uVar3 = 1;
  iVar2 = 4;
  do {
    uVar1 = (ulonglong)uVar3;
    uVar3 = uVar3 + 1;
    *(int *)(&DAT_01c4f030 + iVar2) = (int)(0xffffffff / uVar1);
    iVar2 = iVar2 + 4;
  } while (uVar3 < 0x640);
  unkclass_instream_cpp_CInStreamFile_ctor_FUN_005a08d0(&local_30);
  iVar2 = support_trstream_cpp_CInStreamFile_openInDirectory_FUN_005a0fd0
                    (&local_30,&DAT_005d2030,"default.act",1);
  if (iVar2 == 0) {
    unkclass_instream_cpp_CInStreamFile_dtor_FUN_005a0a50(&local_30,0);
    return;
  }
  unkaddr_0059f520_cpp_CInStreamFile_read_FUN_005a0c10(&local_30,(uint *)0x1c4ecf8,0x300);
  unkaddr_0059f520_cpp_CInStreamFile_close_FUN_005a0dc0(&local_30);
  unkclass_instream_cpp_CInStreamFile_dtor_FUN_005a0a50(&local_30,0);
  return;
}
