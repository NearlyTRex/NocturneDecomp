// Name: engine_font.cpp_CBitFont_loadBitmap_FUN_004a7d00
// Address: 004a7d00
// Address Range: [[004a7d00, 004a7fca]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_CBitFont_loadBitmap_FUN_004a7d00(CBitFont *this_ptr,char *filename,int width,int height,int first_char)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_font_cpp_CBitFont_loadBitmap_FUN_004a7d00(CBitFont *this_ptr,char *filename,int width,int height,int first_char)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  char *pcVar4;
  int iVar5;
  char (*pacVar6) [80];
  char local_464 [300];
  char local_338 [256];
  char local_238 [256];
  char local_138 [256];
  CInStreamFile local_38;
  
  if (3 < this_ptr->bitmap_count) {
    _DAT_01d046a0 = "..\\engine\\font.cpp";
    _DAT_01d046a4 = 0xfa;
    core_main_c_FUN_004e4500("Too many bitmaps");
  }
  pacVar6 = this_ptr->bitmap_files + this_ptr->bitmap_count;
  pcVar4 = filename;
  do {
    cVar1 = *pcVar4;
    (*pacVar6)[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    (*pacVar6)[1] = cVar1;
    pacVar6 = (char (*) [80])(*pacVar6 + 2);
  } while (cVar1 != '\0');
  strupr(this_ptr->bitmap_files[this_ptr->bitmap_count]);
  iVar5 = width * height;
  this_ptr->bitmap_widths[this_ptr->bitmap_count] = width;
  iVar2 = engine_dosio_cpp_getFileSize_FUN_00460aa0(&DAT_005d6751,filename);
  if (iVar2 < iVar5) {
    _sprintf(local_464,"Invalid font file size (%s).");
    _DAT_01d046a0 = "..\\engine\\font.cpp";
    _DAT_01d046a4 = 0x10f;
    core_main_c_FUN_004e4500(local_464);
  }
  pvVar3 = (void *)operator_new_array(iVar5);
  this_ptr->bitmap_data[this_ptr->bitmap_count] = pvVar3;
  if (this_ptr->bitmap_data[this_ptr->bitmap_count] == (void *)0x0) {
    _sprintf(local_464,"Unable to allocate memory for font bitmap (%s).");
    _DAT_01d046a4 = 0x117;
    _DAT_01d046a0 = "..\\engine\\font.cpp";
    core_main_c_FUN_004e4500(local_464);
  }
  cockpit_ckptutil_c_FUN_0042c520(filename,this_ptr->bitmap_data[this_ptr->bitmap_count],iVar5);
  engine_dosio_cpp_splitPath_FUN_00461070(filename,(char *)0x0,local_238,local_138,(char *)0x0);
  engine_dosio_cpp_makePath_FUN_004610a0(local_338,(char *)0x0,local_238,local_138,&DAT_005d67c8);
  unkclass_instream_cpp_CInStreamFile_ctor_FUN_0057cd50(&local_38);
  iVar2 = support_trstream_cpp_CInStreamFile_openInDirectory_FUN_0057d390
                    (&local_38,&DAT_005d67cc,local_338);
  if (iVar2 == 0) {
    _DAT_01d046a0 = "..\\engine\\font.cpp";
    _DAT_01d046a4 = 0x128;
    core_main_c_FUN_004e4500("CBitFont::addBitmap - File not found : %s",local_338);
  }
  else {
    iVar2 = 0;
    do {
      iVar5 = unkaddr_0057b9a0_cpp_CInStreamFile_getChar_FUN_0057cf20(&local_38);
      this_ptr->palette_data[iVar2 + this_ptr->bitmap_count * 0x300] = (char)iVar5;
      iVar5 = unkaddr_0057b9a0_cpp_CInStreamFile_getChar_FUN_0057cf20(&local_38);
      this_ptr->palette_data[iVar2 + this_ptr->bitmap_count * 0x300 + 1] = (char)iVar5;
      iVar5 = unkaddr_0057b9a0_cpp_CInStreamFile_getChar_FUN_0057cf20(&local_38);
      iVar2 = iVar2 + 3;
      this_ptr->palette_data[iVar2 + this_ptr->bitmap_count * 0x300 + -1] = (char)iVar5;
    } while (iVar2 != 0x300);
    unkaddr_0057b9a0_cpp_CInStreamFile_close_FUN_0057d180(&local_38);
  }
  engine_font_cpp_FUN_004a88e0(this_ptr,this_ptr->bitmap_count,width,height,first_char);
  this_ptr->bitmap_count = this_ptr->bitmap_count + 1;
  engine_font_cpp_CBitFont_remapPalette_FUN_004ab630(this_ptr);
  unkclass_instream_cpp_CInStreamFile_dtor_FUN_0057cec0(&local_38,0);
  return;
}
