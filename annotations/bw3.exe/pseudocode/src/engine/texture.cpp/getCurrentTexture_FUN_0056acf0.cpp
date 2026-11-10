// Name: engine_texture.cpp_getCurrentTexture_FUN_0056acf0
// Address: 0056acf0
// Address Range: [[0056acf0, 0056ad45]]
// Convention: __cdecl
// Signature: SMRGLTextureBasic * __cdecl engine_texture_cpp_getCurrentTexture_FUN_0056acf0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SMRGLTextureBasic * __cdecl engine_texture_cpp_getCurrentTexture_FUN_0056acf0(void)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  _DAT_02cfd714 = 0xd;
  _DAT_02cfd718 = _DAT_02cfd0cc;
  pcVar3 = &DAT_02cfd71c;
  pcVar2 = (char *)(_DAT_02cfd0d0 + _DAT_02cfd0cc * 0x60 + 8);
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') {
      return (SMRGLTextureBasic *)&DAT_02cfd714;
    }
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  return (SMRGLTextureBasic *)&DAT_02cfd714;
}
