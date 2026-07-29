// Name: engine_2d.c_FUN_00401010
// Address: 00401010
// Address Range: [[00401010, 0040129a]]
// Convention: unknown
// Signature: void engine_2d_c_FUN_00401010(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_2d_c_FUN_00401010(void)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  _FILE *p_Var4;
  ulong size;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  
  iVar3 = wincore_wddvmem_cpp_FUN_00552b40(DAT_005b761c,DAT_005b7620);
  if (iVar3 == 0) {
    PTR_01cc4800 = "..\\engine\\2d.c";
    INT_01cc4804 = 0x84;
    core_main_c_FUN_004c8440("No room for frame buffer.  Please run SETUP");
  }
  wincore_wddvmem_cpp_setScreenResolution_FUN_00552e00
            (*(int *)(&DAT_005aca6c + DAT_006af628 * 8),*(int *)(&DAT_005aca70 + DAT_006af628 * 8),8
            );
  engine_2d_c_FUN_00401bd0("vga.act");
  engine_2d_c_FUN_00403460("vga.lte");
  engine_2d_c_FUN_00403630("vga.map");
  engine_2d_c_FUN_00401990("vga.act");
  wincore_wddvmem_cpp_setupColorPalette_FUN_005537e0();
  p_Var4 = engine_dosio_cpp_getFile_FUN_00456a60
                     ("startup","font.ndx","rb");
  if (p_Var4 == (_FILE *)0x0) {
    PTR_01cc4800 = "..\\engine\\2d.c";
    INT_01cc4804 = 0xa1;
    core_main_c_FUN_004c8440("Unable to open font.ndx");
  }
  puVar5 = &DAT_006afabc;
  do {
    puVar5 = puVar5 + 1;
    _fscanf(p_Var4,"%d\n");
  } while (puVar5 != (uint *)0x6afc3c);
  _fclose(p_Var4);
  size = engine_dosio_cpp_getFileSize_FUN_004568c0("startup","font.bin");
  DAT_006afa38 = malloc(size);
  if (DAT_006afa38 == (void *)0x0) {
    PTR_01cc4800 = "..\\engine\\2d.c";
    INT_01cc4804 = 0xaa;
    core_main_c_FUN_004c8440("Unable to malloc font memory");
  }
  p_Var4 = engine_dosio_cpp_getFile_FUN_00456a60
                     ("startup","font.bin","rb");
  if (p_Var4 == (_FILE *)0x0) {
    PTR_01cc4800 = "..\\engine\\2d.c";
    INT_01cc4804 = 0xac;
    core_main_c_FUN_004c8440("Unable to open font.bin");
  }
  _fread(DAT_006afa38,size,1,p_Var4);
  _fclose(p_Var4);
  iVar3 = 0x80;
  iVar6 = 0;
  do {
    iVar1 = *(int *)(&DAT_006afa3c + iVar3);
    *(int *)(iVar3 + 0x6afe3c) = iVar6 + (int)DAT_006afa38;
    iVar3 = iVar3 + 4;
    iVar6 = iVar6 + iVar1 * 0x17;
  } while (iVar3 != 0x200);
  uVar7 = 1;
  _DAT_01c00c80 = 0xffffffff;
  iVar3 = 4;
  do {
    uVar2 = (ulonglong)uVar7;
    uVar7 = uVar7 + 1;
    *(int *)(&DAT_01c00c80 + iVar3) = (int)(0xffffffff / uVar2);
    iVar3 = iVar3 + 4;
  } while (uVar7 < 0x640);
  p_Var4 = engine_dosio_cpp_getFile_FUN_00456a60
                     ("art","default.act","rb");
  if (p_Var4 == (_FILE *)0x0) {
    return;
  }
  _fread((void *)0x1c00948,0x300,1,p_Var4);
  _fclose(p_Var4);
  return;
}
