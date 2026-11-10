// Name: core_dcamera.cpp_CDemonCamera_blurCoronaBufferAndClearEdges_FUN_0044d6f0
// Address: 0044d6f0
// Address Range: [[0044d6f0, 0044d7c5]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_blurCoronaBufferAndClearEdges_FUN_0044d6f0(CDemonCamera *this_ptr)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_blurCoronaBufferAndClearEdges_FUN_0044d6f0(CDemonCamera *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0xb3fd08;
  iVar2 = 0xb2cfc8;
  iVar3 = 1;
  while( true ) {
    iVar1 = iVar1 + 0x140;
    iVar2 = iVar2 + 0x140;
    if (this_ptr->display_height + -1 <= iVar3) break;
    core_dstrendr_cpp_verticalBlur3TapMMXStride320_FUN_004712b2(iVar1,iVar2,this_ptr->display_width)
    ;
    iVar3 = iVar3 + 1;
  }
  iVar1 = 0;
  if (0 < this_ptr->display_height) {
    iVar2 = 0;
    do {
      *(byte *)(iVar2 + 0xb3fd08) = 0;
      *(byte *)(this_ptr->display_width + 0xb3fd07 + iVar2) = 0;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x140;
    } while (iVar1 < this_ptr->display_height);
  }
  iVar1 = 0;
  if (0 < this_ptr->display_width) {
    do {
      *(byte *)(iVar1 + 0xb3fd08) = 0;
      *(byte *)((this_ptr->display_height + -1) * 0x140 + 0xb3fd08 + iVar1) = 0;
      iVar1 = iVar1 + 1;
    } while (iVar1 < this_ptr->display_width);
  }
  return;
}
