// Name: core_dcamera.cpp_CDemonCamera_copyFogPlaneToBuffer_FUN_00446ea0
// Address: 00446ea0
// Address Range: [[00446ea0, 00446fd2]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_copyFogPlaneToBuffer_FUN_00446ea0(CDemonCamera *this_ptr,int plane_index)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_copyFogPlaneToBuffer_FUN_00446ea0(CDemonCamera *this_ptr,int plane_index)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = plane_index * 0x12c00;
  for (iVar5 = 1; iVar4 = iVar4 + 0x140, iVar5 < this_ptr->display_height + -1; iVar5 = iVar5 + 1) {
    iVar3 = 1;
    iVar2 = iVar5 * 0x140;
    iVar1 = iVar4;
    while( true ) {
      if (this_ptr->display_width + -1 <= iVar3) break;
      iVar3 = iVar3 + 1;
      *(byte *)(iVar1 + 0x12e1779) = (&DAT_012ceb79)[iVar2];
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 1;
    }
  }
  iVar4 = 0;
  if (0 < this_ptr->display_height) {
    iVar5 = plane_index * 0x12c00;
    do {
      *(byte *)(iVar5 + 0x12e1778) = (&DAT_012ceb78)[iVar4 * 0x140];
      *(byte *)(this_ptr->display_width + 0x12e1777 + iVar5) =
           *(byte *)(this_ptr->display_width + 0x12ceb77 + iVar4 * 0x140);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x140;
    } while (iVar4 < this_ptr->display_height);
  }
  iVar5 = 1;
  iVar4 = plane_index * 0x12c00;
  while (iVar5 < this_ptr->display_width + -1) {
    *(byte *)(iVar4 + 0x12e1779) = (&DAT_012ceb78)[iVar5];
    iVar2 = (this_ptr->display_height + -1) * 0x140;
    iVar1 = iVar2 + iVar5;
    iVar5 = iVar5 + 1;
    *(byte *)(iVar2 + plane_index * 0x12c00 + 0x12e1777 + iVar5) = (&DAT_012ceb78)[iVar1];
    iVar4 = iVar4 + 1;
  }
  return;
}
