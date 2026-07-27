// Name: engine_font.cpp_CBitFont_loadBitmap_FUN_0048ff70
// Address: 0048ff70
// Address Range: [[0048ff70, 004901c7]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_CBitFont_loadBitmap_FUN_0048ff70(int *param_1,char *param_2,int param_3,int param_4,undefined4 param_5)

#include "nocturne.h"

void __cdecl engine_font_cpp_CBitFont_loadBitmap_FUN_0048ff70(int *param_1,char *param_2,int param_3,int param_4,uint param_5)

{
  char cVar1;
  byte uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  byte local_440 [300];
  byte local_314 [260];
  byte local_210 [256];
  byte local_110 [256];
  
  if (3 < *param_1) {
    PTR_01cc4800 = "..\\engine\\font.cpp";
    INT_01cc4804 = 0xd7;
    core_main_c_FUN_004c8440("Too many bitmaps");
  }
  piVar6 = param_1 + *param_1 * 0x14 + 1;
  pcVar4 = param_2;
  do {
    cVar1 = *pcVar4;
    *(char *)piVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    *(char *)((int)piVar6 + 1) = cVar1;
    piVar6 = (int *)((int)piVar6 + 2);
  } while (cVar1 != '\0');
  strupr(param_1 + *param_1 * 0x14 + 1);
  iVar5 = param_3 * param_4;
  param_1[*param_1 + 0x55] = param_3;
  iVar3 = engine_dosio_cpp_getFileSize_FUN_004568c0("art",param_2);
  if (iVar3 < iVar5) {
    _sprintf(local_440,"Invalid font file size (%s).",param_2);
    PTR_01cc4800 = "..\\engine\\font.cpp";
    INT_01cc4804 = 0xec;
    core_main_c_FUN_004c8440(local_440);
  }
  iVar3 = shape_memdbg_cpp_malloc_FUN_00564c18(iVar5);
  param_1[*param_1 + 0x51] = iVar3;
  if (param_1[*param_1 + 0x51] == 0) {
    _sprintf(local_440,"Unable to allocate memory for font bitmap (%s).",param_2);
    INT_01cc4804 = 0xf4;
    PTR_01cc4800 = "..\\engine\\font.cpp";
    core_main_c_FUN_004c8440(local_440);
  }
  cockpit_ckptutil_c_readBitmapFile_FUN_0042d240(param_2,param_1[*param_1 + 0x51],iVar5);
  splitpath(param_2,0,local_110,local_210,0);
  makepath(local_314,0,local_110,local_210,"act");
  iVar3 = engine_dosio_cpp_getFile_FUN_00456a60("art",local_314,"rb");
  if (iVar3 != 0) {
    iVar5 = 0;
    do {
      uVar2 = _fgetc(iVar3);
      *(byte *)((int)param_1 + iVar5 + *param_1 * 0x300 + 0x164) = uVar2;
      uVar2 = _fgetc(iVar3);
      *(byte *)((int)param_1 + iVar5 + *param_1 * 0x300 + 0x165) = uVar2;
      uVar2 = _fgetc(iVar3);
      iVar5 = iVar5 + 3;
      *(byte *)((int)param_1 + iVar5 + *param_1 * 0x300 + 0x163) = uVar2;
    } while (iVar5 != 0x300);
    _fclose(iVar3);
  }
  engine_font_cpp_FUN_00490470(param_1,*param_1,param_3,param_4,param_5);
  *param_1 = *param_1 + 1;
  engine_font_cpp_CBitFont_remapPalette_FUN_004931b0(param_1);
  return;
}
