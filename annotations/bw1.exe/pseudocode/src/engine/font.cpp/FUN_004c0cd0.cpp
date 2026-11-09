// Name: engine_font.cpp_FUN_004c0cd0
// Address: 004c0cd0
// Address Range: [[004c0cd0, 004c0f9c]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_FUN_004c0cd0(CBitFont *this_ptr,char *filename,int width,int height,int first_char)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_font_cpp_FUN_004c0cd0(CBitFont *this_ptr,char *filename,int width,int height,int first_char)

{
  CBitFont CVar1;
  int iVar2;
  uint uVar3;
  CBitFont *pCVar4;
  int size;
  CBitFont *pCVar5;
  byte local_468 [300];
  char local_33c [256];
  char local_23c [256];
  char local_13c [256];
  CInStreamFile local_3c;
  
  if (3 < *(int *)this_ptr) {
    _DAT_01d1d400 = "..\\engine\\font.cpp";
    _DAT_01d1d404 = 0xfa;
    core_main_c_FUN_005030e0("Too many bitmaps");
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
  iVar2 = engine_dosio_cpp_getFileSize_FUN_00478fb0(&DAT_005e07ca,filename);
  if (iVar2 < size) {
    FUN_005bfb40(local_468,"Invalid font file size (%s).",filename);
    _DAT_01d1d400 = "..\\engine\\font.cpp";
    _DAT_01d1d404 = 0x10f;
    core_main_c_FUN_005030e0(local_468);
  }
  uVar3 = FUN_005c1268(size);
  *(uint *)(this_ptr + *(int *)this_ptr * 4 + 0x194) = uVar3;
  if (*(int *)(this_ptr + *(int *)this_ptr * 4 + 0x194) == 0) {
    FUN_005bfb40(local_468,"Unable to allocate memory for font bitmap (%s).",filename);
    _DAT_01d1d404 = 0x117;
    _DAT_01d1d400 = "..\\engine\\font.cpp";
    core_main_c_FUN_005030e0(local_468);
  }
  cockpit_ckptutil_c_FUN_0043b2e0(filename,*(void **)(this_ptr + *(int *)this_ptr * 4 + 0x194),size)
  ;
  engine_dosio_cpp_FUN_00479580(filename,(char *)0x0,local_23c,local_13c,(char *)0x0);
  engine_dosio_cpp_FUN_004795b0(local_33c,(char *)0x0,local_23c,local_13c,&DAT_005e0841);
  unkclass_instream_cpp_CInStreamFile_ctor_FUN_005a08d0(&local_3c);
  iVar2 = support_trstream_cpp_FUN_005a0fd0(&local_3c,&DAT_005e0845,local_33c,1);
  if (iVar2 == 0) {
    _DAT_01d1d400 = "..\\engine\\font.cpp";
    _DAT_01d1d404 = 0x128;
    core_main_c_FUN_005030e0("CBitFont::addBitmap - File not found : %s",local_33c);
  }
  else {
    iVar2 = 0;
    do {
      CVar1 = (CBitFont)unkaddr_0059f520_cpp_FUN_005a0ab0(&local_3c);
      this_ptr[iVar2 + *(int *)this_ptr * 0x300 + 0x1b4] = CVar1;
      CVar1 = (CBitFont)unkaddr_0059f520_cpp_FUN_005a0ab0(&local_3c);
      this_ptr[iVar2 + *(int *)this_ptr * 0x300 + 0x1b5] = CVar1;
      CVar1 = (CBitFont)unkaddr_0059f520_cpp_FUN_005a0ab0(&local_3c);
      iVar2 = iVar2 + 3;
      this_ptr[iVar2 + *(int *)this_ptr * 0x300 + 0x1b3] = CVar1;
    } while (iVar2 != 0x300);
    unkaddr_0059f520_cpp_FUN_005a0dc0(&local_3c);
  }
  engine_font_cpp_FUN_004c18c0(this_ptr,*(uint *)this_ptr,width,height,first_char);
  *(int *)this_ptr = *(int *)this_ptr + 1;
  engine_font_cpp_CBitFont_remapPalette_FUN_004c45e0(this_ptr);
  unkclass_instream_cpp_CInStreamFile_dtor_FUN_005a0a50(&local_3c,0);
  return;
}
