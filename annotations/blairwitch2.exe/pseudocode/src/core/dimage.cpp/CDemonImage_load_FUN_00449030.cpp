// Name: core_dimage.cpp_CDemonImage_load_FUN_00449030
// Address: 00449030
// Address Range: [[00449030, 00449272]]
// Convention: __cdecl
// Signature: void __cdecl core_dimage_cpp_CDemonImage_load_FUN_00449030(CDemonImage *this_ptr,char *filename,int width,int height)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dimage_cpp_CDemonImage_load_FUN_00449030(CDemonImage *this_ptr,char *filename,int width,int height)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  _FILE *p_Var4;
  uint unaff_EBX;
  uint unaff_ESI;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *unaff_retaddr;
  SIZE_T in_stack_00000014;
  char acStack_118 [256];
  uint uStack_18;
  uint uStack_14;
  
  pcVar6 = &stack0xfffffee4;
  pcVar5 = filename;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  p_Var4 = engine_dosio_cpp_getFile_FUN_00460c70((char *)0x5cf062,&stack0xfffffee4,(char *)0x5cf05f)
  ;
  if (p_Var4 == (_FILE *)0x0) {
    _DAT_01d046a0 = "..\\core\\dimage.cpp";
    _DAT_01d046a4 = 0x68;
    core_main_c_displayErrorAndQuit_FUN_004e4500("CDemonImage::load - Unable to load image!");
  }
  this_ptr->width = width;
  this_ptr->height = height;
  core_dimage_cpp_CDemonImage_allocMemory_FUN_00448f40(this_ptr);
  _fread(this_ptr->data,width,in_stack_00000014,p_Var4);
  _fclose(p_Var4);
  pcVar5 = acStack_118;
  do {
    pcVar6 = pcVar5;
    if (*pcVar5 == '.') goto LAB_004490ed;
    if (*pcVar5 == '\0') break;
    pcVar6 = pcVar5 + 1;
    if (*pcVar6 == '.') goto LAB_004490ed;
    pcVar5 = pcVar5 + 2;
  } while (*pcVar6 != '\0');
  pcVar6 = (char *)0x0;
LAB_004490ed:
  if (pcVar6 == (char *)0x0) {
    _DAT_01d046a0 = "..\\core\\dimage.cpp";
    _DAT_01d046a4 = 0x7b;
    core_main_c_displayErrorAndQuit_FUN_004e4500("CDemonImage::load - Unable to find extention!");
  }
  pcVar5 = (char *)0x5cf0e4;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  p_Var4 = engine_dosio_cpp_getFile_FUN_00460c70((char *)0x5cf0ec,acStack_118,(char *)0x5cf0e9);
  if (p_Var4 == (_FILE *)0x0) {
    _DAT_01d046a0 = "..\\core\\dimage.cpp";
    _DAT_01d046a4 = 0x7f;
    core_main_c_displayErrorAndQuit_FUN_004e4500("CDemonImage::load - Unable to load palette!");
  }
  _fread(filename + 0x30c,0x100,3,p_Var4);
  _fclose(p_Var4);
  pcVar5 = filename;
  pcVar6 = filename;
  pcVar7 = filename;
  do {
    uStack_18 = (uint)(byte)pcVar5[0x30c];
    uStack_14 = (uint)(byte)pcVar5[0x30e];
    bVar2 = pcVar5[0x30d];
    uVar3 = core_dimage_cpp_CDemonImage_packColor_FUN_00448fd0
                      ((CDemonImage *)filename,uStack_18,(uint)bVar2,uStack_14);
    *(ushort *)(pcVar6 + 0x100) = uVar3;
    pcVar6 = pcVar6 + 2;
    pcVar5 = pcVar5 + 3;
    *pcVar7 = (&DAT_01c2c910)
              [(uint)(bVar2 >> 3) * 0x20 + (unaff_ESI >> 3) * 0x400 + (unaff_EBX >> 3)];
    pcVar7 = pcVar7 + 1;
  } while (pcVar6 != unaff_retaddr);
  return;
}
