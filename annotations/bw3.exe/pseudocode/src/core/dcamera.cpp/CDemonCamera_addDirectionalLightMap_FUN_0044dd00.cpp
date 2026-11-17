// Name: core_dcamera.cpp_CDemonCamera_addDirectionalLightMap_FUN_0044dd00
// Address: 0044dd00
// Address Range: [[0044dd00, 0044dd53]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_addDirectionalLightMap_FUN_0044dd00(CDemonCamera *this_ptr)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_addDirectionalLightMap_FUN_0044dd00(CDemonCamera *this_ptr)

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
      pcVar3 = g_CHAR_ARRAY_00b1a288 + iVar5;
      pcVar2 = g_CHAR_ARRAY_ARRAY_00b2cfc8[0] + iVar5;
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
