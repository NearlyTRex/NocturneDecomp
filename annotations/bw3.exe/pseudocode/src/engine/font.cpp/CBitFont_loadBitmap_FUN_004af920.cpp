// Name: engine_font.cpp_CBitFont_loadBitmap_FUN_004af920
// Address: 004af920
// Address Range: [[004af920, 004afbec]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_CBitFont_loadBitmap_FUN_004af920(CBitFont *this_ptr,char *filename,int width,int height,int first_char)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_font_cpp_CBitFont_loadBitmap_FUN_004af920(CBitFont *this_ptr,char *filename,int width,int height,int first_char)

{
  CBitFont CVar1;
  int iVar2;
  uint uVar3;
  CBitFont *pCVar4;
  int size;
  CBitFont *pCVar5;
  char local_468 [300];
  char local_33c [256];
  char local_23c [256];
  char local_13c [256];
  CInStreamFile local_3c;
  
  if (3 < *(int *)this_ptr) {
    _DAT_01d71de0 = "..\\engine\\font.cpp";
    _DAT_01d71de4 = 0xfa;
    core_main_c_FUN_004e4330("Too many bitmaps");
  }
  pCVar5 = this_ptr + *(int *)this_ptr * 0x50 + 4;
  pCVar4 = (CBitFont *)filename;
  do {
    CVar1 = *pCVar4;
    *pCVar5 = CVar1;
    if (CVar1 == (CBitFont)0x0) break;
    CVar1 = pCVar4[1];
    pCVar4 = pCVar4 + 2;
    pCVar5[1] = CVar1;
    pCVar5 = pCVar5 + 2;
  } while (CVar1 != (CBitFont)0x0);
  strupr((char *)(this_ptr + *(int *)this_ptr * 0x50 + 4));
  size = width * height;
  *(int *)(this_ptr + *(int *)this_ptr * 4 + 0x1a4) = width;
  iVar2 = engine_dosio_cpp_getFileSize_FUN_004657f0(&DAT_005c1de8,filename);
  if (iVar2 < size) {
    _sprintf(local_468,"Invalid font file size (%s).");
    _DAT_01d71de0 = "..\\engine\\font.cpp";
    _DAT_01d71de4 = 0x10f;
    core_main_c_FUN_004e4330(local_468);
  }
  uVar3 = FUN_005a40df(size);
  *(uint *)(this_ptr + *(int *)this_ptr * 4 + 0x194) = uVar3;
  if (*(int *)(this_ptr + *(int *)this_ptr * 4 + 0x194) == 0) {
    _sprintf(local_468,"Unable to allocate memory for font bitmap (%s).");
    _DAT_01d71de4 = 0x117;
    _DAT_01d71de0 = "..\\engine\\font.cpp";
    core_main_c_FUN_004e4330(local_468);
  }
  cockpit_ckptutil_c_FUN_00438ef0(filename,*(void **)(this_ptr + *(int *)this_ptr * 4 + 0x194),size)
  ;
  engine_dosio_cpp_splitPath_FUN_00465e50(filename,(char *)0x0,local_23c,local_13c,(char *)0x0);
  engine_dosio_cpp_makePath_FUN_00465e80(local_33c,(char *)0x0,local_23c,local_13c,&DAT_005c1e5f);
  unkafter_turret_cpp_CInStreamFile_ctor_FUN_005738c0(&local_3c);
  iVar2 = support_trstream_cpp_FUN_00573fc0(&local_3c,&DAT_005c1e63,local_33c,1);
  if (iVar2 == 0) {
    _DAT_01d71de0 = "..\\engine\\font.cpp";
    _DAT_01d71de4 = 0x128;
    core_main_c_FUN_004e4330("CBitFont::addBitmap - File not found : %s",local_33c);
  }
  else {
    iVar2 = 0;
    do {
      CVar1 = (CBitFont)unkafter_turret_cpp_FUN_00573aa0(&local_3c);
      this_ptr[iVar2 + *(int *)this_ptr * 0x300 + 0x1b4] = CVar1;
      CVar1 = (CBitFont)unkafter_turret_cpp_FUN_00573aa0(&local_3c);
      this_ptr[iVar2 + *(int *)this_ptr * 0x300 + 0x1b5] = CVar1;
      CVar1 = (CBitFont)unkafter_turret_cpp_FUN_00573aa0(&local_3c);
      iVar2 = iVar2 + 3;
      this_ptr[iVar2 + *(int *)this_ptr * 0x300 + 0x1b3] = CVar1;
    } while (iVar2 != 0x300);
    unkafter_turret_cpp_FUN_00573db0(&local_3c);
  }
  engine_font_cpp_FUN_004b0510(this_ptr,*(uint *)this_ptr,width,height,first_char);
  *(int *)this_ptr = *(int *)this_ptr + 1;
  engine_font_cpp_CBitFont_remapPalette_FUN_004b31c0(this_ptr);
  unkafter_turret_cpp_CInStreamFile_dtor_FUN_00573a40(&local_3c,0);
  return;
}
