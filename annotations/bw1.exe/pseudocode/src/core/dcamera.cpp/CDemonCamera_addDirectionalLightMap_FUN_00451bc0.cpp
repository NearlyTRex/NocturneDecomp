// Name: core_dcamera.cpp_CDemonCamera_addDirectionalLightMap_FUN_00451bc0
// Address: 00451bc0
// Address Range: [[00451bc0, 00451c13]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_addDirectionalLightMap_FUN_00451bc0(CDemonCamera *this_ptr)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_addDirectionalLightMap_FUN_00451bc0(CDemonCamera *this_ptr)

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
      pcVar3 = (char *)(iVar5 + 0xafd9d8);
      pcVar2 = (char *)(iVar5 + 0xb10718);
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
