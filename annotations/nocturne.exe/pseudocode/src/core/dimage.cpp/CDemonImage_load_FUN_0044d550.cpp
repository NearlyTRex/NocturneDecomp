// Name: core_dimage.cpp_CDemonImage_load_FUN_0044d550
// Address: 0044d550
// Address Range: [[0044d550, 0044d792]]
// Convention: __cdecl
// Signature: void __cdecl core_dimage_cpp_CDemonImage_load_FUN_0044d550(CDemonImage *this_ptr,char *filename,int width,int height)

#include "nocturne.h"

void __cdecl core_dimage_cpp_CDemonImage_load_FUN_0044d550(CDemonImage *this_ptr,char *filename,int width,int height)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  _FILE *p_Var4;
  CDemonImage *pCVar5;
  char *pcVar6;
  CDemonImage *pCVar7;
  char *pcVar8;
  CDemonImage *pCVar9;
  char local_11c [256];
  uint local_1c;
  uint local_18;
  CDemonImage *local_14;
  
  pcVar8 = local_11c;
  pcVar6 = local_11c;
  do {
    cVar1 = *filename;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = filename[1];
    filename = filename + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  p_Var4 = engine_dosio_cpp_getFile_FUN_00456a60("art",local_11c,"rb");
  if (p_Var4 == (_FILE *)0x0) {
    g_CHAR_PTR_01cc4800 = "..\\core\\dimage.cpp";
    g_INT_01cc4804 = 0x68;
    core_main_c_FUN_004c8440("CDemonImage::load - Unable to load image!");
  }
  this_ptr->width = width;
  this_ptr->height = height;
  core_dimage_cpp_CDemonImage_allocMemory_FUN_0044d460(this_ptr);
  _fread(this_ptr->data,width,height,p_Var4);
  _fclose(p_Var4);
  do {
    pcVar8 = pcVar6;
    if (*pcVar6 == '.') goto LAB_0044d60d;
    if (*pcVar6 == '\0') break;
    pcVar8 = pcVar6 + 1;
    if (*pcVar8 == '.') goto LAB_0044d60d;
    pcVar6 = pcVar6 + 2;
  } while (*pcVar8 != '\0');
  pcVar8 = (char *)0x0;
LAB_0044d60d:
  if (pcVar8 == (char *)0x0) {
    g_CHAR_PTR_01cc4800 = "..\\core\\dimage.cpp";
    g_INT_01cc4804 = 0x7b;
    core_main_c_FUN_004c8440("CDemonImage::load - Unable to find extention!");
  }
  pcVar6 = ".ACT";
  do {
    cVar1 = *pcVar6;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  p_Var4 = engine_dosio_cpp_getFile_FUN_00456a60("art",local_11c,"rb");
  if (p_Var4 == (_FILE *)0x0) {
    g_CHAR_PTR_01cc4800 = "..\\core\\dimage.cpp";
    g_INT_01cc4804 = 0x7f;
    core_main_c_FUN_004c8440("CDemonImage::load - Unable to load palette!");
  }
  _fread(&this_ptr->palette,0x100,3,p_Var4);
  _fclose(p_Var4);
  local_14 = (CDemonImage *)(this_ptr->color_values + 0x80);
  pCVar5 = this_ptr;
  pCVar7 = this_ptr;
  pCVar9 = this_ptr;
  do {
    local_1c = (uint)(pCVar5->palette).colors[0].r;
    local_18 = (uint)(pCVar5->palette).colors[0].b;
    bVar2 = (pCVar5->palette).colors[0].g;
    uVar3 = core_dimage_cpp_CDemonImage_packColor_FUN_0044d4f0
                      (this_ptr,local_1c,(uint)bVar2,local_18);
    pCVar7->color_values[0] = uVar3;
    pCVar7 = (CDemonImage *)(pCVar7->color_cube_lookup + 2);
    pCVar5 = (CDemonImage *)(pCVar5->color_cube_lookup + 3);
    pCVar9->color_cube_lookup[0] =
         (&DAT_01bf7720)[(uint)(bVar2 >> 3) * 0x20 + (local_1c >> 3) * 0x400 + (local_18 >> 3)];
    pCVar9 = (CDemonImage *)(pCVar9->color_cube_lookup + 1);
  } while (pCVar7 != local_14);
  return;
}
