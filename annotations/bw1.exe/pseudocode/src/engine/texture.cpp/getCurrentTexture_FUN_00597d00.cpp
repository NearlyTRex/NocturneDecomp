// Name: engine_texture.cpp_getCurrentTexture_FUN_00597d00
// Address: 00597d00
// Address Range: [[00597d00, 00597d55]]
// Convention: __cdecl
// Signature: SMRGLTextureBasic * __cdecl engine_texture_cpp_getCurrentTexture_FUN_00597d00(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SMRGLTextureBasic * __cdecl engine_texture_cpp_getCurrentTexture_FUN_00597d00(void)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  _DAT_02c8acc4 = 0xd;
  _DAT_02c8acc8 = _DAT_02c8a67c;
  pcVar3 = &DAT_02c8accc;
  pcVar2 = (char *)(_DAT_02c8a680 + _DAT_02c8a67c * 0x60 + 8);
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') {
      return (SMRGLTextureBasic *)&DAT_02c8acc4;
    }
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  return (SMRGLTextureBasic *)&DAT_02c8acc4;
}
