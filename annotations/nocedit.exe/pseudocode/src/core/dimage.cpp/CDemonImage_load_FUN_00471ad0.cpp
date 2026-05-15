// Name: core_dimage.cpp_CDemonImage_load_FUN_00471ad0
// Address: 00471ad0
// Address Range: [[00471ad0, 00471d23]]
// Convention: __cdecl
// Signature: void __cdecl core_dimage_cpp_CDemonImage_load_FUN_00471ad0(CDemonImage *this_ptr,char *filename,int width,int height)

#include "nocturne.h"

void __cdecl core_dimage_cpp_CDemonImage_load_FUN_00471ad0(CDemonImage *this_ptr,char *filename,int width,int height)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  _FILE *p_Var6;
  CDemonImage *pCVar7;
  char *pcVar8;
  CDemonImage *pCVar9;
  char *pcVar10;
  CDemonImage *pCVar11;
  char local_11c [256];
  uint local_1c;
  uint local_18;
  CDemonImage *local_14;
  
  pcVar10 = local_11c;
  pcVar8 = local_11c;
  do {
    cVar1 = *filename;
    *pcVar10 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = filename[1];
    filename = filename + 2;
    pcVar10[1] = cVar1;
    pcVar10 = pcVar10 + 2;
  } while (cVar1 != '\0');
  p_Var6 = engine_dosio_cpp_getFile_FUN_00481a50("art",local_11c,"rb");
  if (p_Var6 == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\dimage.cpp";
    g_CurrentLineNumber = 0x68;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonImage::load - Unable to load image!");
  }
  this_ptr->width = width;
  this_ptr->height = height;
  core_dimage_cpp_CDemonImage_allocMemory_FUN_004719e0(this_ptr);
  _fread(this_ptr->data,width,height,p_Var6);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var6,"..\\core\\dimage.cpp",0x76);
  do {
    pcVar10 = pcVar8;
    if (*pcVar8 == '.') goto LAB_00471b94;
    if (*pcVar8 == '\0') break;
    pcVar10 = pcVar8 + 1;
    if (*pcVar10 == '.') goto LAB_00471b94;
    pcVar8 = pcVar8 + 2;
  } while (*pcVar10 != '\0');
  pcVar10 = (char *)0x0;
LAB_00471b94:
  if (pcVar10 == (char *)0x0) {
    g_CurrentFilename = "..\\core\\dimage.cpp";
    g_CurrentLineNumber = 0x7b;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonImage::load - Unable to find extention!");
  }
  pcVar8 = ".ACT";
  do {
    cVar1 = *pcVar8;
    *pcVar10 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar8[1];
    pcVar8 = pcVar8 + 2;
    pcVar10[1] = cVar1;
    pcVar10 = pcVar10 + 2;
  } while (cVar1 != '\0');
  p_Var6 = engine_dosio_cpp_getFile_FUN_00481a50("art",local_11c,"rb");
  if (p_Var6 == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\dimage.cpp";
    g_CurrentLineNumber = 0x7f;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonImage::load - Unable to load palette!");
  }
  _fread(&this_ptr->palette,0x100,3,p_Var6);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var6,"..\\core\\dimage.cpp",0x81);
  pCVar7 = this_ptr;
  pCVar9 = this_ptr;
  pCVar11 = this_ptr;
  do {
    bVar2 = (pCVar7->palette).colors[0].r;
    bVar3 = (pCVar7->palette).colors[0].b;
    bVar4 = (pCVar7->palette).colors[0].g;
    uVar5 = core_dimage_cpp_CDemonImage_packColor_FUN_00471a70
                      (this_ptr,(uint)bVar2,(uint)bVar4,(uint)bVar3);
    pCVar9->color_values[0] = uVar5;
    pCVar9 = (CDemonImage *)(pCVar9->color_cube_lookup + 2);
    pCVar7 = (CDemonImage *)(pCVar7->color_cube_lookup + 3);
    pCVar11->color_cube_lookup[0] =
         g_ColorCubeLookup
         [(uint)(bVar4 >> 3) * 0x20 + (uint)(bVar2 >> 3) * 0x400 + (uint)(bVar3 >> 3)];
    pCVar11 = (CDemonImage *)(pCVar11->color_cube_lookup + 1);
  } while (pCVar9 != (CDemonImage *)(this_ptr->color_values + 0x80));
  return;
}
