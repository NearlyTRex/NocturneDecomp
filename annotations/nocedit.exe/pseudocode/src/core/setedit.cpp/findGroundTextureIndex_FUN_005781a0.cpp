// Name: core_setedit.cpp_findGroundTextureIndex_FUN_005781a0
// Address: 005781a0
// Address Range: [[005781a0, 0057820d]]
// Convention: __cdecl
// Signature: int __cdecl core_setedit_cpp_findGroundTextureIndex_FUN_005781a0(char *filename)

#include "nocturne.h"

int __cdecl core_setedit_cpp_findGroundTextureIndex_FUN_005781a0(char *filename)

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
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 1;
    } while (iVar2 < g_GroundTextureCount);
  }
  return -1;
}
