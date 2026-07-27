// Name: engine_texture.cpp_FUN_00545700
// Address: 00545700
// Address Range: [[00545700, 00545804]]
// Convention: unknown
// Signature: void engine_texture_cpp_FUN_00545700(int param_1)

#include "nocturne.h"

void engine_texture_cpp_FUN_00545700(int param_1)

{
  int iVar1;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0xd3008)) {
    do {
      engine_texture_cpp_CTextureCache_setupTexture_FUN_00545410(param_1,iVar1);
      iVar1 = iVar1 + 1;
      local_cc = 1000;
      local_c8 = 1000;
      local_c4 = 2000;
      local_94 = 2000;
      local_64 = 2000;
      local_34 = 2000;
      local_8c = 0x5fffa;
      local_5c = 0x5fffa;
      local_58 = 0x5fffa;
      local_28 = 0x5fffa;
      local_b4 = 0;
      local_b0 = 0;
      local_84 = 0;
      local_80 = 0;
      local_54 = 0;
      local_50 = 0;
      local_24 = 0;
      local_20 = 0;
      local_98 = 1000;
      local_9c = 0xfffffc18;
      local_6c = 0xfffffc18;
      local_68 = 0xfffffc18;
      local_38 = 0xfffffc18;
      local_3c = 1000;
      local_bc = 0x4fffb;
      local_b8 = 0x4fffb;
      local_88 = 0x4fffb;
      local_2c = 0x4fffb;
      engine_special_cpp_drawPolygon_FUN_00532620(&local_cc,4,1);
    } while (iVar1 < *(int *)(param_1 + 0xd3008));
  }
  return;
}
