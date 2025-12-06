// Name: core_dimage.cpp_CDemonImage_load_FUN_00471ad0
// Address: 00471ad0
// Address Range: [[00471ad0, 00471d23]]
// Convention: __cdecl
// Signature: void core_dimage.cpp_CDemonImage_load_FUN_00471ad0(CDemonImage * this_ptr, char * filename)

#include "nocturne.h"

void __cdecl core_dimage_cpp_CDemonImage_load_FUN_00471ad0(CDemonImage *this_ptr,char *filename)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  FILE *pFVar4;
  CDemonImage *pCVar5;
  BADSPACEBASE *in_ESP;
  char *pcVar6;
  CDemonImage *pCVar7;
  char *pcVar8;
  CDemonImage *pCVar9;
  CDemonImage *in_stack_0000000c;
  uint uStack00000010;
  ushort *puStack00000014;
  CDemonImage *in_stack_00000018;
  SIZE_T in_stack_0000001c;
  int in_stack_00000024;
  CDemonImage *in_stack_0000002c;
  
  pcVar8 = &stack0xfffffee4;
  do {
    cVar1 = *filename;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = filename[1];
    filename = filename + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  pFVar4 = engine_dosio_c_getFile_FUN_00481a50("art",&stack0xfffffee4,"rb");
  if (pFVar4 == (FILE *)0x0) {
    g_CurrentFilename = "..\\core\\dimage.cpp";
    g_CurrentLineNumber = 0x68;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonImage::load - Unable to load image!");
  }
  in_stack_0000000c->width = (int)in_stack_0000000c;
  in_stack_0000000c->height = (int)in_stack_00000018;
  core_dimage_cpp_CDemonImage_allocMemory_FUN_004719e0(in_stack_0000000c);
  crt_stdio_c_fread_FUN_005fd990
            (in_stack_0000000c->data,(SIZE_T)in_stack_0000000c,in_stack_0000001c,pFVar4);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar4,"..\\core\\dimage.cpp",0x76);
  pcVar8 = &stack0xfffffef8;
  do {
    pcVar6 = pcVar8;
    if (*pcVar8 == '.') goto LAB_00471b94;
    if (*pcVar8 == '\0') break;
    pcVar6 = pcVar8 + 1;
    if (*pcVar6 == '.') goto LAB_00471b94;
    pcVar8 = pcVar8 + 2;
  } while (*pcVar6 != '\0');
  pcVar6 = (char *)0x0;
LAB_00471b94:
  if (pcVar6 == (char *)0x0) {
    g_CurrentFilename = "..\\core\\dimage.cpp";
    g_CurrentLineNumber = 0x7b;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonImage::load - Unable to find extention!");
  }
  pcVar8 = ".ACT";
  do {
    cVar1 = *pcVar8;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar8[1];
    pcVar8 = pcVar8 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  pFVar4 = engine_dosio_c_getFile_FUN_00481a50("art",&stack0xfffffefc,"rb");
  if (pFVar4 == (FILE *)0x0) {
    g_CurrentFilename = "..\\core\\dimage.cpp";
    g_CurrentLineNumber = 0x7f;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonImage::load - Unable to load palette!");
  }
  crt_stdio_c_fread_FUN_005fd990((void *)(in_stack_00000024 + 0x30c),0x100,3,pFVar4);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar4,"..\\core\\dimage.cpp",0x81);
  puStack00000014 = in_stack_0000002c->color_values + 0x80;
  pCVar5 = in_stack_0000002c;
  pCVar7 = in_stack_0000002c;
  pCVar9 = in_stack_0000002c;
  do {
    uStack00000010 = (uint)(pCVar5->palette).colors[0].b;
    bVar2 = (pCVar5->palette).colors[0].g;
    uVar3 = core_dimage_cpp_CDemonImage_packColor_FUN_00471a70
                      (in_stack_0000002c,(uint)(pCVar5->palette).colors[0].r,(uint)bVar2,
                       uStack00000010);
    pCVar7->color_values[0] = uVar3;
    pCVar7 = (CDemonImage *)(pCVar7->color_cube_lookup + 2);
    pCVar5 = (CDemonImage *)(pCVar5->color_cube_lookup + 3);
    pCVar9->color_cube_lookup[0] =
         g_ColorCubeLookup
         [(uint)(bVar2 >> 3) * 0x20 + (uStack00000010 >> 3) * 0x400 + ((uint)puStack00000014 >> 3)];
    pCVar9 = (CDemonImage *)(pCVar9->color_cube_lookup + 1);
  } while (pCVar7 != in_stack_00000018);
  return;
}
