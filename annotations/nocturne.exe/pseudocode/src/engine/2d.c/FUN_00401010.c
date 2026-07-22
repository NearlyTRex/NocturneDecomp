// Name: FUN_00401010
// Address: 00401010
// Address Range: [[00401010, 0040129a]]
// Convention: unknown
// Signature: void FUN_00401010(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00401010(void)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  
  iVar3 = FUN_00552b40(DAT_005b761c,DAT_005b7620);
  if (iVar3 == 0) {
    _DAT_01cc4800 = "..\\engine\\2d.c";
    _DAT_01cc4804 = 0x84;
    FUN_004c8440("No room for frame buffer.  Please run SETUP");
  }
  wincore_wddvmem_cpp_setScreenResolution_FUN_00552e00
            (*(uint *)(&DAT_005aca6c + DAT_006af628 * 8),
             *(uint *)(&DAT_005aca70 + DAT_006af628 * 8),8);
  engine_2d_c_FUN_00401bd0("vga.act");
  engine_2d_c_FUN_00403460("vga.lte");
  engine_2d_c_FUN_00403630("vga.map");
  engine_2d_c_FUN_00401990("vga.act");
  wincore_wddvmem_cpp_setupColorPalette_FUN_005537e0();
  iVar3 = engine_dosio_cpp_getFile_FUN_00456a60
                    ("startup","font.ndx","rb");
  if (iVar3 == 0) {
    _DAT_01cc4800 = "..\\engine\\2d.c";
    _DAT_01cc4804 = 0xa1;
    FUN_004c8440("Unable to open font.ndx");
  }
  puVar5 = &DAT_006afabc;
  do {
    puVar6 = puVar5 + 1;
    _fscanf(iVar3,"%d\n",puVar5);
    puVar5 = puVar6;
  } while (puVar6 != (uint *)0x6afc3c);
  _fclose(iVar3);
  uVar4 = engine_dosio_cpp_getFileSize_FUN_004568c0("startup","font.bin");
  DAT_006afa38 = malloc(uVar4);
  if (DAT_006afa38 == 0) {
    _DAT_01cc4800 = "..\\engine\\2d.c";
    _DAT_01cc4804 = 0xaa;
    FUN_004c8440("Unable to malloc font memory");
  }
  iVar3 = engine_dosio_cpp_getFile_FUN_00456a60
                    ("startup","font.bin","rb");
  if (iVar3 == 0) {
    _DAT_01cc4800 = "..\\engine\\2d.c";
    _DAT_01cc4804 = 0xac;
    FUN_004c8440("Unable to open font.bin");
  }
  _fread(DAT_006afa38,uVar4,1,iVar3);
  _fclose(iVar3);
  iVar3 = 0x80;
  iVar7 = 0;
  do {
    iVar1 = *(int *)(&DAT_006afa3c + iVar3);
    *(int *)(iVar3 + 0x6afe3c) = iVar7 + DAT_006afa38;
    iVar3 = iVar3 + 4;
    iVar7 = iVar7 + iVar1 * 0x17;
  } while (iVar3 != 0x200);
  uVar8 = 1;
  _DAT_01c00c80 = 0xffffffff;
  iVar3 = 4;
  do {
    uVar2 = (ulonglong)uVar8;
    uVar8 = uVar8 + 1;
    *(int *)(&DAT_01c00c80 + iVar3) = (int)(0xffffffff / uVar2);
    iVar3 = iVar3 + 4;
  } while (uVar8 < 0x640);
  iVar3 = engine_dosio_cpp_getFile_FUN_00456a60("art","default.act","rb")
  ;
  if (iVar3 == 0) {
    return;
  }
  _fread(0x1c00948,0x300,1,iVar3);
  _fclose(iVar3);
  return;
}
