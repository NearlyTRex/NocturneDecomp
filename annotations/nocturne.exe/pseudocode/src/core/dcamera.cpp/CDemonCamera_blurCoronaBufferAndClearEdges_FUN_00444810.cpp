// Name: core_dcamera.cpp_CDemonCamera_blurCoronaBufferAndClearEdges_FUN_00444810
// Address: 00444810
// Address Range: [[00444810, 004448e5]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_blurCoronaBufferAndClearEdges_FUN_00444810(CDemonCamera *this_ptr)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_blurCoronaBufferAndClearEdges_FUN_00444810(CDemonCamera *this_ptr)

{
  char (*output_buffer) [320];
  int iVar1;
  char (*input_buffer) [320];
  int iVar2;
  
  output_buffer = g_CHAR_ARRAY_ARRAY_00aafdb8;
  input_buffer = g_CHAR_ARRAY_ARRAY_00a9d078;
  iVar2 = 1;
  while( true ) {
    output_buffer = output_buffer + 1;
    input_buffer = input_buffer + 1;
    if (this_ptr->display_height + -1 <= iVar2) break;
    core_dstrendr_cpp_verticalBlur3TapMMXStride320_FUN_00465382
              ((ulonglong *)output_buffer,(ulonglong *)input_buffer,this_ptr->display_width);
    iVar2 = iVar2 + 1;
  }
  iVar2 = 0;
  if (0 < this_ptr->display_height) {
    iVar1 = 0;
    do {
      g_CHAR_ARRAY_ARRAY_00aafdb8[0][iVar1] = '\0';
      *(byte *)(this_ptr->display_width + 0xaafdb7 + iVar1) = 0;
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x140;
    } while (iVar2 < this_ptr->display_height);
  }
  iVar2 = 0;
  if (0 < this_ptr->display_width) {
    do {
      g_CHAR_ARRAY_ARRAY_00aafdb8[0][iVar2] = '\0';
      g_CHAR_ARRAY_ARRAY_00aafdb8[this_ptr->display_height + -1][iVar2] = '\0';
      iVar2 = iVar2 + 1;
    } while (iVar2 < this_ptr->display_width);
  }
  return;
}
