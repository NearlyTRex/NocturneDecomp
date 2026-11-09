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
  _FILE *p_Var4;
  int iVar5;
  uint uVar6;
  char local_114 [256];
  _FILE *local_14;
  
  engine_alphabit_cpp_FUN_0040d320(this_ptr,width,height);
  FUN_005a28c0(local_114,"%s.raw",filename);
  local_14 = engine_dosio_cpp_FUN_004659c0(&DAT_005b5ff5,local_114,&DAT_005b5ff2);
  if (local_14 == (_FILE *)0x0) {
    _DAT_01d71de0 = "..\\engine\\alphabit.cpp";
    _DAT_01d71de4 = 0xe1;
    core_main_c_FUN_004e4330("CAlphaBitmap::load - Can't open %s",local_114);
  }
  _fread(*(uint *)this_ptr,width,height,local_14);
  _fclose(local_14);
  FUN_005a28c0(local_114,"%s.act",filename);
  local_14 = engine_dosio_cpp_FUN_004659c0(&DAT_005b603d,local_114,&DAT_005b603a);
  if (local_14 == (_FILE *)0x0) {
    _DAT_01d71de0 = "..\\engine\\alphabit.cpp";
    _DAT_01d71de4 = 0xe7;
    core_main_c_FUN_004e4330("CAlphaBitmap::load - Can't open %s",local_114);
  }
  iVar5 = 0;
  do {
    iVar1 = _fgetc(local_14);
    iVar2 = _fgetc(local_14);
    uVar3 = _fgetc(local_14);
    if (DAT_005fba20 == 0x20) {
      uVar6 = iVar1 << (DAT_01c6af74 & 0x1f) | iVar2 << (DAT_01c6af80 & 0x1f);
      uVar3 = uVar3 << (DAT_01c6af8c & 0x1f);
    }
    else {
      uVar6 = iVar1 << 0x10 | iVar2 << 8;
    }
    iVar1 = iVar5 + 4;
    *(uint *)(iVar5 + *(int *)&this_ptr->field_0x8) = uVar6 | uVar3;
    iVar5 = iVar1;
  } while (iVar1 != 0x400);
  _fclose(local_14);
  FUN_005a28c0(local_114,"%s.opa",filename);
  p_Var4 = engine_dosio_cpp_FUN_004659c0(&DAT_005b6085,local_114,&DAT_005b6082);
  if (p_Var4 == (_FILE *)0x0) {
    iVar1 = width * height;
    iVar5 = 0;
    if (0 < iVar1) {
      do {
        while (*(int *)(*(int *)&this_ptr->field_0x8 + (uint)*(byte *)(*(int *)this_ptr + iVar5) * 4
                       ) != 0) {
          *(byte *)(*(int *)&this_ptr->field_0x4 + iVar5) = 0xff;
          iVar5 = iVar5 + 1;
          if (iVar1 <= iVar5) {
            return;
          }
        }
        *(byte *)(*(int *)&this_ptr->field_0x4 + iVar5) = 0;
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar1);
    }
    return;
  }
  _fread(*(uint *)&this_ptr->field_0x4,width,height,p_Var4);
  _fclose(p_Var4);
  return;
}
