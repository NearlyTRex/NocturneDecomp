// Name: engine_font.cpp_CBitFont_loadBitmap_FUN_0048ff70
// Address: 0048ff70
// Address Range: [[0048ff70, 004901c7]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_CBitFont_loadBitmap_FUN_0048ff70(CBitFont *this_ptr,char *filename,int width,int height,int first_char)

#include "nocturne.h"

void __cdecl engine_font_cpp_CBitFont_loadBitmap_FUN_0048ff70(CBitFont *this_ptr,char *filename,int width,int height,int first_char)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  _FILE *file;
  int iVar4;
  char *pcVar5;
  SIZE_T size;
  char (*pacVar6) [80];
  byte local_440 [300];
  char local_314 [260];
  char local_210 [256];
  char local_110 [256];
  
  if (3 < this_ptr->bitmap_count) {
    g_CHAR_PTR_01cc4800 = "..\\engine\\font.cpp";
    g_INT_01cc4804 = 0xd7;
    core_main_c_FUN_004c8440("Too many bitmaps");
  }
  pacVar6 = this_ptr->bitmap_files + this_ptr->bitmap_count;
  pcVar5 = filename;
  do {
    cVar1 = *pcVar5;
    (*pacVar6)[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    (*pacVar6)[1] = cVar1;
    pacVar6 = (char (*) [80])(*pacVar6 + 2);
  } while (cVar1 != '\0');
  strupr(this_ptr->bitmap_files[this_ptr->bitmap_count]);
  size = width * height;
  this_ptr->bitmap_widths[this_ptr->bitmap_count] = width;
  iVar2 = engine_dosio_cpp_getFileSize_FUN_004568c0("art",filename);
  if (iVar2 < (int)size) {
    _sprintf(local_440,"Invalid font file size (%s).",filename);
    g_CHAR_PTR_01cc4800 = "..\\engine\\font.cpp";
    g_INT_01cc4804 = 0xec;
    core_main_c_FUN_004c8440(local_440);
  }
  pvVar3 = shape_memdbg_cpp_malloc_FUN_00564c18(size);
  this_ptr->bitmap_data[this_ptr->bitmap_count] = pvVar3;
  if (this_ptr->bitmap_data[this_ptr->bitmap_count] == (void *)0x0) {
    _sprintf(local_440,"Unable to allocate memory for font bitmap (%s).",filename);
    g_INT_01cc4804 = 0xf4;
    g_CHAR_PTR_01cc4800 = "..\\engine\\font.cpp";
    core_main_c_FUN_004c8440(local_440);
  }
  cockpit_ckptutil_c_readBitmapFile_FUN_0042d240
            (filename,this_ptr->bitmap_data[this_ptr->bitmap_count],size);
  splitpath(filename,(char *)0x0,local_110,local_210,(char *)0x0);
  makepath(local_314,(char *)0x0,local_110,local_210,"act");
  file = engine_dosio_cpp_getFile_FUN_00456a60("art",local_314,"rb");
  if (file != (_FILE *)0x0) {
    iVar2 = 0;
    do {
      iVar4 = _fgetc(file);
      this_ptr->palette_data[iVar2 + this_ptr->bitmap_count * 0x300] = (char)iVar4;
      iVar4 = _fgetc(file);
      this_ptr->palette_data[iVar2 + this_ptr->bitmap_count * 0x300 + 1] = (char)iVar4;
      iVar4 = _fgetc(file);
      iVar2 = iVar2 + 3;
      this_ptr->palette_data[iVar2 + this_ptr->bitmap_count * 0x300 + -1] = (char)iVar4;
    } while (iVar2 != 0x300);
    _fclose(file);
  }
  engine_font_cpp_CBitFont_parseCharacterMetrics_FUN_00490470
            (this_ptr,this_ptr->bitmap_count,width,height,first_char);
  this_ptr->bitmap_count = this_ptr->bitmap_count + 1;
  engine_font_cpp_CBitFont_remapPalette_FUN_004931b0(this_ptr);
  return;
}
