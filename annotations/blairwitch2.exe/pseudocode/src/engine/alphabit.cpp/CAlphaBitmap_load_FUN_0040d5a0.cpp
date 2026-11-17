// Name: engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0
// Address: 0040d5a0
// Address Range: [[0040d5a0, 0040d8f8]]
// Convention: __cdecl
// Signature: void __cdecl engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0(CAlphaBitmap *this_ptr,char *filename,int width,int height)

#include "nocturne.h"

void __cdecl engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0(CAlphaBitmap *this_ptr,char *filename,int width,int height)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  _FILE *file;
  int iVar5;
  int iVar6;
  char local_124 [256];
  uint local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  _FILE *local_14;
  
  engine_alphabit_cpp_CAlphaBitmap_allocate_FUN_0040d460(this_ptr,width,height);
  _sprintf(local_124,"%s.raw");
  local_14 = engine_dosio_cpp_getFile_FUN_00460c70("art",local_124,"rb");
  if (local_14 == (_FILE *)0x0) {
    g_CHAR_PTR_01d046a0 = "..\\engine\\alphabit.cpp";
    g_INT_01d046a4 = 0xe1;
    core_main_c_displayErrorAndQuit_FUN_004e4500("CAlphaBitmap::load - Can't open %s");
  }
  _fread(this_ptr->raw,width,height,local_14);
  _fclose(local_14);
  _sprintf(local_124,"%s.act");
  local_14 = engine_dosio_cpp_getFile_FUN_00460c70("art",local_124,"rb");
  if (local_14 == (_FILE *)0x0) {
    g_CHAR_PTR_01d046a0 = "..\\engine\\alphabit.cpp";
    g_INT_01d046a4 = 0xe7;
    core_main_c_displayErrorAndQuit_FUN_004e4500("CAlphaBitmap::load - Can't open %s");
  }
  local_18 = 0;
  do {
    uVar1 = _fgetc(local_14);
    uVar2 = _fgetc(local_14);
    uVar3 = _fgetc(local_14);
    if (g_INT_006141c0 == 0x10) {
      local_24 = uVar1 / (uint)g_INT_01c35818;
      local_20 = uVar2 / (uint)g_INT_01c35824;
      local_1c = uVar3 / (uint)g_INT_01c35830;
      uVar3 = (uint)(ushort)((ushort)(local_1c << (g_BIT_INTEGER32_01c3582c.bytes[0] & 0x1f)) |
                            (ushort)(local_20 << (g_BIT_INTEGER32_01c35820.bytes[0] & 0x1f)) |
                            (ushort)(local_24 << (g_BIT_INTEGER32_01c35814.bytes[0] & 0x1f)));
      puVar4 = (uint *)((int)this_ptr->act + local_18);
    }
    else if (g_INT_006141c0 == 0x20) {
      uVar3 = uVar3 << (g_BIT_INTEGER32_01c3582c.bytes[0] & 0x1f) |
              uVar1 << (g_BIT_INTEGER32_01c35814.bytes[0] & 0x1f) |
              uVar2 << (g_BIT_INTEGER32_01c35820.bytes[0] & 0x1f);
      puVar4 = (uint *)((int)this_ptr->act + local_18);
    }
    else {
      uVar3 = uVar1 << 0x10 | uVar2 << 8 | uVar3;
      puVar4 = (uint *)((int)this_ptr->act + local_18);
    }
    *puVar4 = uVar3;
    local_18 = local_18 + 4;
  } while (local_18 != 0x400);
  _fclose(local_14);
  _sprintf(local_124,"%s.opa");
  file = engine_dosio_cpp_getFile_FUN_00460c70("art",local_124,"rb");
  if (file == (_FILE *)0x0) {
    iVar6 = width * height;
    iVar5 = 0;
    if (0 < iVar6) {
      do {
        while (this_ptr->act[(byte)this_ptr->raw[iVar5]] != 0) {
          this_ptr->opa[iVar5] = -1;
          iVar5 = iVar5 + 1;
          if (iVar6 <= iVar5) {
            return;
          }
        }
        this_ptr->opa[iVar5] = '\0';
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar6);
    }
    return;
  }
  _fread(this_ptr->opa,width,height,file);
  _fclose(file);
  return;
}
