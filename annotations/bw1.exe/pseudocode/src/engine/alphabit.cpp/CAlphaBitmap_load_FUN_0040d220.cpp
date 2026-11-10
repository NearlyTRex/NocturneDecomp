// Name: engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220
// Address: 0040d220
// Address Range: [[0040d220, 0040d4ae]]
// Convention: __cdecl
// Signature: void __cdecl engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap *this_ptr,char *filename,int width,int height)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap *this_ptr,char *filename,int width,int height)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  _FILE *p_Var4;
  int iVar5;
  uint uVar6;
  char local_114 [256];
  _FILE *local_14;
  
  engine_alphabit_cpp_FUN_0040d0e0(this_ptr,width,height);
  _sprintf(local_114,"%s.raw");
  local_14 = engine_dosio_cpp_FUN_00479180(&DAT_005d2fa5,local_114,&DAT_005d2fa2);
  if (local_14 == (_FILE *)0x0) {
    _DAT_01d1d400 = "..\\engine\\alphabit.cpp";
    _DAT_01d1d404 = 0xe1;
    core_main_c_FUN_005030e0("CAlphaBitmap::load - Can't open %s",local_114);
  }
  _fread(this_ptr->raw,width,height,local_14);
  _fclose(local_14);
  _sprintf(local_114,"%s.act");
  local_14 = engine_dosio_cpp_FUN_00479180(&DAT_005d2fed,local_114,&DAT_005d2fea);
  if (local_14 == (_FILE *)0x0) {
    _DAT_01d1d400 = "..\\engine\\alphabit.cpp";
    _DAT_01d1d404 = 0xe7;
    core_main_c_FUN_005030e0("CAlphaBitmap::load - Can't open %s",local_114);
  }
  iVar5 = 0;
  do {
    iVar1 = _fgetc(local_14);
    iVar2 = _fgetc(local_14);
    uVar3 = _fgetc(local_14);
    if (DAT_0061b4a0 == 0x20) {
      uVar6 = iVar1 << (DAT_01c4e9d4 & 0x1f) | iVar2 << (DAT_01c4e9e0 & 0x1f);
      uVar3 = uVar3 << (DAT_01c4e9ec & 0x1f);
    }
    else {
      uVar6 = iVar1 << 0x10 | iVar2 << 8;
    }
    iVar1 = iVar5 + 4;
    *(uint *)(iVar5 + (int)this_ptr->act) = uVar6 | uVar3;
    iVar5 = iVar1;
  } while (iVar1 != 0x400);
  _fclose(local_14);
  _sprintf(local_114,"%s.opa");
  p_Var4 = engine_dosio_cpp_FUN_00479180(&DAT_005d3035,local_114,&DAT_005d3032);
  if (p_Var4 == (_FILE *)0x0) {
    iVar1 = width * height;
    iVar5 = 0;
    if (0 < iVar1) {
      do {
        while (this_ptr->act[(byte)this_ptr->raw[iVar5]] != 0) {
          this_ptr->opa[iVar5] = -1;
          iVar5 = iVar5 + 1;
          if (iVar1 <= iVar5) {
            return;
          }
        }
        this_ptr->opa[iVar5] = '\0';
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar1);
    }
    return;
  }
  _fread(this_ptr->opa,width,height,p_Var4);
  _fclose(p_Var4);
  return;
}
