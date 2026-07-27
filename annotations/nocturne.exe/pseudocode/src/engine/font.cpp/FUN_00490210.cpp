// Name: engine_font.cpp_FUN_00490210
// Address: 00490210
// Address Range: [[00490210, 00490417]]
// Convention: unknown
// Signature: void engine_font_cpp_FUN_00490210(int param_1,undefined4 param_2)

#include "nocturne.h"

void engine_font_cpp_FUN_00490210(int param_1,uint param_2)

{
  int iVar1;
  byte local_22c [256];
  byte local_12c [256];
  uint local_2c;
  uint local_28;
  int local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  
  iVar1 = engine_dosio_cpp_getFile_FUN_00456a60("art",param_2,"rt");
  if (iVar1 == 0) {
    return;
  }
  _fgets(local_12c,0xff,iVar1);
  _fscanf(iVar1,"%s\n",local_22c);
  _fgets(local_12c,0xff,iVar1);
  _fscanf(iVar1,"%d,%d\n",&local_2c,&local_28);
  _fgets(local_12c,0xff,iVar1);
  _fscanf(iVar1,"%d,%d\n",&local_24,&local_20);
  _fgets(local_12c,0xff,iVar1);
  _fscanf(iVar1,"%d\n",&local_1c);
  _fgets(local_12c,0xff,iVar1);
  _fscanf(iVar1,"%d\n",&local_18);
  _fgets(local_12c,0xff,iVar1);
  _fscanf(iVar1,"%d,%d\n",&local_14,&local_10);
  _fclose(iVar1);
  if ((local_24 == 0x20) && (local_20 == 0xff)) {
    engine_font_cpp_CBitFont_openFontFile_FUN_0048ff40(param_1,local_22c,local_2c,local_28,local_1c)
    ;
  }
  else {
    engine_font_cpp_CBitFont_loadNewBitmap_FUN_004901d0
              (param_1,local_22c,local_2c,local_28,local_24,local_20,local_1c);
  }
  *(uint *)(param_1 + 0x25e8) = local_18;
  *(uint *)(param_1 + 0x317c) = local_14;
  *(uint *)(param_1 + 0x3180) = local_10;
  return;
}
