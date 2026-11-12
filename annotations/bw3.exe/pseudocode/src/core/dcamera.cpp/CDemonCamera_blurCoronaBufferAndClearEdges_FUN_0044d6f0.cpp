// Name: core_dcamera.cpp_CDemonCamera_blurCoronaBufferAndClearEdges_FUN_0044d6f0
// Address: 0044d6f0
// Address Range: [[0044d6f0, 0044d7c5]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_blurCoronaBufferAndClearEdges_FUN_0044d6f0(CDemonCamera *this_ptr)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_blurCoronaBufferAndClearEdges_FUN_0044d6f0(CDemonCamera *this_ptr)

{
  ulonglong *output_buffer;
  int iVar1;
  ulonglong *input_buffer;
  int iVar2;
  
  output_buffer = (ulonglong *)0xb3fd08;
  input_buffer = (ulonglong *)0xb2cfc8;
  iVar2 = 1;
  while( true ) {
    output_buffer = output_buffer + 0x28;
    input_buffer = input_buffer + 0x28;
    if (this_ptr->display_height + -1 <= iVar2) break;
    core_dstrendr_cpp_verticalBlur3TapMMXStride320_FUN_004712b2
              (output_buffer,input_buffer,this_ptr->display_width);
    iVar2 = iVar2 + 1;
  }
  iVar2 = 0;
  if (0 < this_ptr->display_height) {
    iVar1 = 0;
    do {
      *(byte *)(iVar1 + 0xb3fd08) = 0;
      *(byte *)(this_ptr->display_width + 0xb3fd07 + iVar1) = 0;
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x140;
    } while (iVar2 < this_ptr->display_height);
  }
  iVar2 = 0;
  if (0 < this_ptr->display_width) {
    do {
      *(byte *)(iVar2 + 0xb3fd08) = 0;
      *(byte *)((this_ptr->display_height + -1) * 0x140 + 0xb3fd08 + iVar2) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < this_ptr->display_width);
  }
  return;
}
