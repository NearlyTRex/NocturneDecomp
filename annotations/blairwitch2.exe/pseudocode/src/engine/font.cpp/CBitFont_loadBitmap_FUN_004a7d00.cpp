// Name: engine_font.cpp_CBitFont_loadBitmap_FUN_004a7d00
// Address: 004a7d00
// Address Range: [[004a7d00, 004a7fca]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_CBitFont_loadBitmap_FUN_004a7d00(CBitFont *this_ptr,char *filename,int width,int height,int first_char)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_font_cpp_CBitFont_loadBitmap_FUN_004a7d00(CBitFont *this_ptr,char *filename,int width,int height,int first_char)

{
  CBitFont CVar1;
  int iVar2;
  uint uVar3;
  CBitFont *pCVar4;
  int size;
  CBitFont *pCVar5;
  char local_464 [300];
  char local_338 [256];
  char local_238 [256];
  char local_138 [256];
  CInStreamFile local_38;
  
  if (3 < *(int *)this_ptr) {
    _DAT_01d046a0 = "..\\engine\\font.cpp";
    _DAT_01d046a4 = 0xfa;
    core_main_c_FUN_004e4500("Too many bitmaps");
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
  iVar2 = engine_dosio_cpp_getFileSize_FUN_00460aa0(&DAT_005d6751,filename);
  if (iVar2 < size) {
    _sprintf(local_464,"Invalid font file size (%s).");
    _DAT_01d046a0 = "..\\engine\\font.cpp";
    _DAT_01d046a4 = 0x10f;
    core_main_c_FUN_004e4500(local_464);
  }
  uVar3 = FUN_005b8df8(size);
  *(uint *)(this_ptr + *(int *)this_ptr * 4 + 0x194) = uVar3;
  if (*(int *)(this_ptr + *(int *)this_ptr * 4 + 0x194) == 0) {
    _sprintf(local_464,"Unable to allocate memory for font bitmap (%s).");
    _DAT_01d046a4 = 0x117;
    _DAT_01d046a0 = "..\\engine\\font.cpp";
    core_main_c_FUN_004e4500(local_464);
  }
  cockpit_ckptutil_c_FUN_0042c520(filename,*(void **)(this_ptr + *(int *)this_ptr * 4 + 0x194),size)
  ;
  engine_dosio_cpp_splitPath_FUN_00461070(filename,(char *)0x0,local_238,local_138,(char *)0x0);
  engine_dosio_cpp_makePath_FUN_004610a0(local_338,(char *)0x0,local_238,local_138,&DAT_005d67c8);
  unkclass_instream_cpp_CInStreamFile_ctor_FUN_0057cd50(&local_38);
  iVar2 = support_trstream_cpp_FUN_0057d390(&local_38,&DAT_005d67cc,local_338);
  if (iVar2 == 0) {
    _DAT_01d046a0 = "..\\engine\\font.cpp";
    _DAT_01d046a4 = 0x128;
    core_main_c_FUN_004e4500("CBitFont::addBitmap - File not found : %s",local_338);
  }
  else {
    iVar2 = 0;
    do {
      CVar1 = (CBitFont)unkaddr_0057b9a0_cpp_FUN_0057cf20(&local_38);
      this_ptr[iVar2 + *(int *)this_ptr * 0x300 + 0x1b4] = CVar1;
      CVar1 = (CBitFont)unkaddr_0057b9a0_cpp_FUN_0057cf20(&local_38);
      this_ptr[iVar2 + *(int *)this_ptr * 0x300 + 0x1b5] = CVar1;
      CVar1 = (CBitFont)unkaddr_0057b9a0_cpp_FUN_0057cf20(&local_38);
      iVar2 = iVar2 + 3;
      this_ptr[iVar2 + *(int *)this_ptr * 0x300 + 0x1b3] = CVar1;
    } while (iVar2 != 0x300);
    unkaddr_0057b9a0_cpp_FUN_0057d180(&local_38);
  }
  engine_font_cpp_FUN_004a88e0(this_ptr,*(uint *)this_ptr,width,height,first_char);
  *(int *)this_ptr = *(int *)this_ptr + 1;
  engine_font_cpp_CBitFont_remapPalette_FUN_004ab630(this_ptr);
  unkclass_instream_cpp_CInStreamFile_dtor_FUN_0057cec0(&local_38,0);
  return;
}
