// Name: core_setedit.cpp_getGroundTypeForTexture_FUN_00578210
// Address: 00578210
// Address Range: [[00578210, 00578285]]
// Convention: __cdecl
// Signature: int __cdecl core_setedit_cpp_getGroundTypeForTexture_FUN_00578210(char *filename)

#include "nocturne.h"

int __cdecl core_setedit_cpp_getGroundTypeForTexture_FUN_00578210(char *filename)

{
  int iVar1;
  int iVar2;
  char (*str1) [40];
  char local_10c [256];
  
  iVar2 = 0;
  engine_dosio_c_splitPath_FUN_00481f20(filename,(char *)0x0,(char *)0x0,local_10c,(char *)0x0);
  if (0 < g_GroundTextureCount) {
    str1 = g_GroundTextureNames;
    do {
      iVar1 = _stricmp(*str1,local_10c);
      if (iVar1 == 0) {
        if (iVar2 < 0) {
          return -1;
        }
        return (uint)(byte)g_GroundTextureTypes[iVar2];
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 1;
    } while (iVar2 < g_GroundTextureCount);
  }
  return -1;
}
