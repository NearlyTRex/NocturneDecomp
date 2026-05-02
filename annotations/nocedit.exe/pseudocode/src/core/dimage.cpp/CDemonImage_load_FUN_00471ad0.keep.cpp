// Name: core_dimage.cpp_CDemonImage_load_FUN_00471ad0
// Address: 00471ad0
// MANUAL RECONSTRUCTION
// Address Range: [[00471ad0, 00471d23]]
// Convention: __cdecl
// Signature: void __cdecl core_dimage_cpp_CDemonImage_load_FUN_00471ad0(CDemonImage *this_ptr,char *filename,int width,int height)

#include "nocturne.h"

void __cdecl core_dimage_cpp_CDemonImage_load_FUN_00471ad0(CDemonImage *this_ptr,char *filename,int width,int height)

{
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  _FILE *p_Var6;
  int iVar1;
  char *pcVar10;
  char local_11c [256];
  
  strcpy(local_11c, filename);
  p_Var6 = engine_dosio_c_getFile_FUN_00481a50("art",local_11c,"rb");
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
  pcVar10 = strchr(local_11c, '.');
  if (pcVar10 == (char *)0x0) {
    g_CurrentFilename = "..\\core\\dimage.cpp";
    g_CurrentLineNumber = 0x7b;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonImage::load - Unable to find extention!");
  }
  strcpy(pcVar10, ".ACT");
  p_Var6 = engine_dosio_c_getFile_FUN_00481a50("art",local_11c,"rb");
  if (p_Var6 == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\dimage.cpp";
    g_CurrentLineNumber = 0x7f;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonImage::load - Unable to load palette!");
  }
  _fread(&this_ptr->palette,0x100,3,p_Var6);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var6,"..\\core\\dimage.cpp",0x81);
  for (iVar1 = 0; iVar1 < 256; iVar1 = iVar1 + 1) {
    bVar2 = (this_ptr->palette).colors[iVar1].r;
    bVar3 = (this_ptr->palette).colors[iVar1].b;
    bVar4 = (this_ptr->palette).colors[iVar1].g;
    uVar5 = core_dimage_cpp_CDemonImage_packColor_FUN_00471a70
                      (this_ptr,(uint)bVar2,(uint)bVar4,(uint)bVar3);
    this_ptr->color_values[iVar1] = uVar5;
    this_ptr->color_cube_lookup[iVar1] =
         g_ColorCubeLookup
         [(uint)(bVar4 >> 3) * 0x20 + (uint)(bVar2 >> 3) * 0x400 + (uint)(bVar3 >> 3)];
  }
  return;
}
