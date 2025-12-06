// Name: core_dcamera.cpp_CDemonCamera_blurCoronaBufferAndClearEdges_FUN_004509b0
// Address: 004509b0
// Address Range: [[004509b0, 00450a85]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_blurCoronaBufferAndClearEdges_FUN_004509b0(CDemonCamera * this_ptr)

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_CDemonCamera_blurCoronaBufferAndClearEdges_FUN_004509b0(CDemonCamera *this_ptr)

{
  char (*output_buffer) [320];
  int iVar1;
  char (*input_buffer) [320];
  int iVar2;
  
  output_buffer = g_CoronaBlurWorkBuffer;
  input_buffer = g_CoronaBlurOutputBuffer;
  iVar2 = 1;
  while( true ) {
    output_buffer = output_buffer + 1;
    input_buffer = input_buffer + 1;
    if (this_ptr->display_height + -1 <= iVar2) break;
    core_dstrender_cpp_verticalBlur3TapMMXStride320_FUN_00492042
              ((ulonglong *)output_buffer,(ulonglong *)input_buffer,this_ptr->display_width);
    iVar2 = iVar2 + 1;
  }
  iVar2 = 0;
  if (0 < this_ptr->display_height) {
    iVar1 = 0;
    do {
      g_CoronaBlurWorkBuffer[0][iVar1] = '\0';
      *(byte *)(this_ptr->display_width + 0xbbb9b7 + iVar1) = 0;
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x140;
    } while (iVar2 < this_ptr->display_height);
  }
  iVar2 = 0;
  if (0 < this_ptr->display_width) {
    do {
      g_CoronaBlurWorkBuffer[0][iVar2] = '\0';
      g_CoronaBlurWorkBuffer[this_ptr->display_height + -1][iVar2] = '\0';
      iVar2 = iVar2 + 1;
    } while (iVar2 < this_ptr->display_width);
  }
  return;
}
