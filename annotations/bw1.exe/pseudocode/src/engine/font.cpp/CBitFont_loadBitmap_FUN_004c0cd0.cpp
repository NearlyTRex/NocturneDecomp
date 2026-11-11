// Name: engine_font.cpp_CBitFont_loadBitmap_FUN_004c0cd0
// Address: 004c0cd0
// Address Range: [[004c0cd0, 004c0f9c]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_CBitFont_loadBitmap_FUN_004c0cd0(CBitFont *this_ptr,char *filename,int width,int height,int first_char)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_font_cpp_CBitFont_loadBitmap_FUN_004c0cd0(CBitFont *this_ptr,char *filename,int width,int height,int first_char)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  char *pcVar4;
  int iVar5;
  char (*pacVar6) [80];
  char local_468 [300];
  char local_33c [256];
  char local_23c [256];
  char local_13c [256];
  CInStreamFile local_3c;
  
  if (3 < this_ptr->bitmap_count) {
    _DAT_01d1d400 = "..\\engine\\font.cpp";
    _DAT_01d1d404 = 0xfa;
    core_main_c_FUN_005030e0("Too many bitmaps");
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
  iVar2 = engine_dosio_cpp_getFileSize_FUN_00478fb0(&DAT_005e07ca,filename);
  if (iVar2 < iVar5) {
    _sprintf(local_468,"Invalid font file size (%s).");
    _DAT_01d1d400 = "..\\engine\\font.cpp";
    _DAT_01d1d404 = 0x10f;
    core_main_c_FUN_005030e0(local_468);
  }
  pvVar3 = (void *)operator_new_array(iVar5);
  this_ptr->bitmap_data[this_ptr->bitmap_count] = pvVar3;
  if (this_ptr->bitmap_data[this_ptr->bitmap_count] == (void *)0x0) {
    _sprintf(local_468,"Unable to allocate memory for font bitmap (%s).");
    _DAT_01d1d404 = 0x117;
    _DAT_01d1d400 = "..\\engine\\font.cpp";
    core_main_c_FUN_005030e0(local_468);
  }
  cockpit_ckptutil_c_FUN_0043b2e0(filename,this_ptr->bitmap_data[this_ptr->bitmap_count],iVar5);
  engine_dosio_cpp_splitPath_FUN_00479580(filename,(char *)0x0,local_23c,local_13c,(char *)0x0);
  engine_dosio_cpp_makePath_FUN_004795b0(local_33c,(char *)0x0,local_23c,local_13c,&DAT_005e0841);
  unkclass_instream_cpp_CInStreamFile_ctor_FUN_005a08d0(&local_3c);
  iVar2 = support_trstream_cpp_CInStreamFile_openInDirectory_FUN_005a0fd0
                    (&local_3c,&DAT_005e0845,local_33c,1);
  if (iVar2 == 0) {
    _DAT_01d1d400 = "..\\engine\\font.cpp";
    _DAT_01d1d404 = 0x128;
    core_main_c_FUN_005030e0("CBitFont::addBitmap - File not found : %s",local_33c);
  }
  else {
    iVar2 = 0;
    do {
      iVar5 = unkaddr_0059f520_cpp_CInStreamFile_getChar_FUN_005a0ab0(&local_3c);
      this_ptr->palette_data[iVar2 + this_ptr->bitmap_count * 0x300] = (char)iVar5;
      iVar5 = unkaddr_0059f520_cpp_CInStreamFile_getChar_FUN_005a0ab0(&local_3c);
      this_ptr->palette_data[iVar2 + this_ptr->bitmap_count * 0x300 + 1] = (char)iVar5;
      iVar5 = unkaddr_0059f520_cpp_CInStreamFile_getChar_FUN_005a0ab0(&local_3c);
      iVar2 = iVar2 + 3;
      this_ptr->palette_data[iVar2 + this_ptr->bitmap_count * 0x300 + -1] = (char)iVar5;
    } while (iVar2 != 0x300);
    unkaddr_0059f520_cpp_CInStreamFile_close_FUN_005a0dc0(&local_3c);
  }
  engine_font_cpp_FUN_004c18c0(this_ptr,this_ptr->bitmap_count,width,height,first_char);
  this_ptr->bitmap_count = this_ptr->bitmap_count + 1;
  engine_font_cpp_CBitFont_remapPalette_FUN_004c45e0(this_ptr);
  unkclass_instream_cpp_CInStreamFile_dtor_FUN_005a0a50(&local_3c,0);
  return;
}
