// Name: core_dcamera.cpp_CDemonCamera_copyFogPlaneToBuffer_FUN_00453c90
// Address: 00453c90
// Address Range: [[00453c90, 00453dbe]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_copyFogPlaneToBuffer_FUN_00453c90(CDemonCamera *this_ptr,int plane_index)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_copyFogPlaneToBuffer_FUN_00453c90(CDemonCamera *this_ptr,int plane_index)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = plane_index * 0x12c00;
  for (iVar5 = 1; iVar4 = iVar4 + 0x140, iVar5 < this_ptr->display_height + -1; iVar5 = iVar5 + 1) {
    iVar2 = 1;
    iVar1 = iVar5 * 0x140;
    iVar3 = iVar4;
    while( true ) {
      if (this_ptr->display_width + -1 <= iVar2) break;
      iVar2 = iVar2 + 1;
      *(byte *)(iVar3 + 0x1354e21) = (&DAT_01342221)[iVar1];
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 1;
    }
  }
  iVar4 = 0;
  if (0 < this_ptr->display_height) {
    iVar5 = plane_index * 0x12c00;
    do {
      *(byte *)(iVar5 + 0x1354e20) = (&DAT_01342220)[iVar4 * 0x140];
      *(byte *)(iVar5 + 0x1354e1f + this_ptr->display_width) =
           *(byte *)(this_ptr->display_width + 0x134221f + iVar4 * 0x140);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x140;
    } while (iVar4 < this_ptr->display_height);
  }
  iVar4 = plane_index * 0x12c00;
  for (iVar5 = 1; iVar5 < this_ptr->display_width + -1; iVar5 = iVar5 + 1) {
    *(byte *)(iVar4 + 0x1354e21) = (&DAT_01342220)[iVar5];
    iVar3 = (this_ptr->display_height + -1) * 0x140;
    *(byte *)(iVar3 + plane_index * 0x12c00 + iVar5 + 0x1354e20) =
         (&DAT_01342220)[iVar3 + iVar5];
    iVar4 = iVar4 + 1;
  }
  return;
}
