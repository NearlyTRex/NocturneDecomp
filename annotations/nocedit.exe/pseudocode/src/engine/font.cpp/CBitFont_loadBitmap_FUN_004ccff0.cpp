// Name: engine_font.cpp_CBitFont_loadBitmap_FUN_004ccff0
// Address: 004ccff0
// Address Range: [[004ccff0, 004cd27d]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_CBitFont_loadBitmap_FUN_004ccff0 (CBitFont *this_ptr,char *filename,int width,int height,int first_char)

#include "nocturne.h"

void __cdecl
engine_font_cpp_CBitFont_loadBitmap_FUN_004ccff0
          (CBitFont *this_ptr,char *filename,int width,int height,int first_char)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  _FILE *file;
  char *pcVar4;
  int iVar5;
  int iVar6;
  char (*pacVar7) [80];
  int in_stack_fffffbc4;
  int in_stack_fffffbc8;
  char local_310 [256];
  char local_210 [256];
  char local_110 [256];
  
  if (3 < this_ptr->bitmap_count) {
    g_CurrentFilename = "..\\engine\\font.cpp";
    g_CurrentLineNumber = 0xd6;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Too many bitmaps");
  }
  pacVar7 = this_ptr->bitmap_files + this_ptr->bitmap_count;
  pcVar4 = filename;
  do {
    cVar1 = *pcVar4;
    (*pacVar7)[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    (*pacVar7)[1] = cVar1;
    pacVar7 = (char (*) [80])(*pacVar7 + 2);
  } while (cVar1 != '\0');
  strupr(this_ptr->bitmap_files[this_ptr->bitmap_count]);
  iVar5 = width * height;
  this_ptr->bitmap_widths[this_ptr->bitmap_count] = width;
  iVar2 = engine_dosio_c_getFileSize_FUN_00481880("art",filename);
  if (iVar2 < iVar5) {
    _sprintf(&stack0xfffffbc4,"Invalid font file size (%s).",filename)
    ;
    g_CurrentFilename = "..\\engine\\font.cpp";
    g_CurrentLineNumber = 0xeb;
    core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xfffffbc4);
  }
  pvVar3 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0(iVar5,"..\\engine\\font.cpp",0xf0);
  this_ptr->bitmap_data[this_ptr->bitmap_count] = pvVar3;
  if (this_ptr->bitmap_data[this_ptr->bitmap_count] == (void *)0x0) {
    _sprintf(&stack0xfffffbc4,"Unable to allocate memory for font bitmap (%s).",filename)
    ;
    g_CurrentLineNumber = 0xf3;
    g_CurrentFilename = "..\\engine\\font.cpp";
    core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xfffffbc4);
  }
  cockpit_ckptutil_c_readBitmapFile_FUN_00431870
            (filename,this_ptr->bitmap_data[this_ptr->bitmap_count],iVar5);
  engine_dosio_c_splitPath_FUN_00481f20(filename,(char *)0x0,local_210,local_110,(char *)0x0);
  engine_dosio_c_makePath_FUN_00481f50(local_310,(char *)0x0,local_210,local_110,"act");
  file = engine_dosio_c_getFile_FUN_00481a50("art",local_310,"rb");
  if (file != (_FILE *)0x0) {
    iVar2 = 0;
    do {
      iVar5 = _fgetc(file);
      this_ptr->palette_data[iVar2 + this_ptr->bitmap_count * 0x300] = (char)iVar5;
      iVar5 = _fgetc(file);
      this_ptr->palette_data[iVar2 + this_ptr->bitmap_count * 0x300 + 1] = (char)iVar5;
      iVar5 = _fgetc(file);
      iVar6 = iVar2 + 3;
      this_ptr->palette_data[iVar2 + this_ptr->bitmap_count * 0x300 + 2] = (char)iVar5;
      iVar2 = iVar6;
    } while (iVar6 != 0x300);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\engine\\font.cpp",0x10a);
  }
  engine_font_cpp_CBitFont_parseCharacterMetrics_FUN_004cd550
            (this_ptr,this_ptr->bitmap_count,width,height,first_char,in_stack_fffffbc4,
             in_stack_fffffbc8);
  this_ptr->bitmap_count = this_ptr->bitmap_count + 1;
  engine_font_cpp_CBitFont_remapPalette_FUN_004d02a0(this_ptr);
  return;
}
