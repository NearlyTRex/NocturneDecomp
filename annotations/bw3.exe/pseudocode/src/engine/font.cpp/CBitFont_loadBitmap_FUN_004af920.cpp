// Name: engine_font.cpp_CBitFont_loadBitmap_FUN_004af920
// Address: 004af920
// Address Range: [[004af920, 004afbec]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_CBitFont_loadBitmap_FUN_004af920(CBitFont *this_ptr,char *filename,int width,int height,int first_char)

#include "nocturne.h"

void __cdecl engine_font_cpp_CBitFont_loadBitmap_FUN_004af920(CBitFont *this_ptr,char *filename,int width,int height,int first_char)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  char *pcVar5;
  uint size;
  char (*pacVar6) [80];
  char local_468 [300];
  char local_33c [256];
  char local_23c [256];
  char local_13c [256];
  CInStreamFile local_3c;
  
  if (3 < this_ptr->bitmap_count) {
    g_CurrentFilename = "..\\engine\\font.cpp";
    g_CurrentLineNumber = 250;
    core_main_c_displayErrorAndQuit_FUN_004e4330("Too many bitmaps");
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
  iVar2 = engine_dosio_cpp_getFileSize_FUN_004657f0("art",filename);
  if (iVar2 < (int)size) {
    _sprintf(local_468,"Invalid font file size (%s).");
    g_CurrentFilename = "..\\engine\\font.cpp";
    g_CurrentLineNumber = 271;
    core_main_c_displayErrorAndQuit_FUN_004e4330(local_468);
  }
  pvVar3 = operator_new_array(size);
  this_ptr->bitmap_data[this_ptr->bitmap_count] = pvVar3;
  if (this_ptr->bitmap_data[this_ptr->bitmap_count] == (void *)0x0) {
    _sprintf(local_468,"Unable to allocate memory for font bitmap (%s).");
    g_CurrentLineNumber = 279;
    g_CurrentFilename = "..\\engine\\font.cpp";
    core_main_c_displayErrorAndQuit_FUN_004e4330(local_468);
  }
  cockpit_ckptutil_c_readBitmapFile_FUN_00438ef0
            (filename,this_ptr->bitmap_data[this_ptr->bitmap_count],size);
  engine_dosio_cpp_splitPath_FUN_00465e50(filename,(char *)0x0,local_23c,local_13c,(char *)0x0);
  engine_dosio_cpp_makePath_FUN_00465e80(local_33c,(char *)0x0,local_23c,local_13c,"act");
  support_trstream_cpp_CInStreamFile_ctor_FUN_005738c0(&local_3c);
  iVar2 = support_trstream_cpp_CInStreamFile_openInDirectory_FUN_00573fc0
                    (&local_3c,"art",local_33c,1);
  if (iVar2 == 0) {
    g_CurrentFilename = "..\\engine\\font.cpp";
    g_CurrentLineNumber = 296;
    core_main_c_displayErrorAndQuit_FUN_004e4330("CBitFont::addBitmap - File not found : %s");
  }
  else {
    iVar2 = 0;
    do {
      iVar4 = support_trstream_cpp_CInStreamFile_getChar_FUN_00573aa0(&local_3c);
      this_ptr->palette_data[iVar2 + this_ptr->bitmap_count * 0x300] = (char)iVar4;
      iVar4 = support_trstream_cpp_CInStreamFile_getChar_FUN_00573aa0(&local_3c);
      this_ptr->palette_data[iVar2 + this_ptr->bitmap_count * 0x300 + 1] = (char)iVar4;
      iVar4 = support_trstream_cpp_CInStreamFile_getChar_FUN_00573aa0(&local_3c);
      iVar2 = iVar2 + 3;
      this_ptr->palette_data[iVar2 + this_ptr->bitmap_count * 0x300 + -1] = (char)iVar4;
    } while (iVar2 != 0x300);
    support_trstream_cpp_CInStreamFile_close_FUN_00573db0(&local_3c);
  }
  engine_font_cpp_CBitFont_parseCharacterMetrics_FUN_004b0510
            (this_ptr,this_ptr->bitmap_count,width,height,first_char);
  this_ptr->bitmap_count = this_ptr->bitmap_count + 1;
  engine_font_cpp_CBitFont_remapPalette_FUN_004b31c0(this_ptr);
  support_trstream_cpp_CInStreamFile_dtor_FUN_00573a40(&local_3c,0);
  return;
}
