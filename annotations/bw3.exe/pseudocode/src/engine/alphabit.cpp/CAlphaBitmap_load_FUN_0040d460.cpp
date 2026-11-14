// Name: engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460
// Address: 0040d460
// Address Range: [[0040d460, 0040d6ee]]
// Convention: __cdecl
// Signature: void __cdecl engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460(CAlphaBitmap *this_ptr,char *filename,int width,int height)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460(CAlphaBitmap *this_ptr,char *filename,int width,int height)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  _FILE *file;
  int iVar4;
  uint uVar5;
  char local_114 [256];
  _FILE *local_14;
  
  engine_alphabit_cpp_CAlphaBitmap_allocate_FUN_0040d320(this_ptr,width,height);
  _sprintf(local_114,"%s.raw");
  local_14 = engine_dosio_cpp_FUN_004659c0(&DAT_005b5ff5,local_114,&DAT_005b5ff2);
  if (local_14 == (_FILE *)0x0) {
    _DAT_01d71de0 = "..\\engine\\alphabit.cpp";
    _DAT_01d71de4 = 0xe1;
    core_main_c_FUN_004e4330("CAlphaBitmap::load - Can't open %s",local_114);
  }
  _fread(this_ptr->raw,width,height,local_14);
  _fclose(local_14);
  _sprintf(local_114,"%s.act");
  local_14 = engine_dosio_cpp_FUN_004659c0(&DAT_005b603d,local_114,&DAT_005b603a);
  if (local_14 == (_FILE *)0x0) {
    _DAT_01d71de0 = "..\\engine\\alphabit.cpp";
    _DAT_01d71de4 = 0xe7;
    core_main_c_FUN_004e4330("CAlphaBitmap::load - Can't open %s",local_114);
  }
  iVar4 = 0;
  do {
    iVar1 = _fgetc(local_14);
    iVar2 = _fgetc(local_14);
    uVar3 = _fgetc(local_14);
    if (DAT_005fba20 == 0x20) {
      uVar5 = iVar1 << (DAT_01c6af74 & 0x1f) | iVar2 << (DAT_01c6af80 & 0x1f);
      uVar3 = uVar3 << (DAT_01c6af8c & 0x1f);
    }
    else {
      uVar5 = iVar1 << 0x10 | iVar2 << 8;
    }
    iVar1 = iVar4 + 4;
    *(uint *)(iVar4 + (int)this_ptr->act) = uVar5 | uVar3;
    iVar4 = iVar1;
  } while (iVar1 != 0x400);
  _fclose(local_14);
  _sprintf(local_114,"%s.opa");
  file = engine_dosio_cpp_FUN_004659c0(&DAT_005b6085,local_114,&DAT_005b6082);
  if (file == (_FILE *)0x0) {
    iVar1 = width * height;
    iVar4 = 0;
    if (0 < iVar1) {
      do {
        while (this_ptr->act[(byte)this_ptr->raw[iVar4]] != 0) {
          this_ptr->opa[iVar4] = -1;
          iVar4 = iVar4 + 1;
          if (iVar1 <= iVar4) {
            return;
          }
        }
        this_ptr->opa[iVar4] = '\0';
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar1);
    }
    return;
  }
  _fread(this_ptr->opa,width,height,file);
  _fclose(file);
  return;
}
