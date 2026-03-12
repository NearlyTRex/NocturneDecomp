// Name: core_dimage.cpp_CDemonImage_load_FUN_00471ad0
// Address: 00471ad0
// Address Range: [[00471ad0, 00471d23]]
// Convention: __cdecl
// Signature: void __cdecl core_dimage_cpp_CDemonImage_load_FUN_00471ad0(CDemonImage *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_dimage_cpp_CDemonImage_load_FUN_00471ad0(CDemonImage *this_ptr,char *filename)

{
  char cVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar3;
  _FILE *p_Var4;
  _FILE *file;
  CDemonImage *pCVar5;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  CDemonImage *pCVar7;
  char *pcVar8;
  CDemonImage *pCVar9;
  SIZE_T in_stack_0000000c;
  SIZE_T in_stack_00000010;
  char local_11c [256];
  uint local_1c;
  uint local_18;
  CDemonImage *local_14;
  char cVar1;
  byte bVar2;
  
  pcVar8 = local_11c;
  pcVar6 = local_11c;
  do {
    cVar1 = *filename;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar2 = filename[1];
    filename = filename + 2;
    pcVar8[1] = cVar2;
    pcVar8 = pcVar8 + 2;
  } while (cVar2 != '\0');
  p_Var4 = engine_dosio_c_getFile_FUN_00481a50("art",local_11c,"rb");
  if (p_Var4 == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\dimage.cpp";
    g_CurrentLineNumber = 0x68;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonImage::load - Unable to load image!");
  }
  this_ptr->width = in_stack_0000000c;
  this_ptr->height = in_stack_00000010;
  core_dimage_cpp_CDemonImage_allocMemory_FUN_004719e0(this_ptr);
  _fread(this_ptr->data,in_stack_0000000c,in_stack_00000010,p_Var4);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var4,"..\\core\\dimage.cpp",0x76);
  do {
    pcVar5 = pcVar6;
    if (*pcVar6 == '.') goto LAB_00471b94;
    if (*pcVar6 == '\0') break;
    pcVar5 = pcVar6 + 1;
    if (*pcVar5 == '.') goto LAB_00471b94;
    pcVar6 = pcVar6 + 2;
  } while (*pcVar5 != '\0');
  pcVar5 = (char *)0x0;
LAB_00471b94:
  if (pcVar5 == (char *)0x0) {
    g_CurrentFilename = "..\\core\\dimage.cpp";
    g_CurrentLineNumber = 0x7b;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonImage::load - Unable to find extention!");
  }
  pcVar7 = ".ACT";
  do {
    cVar2 = *pcVar7;
    *pcVar5 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar5[1] = cVar2;
    pcVar5 = pcVar5 + 2;
  } while (cVar2 != '\0');
  file = engine_dosio_c_getFile_FUN_00481a50("art",local_11c,"rb");
  if (file == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\dimage.cpp";
    g_CurrentLineNumber = 0x7f;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonImage::load - Unable to load palette!");
  }
  _fread(&this_ptr->palette,0x100,3,file);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\dimage.cpp",0x81);
  pCVar5 = this_ptr;
  pCVar7 = this_ptr;
  pCVar9 = this_ptr;
  do {
    bVar3 = (pCVar5->palette).colors[0].r;
    bVar4 = (pCVar5->palette).colors[0].b;
    bVar2 = (pCVar5->palette).colors[0].g;
    uVar3 = core_dimage_cpp_CDemonImage_packColor_FUN_00471a70
                      (this_ptr,(uint)bVar3,(uint)bVar2,(uint)bVar4);
    pCVar7->color_values[0] = uVar3;
    pCVar7 = (CDemonImage *)(pCVar7->color_cube_lookup + 2);
    pCVar5 = (CDemonImage *)(pCVar5->color_cube_lookup + 3);
    pCVar9->color_cube_lookup[0] =
         g_ColorCubeLookup
         [(uint)(bVar2 >> 3) * 0x20 + (uint)(bVar3 >> 3) * 0x400 + (uint)(bVar4 >> 3)];
    pCVar9 = (CDemonImage *)(pCVar9->color_cube_lookup + 1);
  } while (pCVar7 != (CDemonImage *)(this_ptr->color_values + 0x80));
  return;
}
