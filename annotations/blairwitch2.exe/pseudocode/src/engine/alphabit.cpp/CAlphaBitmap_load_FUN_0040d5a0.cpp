// Name: engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0
// Address: 0040d5a0
// Address Range: [[0040d5a0, 0040d8f8]]
// Convention: __cdecl
// Signature: void __cdecl engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0(CAlphaBitmap *this_ptr,char *filename,int width,int height)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0(CAlphaBitmap *this_ptr,char *filename,int width,int height)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  _FILE *p_Var5;
  int iVar6;
  int iVar7;
  char local_124 [256];
  uint local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  _FILE *local_14;
  
  engine_alphabit_cpp_FUN_0040d460(this_ptr,width,height);
  FUN_005b7790(local_124,"%s.raw",filename);
  local_14 = engine_dosio_cpp_FUN_00460c70(&DAT_005cb02a,local_124,&DAT_005cb027);
  if (local_14 == (_FILE *)0x0) {
    _DAT_01d046a0 = "..\\engine\\alphabit.cpp";
    _DAT_01d046a4 = 0xe1;
    core_main_c_FUN_004e4500("CAlphaBitmap::load - Can't open %s",local_124);
  }
  _fread(*(uint *)this_ptr,width,height,local_14);
  _fclose(local_14);
  FUN_005b7790(local_124,"%s.act",filename);
  local_14 = engine_dosio_cpp_FUN_00460c70(&DAT_005cb072,local_124,&DAT_005cb06f);
  if (local_14 == (_FILE *)0x0) {
    _DAT_01d046a0 = "..\\engine\\alphabit.cpp";
    _DAT_01d046a4 = 0xe7;
    core_main_c_FUN_004e4500("CAlphaBitmap::load - Can't open %s",local_124);
  }
  local_18 = 0;
  do {
    uVar1 = _fgetc(local_14);
    uVar2 = _fgetc(local_14);
    uVar3 = _fgetc(local_14);
    if (DAT_006141c0 == 0x10) {
      local_24 = uVar1 / _DAT_01c35818;
      local_20 = uVar2 / _DAT_01c35824;
      local_1c = uVar3 / _DAT_01c35830;
      uVar3 = (uint)(ushort)((ushort)(local_1c << (DAT_01c3582c & 0x1f)) |
                            (ushort)(local_20 << (DAT_01c35820 & 0x1f)) |
                            (ushort)(local_24 << (DAT_01c35814 & 0x1f)));
      puVar4 = (uint *)(*(int *)&this_ptr->field_0x8 + local_18);
    }
    else if (DAT_006141c0 == 0x20) {
      uVar3 = uVar3 << (DAT_01c3582c & 0x1f) |
              uVar1 << (DAT_01c35814 & 0x1f) | uVar2 << (DAT_01c35820 & 0x1f);
      puVar4 = (uint *)(*(int *)&this_ptr->field_0x8 + local_18);
    }
    else {
      uVar3 = uVar1 << 0x10 | uVar2 << 8 | uVar3;
      puVar4 = (uint *)(*(int *)&this_ptr->field_0x8 + local_18);
    }
    *puVar4 = uVar3;
    local_18 = local_18 + 4;
  } while (local_18 != 0x400);
  _fclose(local_14);
  FUN_005b7790(local_124,"%s.opa",filename);
  p_Var5 = engine_dosio_cpp_FUN_00460c70(&DAT_005cb0ba,local_124,&DAT_005cb0b7);
  if (p_Var5 == (_FILE *)0x0) {
    iVar7 = width * height;
    iVar6 = 0;
    if (0 < iVar7) {
      do {
        while (*(int *)(*(int *)&this_ptr->field_0x8 + (uint)*(byte *)(*(int *)this_ptr + iVar6) * 4
                       ) != 0) {
          *(byte *)(*(int *)&this_ptr->field_0x4 + iVar6) = 0xff;
          iVar6 = iVar6 + 1;
          if (iVar7 <= iVar6) {
            return;
          }
        }
        *(byte *)(*(int *)&this_ptr->field_0x4 + iVar6) = 0;
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar7);
    }
    return;
  }
  _fread(*(uint *)&this_ptr->field_0x4,width,height,p_Var5);
  _fclose(p_Var5);
  return;
}
