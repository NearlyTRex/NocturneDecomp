// Name: engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0
// Address: 0040e3c0
// Address Range: [[0040e3c0, 0040e708]]
// Convention: __cdecl
// Signature: void __cdecl engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0(CAlphaBitmap *this_ptr,char *filename,int width,int height)

#include "nocturne.h"

void __cdecl engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0(CAlphaBitmap *this_ptr,char *filename,int width,int height)

{
  char *pcVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  _FILE *p_Var6;
  int iVar7;
  uint uVar8;
  char local_114 [256];
  _FILE *local_14;
  
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040e360(this_ptr);
  this_ptr->width = width;
  this_ptr->height = height;
  pcVar1 = (char *)malloc(width * height);
  this_ptr->raw = pcVar1;
  if (pcVar1 == (char *)0x0) {
    PTR_01cc4800 = "..\\engine\\alphabit.cpp";
    INT_01cc4804 = 0x53;
    core_main_c_FUN_004c8440("CAlphaBitmap::load - Out of memory");
  }
  pcVar1 = (char *)malloc(width * height);
  this_ptr->opa = pcVar1;
  if (pcVar1 == (char *)0x0) {
    PTR_01cc4800 = "..\\engine\\alphabit.cpp";
    INT_01cc4804 = 0x56;
    core_main_c_FUN_004c8440("CAlphaBitmap::load - Out of memory");
  }
  puVar2 = (uint *)malloc(0x400);
  this_ptr->act = puVar2;
  if (puVar2 == (uint *)0x0) {
    PTR_01cc4800 = "..\\engine\\alphabit.cpp";
    INT_01cc4804 = 0x59;
    core_main_c_FUN_004c8440("CAlphaBitmap::load - Out of memory");
  }
  _sprintf(local_114,"%s.raw",filename);
  local_14 = engine_dosio_cpp_getFile_FUN_00456a60("art",local_114,"rb");
  if (local_14 == (_FILE *)0x0) {
    PTR_01cc4800 = "..\\engine\\alphabit.cpp";
    INT_01cc4804 = 0x5f;
    core_main_c_FUN_004c8440("CAlphaBitmap::load - Can't open %s",local_114);
  }
  p_Var6 = local_14;
  _fread(this_ptr->raw,width,height,local_14);
  _fclose(p_Var6);
  _sprintf(local_114,"%s.act",filename);
  local_14 = engine_dosio_cpp_getFile_FUN_00456a60("art",local_114,"rb");
  if (local_14 == (_FILE *)0x0) {
    PTR_01cc4800 = "..\\engine\\alphabit.cpp";
    INT_01cc4804 = 0x65;
    core_main_c_FUN_004c8440("CAlphaBitmap::load - Can't open %s",local_114);
  }
  iVar7 = 0;
  do {
    iVar3 = _fgetc(local_14);
    iVar4 = _fgetc(local_14);
    uVar5 = _fgetc(local_14);
    if (DAT_005b7624 == 0x20) {
      uVar8 = iVar4 << (DAT_01c00630 & 0x1f) | iVar3 << (DAT_01c00624 & 0x1f);
      uVar5 = uVar5 << (DAT_01c0063c & 0x1f);
    }
    else {
      uVar8 = iVar3 << 0x10 | iVar4 << 8;
    }
    iVar3 = iVar7 + 4;
    *(uint *)(iVar7 + (int)this_ptr->act) = uVar8 | uVar5;
    iVar7 = iVar3;
  } while (iVar3 != 0x400);
  _fclose(local_14);
  _sprintf(local_114,"%s.opa",filename);
  p_Var6 = engine_dosio_cpp_getFile_FUN_00456a60("art",local_114,"rb");
  if (p_Var6 == (_FILE *)0x0) {
    iVar3 = width * height;
    iVar7 = 0;
    if (0 < iVar3) {
      do {
        while (this_ptr->act[(byte)this_ptr->raw[iVar7]] != 0) {
          this_ptr->opa[iVar7] = -1;
          iVar7 = iVar7 + 1;
          if (iVar3 <= iVar7) {
            return;
          }
        }
        this_ptr->opa[iVar7] = '\0';
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar3);
    }
    return;
  }
  _fread(this_ptr->opa,width,height,p_Var6);
  _fclose(p_Var6);
  return;
}
