// Name: core_dcamera.cpp_CDemonCamera_addDirectionalLightMap_FUN_00440500
// Address: 00440500
// Address Range: [[00440500, 00440553]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_addDirectionalLightMap_FUN_00440500(CDemonCamera *this_ptr)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_addDirectionalLightMap_FUN_00440500(CDemonCamera *this_ptr)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  if (0 < this_ptr->display_height) {
    iVar5 = 0;
    do {
      pcVar3 = g_CHAR_ARRAY_00ae24d8 + iVar5;
      pcVar2 = g_CHAR_ARRAY_00af5218 + iVar5;
      for (iVar4 = this_ptr->display_width; 0 < iVar4; iVar4 = iVar4 + -1) {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        *pcVar2 = *pcVar2 + cVar1;
        pcVar2 = pcVar2 + 1;
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 0x140;
    } while (iVar6 < this_ptr->display_height);
  }
  return;
}
